#pragma once
#include "Include.h"

class CMainGame
{
private:
	HDC m_hdc;
	INFO m_Info;

	list<INFO*> BulletList;
public:
	void Initialize();
	void Progress();
	void Render();
	void Release();
	INFO* CreatBullet(int _ix, int _iy);
public:
	CMainGame(void);
	~CMainGame(void);
};

