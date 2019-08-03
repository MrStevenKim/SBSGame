#pragma once
#include "Include.h"

class CObj;
class CObjMgr
{

private:
	static CObjMgr* m_Inst;

public:
	static CObjMgr* GetInst()
	{
		if (m_Inst == NULL)
			m_Inst = new CObjMgr;
		return m_Inst;
	}

private:
	
		CObj* m_Solider;

		CObj* m_Bullet1; //위
		CObj* m_Bullet2; //오른쪽
		CObj* m_Bullet3; //왼쪽
		CObj* m_Bullet4; //아래

		CObj* m_Enermy1; // 위
		CObj* m_Enermy2; // 오른쪽
		CObj* m_Enermy3; // 왼쪽
		CObj* m_Enermy4; // 아래
public:
	void Progress();
	void Render();
	void Release();

public:
	void SetSoliderObj(CObj* _solider)
	{
		m_Solider = _solider;

	}

	void SetEnermy1Obj(CObj* _enermy1)
	{
		m_Enermy1 = _enermy1;
	}

	void SetEnermy2Obj(CObj* _enermy2)
	{
		m_Enermy2 = _enermy2;
	}

	void SetEnermy3Obj(CObj* _enermy3)
	{
		m_Enermy3 = _enermy3;
	}

	void SetEnermy4Obj(CObj* _enermy4)
	{
		m_Enermy4 = _enermy4;
	}

	void SetBullet1Obj(CObj* _bullet1)
	{
		m_Bullet1 = _bullet1;
	}

	void SetBullet2Obj(CObj* _bullet2)
	{
		m_Bullet2 = _bullet2;
	}

	void SetBullet3Obj(CObj* _bullet3)
	{
		m_Bullet3 = _bullet3;

	}

	void SetBullet4Obj(CObj* _bullet4)
	{

		m_Bullet4 = _bullet4;
	}
private:
	CObjMgr();
public:
	~CObjMgr();
};

