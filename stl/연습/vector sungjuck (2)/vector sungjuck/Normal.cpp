#include "Normal.h"
#include "Obj.h"
#include "Input.h"
#include "ObjMgr.h"
void CNormal::Initialize()
{
	cout <<"초기화" <<endl;
	
}

int CNormal::Progress()
{
	cout<<"진행"<<endl;
	return 0;
}

void CNormal::Render()
{
	

	cout <<"계속하시겠습니까? <Y/N>"<<endl;
	char ys;	cin>> ys;

	if(ys ==' Y' || ys == 'y')
	{
			system("cls");
		CSceneMgr::GetInstance()->SetScene(IDS_SELECT);
	}

	else
	{

		exit(0);
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
