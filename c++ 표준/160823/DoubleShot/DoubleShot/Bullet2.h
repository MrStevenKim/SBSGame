#pragma once
#include "Obj.h"
#include "Define.h"
#include "Include.h"
#include "KeyMgr.h"
class CBullet2 : public CObj
{
private:
	BULLET m_Bullet2;


public:
	virtual void Initialize();
	virtual int Progress();
	virtual void Render();
	virtual void Release();

public:
	BULLET GetBullet()
	{
		return m_Bullet2;
	}
	CBullet2();
	virtual ~CBullet2();
};

