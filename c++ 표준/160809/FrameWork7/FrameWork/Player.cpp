#include "Player.h"
#include "Include.h"
#include "KeyMgr.h"
#include "ObjFactory.h"


CPlayer::CPlayer(void)
	:m_pStr(NULL)
{
}


CPlayer::~CPlayer(void)
{
	Release();
}


void CPlayer::Initialize()
{
	m_Info = INFO(10, 20);
	m_dwState = STATE_STAND;
	m_pStr = "進/";
	for(int i = 0 ; i < MAX ; i++)
	{
		bCheck[i] = false;
		m_pBullet[i] = NULL;
	}
}

int CPlayer::Porgress()
{

	if( m_Info.iX == 2)
		m_Info.iX +=1;

	if(m_Info.iX+1 == (WINCX - 3))
		m_Info.iX -=1;

	if(m_Info.iY <= 1 )
		m_Info.iY = 1;

	if(m_Info.iY == (WINCY - 2))
		m_Info.iY -= 1;

	KeyCheck();
	Motion();
	CheckBullet();

	for(int i = 0 ; i < MAX ; i++)
	{
		if(bCheck[i] == true)
			m_pBullet[i]->Porgress();
	}

	return 0;
}

void CPlayer::Render()
{

	CDoubleBuffer::GetInst()->WriteBuffer(m_Info.iX, m_Info.iY, m_pStr);

	for(int i = 0 ; i < MAX ; i++)
	{
		if(bCheck[i] == true)
			m_pBullet[i]->Render();
	}
}

void CPlayer::Release()
{
	delete[] &m_pBullet;
	for(int i = 0 ; i < MAX ; i++)
	{
		m_pBullet[i] = NULL;
	}
}

void CPlayer::KeyCheck()
{
	m_dwKey = CKeyMgr::GetInst()->GetKey();

	if(m_dwKey & KEY_UP)
	{
		m_Info.iY -= 1;
	}
	if(m_dwKey & KEY_DOWN)
	{
		m_Info.iY += 1;
	}
	if(m_dwKey & KEY_LEFT)
	{
		m_Info.iX -= 1;
	}
	if(m_dwKey & KEY_RIGHT)
	{
		m_Info.iX += 1;
	}
	if(m_dwKey & KEY_SPACE)
	{
		m_dwState = STATE_ATT;
	}
	if(m_dwKey & KEY_ESCAPE)
	{
		EXIT = false;
	}
	if(m_dwKey & KEY_Z)
	{
		for(int i = 0 ; i < MAX ; i++)
		{
			if(bCheck[i] == false)
			{
				bCheck[i] = true;
				m_pBullet[i] = CObjFactory::CreateBullet(m_Info.iX, m_Info.iY);
				break;
			}
		}
	}
}

void CPlayer::Motion()
{
	if(!(m_dwKey & KEY_SPACE))
		m_dwState = STATE_STAND;

	if(!m_dwKey)
	{
		m_dwState = STATE_STAND;
		m_pStr = "進/";
	}
	if(m_dwState & STATE_STAND && m_dwKey & KEY_RIGHT)
		m_pStr = "進/";

	if(m_dwState & STATE_STAND && m_dwKey & KEY_LEFT)
		m_pStr = "゜進";

	if(m_dwState & STATE_ATT )
		m_pStr = "進--";
}

void CPlayer::CheckBullet()
{
	for(int i = 0 ; i < MAX ; i++)
	{
		if(bCheck[i] == true)
		{
			if(((CBullet*)m_pBullet[i])->GetBullet().bCheck == false)
			{
				bCheck[i] = false;
				m_pBullet[i] = NULL;
			}
		}
	}
}
