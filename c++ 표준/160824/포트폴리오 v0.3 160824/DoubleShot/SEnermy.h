#pragma once
#include "Obj.h"
#include "CursorMgr.h"
#include "Include.h"
#include "ObjCreator.h"
#include "Define.h"

class CSEnermy : public CObj
{
private:
	char* m_pStr;

public:
	virtual void Initialize();
	virtual int Progress();
	virtual void Render();
	virtual void  Release();
public:

	CSEnermy();
	virtual ~CSEnermy();
};

