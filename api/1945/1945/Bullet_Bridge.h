#pragma once
#include "Bridge1.h"

class CBullet_Bridge : public CBridge1
{
protected:
	float m_fAngle;
	float m_fSpeed;

public:
	void SetAngle(float _fangle){m_fAngle = _fangle;}
public:
	virtual void Initialize(void)PURE;
	virtual int Progress(INFO& rInfo) PURE;
	virtual void Render(HDC hdc)PURE;
	virtual void Release(void) PURE;
	
public:
	CBullet_Bridge(){}
	virtual ~CBullet_Bridge(){};
};