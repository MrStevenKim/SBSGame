#pragma once
#include "Include.h"
class CObj
{
protected:
	INFO m_Info; // 오브젝터의 위치를 표시할 Struct.h에 정의한 INFO형 형태의 구조체 변수 생성 (하위 클래스에서 상속받아서 사용할수 있어야하므로 Protected로 정의한다.
public:
	virtual void Initialize()PURE;
	virtual int Progress()PURE; // 왜 Progress 함수만 int형으로 선언되었냐면 나중에 리턴될 투사체가 int형으로 리턴되야하기때문에 Progress만 예외적으로 int형
	virtual void Render()PURE;
	virtual void Release()PURE;
public:
	void SetPos(int _ix, int _iy)
	{
		m_Info.iX = _ix;
		m_Info.iY = _iy;
		
	}

	INFO GetInfo()
	{
		return m_Info;
	}

public:
	CObj();
	virtual  ~CObj(); // 지금 CObj 클래스경우 순수가상함수이므로 virtual을 붙이지않으면 CObj자신이 Release되므로 하위클래스가 Release 되기위해 virtual 꼭붙여야 한다.
};

