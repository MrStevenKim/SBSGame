#pragma once
#include "Obj.h"
#include "Define.h"

class CBullet : public CObj
{
private:
	BULLET m_Bullet;
public:
	virtual void Initialize();
	virtual int Porgress();
	virtual void Render();
	virtual void Release();
public:
	BULLET GetBullet()
	{
		return m_Bullet;
	}
public:
	CBullet(void);
	virtual ~CBullet(void);
};

