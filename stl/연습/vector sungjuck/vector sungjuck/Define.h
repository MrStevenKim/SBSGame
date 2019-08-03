#pragma once
const int MAX=128;
const int SUBJECT=3;

template<typename T>
inline void Safe_Delete(T& Temp)
{
	if (Temp)
	{
		delete Temp;
		Temp = NULL;
	}
}