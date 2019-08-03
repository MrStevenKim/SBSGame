#pragma once
#include "Obj.h"
#include "CursorMgr.h"
#include "Include.h"

class CEnermy : public CObj
{
private:
	char* m_pStr;
public:
	virtual void Initialize();
	virtual int Progress();
	virtual void Render();
	virtual void  Release();
	CEnermy();
	virtual ~CEnermy();
};

