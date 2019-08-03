#pragma once
#include "Include.h"

class CObj
{
protected:
	INFO m_Info;
public:
	virtual void Initialize()PURE;
	virtual int Porgress()PURE;
	virtual void Render()PURE;
	virtual void Release()PURE;
public:
	void SetPos(int _ix, int _iy)
	{
		m_Info.iX = _ix;
		m_Info.iY = _iy;
	}
	INFO GetInfo()
	{
		return m_Info;
	}
public:
	CObj(void);
	virtual ~CObj(void);
};

