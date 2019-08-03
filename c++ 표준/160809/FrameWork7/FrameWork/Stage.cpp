#include "Stage.h"
#include "SceneMgr.h"
#include "ObjFactory.h"
#include "Include.h"
#include "Collision.h"
#include "CursorMgr.h"


CStage::CStage(void)
{
}


CStage::~CStage(void)
{
}


void CStage::Initialize()
{
	m_pBackGround = CObjFactory::CreateBackGround();
	m_pPlayer = CObjFactory::CreatePlayer();
	m_pMonster = CObjFactory::CreateMonster(WINCX/2, WINCY/2);
}

void CStage::Porgress()
{
	m_pBackGround->Porgress();
	m_pPlayer->Porgress();
	m_pMonster->Porgress();
	if(CCollision::CollisionMgr(m_pPlayer, m_pMonster))
	{
		ERR_MSG(10, 20, "충돌 입니다. !!!!  이렇게 사용 하면 됩니다.")
	}
}

void CStage::Render()
{
	m_pBackGround->Render();
	m_pMonster->Render();
	m_pPlayer->Render();
}

void CStage::Release()
{

}
