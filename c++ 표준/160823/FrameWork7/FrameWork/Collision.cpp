#include "Collision.h"
#include "Player.h"


CCollision::CCollision(void)
{
}


CCollision::~CCollision(void)
{
}

bool CCollision::CollisionMgr(CObj* _pplayer, CObj* _pmonster)
{
	if(_pplayer->GetInfo().iX == _pmonster->GetInfo().iX &&
		_pplayer->GetInfo().iY == _pmonster->GetInfo().iY)
	{
		return true;
	}
	return false;
}
