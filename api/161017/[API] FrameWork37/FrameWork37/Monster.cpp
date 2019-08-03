#include "StdAfx.h"
#include "Monster.h"

CMonster::CMonster(void)
{
}

CMonster::~CMonster(void)
{
}

void CMonster::Initialize( void )
{
	m_tInfo.fCX = 100;
	m_tInfo.fCY = 200;
}

int CMonster::Progress( void )
{
	return 0;
}

void CMonster::Render( HDC hdc )
{
	TransparentBlt(hdc, 
		int((m_tInfo.fX - m_tInfo.fCX / 2) + m_ptScroll.x),
		int((m_tInfo.fY - m_tInfo.fCY / 2) + m_ptScroll.y),
		(int)m_tInfo.fCX, (int)m_tInfo.fCY,
		(*m_pMapBmp)["Monster"]->GetMemDC(),
		0, 0, (int)m_tInfo.fCX, (int)m_tInfo.fCY,
		RGB(0,0,0));
}

void CMonster::Release( void )
{
}
