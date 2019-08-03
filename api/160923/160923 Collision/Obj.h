#pragma once
#include "Include.h"

class CObj
{
protected:
	INFO	m_Info;
public:
	virtual void Initialize()PURE;
	virtual void Progress()PURE;
	virtual void Render(HDC hdc)PURE;
	virtual void Release()PURE;
public:
	INFO GetInfo()
	{
		return m_Info;
	}
	void SetPos(int _ix, int _iy)
	{
		m_Info.iX = _ix;
		m_Info.iY = _iy;
	}
public:
	CObj(void);
	virtual ~CObj(void);
};

