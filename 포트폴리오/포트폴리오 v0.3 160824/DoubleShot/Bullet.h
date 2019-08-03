#pragma once
#include "Obj.h"
#include "Define.h"
#include "Include.h"
#include "KeyMgr.h"
class CBullet : public CObj
{
private:
	BULLET m_Bullet;
	

public:
	virtual void Initialize();
	virtual int Progress();
	virtual void Render();
	virtual void Release();

public:
	BULLET GetBullet()
	{
		return m_Bullet;
	}
	CBullet();
	virtual ~CBullet();
};

