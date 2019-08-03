#pragma once
#include "Bullet_Bridge.h"
#include "StdAfx.h"
#include "OBJ.h"
class CAmmo:public CBullet_Bridge
{
public:
	virtual void Initialize(void);
	virtual int Progress(INFO& rInfo);
	virtual void Render(HDC hdc);
	virtual void Release(void);

public:

	CAmmo(void);
	virtual ~CAmmo(void);
};

