#pragma once
#include "Defien.h"

class CScene;
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
	CScene* m_StateMgr;
public:
	void SetState(STATEID _estateid);
	void Progress();
	void Render();
	void Release();

private:
	CSceneMgr(void);
public:
	~CSceneMgr(void);
};

