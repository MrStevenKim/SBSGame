#include "MyMenu.h"
#include "SceneMgr.h"

CMyMenu::CMyMenu(void)
{
}


CMyMenu::~CMyMenu(void)
{
}


void CMyMenu::Initialize()
{

}

void CMyMenu::Porgress()
{

	if(GetAsyncKeyState(VK_RETURN))
	{
		CSceneMgr::GetInstance()->SetScene(IDS_STAGE);
	}
}

void CMyMenu::Render()
{
	CDoubleBuffer::GetInst()->WriteBuffer((WINCX/2)-17, WINCY/2, " 엔터키를 입력하면 게임이 시작됩니다.");

	for(int Y = 0 ; Y < WINCY ; Y++)
	{
		for(int X = 0 ; X < WINCX ; X++)
		{
			if( Y == (WINCY - 1) || Y == 0)
				CDoubleBuffer::GetInst()->WriteBuffer(0, Y, "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
			else if(X == 0 || X == (WINCX-1) )
				CDoubleBuffer::GetInst()->WriteBuffer(X, Y, "■");
		}
	}
}

void CMyMenu::Release()
{

}
