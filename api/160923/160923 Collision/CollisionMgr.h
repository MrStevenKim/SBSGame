#pragma once
#include "Obj.h"

class CCollisionMgr
{
public:
	static bool CollisionRect(CObj* _player, CObj* _monster)
	{
		if(_player->GetInfo().iX - _player->GetInfo().iCX/2 < _monster->GetInfo().iX + _monster->GetInfo().iCX/2 &&
			_player->GetInfo().iX + _player->GetInfo().iCX/2 > _monster->GetInfo().iX - _monster->GetInfo().iCX/2 &&
			_player->GetInfo().iY - _player->GetInfo().iCY/2 < _monster->GetInfo().iY + _monster->GetInfo().iCY/2 &&
			_player->GetInfo().iY + _player->GetInfo().iCY/2 > _monster->GetInfo().iY - _monster->GetInfo().iCY/2 )
		{
			return true;
		}
		return false;
	}
public:
	CCollisionMgr(void);
	~CCollisionMgr(void);
};

