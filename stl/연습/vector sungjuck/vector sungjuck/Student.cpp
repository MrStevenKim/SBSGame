#include "Student.h"
#include "Include.h"


void CStudent::Initialize()
{
}

void CStudent::Progress()
{
}

void CStudent::Render()
{
}

void CStudent::Release()
{
}

INFO CStudent::GetInfo()
{
	return m_Info;
}

void CStudent::SetInfo(char* _iname, int _ikor, int _ieng, int _imath, int _itotal, float _iaverage)
{
	
		m_Info.iKOR = _ikor;
		m_Info.iENG = _ieng;
		m_Info.iMATH = _imath;
		m_Info.total = _itotal;
		m_Info.average = _iaverage;
		
}



CStudent::CStudent()
{
}


CStudent::~CStudent()
{
	Release();
}
