#include "StdAfx.h"
#include "MyMenu.h"
#include "StateMgr.h"

#include "MyButton.h"
#include "ObjMgr.h"
#include "Player.h"

CMyMenu::CMyMenu(void)
{
}


CMyMenu::~CMyMenu(void)
{
}


void CMyMenu::Initialize()
{
	m_ObjList.push_back(CObjFactory<CPlayer>::CreateObj());
	CObjMgr::GetInst()->SetObjList(PLAYER, m_ObjList);
	m_ObjList.clear();

	m_ObjList.push_back(CObjFactory<CMyButton>::CreateObj(WINSIZEX/2, (WINSIZEY/2) - 30));
	m_ObjList.push_back(CObjFactory<CMyButton>::CreateObj(WINSIZEX/2, (WINSIZEY/2) + 30));
	CObjMgr::GetInst()->SetObjList(BUTTON, m_ObjList);
}

void CMyMenu::Progress()
{
	CObjMgr::GetInst()->Progress();
}

void CMyMenu::Render(HDC hdc)
{
	CObjMgr::GetInst()->Render(hdc);
}

void CMyMenu::Release()
{

}
