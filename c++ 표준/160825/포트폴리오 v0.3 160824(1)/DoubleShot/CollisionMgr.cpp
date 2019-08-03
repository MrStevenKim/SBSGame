#include "CollisionMgr.h"



bool CCollisionMgr::CollisionMgr(CObj * _psolider, CObj * _penermy)
{
	if (_psolider->GetInfo().iX == _penermy->GetInfo().iX &&
		_psolider->GetInfo().iY == _penermy->GetInfo().iY)
	{
		return true;
	}
	return false;
}

CCollisionMgr::CCollisionMgr()
{
}


CCollisionMgr::~CCollisionMgr()
{
}
