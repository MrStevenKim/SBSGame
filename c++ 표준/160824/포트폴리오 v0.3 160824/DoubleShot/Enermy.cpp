#include "Enermy.h"





void CEnermy::Initialize()
{
	m_Info = INFO(rand()%MAPX , rand()%MAPY);
	m_pStr = "¡Ú";
	
}

int CEnermy::Progress()
{
	m_Info.iX--;
	if (m_Info.iX == (MAPX))
	{	
		m_pStr = NULL;
		CEnermy::Initialize();
		
	}
	return 0;
	
}

void CEnermy::Render()
{
	CDoubleBuffer::GetInst()->WriteBuffer(m_Info.iX, m_Info.iY, m_pStr);
}

void CEnermy::Release()
{
}



CEnermy::CEnermy()
{
}


CEnermy::~CEnermy()
{
}
