#include "Player.h"
#include "Include.h"

CPlayer::CPlayer(void)
{
}


CPlayer::~CPlayer(void)
{
	Release();
}

void CPlayer::Initialize()
{


	m_Info = new INFO(10, 10, 100, 100);
}

void CPlayer::Progress()
{
	cout << "CPlayer::Progress" << endl;
}

void CPlayer::Render()
{


	cout << "플레이어 위치:" << m_Info->iX << ", " << m_Info->iY <<"," 
		<< m_Info->iCX << ", " << m_Info->iCY << endl;
}

void CPlayer::Release()
{
	delete m_Info;
	m_Info = NULL;
}
