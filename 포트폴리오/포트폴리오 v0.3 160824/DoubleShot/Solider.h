#pragma once
#include "Obj.h"
#include "Include.h"
#include "KeyMgr.h"
#include "CursorMgr.h"
#include "ObjCreator.h"
#include "Define.h"

class CSolider : public CObj
{
private:
	DWORD m_dwKey;
	char* m_pStr; // Solider의 위치를 시각적으로 렌더링하기위해 선언 즉 m_pStr은 캐릭터라고 생각하면된다.
	DWORD m_dwState; // 현재 Solider의 상태 즉 어느 방향을 바라보고있나 와 같은 정보를 저장하는 변수
	bool BulletCheck[MAX]; // 현재 Scene에 Bullet이 존재하는지 상태를 저장하는 변수 bool 변수이므로 true이면 존재한다는 뜻이고 false면 존재하지않는다라는 의미
	CObj* m_pBullet[MAX]; // Bullet Obj를 생성할 변수

public:
	virtual void Initialize();
	virtual int Progress();
	virtual void Render();
	virtual void Release();
	
public:
	void KeyCheck();
	void Motion();
	void CheckBullet(); // Bullet이 Scene에 있는지 체크하는 함수
	void CheckBullet2();
	void CheckBullet3();
	void CheckBullet4();
	CSolider();
	virtual ~CSolider();
};

