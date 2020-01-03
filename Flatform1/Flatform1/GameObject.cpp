#include "stdafx.h"
#include "GameObject.h"


CGameObject::CGameObject()
{
}


CGameObject::~CGameObject()
{
}

void CGameObject::SetPos(float fx, float fy)
{
	m_tInfo.fPosX = fx;
	m_tInfo.fPosY = fy;
}

void CGameObject::SetSize(float fcx, float fcy)
{
	m_tInfo.fCX = fcx;
	m_tInfo.fCY = fcy;
}

void CGameObject::Initialize()
{
}


int CGameObject::Update()
{
	return 0;
}

void CGameObject::Render(HDC hdc)
{
}

void CGameObject::Release()
{
}

void CGameObject::UpdateRect()
{
	m_tRect.left = m_tInfo.fPosX - m_tInfo.fCX*0.5;
	m_tRect.right = m_tInfo.fPosX + m_tInfo.fCX*0.5;
	m_tRect.top = m_tInfo.fPosY - m_tInfo.fCY*0.5;
	m_tRect.bottom = m_tInfo.fPosY - m_tInfo.fCY*0.5;
}
