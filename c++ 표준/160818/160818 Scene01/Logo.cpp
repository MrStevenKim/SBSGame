#include "Logo.h"
#include "SceneMgr.h"

CLogo::CLogo(void)
{
}


CLogo::~CLogo(void)
{
}

void CLogo::Initialize()
{
	cout << "CLogo::Initialize" << endl;
}

void CLogo::Progress()
{

}

void CLogo::Render()
{
	CSceneMgr::GetInst()->SetState(IDS_STAGE);
}

void CLogo::Release()
{

}
