#include "Include.h"
#include "MainGame.h"

int main()
{
	DWORD tTime = GetTickCount();
	CMainGame MainGame;
	MainGame.Initialize();

	while(true)
	{
		if(tTime < GetTickCount())
		{
			tTime = GetTickCount();

			MainGame.Progress();
			MainGame.Render();
		}
	}
	return 0;
}