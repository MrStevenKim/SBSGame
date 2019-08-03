#pragma once
#include "Obj.h"
#include "Define.h"
#include "Include.h"
#include "KeyMgr.h"
class CBullet3 : public CObj
{
private:
	BULLET m_Bullet3;


public:
	virtual void Initialize();
	virtual int Progress();
	virtual void Render();
	virtual void Release();

public:
	BULLET GetBullet()
	{
		return m_Bullet3;
	}
	CBullet3();
	virtual ~CBullet3();
};

