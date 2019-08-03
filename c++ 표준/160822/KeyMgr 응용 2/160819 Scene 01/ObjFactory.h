#pragma once
#include "Player.h"
#include "Monster.h"

class CObjFactory
{
public:
	static CObj* CreatePlayer()
	{
		CObj* pObj = new CPlayer;
		pObj->Initialize();

		return pObj;
	}

	static CObj* CreateMonster()
	{
		CObj* pObj = new CMonster;
		pObj->Initialize();

		return pObj;
	}

	static CObj* CreateMonster(int _ix, int _iy)
	{
		CObj* pObj = new CMonster;
		pObj->Initialize();
		pObj->SetPos(_ix, _iy);

		return pObj;
	}
};