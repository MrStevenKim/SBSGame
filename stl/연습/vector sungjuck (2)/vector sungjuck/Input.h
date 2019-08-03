#pragma once
#include "Scene.h"
#include "SceneMgr.h"
class CObj;
class CInput : public CScene
{
private:
	
	int t_kor;
	int t_eng;
	int t_math;
	int t_total;
	float t_average;
	char name[10];
	int t_num;
	vector<CObj*> pStudent[MAX];
public:
	


public:
	virtual void Initialize();
	virtual int Progress();
	virtual void Render();
	virtual void Release();

	
public:
	CInput();
	virtual ~CInput();
};

