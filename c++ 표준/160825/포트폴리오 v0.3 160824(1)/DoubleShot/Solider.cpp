#include "Solider.h"



void CSolider::Initialize()
{
	m_Info = INFO(10, 21); // 캐릭터의 시작위치 뒤에 2개는 캐릭터의 크기(나중에 충돌처리 추가를 위해서)
	m_dwState = STATE_STAND;
	m_pStr = "옷☞";
	for (int i = 0; i < MAX; i++) // Bullet을 MAX치까지의 현재 상태를 설정하는 구간
	{
		BulletCheck[i] = false;  // 현재 Scene에 Bullet이 없다는 의미 True면 Scene에 존재한다는 의미
		m_pBullet[i] = NULL;     // Scene에 Bullet이 없기 때문에 m_pBullet[해당 i]의 값은 NULL공백
	}
}

int CSolider::Progress()
{	
	if (m_Info.iX == 2)
		m_Info.iX += 1;

	if (m_Info.iX ==(MAPX-3))
		m_Info.iX -= 1;

	if (m_Info.iY <= 1)
		m_Info.iY = 1;

	if (m_Info.iY == (MAPY-2))
		m_Info.iY -= 1;
	KeyCheck();
	Motion();
	CheckBullet();
	for (int i = 0; i < MAX; i++)
	{
		if (BulletCheck[i] == true) // 만약 현재 Scene에 Bullet이 존재하면 Bullet을 움직여야하므로 Bullet에 있는 Progress()함수 실행
			m_pBullet[i]->Progress();
	}
	return 0;
}

void CSolider::Render()
{

	CDoubleBuffer::GetInst()->WriteBuffer(m_Info.iX, m_Info.iY, m_pStr);
	for (int i = 0; i < MAX; i++)
	{
		if (BulletCheck[i] == true) // 위 Progress와 마찬가지로 현재 Scene에 Bullet이 존재하면 움직인걸 Rendering 해야하므로 Bullet에 있는 Render()함수 실행
			m_pBullet[i]->Render();
	}
}


void CSolider::Release()
{
	
}

void CSolider::KeyCheck()
{
	m_dwKey = CKeyMgr::GetInst()->GetKey();

	if (m_dwKey & KEY_UP)
	{
		m_Info.iY--;
	}
	if (m_dwKey & KEY_DOWN)
	{
		m_Info.iY++;
	}
	if (m_dwKey & KEY_LEFT)
	{
		m_Info.iX--;
	}
	if (m_dwKey & KEY_RIGHT)
	{
		m_Info.iX++;
	}
}



void CSolider::Motion()
{
	if (!(m_dwKey & KEY_SPACE))
		m_dwState =  STATE_STAND;
	if (!m_dwKey)
	{
		m_dwState =  STATE_STAND;
		m_pStr = "옷☞";
	}

	if (m_dwState & STATE_STAND && m_dwKey & KEY_RIGHT)
		m_pStr = "옷☞";

	if (m_dwState & STATE_STAND && m_dwKey & KEY_LEFT)
		m_pStr = "☜옷";

	if (m_dwState & STATE_STAND && m_dwKey & KEY_UP)
		m_pStr = "옷";

	if (m_dwState & STATE_STAND && m_dwKey & KEY_UP && m_dwKey & KEY_RIGHT)
		m_pStr = "옷↗";

	if (m_dwState & STATE_STAND && m_dwKey & KEY_UP && m_dwKey & KEY_LEFT)
		m_pStr = "↖옷";

	if (m_dwState & STATE_STAND && m_dwKey & KEY_DOWN)
		m_pStr = "옷";

	if (m_dwState & STATE_STAND && m_dwKey & KEY_DOWN && m_dwKey & KEY_RIGHT)
		m_pStr = "옷↘";

	if (m_dwState & STATE_STAND && m_dwKey & KEY_DOWN && m_dwKey & KEY_LEFT)
		m_pStr = "↙옷";

	if (  m_dwKey & KEY_SPACE) // Space 키를 누름으로써 Bullet을 발사함.
	{

		for (int i = 0; i < MAX; i++)
			if (BulletCheck[i] == false) // 현재 Scene에 Bullet이 존재하지 않으면 Bullet의 Bool값을 True로 바꾼뒤 Solider가 있는 위치에 Bullet을 생성
			{
				BulletCheck[i] = true;
				m_pBullet[i] = CObjCreator::CreateBullet(m_Info.iX, m_Info.iY);
				break;
			}

	}
	if ( m_dwKey & KEY_SPACE && m_dwKey &KEY_UP) // Space 키를 누름으로써 Bullet을 발사함.
		for (int i = 0; i < MAX; i++)
		{
			if (BulletCheck[i] == false) // 현재 Scene에 Bullet이 존재하지 않으면 Bullet의 Bool값을 True로 바꾼뒤 Solider가 있는 위치에 Bullet을 생성
			{
				BulletCheck[i] = true;
				m_pBullet[i] = CObjCreator::CreateBullet2(m_Info.iX, m_Info.iY);
				break;
			}
		}
		if ( m_dwKey & KEY_SPACE && m_dwKey &KEY_DOWN) // Space 키를 누름으로써 Bullet을 발사함.
				for (int i = 0; i < MAX; i++)
		{
					if (BulletCheck[i] == false) // 현재 Scene에 Bullet이 존재하지 않으면 Bullet의 Bool값을 True로 바꾼뒤 Solider가 있는 위치에 Bullet을 생성
					{
						BulletCheck[i] = true;
						m_pBullet[i] = CObjCreator::CreateBullet3(m_Info.iX, m_Info.iY);
						break;
					}
		}

			if ( m_dwKey & KEY_SPACE && m_dwKey &KEY_LEFT) // Space 키를 누름으로써 Bullet을 발사함.
					for (int i = 0; i < MAX; i++)
					{
						if (BulletCheck[i] == false) // 현재 Scene에 Bullet이 존재하지 않으면 Bullet의 Bool값을 True로 바꾼뒤 Solider가 있는 위치에 Bullet을 생성
						{
							BulletCheck[i] = true;
							m_pBullet[i] = CObjCreator::CreateBullet4(m_Info.iX, m_Info.iY);
							break;
						}
					}
	
}
	void CSolider::CheckBullet()
	{
		for (int i = 0; i < MAX; i++)
		{
			if (BulletCheck[i] == true)
			{
				if (((CBullet*)m_pBullet[i])->GetBullet().bulletCheck == false) //
				{
					BulletCheck[i] = false;
					m_pBullet[i] = NULL;
				}
			}
		}

	}
	void CSolider::CheckBullet2()
	{
		for (int i = 0; i < MAX; i++)
		{
			if (BulletCheck[i] == true)
			{
				if (((CBullet2*)m_pBullet[i])->GetBullet().bulletCheck == false) //
				{
					BulletCheck[i] = false;
					m_pBullet[i] = NULL;
				}
			}
		}

	}


CSolider::CSolider()
: m_pStr(NULL){}


CSolider::~CSolider()
{
	Release();
}

void CSolider::CheckBullet3()
{
	for (int i = 0; i < MAX; i++)
	{
		if (BulletCheck[i] == true)
		{
			if (((CBullet3*)m_pBullet[i])->GetBullet().bulletCheck == false) //
			{
				BulletCheck[i] = false;
				m_pBullet[i] = NULL;
			}
		}
	}
}

void CSolider::CheckBullet4()
{
	for (int i = 0; i < MAX; i++)
	{
		if (BulletCheck[i] == true)
		{
			if (((CBullet4*)m_pBullet[i])->GetBullet().bulletCheck == false) //
			{
				BulletCheck[i] = false;
				m_pBullet[i] = NULL;
			}
		}
}
}