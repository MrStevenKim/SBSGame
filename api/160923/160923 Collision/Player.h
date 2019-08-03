#pragma once
#include "Obj.h"

class CPlayer : public CObj
{
private:
	float	m_fSpeed;
public:
	virtual void Initialize();
	virtual void Progress();
	virtual void Render(HDC hdc);
	virtual void Release();
public:
	CPlayer(void);
	virtual ~CPlayer(void);
};

