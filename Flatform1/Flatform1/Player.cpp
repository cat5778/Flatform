#include "stdafx.h"
#include "Player.h"


CPlayer::CPlayer()
{
}


CPlayer::~CPlayer()
{
}

void CPlayer::Initialize()
{
	SetSize(50,50);
	SetPos(WinCX*0.5, WinCY*0.5);
}

int CPlayer::Update()
{
	UpdateRect();
	return 0;
}

void CPlayer::Render(HDC hdc)
{
	Rectangle(hdc, m_tRect.left, m_tRect.top, m_tRect.right, m_tRect.bottom);

}

void CPlayer::Release()
{
}
