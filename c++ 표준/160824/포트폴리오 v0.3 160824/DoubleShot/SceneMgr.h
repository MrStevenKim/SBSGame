#pragma once
#include "Include.h"
#include "Solider.h"
#include "Stage.h"
#include "Logo.h"
#include "Ending.h"
class CSceneObj; 
class CSceneMgr
{
private:
	static CSceneMgr* m_pInst; // 현재의 씬을 관리하는

public:
	static CSceneMgr* GetInst()
	{
		if (m_pInst == NULL)
			m_pInst = new CSceneMgr;
		return m_pInst;
	}
private:
	CSceneObj* m_pSceneMgr;
public:
	void SetScene(STATEID _estateid); // 현재씬을 정하는 함수 
	void Progress();
	void Render();
	void Release();

	CSceneMgr();
public:
	~CSceneMgr();
};

