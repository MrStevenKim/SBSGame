#include "Stage.h"

CStage::CStage(void)
{
}


CStage::~CStage(void)
{
	Release();
}

void CStage::Initialize()
{
	m_pPlayer = CObjFactory::CreatePlayer();
	m_pMonster = CObjFactory::CreateMonster(30, 10);
}

void CStage::Progress()
{
	m_pPlayer->Progress();
	m_pMonster->Progress();
}

void CStage::Render()
{
	system("cls");
	m_pPlayer->Render();
	m_pMonster->Render();
	
	if (CCollisionMgr::CollRect(m_pPlayer, m_pMonster))
	{
		CCursorPosition::SetCursorPosition(35, 2);
		cout << "Ãæµ¹" << endl;
	}
		
	
	}
	


void CStage::Release()
{
	delete m_pPlayer;
	m_pPlayer = NULL;

	delete m_pMonster;
	m_pMonster = NULL;
}
