#pragma once
#include "Scene.h"

class CObj;
class CStage : public CScene
{
private:
	CObj* m_pPlayer;
	CObj* m_pMonster;
public:
	virtual void Initialize();
	virtual void Progress();
	virtual void Render();
	virtual void Release();
public:
	CStage(void);
	virtual ~CStage(void);
};

