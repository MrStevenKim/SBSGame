#pragma once
#include "Include.h"

class CObj;
class CObjMgr
{
private:
	list<CObj*>*	m_pObjList;

public:
	void SetObjList(list<CObj*>* _pObjList) {m_pObjList = _pObjList;}

public:
	const CObj* GetTarGet(CObj* pObj, OBJID _eobjid);

private:
	static CObjMgr* m_pInst;

public:
	static CObjMgr* GetInst(void)
	{
		if(m_pInst == NULL)
			m_pInst = new CObjMgr;

		return m_pInst;
	}

	void DestoryInst(void)
	{
		delete m_pInst;
		m_pInst = NULL;
	}

private:
	CObjMgr(void);

public:
	~CObjMgr(void);
};
