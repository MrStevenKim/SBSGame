#pragma once
#include "Include.h"

class CObj;
class CCollision
{
public:
	static bool CollisionMgr(CObj* _pplayer, CObj* _pmonster);
public:
	CCollision(void);
	~CCollision(void);
};