#include "Bullet.h"


CBullet::CBullet(void)
{
}


CBullet::~CBullet(void)
{
}


void CBullet::Initialize()
{
	m_Bullet.str = "ÀåÇ³ !!";
	m_Bullet.bCheck = true;
}

int CBullet::Porgress()
{
	m_Info.iX++;

	if(m_Info.iX == (WINCX - 10))
	{
		m_Bullet.bCheck = false;
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