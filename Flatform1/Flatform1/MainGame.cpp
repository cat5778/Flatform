#include "stdafx.h"
#include "MainGame.h"
#include "Player.h"

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
	//m_objlist.push_back()
	
	return 0;
}

void CMainGame::Render()
{
	//TextOut(m_hdc, 200, 100, TEXT("MousePoint"), );
	TCHAR strMouse[64] = {};
	TCHAR strMouse2[64] = {};
	//wsprintf �����ڵ� ���ڿ��� ������Լ�
	wsprintf(strMouse, TEXT("MousePos X= %d Y= %d"), g_tArea.ptStart.x, g_tArea.ptStart.y);
	wsprintf(strMouse2, TEXT("MousePos X= %d Y= %d"), g_tArea.ptEnd.x, g_tArea.ptEnd.y);
	//lstrlen �����ڵ� ���ڿ��� ���̸� ���
	TextOut(m_hdc, 600, 30, strMouse, lstrlen(strMouse));
	TextOut(m_hdc, 600,60, strMouse2, lstrlen(strMouse2));
	if (!g_tArea.bStart)
	{
		MoveToEx(m_hdc, g_tArea.ptStart.x, g_tArea.ptStart.y, nullptr);
		LineTo(m_hdc, g_tArea.ptEnd.x, g_tArea.ptEnd.y);
	}
	
}

void CMainGame::Release()
{
	cout << "MainGameRelease" << endl;
}
