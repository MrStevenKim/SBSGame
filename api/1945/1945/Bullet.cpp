#include "StdAfx.h"
#include "Bullet.h"
#include "Bridge1.h"

void CBullet::Initialize(void)
{
	m_tInfo.fCX = 30;
	m_tInfo.fCY = 30;

	if (m_pBridge1)
		m_pBridge1->Initialize();
}

int CBullet::Progress(void)
{
	if (m_pBridge1)
		m_pBridge1->Progress(m_tInfo);

	return 0;
}

void CBullet::Render(HDC hdc)
{
	if (m_pBridge1)
		m_pBridge1->Render(hdc);
}

void CBullet::Release(void)
{
	Safe_Delete(m_pBridge1);
}

CBullet::CBullet(void)
:m_pBridge1(NULL){
}


CBullet::~CBullet(void)
{
	Release();
}
