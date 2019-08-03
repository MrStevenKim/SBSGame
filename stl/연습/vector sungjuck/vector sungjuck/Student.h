#pragma once
#include "Obj.h"
class CStudent :public CObj
{
private:
		
	INFO m_Info;

public:
	virtual void Initialize();
	virtual void Progress();
	virtual void Render();
	virtual void Release();
	

public:
	INFO GetInfo();
	virtual void SetInfo(char* _iname, int _ikor, int _ieng, int _imath, int _itotal, float _iaverage);


public:
	CStudent();
	virtual ~CStudent();
};

