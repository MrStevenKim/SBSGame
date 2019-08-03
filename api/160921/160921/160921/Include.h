#pragma once

extern HWND g_hWnd; //  메인에 잇는 g_hWnd을 공통적이게 사용할수 있게 할수 있다 즉 글로벌 변수 선언 extern

const int WINSIZEX = 800;
const int WINSIZEY = 600;

typedef struct tagInfo
{
	int iX;
	int iY;
	int iCX;
	int iCY;

	tagInfo(){};
	tagInfo(int _ix, int _iy):iX(_ix),iY(_iy){}
	tagInfo(int _ix, int _iy, int _icx, int _icy)
		:iX(_ix), iY(_iy),iCX(_icx), iCY(_icy){}
}INFO;