#include "StdAfx.h"
#include "ObjMgr.h"

#include "Obj.h"

CObjMgr*	CObjMgr::m_pInst = NULL;

CObjMgr::CObjMgr(void)
{
}

CObjMgr::~CObjMgr(void)
{
}

void CObjMgr::AddRenderObj( CObj* pObj )
{
	m_MapObj.insert(make_pair(pObj->GetInfo().fY, pObj));
}

void CObjMgr::Render( HDC hdc )
{
	for(multimap<float, CObj*>::iterator iter = m_MapObj.begin(); iter != m_MapObj.end(); ++iter)
	{
		iter->second->Render(hdc);
	}
}

void CObjMgr::Clear( void )
{
	m_MapObj.clear();
}
