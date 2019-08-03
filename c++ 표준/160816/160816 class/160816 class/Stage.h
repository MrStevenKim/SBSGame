#pragma once
#include "SceneObj.h"

class CObj;
class CStage : public CSceneObj
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

