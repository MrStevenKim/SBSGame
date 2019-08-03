#pragma once
#include "Include.h"

class CSceneObj;
class CSceneMgr
{
private:
	static CSceneMgr* m_pInst;
public:
	static CSceneMgr* GetInst()
	{
		if(m_pInst == NULL)
			m_pInst = new CSceneMgr;

		return m_pInst;
	}
private:
	CSceneObj* m_pStateMgr;
public:
	void SetState(STATEID _estateid);
	void Progress();
	void Render();
	void Release();
public:
	CSceneMgr(void);
	~CSceneMgr(void);
};

