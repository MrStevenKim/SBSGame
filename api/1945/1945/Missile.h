#pragma once
#include "Bullet_Bridge.h"
class CMissile: public CBullet_Bridge
{
public:
	virtual void Initialize(void);
	virtual int Progress(INFO& rInfo);
	virtual void Render(HDC hdc);
	virtual void Release(void);

public:
	CMissile(void);
	virtual ~CMissile(void);
};

