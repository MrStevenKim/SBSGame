#include "SceneMgr.h"

CSceneMgr* CSceneMgr::m_pInst = NULL;

void CSceneMgr::SetScene(STATEID _estateid)
{
	::Safe_Delete(m_pSceneMgr);

	switch (_estateid)
	{
	case IDS_LOGO:
		m_pSceneMgr = new CLogo;
		break;

	case IDS_STAGE:
		m_pSceneMgr = new CStage;
		break;
		
	}
	m_pSceneMgr->Initialize();
}

void CSceneMgr::Progress()
{
	m_pSceneMgr->Progress();
}

void CSceneMgr::Render()
{
	m_pSceneMgr->Render();
}

void CSceneMgr::Release()
{
}

CSceneMgr::CSceneMgr()
	:m_pSceneMgr(NULL)
{
}


CSceneMgr::~CSceneMgr()
{
}
