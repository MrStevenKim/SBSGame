#pragma once
#include "Include.h"
class CObj
{
protected:
	INFO m_Info;
public:
	virtual void Initialize()PURE;
	virtual void Progress()PURE;
	virtual void Render()PURE;
	virtual void Release()PURE;
	virtual void SetInfo(char* name, int _iKor, int _ieng, int _imath, int _itotal, float _iaverage)PURE;
	virtual INFO GetInfo()PURE;
public:

	CObj();
	virtual ~CObj();
};

