#include "StdAfx.h"
#include "MainGame.h"
#include "Player.h"
#include "Monster.h"
#include "ObjFactory.h"
#include "ObjMgr.h"


CMainGame::CMainGame(void)
{
}

CMainGame::~CMainGame(void)
{
	Release();
}

void CMainGame::Initialize( void )
{
	m_hdc = GetDC(g_hWnd);

	CObj* pPlayer = new CPlayer;
	pPlayer->Initialize();
	((CPlayer*)pPlayer)->SetBullet(&m_ObjList[OBJ_BULLET]);

	m_ObjList[OBJ_PLAYER].push_back(pPlayer);


	for(int i = 0; i < 5; ++i)
	{
		float fx = float(rand() % WINCX);
		float fy = float(rand() % WINCY);
		CObj*	pMonster = CObjFactory<CMonster>::CreateObj(fx, fy);
		((CMonster*)pMonster)->SetPlayer(pPlayer);

		m_ObjList[OBJ_MONSTER].push_back(pMonster);
	}


	CObjMgr::GetInst()->SetObjList(m_ObjList);	
}

void CMainGame::Progress( void )
{
	for(int i = 0; i < OBJ_END; ++i)
	{
		for(list<CObj*>::iterator iter = m_ObjList[i].begin() ; iter != m_ObjList[i].end(); ++iter)
		{
			(*iter)->Progress();
		}
	}
}

void CMainGame::Render( void )
{
	Rectangle(m_hdc, 0, 0, WINCX, WINCY);

	for(int i = 0; i < OBJ_END; ++i)
	{
		for(list<CObj*>::iterator iter = m_ObjList[i].begin() ; iter != m_ObjList[i].end(); ++iter)
		{
			(*iter)->Render(m_hdc);
		}
	}

}

void CMainGame::Release( void )
{
	ReleaseDC(g_hWnd, m_hdc);

	for(int i = 0; i < OBJ_END; ++i)
	{
		for(list<CObj*>::iterator iter = m_ObjList[i].begin() ; iter != m_ObjList[i].end(); ++iter)
		{
			Safe_Delete(*iter);
		}
		m_ObjList[i].clear();
	}
}
