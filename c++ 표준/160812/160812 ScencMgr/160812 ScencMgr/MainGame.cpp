#include "MainGame.h"
#include "SceneMgr.h"

CMainGame::CMainGame(void)
{
}


CMainGame::~CMainGame(void)
{
}

void CMainGame::Initialize()
{
	CSceneMgr::GetInst()->SetState(ID_STAGE);
}

void CMainGame::Progress()
{
	CSceneMgr::GetInst()->Progress();
}

void CMainGame::Render()
{
	CSceneMgr::GetInst()->Render();
}

void CMainGame::Release()
{

}
