#pragma once
#include "Obj.h"

class CMonster : public CObj
{
public:
	virtual void Initialize();
	virtual void Progress();
	virtual void Render();
	virtual void Release();
public:
	CMonster(void);
	virtual ~CMonster(void);
};

