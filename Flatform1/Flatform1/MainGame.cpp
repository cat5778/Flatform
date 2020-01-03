#include "stdafx.h"
#include "MainGame.h"


CMainGame::CMainGame()
{
}


CMainGame::~CMainGame()
{
}

void CMainGame::Initialize()
{
	m_hdc = GetDC(g_Whdc);
}

int CMainGame::Update()
{
	return 0;
}

void CMainGame::Render()
{
	//TextOut(m_hdc, 200, 100, TEXT("MousePoint"), );
	TCHAR strMouse[64] = {};
	TCHAR strMouse2[64] = {};
	//wsprintf 유니코드 문자열을 만드는함수
	wsprintf(strMouse, TEXT("MousePos X= %d Y= %d"), g_tArea.ptStart.x, g_tArea.ptStart.y);
	wsprintf(strMouse2, TEXT("MousePos X= %d Y= %d"), g_tArea.ptEnd.x, g_tArea.ptEnd.y);
	//lstrlen 유니코드 문자열의 길이를 출력
	TextOut(m_hdc, 600, 30, strMouse, lstrlen(strMouse));
	TextOut(m_hdc, 600,60, strMouse2, lstrlen(strMouse2));

}

void CMainGame::Release()
{
	cout << "MainGameRelease" << endl;
}
