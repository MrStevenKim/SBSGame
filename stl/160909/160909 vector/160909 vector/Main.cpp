#include "Define.h"

class CStudent;



CStudent* CreateObj(int _ikor, int _ieng, int _imath);

class CStudent
{
private:
	INFO m_Info;
public:
	void Initialize()
	{
		m_Info.iKor = 10;
		m_Info.iEng = 20;
		m_Info.iMath = 30;
	}

	INFO GetInfo()
	{
		return m_Info;
	}
	void SetInfo(int _ikor, int _ieng, int _imath)
	{
		m_Info.iKor = _ikor;
		m_Info.iEng = _ieng;
		m_Info.iMath = _imath;
	}
};





int main()
{
	vector<CStudent*> pStudent;


	for(int i = 0 ; i < 5 ; i++)
	{
		CStudent* pObj = CreateObj(i * 1, i * 10, i * 100);
		pStudent.push_back(pObj);
	}
	

	for(vector<CStudent*>::iterator iter = pStudent.begin() ; iter != pStudent.end() ; ++iter)
	{
		cout << (*iter)->GetInfo().iKor << endl;
		cout << (*iter)->GetInfo().iEng << endl;
		cout << (*iter)->GetInfo().iMath << endl;
	}

	return 0;
}




CStudent* CreateObj(int _ikor, int _ieng, int _imath)
{
	CStudent* pObj = new CStudent;

	pObj->Initialize();
	pObj->SetInfo(_ikor, _ieng, _imath);

	return pObj;
}
