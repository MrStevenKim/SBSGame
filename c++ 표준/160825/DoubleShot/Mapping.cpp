#include "Mapping.h"




void CMapping::Initialize()
{
}

int CMapping::Progress()
{
	return 0;
}

void CMapping::Render()
{
	for (int Y = 0; Y < MAPY; Y++)
	{
		for (int X = 0; X < MAPX; X++)
		{
			if (Y == (MAPY - 1) || Y == 0)
				CDoubleBuffer::GetInst()->WriteBuffer(0, Y, "¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			if (X == 0 || X == (MAPX - 1))
				CDoubleBuffer::GetInst()->WriteBuffer(X, Y, "¡á");
		}
	}
}

void CMapping::Release()
{
}

CMapping::CMapping()
{
}


CMapping::~CMapping()
{
}
