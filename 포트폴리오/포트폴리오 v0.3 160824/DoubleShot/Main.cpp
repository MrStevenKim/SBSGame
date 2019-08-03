#pragma once

#include "Include.h"
#include "MainGame.h"
using namespace std;
int main()
{
	CMainGame MainGame;
	MainGame.Initilize();

	DWORD dwTime = GetTickCount();

	while (gaming)
	{
		if (dwTime + 50 < GetTickCount())
		{
			dwTime = GetTickCount();
			
			MainGame.Progress();
			MainGame.Render();
			if (gaming == 0)
				break;
		}

	}

	return 0;
}