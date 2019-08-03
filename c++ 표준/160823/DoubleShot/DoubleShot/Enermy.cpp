#include "Enermy.h"





void CEnermy::Initialize()
{
}

int CEnermy::Progress()
{
	return 0;
}

void CEnermy::Render()
{
	CDoubleBuffer::GetInst()->WriteBuffer(m_Info.iX, m_Info.iY, "¡Ú");
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
