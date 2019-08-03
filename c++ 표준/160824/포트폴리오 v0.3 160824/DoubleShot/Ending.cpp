#include "Ending.h"



void CEnding::Initialize()
{
	m_iX = 0;
	m_iY = 0;
	m_iX = 0;
	m_iY = 0;
	m_pString = "";
	m_pChar[0] = "         @@@@@@@@                  @@@@@              @@@@@      @@@@@       @@@@@@@@@@@@@@@@     @@@@@@@@";
	m_pChar[1] = "      @@@       @@@@             @@@  @@@           @@@   @@@  @@@   @@@     @@@                 @@";
	m_pChar[2] = "    @@@                         @@@    @@@         @@@     @@  @@     @@@    @@@";
	m_pChar[3] = "   @@@                         @@@      @@@        @@@      @@@@      @@@    @@@";
	m_pChar[4] = "   @@@                        @@@        @@@       @@@       @@       @@@    @@@@@@@@@@@@@@@@";
	m_pChar[5] = "   @@@       @@@@@@@@@       @@@@@@@@@@@@@@@@      @@@       @@       @@@    @@@";
	m_pChar[6] = "   @@@             @@@      @@@            @@@     @@@       @@       @@@    @@@";
	m_pChar[7] = "    @@@           @@@      @@@              @@@    @@@       @@       @@@    @@@";
	m_pChar[8] = "     @@@         @@@      @@@               @@@    @@@       @@       @@@    @@@";
	m_pChar[9] = "       @@@@@@@@@@@@       @@@               @@@    @@@       @@       @@@    @@@@@@@@@@@@@@@@";
	m_pChar[10] = "								";
}

void CEnding::Progress()
{
	m_dwKey = CKeyMgr::GetInst()->GetKey();
	if (m_dwKey & KEY_SPACE)
		CSceneMgr::GetInst()->SetScene(IDS_LOGO);
}

void CEnding::Render()
{
	CDoubleBuffer::GetInst()->WriteBuffer(0, 0, m_pString);

	for (int i = 0; i < 10; i++)
	{
		CDoubleBuffer::GetInst()->WriteBuffer(m_iX + 20, (m_iY + 15) + i, m_pChar[i]);
	}

	for (int i = 0; i < 11; i++)
	{
		CDoubleBuffer::GetInst()->WriteBuffer(m_iX + 40, (m_iY + 27) + i, m_pChar[i]);
	}

}


void CEnding::Release()
{
}

CEnding::CEnding()
{
}


CEnding::~CEnding()
{
}
