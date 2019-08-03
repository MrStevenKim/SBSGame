#pragma once
#include "SceneObj.h"
#include "SceneMgr.h"
#include "Include.h"
#include "CursorMgr.h"
#include "ObjCreator.h"
#include "CollisionMgr.h"
class CObj; // 전방선언하는 이유는 Stage에서 Obj에 있는 Solider라던지 Mapping이라던지를 사용해야하기 때문이다. SceneObj는 해당 장면을 의미하는 거라면 Obj는 장면에 움직이는 인물?
class CStage: public CSceneObj
{
private:
	CObj *m_pSolider;
	CObj *m_pMapping;
	CObj *m_pEnermy;
public:
	virtual void Initialize();
	virtual void Progress();
	virtual void Render();
	virtual void Release();

public:
	CStage();
	virtual ~CStage();
};

