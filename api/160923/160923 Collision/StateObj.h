#pragma once
#include "Include.h"

class CObj;
class CStateObj
{
protected:
	list<CObj*> m_ObjList; 
public:
	virtual void Initialize()PURE;
	virtual void Progress()PURE;
	virtual void Render(HDC hdc)PURE;
	virtual void Release()PURE;
public:
	CStateObj(void);
	virtual ~CStateObj(void);
};

