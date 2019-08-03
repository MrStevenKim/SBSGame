#pragma once
#include "SceneObj.h"

class CLogo : public CSceneObj
{
private:
	int		m_iX;
	int		m_iY;
	char*	m_pString;
	char*	m_pChar[10];
	bool	m_bCheck;
	DWORD	m_tCount;
public:
	virtual void Initialize();
	virtual void Porgress();
	virtual void Render();
	virtual void Release();
public:
	CLogo(void);
	virtual ~CLogo(void);
};

