
#pragma once
static int gaming = 1;
#include "Include.h"
#define MSG(x,y,str) CDoubleBuffer::GetInst()->WriteBuffer(x,y,str);
const int MAPX = 170-1;
const int MAPY = 60-1;
const  int MAX = 20;
const int END = 3;
extern bool EXIT;

const DWORD		STATE_STAND = 0x00000001;
const DWORD		STATE_WALK = 0x00000002;
const DWORD		STATE_ATT = 0x00000004;
const DWORD		STATE_HIT = 0x00000008;
const DWORD		STATE_DIE = 0x00000010;

const DWORD		KEY_UP = 0x00000001;
const DWORD		KEY_DOWN = 0x00000002;
const DWORD		KEY_LEFT = 0x00000004;
const DWORD		KEY_RIGHT = 0x00000008;
const DWORD		KEY_SPACE = 0x00000010;
const DWORD		KEY_RETURN = 0x00000020;
const DWORD		KEY_LBUTTON = 0x00000040;
const DWORD		KEY_RBUTTON = 0x00000080;
const DWORD		KEY_ESCAPE = 0x00000100;
const DWORD		KEY_Z = 0x00000200;


template<typename T>  // ::Safe_Delete(객체명)으로 사용 // 동적메모리 삭제
inline void Safe_Delete(T& Temp)
{
	if (Temp)
	{
		delete Temp;
		Temp = NULL;
	}
}
