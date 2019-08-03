#pragma once
#include "stateobj.h"

class CObj;

class CStage :
	public CStateObj
{
private:
	CObj*		m_pBackGround;

	list<CObj*>		m_ObjList[OBJ_END];

public:
	virtual void Initialize(void);
	virtual int Progress(void);
	virtual void Render(HDC hdc);
	virtual void Release(void);


public:
	CStage(void);
	virtual ~CStage(void);
};
