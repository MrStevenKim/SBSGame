#include "Logo.h"
#include "SceneMgr.h"
#include "DoubleBuffer.h"

CLogo::CLogo(void)
{
}


CLogo::~CLogo(void)
{
}


void CLogo::Initialize()
{
	m_iX = 0;
	m_iY = 0;
	m_pString = ".         .\n8 888888888o.            .8.          8 8888        8          .8.                   ,8.       ,8.          8 8888     ,88' 8 8888888888  \n8 8888    `^888.        .888.         8 8888        8         .888.                 ,888.     ,888.         8 8888    ,88'  8 8888        \n8 8888        `88.     :88888.        8 8888        8        :88888.               .`8888.   .`8888.        8 8888   ,88'   8 8888        \n8 8888         `88    . `88888.       8 8888        8       . `88888.             ,8.`8888. ,8.`8888.       8 8888  ,88'    8 8888        \n8 8888          88   .8. `88888.      8 8888        8      .8. `88888.           ,8'8.`8888,8^8.`8888.      8 8888 ,88'     8 888888888888\n8 8888          88  .8`8. `88888.     8 8888        8     .8`8. `88888.         ,8' `8.`8888' `8.`8888.     8 8888 88'      8 8888        \n8 8888         ,88 .8' `8. `88888.    8 8888888888888    .8' `8. `88888.       ,8'   `8.`88'   `8.`8888.    8 888888<       8 8888        \n8 8888        ,88'.8'   `8. `88888.   8 8888        8   .8'   `8. `88888.     ,8'     `8.`'     `8.`8888.   8 8888 `Y8.     8 8888        \n8 8888    ,o88P' .888888888. `88888.  8 8888        8  .888888888. `88888.   ,8'       `8        `8.`8888.  8 8888   `Y8.   8 8888        \n8 888888888P'   .8'       `8. `88888. 8 8888        8 .8'       `8. `88888. ,8'         `         `8.`8888. 8 8888     `Y8. 8 888888888888";
	
	m_pChar[0] = "    ,o888888o.    8 8888        8          .8.          8 888888888o.   ";
	m_pChar[1] = "   8888     `88.  8 8888        8         .888.         8 8888    `88.  ";
	m_pChar[2] = ",8 8888       `8. 8 8888        8        :88888.        8 8888     `88  ";
	m_pChar[3] = "88 8888           8 8888        8       . `88888.       8 8888     ,88  ";
	m_pChar[4] = "88 8888           8 8888        8      .8. `88888.      8 8888.   ,88'  ";
	m_pChar[5] = "88 8888           8 8888        8     .8`8. `88888.     8 888888888P'   ";
	m_pChar[6] = "88 8888           8 8888888888888    .8' `8. `88888.    8 8888`8b       ";
	m_pChar[7] = "`8 8888       .8' 8 8888        8   .8'   `8. `88888.   8 8888 `8b.     ";
	m_pChar[8] = "   8888     ,88'  8 8888        8  .888888888. `88888.  8 8888   `8b.   ";
	m_pChar[9] = "    `8888888P'    8 8888        8 .8'       `8. `88888. 8 8888     `88. ";


	m_tCount = GetTickCount();
	m_bCheck = true;
}

void CLogo::Porgress()
{
	DWORD tTime = 5000;
	
	if(m_iY == 5)
		m_bCheck = false;
	if(m_iY == 0)
		m_bCheck = true;

	if(m_bCheck)
	{
		m_iY++;
		Sleep(200);
	}
	else
	{
		m_iY--;
		Sleep(200);
	}

	if((m_tCount + tTime) < GetTickCount())
	{
		CSceneMgr::GetInstance()->SetScene(IDS_MENU);
	}
}

void CLogo::Render()
{
	CDoubleBuffer::GetInst()->WriteBuffer(0, 0, m_pString);

	for(int i = 0 ; i < 10 ; i++)
	{
		CDoubleBuffer::GetInst()->WriteBuffer(m_iX+20, (m_iY+15) + i, m_pChar[i]);
	}

	for(int i = 0 ; i < 10 ; i++)
	{
		CDoubleBuffer::GetInst()->WriteBuffer(m_iX+40, (m_iY+27) + i, m_pChar[i]);
	}

	for(int i = 0 ; i < 10 ; i++)
	{
		CDoubleBuffer::GetInst()->WriteBuffer(m_iX+60, (m_iY+39) + i, m_pChar[i]);
	}
}

void CLogo::Release()
{

}
