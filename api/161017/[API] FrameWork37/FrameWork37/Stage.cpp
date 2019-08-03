#include "StdAfx.h"
#include "Stage.h"
#include "ObjFactory.h"
#include "StageBack.h"
#include "Player.h"
#include "Device.h"
#include "Monster.h"
#include "ObjMgr.h"

CStage::CStage(void)
: m_pBackGround(NULL)
{
}

CStage::~CStage(void)
{
}

void CStage::Initialize( void )
{
	m_MapBmp["BackBuffer"] = (new CBitMap)->LoadBmp(L"../Texture/BackBuffer.bmp");
	m_MapBmp["BackGround"] = (new CBitMap)->LoadBmp(L"../Texture/Stage/Back/BackGround.bmp");

	//플레이어
	m_MapBmp["Player_STAND"] = (new CBitMap)->LoadBmp(L"../Texture/Stage/Player/Player.bmp");
	m_MapBmp["Player_UP"] = (new CBitMap)->LoadBmp(L"../Texture/Stage/Player/Player_UP.bmp");
	m_MapBmp["Player_DOWN"] = (new CBitMap)->LoadBmp(L"../Texture/Stage/Player/Player_DOWN.bmp");
	m_MapBmp["Player_LEFT"] = (new CBitMap)->LoadBmp(L"../Texture/Stage/Player/Player_LEFT.bmp");
	m_MapBmp["Player_RIGHT"] = (new CBitMap)->LoadBmp(L"../Texture/Stage/Player/Player_RIGHT.bmp");

	m_MapBmp["Monster"] = (new CBitMap)->LoadBmp(L"../Texture/Stage/Monster/Monster_5.bmp");


	// 사운드
	//CDevice::GetInstance()->LoadWave(L"../sound/Secret.wav");
	//CDevice::GetInstance()->LoadWave(L"../sound/Battle1.wav");
	CDevice::GetInstance()->LoadWave(L"../sound/Missile.wav");

	m_pBackGround = CObjFactory<CStageBack>::CreateObj();

	CObj*	pPlayer = CObjFactory<CPlayer>::CreateObj();
	m_ObjList[OBJ_PLAYER].push_back(pPlayer);

	((CStageBack*)m_pBackGround)->SetPlayer(pPlayer);




	for(int i = 0; i < 3; ++i)		//몬스터 생성 
	{
		CObj*	pMonster = CObjFactory<CMonster>::CreateObj(float(342), float(-TexCY + 900));
		m_ObjList[OBJ_MONSTER].push_back(pMonster);
	}

	CObj::SetBmp(&m_MapBmp);
	//CDevice::GetInstance()->SoundPlay(0, 1);
}

int CStage::Progress( void )
{
	m_pBackGround->Progress();

	for(int i = 0; i < OBJ_END; ++i)
	{
		for(list<CObj*>::iterator iter = m_ObjList[i].begin(); iter != m_ObjList[i].end(); ++iter)
		{
			(*iter)->Progress();

			CObjMgr::GetInst()->AddRenderObj(*iter);
		}
	}

	return 0;
}

void CStage::Render( HDC hdc )
{

	m_pBackGround->Render(m_MapBmp["BackBuffer"]->GetMemDC());
	CObjMgr::GetInst()->Render(m_MapBmp["BackBuffer"]->GetMemDC());
	

	//벡버퍼
	BitBlt(hdc, 0,0,WINCX, WINCY, 
		m_MapBmp["BackBuffer"]->GetMemDC(), 
		0,0,SRCCOPY);
		
	CObjMgr::GetInst()->Clear();
}

void CStage::Release( void )
{
	CStateObj::Release();
	Safe_Delete(m_pBackGround);

	for(int i = 0; i < OBJ_END; ++i)
	{
		for(list<CObj*>::iterator iter = m_ObjList[i].begin(); iter != m_ObjList[i].end(); ++iter)
		{
			Safe_Delete(*iter);
		}
		m_ObjList[i].clear();
	}
}
