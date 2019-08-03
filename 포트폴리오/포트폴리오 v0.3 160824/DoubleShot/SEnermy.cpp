#include "SEnermy.h"





void CSEnermy::Initialize()
{
	m_Info = INFO(rand() % MAPX, rand() % MAPY);
	m_pStr = "¡Ú";

}

int CSEnermy::Progress()
{
	m_Info.iY--;
	if (m_Info.iY == MAPY-57)
	{
		m_pStr = NULL;
		CSEnermy::Initialize();
	}
	return 0;

}

void CSEnermy::Render()
{
	CDoubleBuffer::GetInst()->WriteBuffer(m_Info.iX, m_Info.iY, m_pStr);
}

void CSEnermy::Release()
{
}



CSEnermy::CSEnermy()
{
}


CSEnermy::~CSEnermy()
{
}
