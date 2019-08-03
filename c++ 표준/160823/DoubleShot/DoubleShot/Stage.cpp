#include "Stage.h"


void CStage::Initialize()
{
	m_pSolider = CObjCreator::CreateSolider();
	m_pMapping = CObjCreator::CreateMapping();
	/*m_pEnermy = CObjCreator::CreateEnermy(rand, rand);*/ // 랜덤위치에 적생성
	m_pEnermy = CObjCreator::CreateEnermy(50, 20);
}

void CStage::Progress()
{
	m_pMapping->Progress();
	m_pSolider->Progress();
	m_pEnermy->Progress();
	if (CCollisionMgr::CollisionMgr(m_pSolider, m_pEnermy))
	{
		MSG(10, 20, "Game Over")
			gaming = 0;
	}
}

void CStage::Render()
{
	m_pMapping->Render();
	m_pSolider->Render();
	m_pEnermy->Render();
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
