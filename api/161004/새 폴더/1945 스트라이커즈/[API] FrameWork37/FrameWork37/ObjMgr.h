#pragma once

#include "Include.h"

class CObj;

class CObjMgr
{
private:
	multimap<float, CObj*>		m_MapObj;

public:
	void AddRenderObj(CObj* pObj);
	void Render(HDC hdc);
	void Clear(void);

private:
	static CObjMgr*	m_pInst;

public:
	static CObjMgr* GetInst(void)
	{
		if(m_pInst == NULL)
			m_pInst = new CObjMgr;

		return m_pInst;
	}

	void DestroyInst(void)
	{
		::Safe_Delete(m_pInst);
	}

private:
	CObjMgr(void);

public:
	~CObjMgr(void);
};
