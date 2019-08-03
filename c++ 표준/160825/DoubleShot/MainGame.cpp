#include "MainGame.h"



void CMainGame::Initilize()
{
	system("mode con:cols=170 lines=60");
	CSceneMgr::GetInst()->SetScene(IDS_LOGO);
	CDoubleBuffer::GetInst()->CreateBuffer(MAPX, MAPY);
}

int CMainGame::Progress()
{
	CKeyMgr::GetInst()->CheckKey();
	CSceneMgr::GetInst()->Progress();
	CDoubleBuffer::GetInst()->FlippingBuffer();
	CDoubleBuffer::GetInst()->ClearBuffer();

	return 0;
}

void CMainGame::Render()
{
	CSceneMgr::GetInst()->Render();
}

void CMainGame::Release()
{
}

CMainGame::CMainGame()
{
}


CMainGame::~CMainGame()
{
	
}
