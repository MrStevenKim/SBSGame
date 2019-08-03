#include "StdAfx.h"
#include "Player.h"
#include "KeyMgr.h"
#include "Device.h"

CPlayer::CPlayer(void)
{
}

CPlayer::~CPlayer(void)
{
}

void CPlayer::Initialize( void )
{
	m_tInfo		= INFO(WINCX / 2, WINCY / 2, 32, 32);
	m_tFrame	= FRAME(0, 2, 0, 100);
	m_dwState	= STATE_STAND;

	m_fSpeed	= 10.f;
	m_dwKey		= 0;
	m_dwTime	= GetTickCount();
	m_tCount	= GetTickCount();


	m_strDrawID = "Player_STAND";
}

int CPlayer::Progress( void )
{
	KeyCheck();
	Frame();
	Direction();
	Motion();

	return 0;
}

void CPlayer::Render( HDC hdc )
{
	TransparentBlt(hdc,		// 그려질 위치
		int((m_tInfo.fX - m_tInfo.fCX / 2) + m_ptScroll.x),		// X좌표로부터
		int((m_tInfo.fY - m_tInfo.fCY / 2) + m_ptScroll.y),		// Y좌표로부터
		(int)m_tInfo.fCX, (int)m_tInfo.fCY,		// 현재 스케일 값을
		(*m_pMapBmp)[m_strDrawID]->GetMemDC(),		// 그려낼 위치에
		int(m_tInfo.fCX * m_tFrame.iStart) ,		//	시작할 프레임
		int(m_tInfo.fCY * m_tFrame.iScene) ,		// 시작할 장면을
		(int)m_tInfo.fCX, (int)m_tInfo.fCY,		// 현재 스케일 값으로
		RGB(0,0,0));		// 현재 비트맵의 색을 제외한후 복사 한다.
}

void CPlayer::Release( void )
{
}

void CPlayer::KeyCheck( void )
{
	m_dwKey = CKeyMgr::GetInst()->GetKey();

	if(m_dwKey & KEY_UP)
		m_tInfo.fY -= m_fSpeed;

	if(m_dwKey & KEY_DOWN)
		m_tInfo.fY += m_fSpeed;

	if(m_dwKey & KEY_LEFT)
		m_tInfo.fX -= m_fSpeed;

	if(m_dwKey & KEY_RIGHT)
		m_tInfo.fX += m_fSpeed;

	if(m_dwKey & KEY_SPACE)
	{
		if(m_tCount + 300 < GetTickCount())
		{
			m_tCount	= GetTickCount();
			CDevice::GetInstance()->SoundPlay(2, 0);
			m_dwState = STATE_ATT;
		}
	}
}

void CPlayer::Frame( void )
{
	if(m_dwTime + m_tFrame.dwTime < GetTickCount())
	{
		m_dwTime = GetTickCount();
		++m_tFrame.iStart;

		if(m_tFrame.iStart >= m_tFrame.iLast)
		{
			m_tFrame.iStart = 0;

			if(m_dwState != STATE_STAND)
				m_dwState = STATE_STAND;
		}
	}
}

void CPlayer::Direction( void )
{
	if(KEY_LEFT & m_dwKey && KEY_UP & m_dwKey)
	{
		m_strDrawID = "Player_LU";
		return;
	}

	if(KEY_LEFT & m_dwKey && KEY_DOWN & m_dwKey)
	{
		m_strDrawID = "Player_LD";
		return;
	}

	if(KEY_RIGHT & m_dwKey && KEY_UP & m_dwKey)
	{
		m_strDrawID = "Player_RU";
		return;
	}

	if(KEY_RIGHT & m_dwKey && KEY_DOWN & m_dwKey)
	{
		m_strDrawID = "Player_RD";
		return;
	}

	if(KEY_LEFT & m_dwKey)
		m_strDrawID = "Player_LEFT";

	if(KEY_RIGHT & m_dwKey)
		m_strDrawID = "Player_RIGHT";

	if(KEY_UP & m_dwKey)
		m_strDrawID = "Player_UP";

	if(KEY_DOWN & m_dwKey)
		m_strDrawID = "Player_DOWN";
}

void CPlayer::Motion( void )
{
	if(m_dwKey && m_dwState != STATE_ATT)
		m_dwState = STATE_WALK;

	if(!m_dwKey)
		m_dwState = STATE_STAND;


	if(m_dwState & STATE_STAND)
	{
		if(m_tFrame.iScene != 0)
			m_tFrame.iStart = 0;

		m_tFrame.iLast = 4;
		m_tFrame.iScene = 0;
		m_tFrame.dwTime = 150;
	}

	if(m_dwState & STATE_WALK)
	{
		if(m_tFrame.iScene != 1)
			m_tFrame.iStart = 0;

		m_tFrame.iLast = 6;
		m_tFrame.iScene = 1;
		m_tFrame.dwTime = 100;
	}


	// 복잡 했던 셋팅 값을 아래 처럼 함수화 시켜 간결하게 만들수 있음.
	if(m_dwState & STATE_ATT)
		SetScene(6, 2, 50);
}

void CPlayer::SetScene( int _ilast, int _iscene, DWORD _dwtime )
{
	if(m_tFrame.iScene != _iscene)
		m_tFrame.iStart = 0;

	m_tFrame.iLast = _ilast;
	m_tFrame.iScene = _iscene;
	m_tFrame.dwTime = _dwtime;

}
