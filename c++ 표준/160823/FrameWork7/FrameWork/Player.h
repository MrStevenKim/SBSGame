#pragma once
#include "Obj.h"

class CPlayer : public CObj
{
private:
	DWORD	m_dwKey;
	char*	m_pStr;
	DWORD	m_dwState;
	CObj*	m_pBullet[MAX];
	bool	bCheck[MAX];
public:
	virtual void Initialize();
	virtual int Porgress();
	virtual void Render();
	virtual void Release();
public:
	void KeyCheck();
	void Motion();
	void CheckBullet();
public:
	CPlayer(void);
	virtual ~CPlayer(void);
};

