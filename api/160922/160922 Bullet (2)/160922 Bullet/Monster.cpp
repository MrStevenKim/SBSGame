#include "StdAfx.h"
#include "Monster.h"


CMonster::CMonster(void)
{
}


CMonster::~CMonster(void)
{
}

void CMonster::Initialize()
{
	m_Info.iCX = 200;
	m_Info.iCY = 50;
}

void CMonster::Progress()
{

}

void CMonster::Render(HDC hdc)
{
	Rectangle(hdc, 
		m_Info.iX - m_Info.iCX/2,
		m_Info.iY - m_Info.iCY/2,
		m_Info.iX + m_Info.iCX/2,
		m_Info.iY + m_Info.iCY/2);
}

void CMonster::Release()
{

}