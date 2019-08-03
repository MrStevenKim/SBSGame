#pragma once
#include "Obj.h"
#include "Solider.h"
#include "Mapping.h"
#include "ScoreBoard.h"
#include "Enermy.h"
#include "YEnermy.h"
#include "SEnermy.h"
#include "WEnermy.h"
#include "Bullet.h"
#include "Bullet2.h"
#include "Bullet3.h"
#include "Bullet4.h"
class CObjCreator // CObj*변수에 해당하는 Obj에 대한 값을 넣어주는 클래스 
{
public:
	static CObj* CreateSolider();
	static CObj* CreateMapping();
	static CObj* CreateScoreBoard();
	static CObj* CreateEnermy(int _ix, int _iy);
	static CObj* CreateYEnermy(int _ix, int _iy);
	static CObj* CreateSEnermy(int _ix, int _iy);
	static CObj* CreateWEnermy(int _ix, int _iy);
	static CObj* CreateBullet();
	static CObj* CreateBullet(int _ix, int _iy);
	static CObj* CreateBullet2(int _ix, int _iy);
	static CObj* CreateBullet3(int _ix, int _iy);
	static CObj* CreateBullet4(int _ix, int _iy);
	CObjCreator();
	~CObjCreator();
};

