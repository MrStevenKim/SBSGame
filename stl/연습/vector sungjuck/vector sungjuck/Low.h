#pragma once
#include "Scene.h"
#include "SceneMgr.h"
class CLow:public CScene
{
public:
	virtual void Initialize();
	virtual void Progress();
	virtual void Render();
	virtual void Release();
	
public:
	CLow();
	virtual ~CLow();
};

