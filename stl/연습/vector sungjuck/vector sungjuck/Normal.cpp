#include "Normal.h"
#include "Obj.h"
#include "Input.h"
#include "ObjFactory.h"
#include "Student.h"
void CNormal::Initialize()
{
	cout << "Normal 초기화" << endl;

}

void CNormal::Progress()
{
	cout << "Normal 진행" << endl;


}
void CNormal::Render()
{
	cout << "Normal 출력" << endl;;
	
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

void CNormal::Release()
{
}

CNormal::CNormal()
{
}


CNormal::~CNormal()
{
	Release();
}
