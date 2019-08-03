#pragma once

#define PURE =0

const int WINCX = 800;
const int WINCY = 600;

const float	PI = 3.141592f;

extern HWND g_hWnd;


template <typename T>
static inline void Safe_Delete(T& temp)
{
	if(temp)
	{
		delete temp;
		temp = NULL;
	}
}