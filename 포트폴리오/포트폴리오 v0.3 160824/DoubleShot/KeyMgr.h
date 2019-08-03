#pragma once
#include "Include.h"
class CKeyMgr
{
private:
	static CKeyMgr* m_pInst; // 현재 키상태를 저장할 키매니저
public:
	static CKeyMgr* GetInst()
	{
		if (m_pInst == NULL)
			m_pInst = new CKeyMgr;
		return m_pInst;
	}

private:
	DWORD m_dwKey; // 받아온 키값을 저장할 공간
public:
	DWORD GetKey()
	{
		return m_dwKey;
	}

public:
	void CheckKey();

private:	CKeyMgr();
public:  ~CKeyMgr();
};

