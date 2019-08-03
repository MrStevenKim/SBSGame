#include "StdAfx.h"
#include "MainGame.h"
#include "Include.h"

#include "StateMgr.h"



CMainGame::CMainGame(void)
{
}


CMainGame::~CMainGame(void)
{
	Release();
}

void CMainGame::Initialize()
{
	m_hdc = GetDC(g_hWnd);

	CStateMgr::GetInst()->SetState(IDS_MYMENU);
}

void CMainGame::Progress()
{
	CStateMgr::GetInst()->Progress();
}

void CMainGame::Render()
{
	Rectangle(m_hdc, 0, 0, WINSIZEX, WINSIZEY);

	CStateMgr::GetInst()->Render(m_hdc);
}

void CMainGame::Release()
{
	ReleaseDC(g_hWnd, m_hdc);
}
