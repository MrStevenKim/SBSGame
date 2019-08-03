#pragma once
#include "Include.h"
#include "SceneMgr.h"
#include "CursorMgr.h"
#include "KeyMgr.h"
class CMainGame
{
public:
	 void Initilize();
	 int Progress();
	 void Render();
	 void Release();
	
public:
	CMainGame();
	~CMainGame();
};

