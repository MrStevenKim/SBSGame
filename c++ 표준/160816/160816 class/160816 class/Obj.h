#pragma once
#include "Include.h"

class CObj
{
protected:
	INFO* m_Info;
	INFO* m_monsterInfo;
public:
	virtual void Initialize()PURE;
	virtual void Progress()PURE;
	virtual void Render()PURE;
	virtual void Release()PURE;
public:
	CObj(void);
	virtual ~CObj(void);
};

