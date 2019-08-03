#include "Bullet2.h"



void CBullet2::Initialize()
{
	m_Bullet2.str = "↑";
	m_Bullet2.bulletCheck = true; // Bullet을 하나만들때 마다 해당 m_Bullet에  BulletCheck의 Bool 값이 1이 되므로 현재 존재한다는 상태가 된다.
}

int CBullet2::Progress()
{

	m_Info.iY-=2;// 총알을 위쪽으로 증가
	if (m_Info.iY <= (MAPY-59))
	{
		m_Bullet2.bulletCheck = false;  //맵의 가장자리로 가면 Bullet이 false 현재 존재하지 않는 상태가 되고 1이 반환된다.
		return 1;
	}
	return 0;
}


void CBullet2::Render()
{
	CDoubleBuffer::GetInst()->WriteBuffer(m_Info.iX, m_Info.iY, m_Bullet2.str);
}

void CBullet2::Release()
{
}

CBullet2::CBullet2()
{
}


CBullet2::~CBullet2()
{
}
