#include "Bullet4.h"



void CBullet4::Initialize()
{
	m_Bullet.str = "〓〓※";
	m_Bullet.bulletCheck = true; // Bullet을 하나만들때 마다 해당 m_Bullet에  BulletCheck의 Bool 값이 1이 되므로 현재 존재한다는 상태가 된다.
}

int CBullet4::Progress()
{

	m_Info.iX--;// 총알을 왼쪽쪽으로 증가
	if (m_Info.iX == (MAPX)-169 )
	{
		m_Bullet.bulletCheck = false;  //맵의 가장자리로 가면 Bullet이 false 현재 존재하지 않는 상태가 되고 1이 반환된다.
		return 1;
	}
	return 0;
}

void CBullet4::Render()
{
	CDoubleBuffer::GetInst()->WriteBuffer(m_Info.iX, m_Info.iY, m_Bullet.str);
}

void CBullet4::Release()
{
}

CBullet4::CBullet4()
{
}


CBullet4::~CBullet4()
{
}
