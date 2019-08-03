#include "Bullet.h"


CBullet::CBullet(void)
{
}


CBullet::~CBullet(void)
{
}


void CBullet::Initialize()
{
	m_Bullet.str = "б╪быбы";
	m_Bullet.bulletCheck = true;
}

int CBullet::Progress()
{
	m_Info.iX++;

	if (m_Info.iX == (MAPX - 10))
	{
		m_Bullet.bulletCheck = false;
		return 1;
	}
	return 0;
}

void CBullet::Render()
{
	CDoubleBuffer::GetInst()->WriteBuffer(m_Info.iX, m_Info.iY, m_Bullet.str);
}

void CBullet::Release()
{

}