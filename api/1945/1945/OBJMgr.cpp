#include "stdafx.h"
#include "OBJMgr.h"
#include "MathMgr.h"

const COBJ * COBJMgr::GetTarGet(COBJ * pOBJ, OBJID _eOBJid)
{
	COBJ* pTarGet = NULL;

	multimap<float, COBJ*> m_pmapOBJ; // °Å¸® , COBJ;

	for (list<COBJ*>::iterator iter = m_pOBJList[_eOBJid].begin(); iter != m_pOBJList[_eOBJid].end(); ++iter)
	{
		float fDistance = CMathMgr::GetDistance(pOBJ, (*iter));

		m_pmapOBJ.insert(make_pair(fDistance, (*iter)));
	}

	multimap<float, COBJ*>::iterator mapiter = m_pmapOBJ.begin();
	pTarGet = mapiter->second;

	m_pmapOBJ.clear();

	return pTarGet;
}

COBJMgr::COBJMgr()
{
}


COBJMgr::~COBJMgr()
{
}
