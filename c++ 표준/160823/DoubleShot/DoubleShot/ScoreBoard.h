#pragma once
#include "Obj.h"
#include "Include.h"
#include "Objcreator.h"
#include "CursorMgr.h"

class CScoreBoard :public CObj
{
private:
	int m_pScore;

public:
	virtual void Initialize();
	virtual int Progress();
	virtual void Render();
	virtual void Release();

	CScoreBoard();
	virtual ~CScoreBoard();
};

