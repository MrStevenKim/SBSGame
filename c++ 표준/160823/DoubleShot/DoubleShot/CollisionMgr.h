#pragma once
#include "include.h"
#include "Solider.h"
#include "Enermy.h"
class CObj; // obj 객체끼리 서로 부딪치면 충돌을 표현해야하기때문에 Cobj를 전방선언해야한다.
class CCollisionMgr
{
public:
	static bool CollisionMgr(CObj* _psolider, CObj* _penermy);

public:
	CCollisionMgr();
	~CCollisionMgr();
};

