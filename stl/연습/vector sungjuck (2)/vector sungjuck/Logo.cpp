#include "Logo.h"



void CLogo::Initialize()
{
		m_pChar[0] = "            @@@@@@              @@@@@@@";
		m_pChar[1] = "         @@@      @@@        @@@     @@@@";
		m_pChar[2] = "         @@@                @@@";
		m_pChar[3] = "          @@@@             @@@				";
		m_pChar[4] = "            @@@@@@         @@@					";
		m_pChar[5] = "                @@@@       @@@						";
		m_pChar[6] = "                 @@@        @@@         @@@";
		m_pChar[7] = "        @@@     @@@@          @@@      @@@";
		m_pChar[8] = "            @@@@                @@@@@@@@";
		m_pChar[9] = "";
}

int CLogo::Progress()
{

		
		return 0;
	
}

void CLogo::Render()
{
	for (int i = 0; i < 10; i++)
	{
		cout << m_pChar[i] << endl;
	}
	CSceneMgr::GetInstance()->SetScene(IDS_INPUT);
}

void CLogo::Release()
{
}

CLogo::CLogo()
{
}


CLogo::~CLogo()
{
	Release();
}
