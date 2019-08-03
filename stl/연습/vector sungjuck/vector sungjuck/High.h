#pragma once
#include "Scene.h"
#include "SceneMgr.h"
class CHigh:public CScene
{
public:
	virtual void Initialize();
	virtual void Progress();
	virtual void Render();
	virtual void Release();


public:
	CHigh();
	virtual ~CHigh();
};

