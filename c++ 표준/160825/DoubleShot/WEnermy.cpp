#include "WEnermy.h"





void CWEnermy::Initialize()
{
	m_Info = INFO(rand() % MAPX, rand() % MAPY);
	m_pStr = "¡Ú";

}

int CWEnermy::Progress()
{
	m_Info.iX++;
	if (m_Info.iX == (MAPX-2))
	{
		m_pStr = NULL;
		CWEnermy::Initialize();

	}
	return 0;

}

void CWEnermy::Render()
{
	CDoubleBuffer::GetInst()->WriteBuffer(m_Info.iX, m_Info.iY, m_pStr);
}

void CWEnermy::Release()
{
}



CWEnermy::CWEnermy()
{
}


CWEnermy::~CWEnermy()
{
}
