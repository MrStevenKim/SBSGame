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

bool CCollisionMgr::Bullet(CObjCreator* _bullet, CObj * _enermy)
{
	if (_bullet->CreateBullet()->GetInfo().iX == _enermy->GetInfo().iX &&
		_bullet->CreateBullet()->GetInfo().iY == _enermy->GetInfo().iY)
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
