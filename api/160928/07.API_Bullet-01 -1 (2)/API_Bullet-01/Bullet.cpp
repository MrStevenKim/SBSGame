#include "StdAfx.h"
#include "Bullet.h"

#include "Bridge.h"

CBullet::CBullet(void)
: m_pBridge(NULL)
{
}

CBullet::~CBullet(void)
{
	Release();
}

void CBullet::Initialize( void )
{
	m_tInfo.fCX = 30;
	m_tInfo.fCY = 30;

	if(m_pBridge)
		m_pBridge->Initialize();
}

int CBullet::Progress( void )
{
	if(m_pBridge)
		m_pBridge->Progress(m_tInfo);

	return 0;
}

void CBullet::Render( HDC hdc )
{
	if(m_pBridge)
		m_pBridge->Render(hdc);
}

void CBullet::Release( void )
{
	Safe_Delete(m_pBridge);
}
