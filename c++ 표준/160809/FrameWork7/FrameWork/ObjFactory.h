#pragma once
#include "Obj.h"
#include "Player.h"
#include "Monster.h"
#include "BackGround.h"
#include "Bullet.h"

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
	static CObj* CreateBackGround()
	{
		CObj* pObj = new CBackGround;
		pObj->Initialize();

		return pObj;
	}
	static CObj* CreateBackGround(int _ix, int _iy)
	{
		CObj* pObj = new CBackGround;
		pObj->Initialize();

		pObj->SetPos(_ix, _iy);

		return pObj;
	}
	static CObj* CreateBullet()
	{
		CObj* pObj = new CBullet;
		pObj->Initialize();

		return pObj;
	}
	static CObj* CreateBullet(int _ix, int _iy)
	{
		CObj* pObj = new CBullet;
		pObj->Initialize();

		pObj->SetPos(_ix, _iy);

		return pObj;
	}
public:
	CObjFactory(void){};
	~CObjFactory(void){};
};

