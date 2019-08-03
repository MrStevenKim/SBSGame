#pragma once

#include <iostream>
#include <Windows.h>

using namespace std;


typedef struct tagInfo
{
	int iX;
	int iY;
	int iCX;
	int iCY;

	tagInfo() {};
	tagInfo(int _ix, int _iy) : iX(_ix), iY(_iy){};

	tagInfo(int _ix, int _iy, int _icx, int _icy)
		: iX(_ix), iY(_iy), iCX(_icx), iCY(_icy) {};

}INFO;




enum STATEID{
	IDS_LOGO	,
	IDS_MENU	,
	IDS_STAGE	,
};

const DWORD		STATE_STAND = 0x00000001;
const DWORD		STATE_WALK	= 0x00000002;
const DWORD		STATE_ATT	= 0x00000004;
const DWORD		STATE_HIT	= 0x00000008;
const DWORD		STATE_DIE	= 0x00000010;

const DWORD		KEY_UP		= 0x00000001;
const DWORD		KEY_DOWN	= 0x00000002;
const DWORD		KEY_LEFT	= 0x00000004;
const DWORD		KEY_RIGHT	= 0x00000008;
const DWORD		KEY_SPACE	= 0x00000010;
const DWORD		KEY_RETURN	= 0x00000020;
const DWORD		KEY_LBUTTON = 0x00000040;
const DWORD		KEY_RBUTTON	= 0x00000080;
const DWORD		KEY_ESCAPE	= 0x00000100;
