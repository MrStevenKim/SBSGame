#include "Stage.h"


void CStage::Initialize()
{
	m_pSolider = CObjCreator::CreateSolider();
	m_pMapping = CObjCreator::CreateMapping();
	for(int i=0; i<19 ; i++)
	{m_pEnermy[i] = CObjCreator::CreateEnermy(rand()%MAPX, rand()%MAPY);
	 m_pYEnermy[i] = CObjCreator::CreateYEnermy(rand()%MAPX, rand()%MAPY);
	 m_pSEnermy[i] = CObjCreator::CreateSEnermy(rand() % MAPX, rand() % MAPY);
	 m_pWEnermy[i] = CObjCreator::CreateWEnermy(rand() % MAPX, rand() % MAPY);
}
}
void CStage::Progress()
{
	m_pMapping->Progress();
	m_pSolider->Progress();
		for(int i=0; i<19 ; i++)
	m_pEnermy[i]->Progress();
		for(int i=0; i<19 ; i++)
	if (CCollisionMgr::CollisionMgr(m_pSolider, m_pEnermy[i]))
	{
		MSG(10, 20, "Game Over")
		
		//CSceneMgr::GetInst()->SetScene(IDS_ENDING);
	}
	for(int j=0; j<19 ; j++)
	m_pYEnermy[j]->Progress();
	for(int j=0; j<19 ; j++)
		if (CCollisionMgr::CollisionMgr(m_pSolider, m_pYEnermy[j]))
		{
			MSG(10, 20, "Game Over")
			
			//CSceneMgr::GetInst()->SetScene(IDS_ENDING);
		}
	for (int j = 0; j<19; j++)
		m_pSEnermy[j]->Progress();
	for (int j = 0; j<19; j++)
		if (CCollisionMgr::CollisionMgr(m_pSolider, m_pSEnermy[j]))
		{
			MSG(10, 20, "Game Over")
			
			//CSceneMgr::GetInst()->SetScene(IDS_ENDING);
		}

	for (int j = 0; j<19; j++)
		m_pWEnermy[j]->Progress();
	for (int j = 0; j<19; j++)
		if (CCollisionMgr::CollisionMgr(m_pSolider, m_pWEnermy[j]))
		{
			MSG(10, 20, "Game Over")
			
			//CSceneMgr::GetInst()->SetScene(IDS_ENDING);
		}
}

void CStage::Render()
{
	m_pMapping->Render();
	m_pSolider->Render();
	for(int i=0; i<19 ; i++)
	{
	m_pEnermy[i]->Render();
	m_pYEnermy[i]->Render();
	m_pSEnermy[i]->Render();
	m_pWEnermy[i]->Render();
	}
}

void CStage::Release()
{
}

CStage::CStage()
{
}


CStage::~CStage()
{
}
