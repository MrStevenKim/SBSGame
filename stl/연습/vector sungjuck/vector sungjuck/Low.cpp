#include "Low.h"



void CLow::Initialize()
{
	cout << "Low 초기화" << endl;
	Progress();
}

void CLow::Progress()
{
	cout << "Low 진행" <<endl;

	Render();
}

void CLow::Render()
{
	cout << "Low 출력"<<endl;

	

	char ys;
	cout << "계속하시겠습니까? Y/N " << endl;

	cin >> ys;

	if (ys == 'y' || ys == 'Y')
	{
		system("cls");
		CSceneMgr::GetInstance()->SetScene(IDS_SELECT);
	}
	else
	{
		system("cls");
		CSceneMgr::GetInstance()->SetScene(IDS_END);
	}
}

void CLow::Release()
{
}

CLow::CLow()
{
}


CLow::~CLow()
{
	Release();
}
