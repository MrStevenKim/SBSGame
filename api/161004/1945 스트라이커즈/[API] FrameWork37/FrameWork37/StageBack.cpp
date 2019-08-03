#include "StdAfx.h"
#include "StageBack.h"
#include "Player.h"

CStageBack::CStageBack(void)
{

}

CStageBack::~CStageBack(void)
{
}

void CStageBack::Initialize( void )
{
	m_tInfo = INFO(0,-18000, 800, 18165);
	

	m_ptOffSet.x =  WINCX / 2;
	m_ptOffSet.y = WINCY / 2;

	

	m_Scroll = SCROLL(0, 200, 0, 200);
	
	/*
	m_Scroll.iUP = 100;
	m_Scroll.iDOWN = 100;
	m_Scroll.iRIGHT = 100;
	m_Scroll.iLEFT = 100;
	*/
}

int CStageBack::Progress( void )
{
	StageScroll();

	return 0;
}

void CStageBack::Render( HDC hdc )
{
	BitBlt(hdc, 
		int(m_tInfo.fX + m_ptScroll.x), 
		int(m_tInfo.fY + m_ptScroll.y), 
		(int)m_tInfo.fCX, (int)m_tInfo.fCY, 
		(*m_pMapBmp)["BackGround"]->GetMemDC(),
		0,0,SRCCOPY);
}

void CStageBack::Release( void )
{

}

void CStageBack::StageScroll( void )
{

	CPlayer* pPlayer = static_cast<CPlayer*>(m_pPlayer);
	
	//if(pPlayer->GetInfo().fX > m_ptOffSet.x + m_Scroll.iRIGHT )
	{
		m_ptScroll.x -= pPlayer->GetSpeed();
		m_ptOffSet.x += pPlayer->GetSpeed();
	}

	//if(pPlayer->GetInfo().fX < m_ptOffSet.x - m_Scroll.iLEFT )
	{
		m_ptScroll.x += pPlayer->GetSpeed();
		m_ptOffSet.x -= pPlayer->GetSpeed();
	}

	if(pPlayer->GetInfo().fY > m_ptOffSet.y + m_Scroll.iBottom )
	{
		m_ptScroll.y += pPlayer->GetSpeed();
		m_ptOffSet.y += pPlayer->GetSpeed();
	}

	if(pPlayer->GetInfo().fY < m_ptOffSet.y - m_Scroll.iTOP )
	{
		m_ptScroll.y -= pPlayer->GetSpeed();
		m_ptOffSet.y -= pPlayer->GetSpeed();
	}
}
