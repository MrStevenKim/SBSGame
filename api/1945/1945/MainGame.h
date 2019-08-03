#pragma once
#include "Include.h"


class CMainGame
{
private:
	HDC	m_hdc;
	list<COBJ*> m_OBJList[OBJ_END];

public:
	void Initialize(void);
	void Progress(void);
	void Render(void);
	void Releaese(void);

public:
	CMainGame(void);
	~CMainGame(void);
};

