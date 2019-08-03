#include "MainProgram.h"
#include "Include.h"
#include "SceneMgr.h"

void CMainProgram::Initialize()
{
	CSceneMgr::GetInstance()->SetScene(IDS_LOGO);

	
}

void CMainProgram::Progress()
{
	CSceneMgr::GetInstance()->Progress();
}

void CMainProgram::Render()
{
	CSceneMgr::GetInstance()->Render();
}

void CMainProgram::Release()
{
	CSceneMgr::GetInstance()->Release();
}

CMainProgram::CMainProgram()
{
}


CMainProgram::~CMainProgram()
{
	Release();
}
