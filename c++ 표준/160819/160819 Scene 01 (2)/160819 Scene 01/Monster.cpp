#include "Monster.h"
#include "CursorPosition.h"
#include "Defien.h"

CMonster::CMonster(void)
{
}


CMonster::~CMonster(void)
{
}

void CMonster::Initialize()
{
	m_Info.iCX = 7;
	m_Info.iCY = 2;
}

void CMonster::Progress()
{

}

void CMonster::Render()
{
	CCursorPosition::SetCursorPosition(m_Info.iX, m_Info.iY);
	cout << "Monster" << endl;
}

void CMonster::Release()
{

}
