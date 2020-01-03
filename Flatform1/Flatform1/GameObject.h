#pragma once
class CGameObject
{
public:
	CGameObject();
	virtual ~CGameObject();
public:
	INFO GetInfo() const { return m_tInfo; }
	void SetInfo(INFO val) { m_tInfo = val; }
	RECT GetRect() const { return m_tRect; }
	void SetRect(RECT val) { m_tRect = val; }
	void SetPos(float fx, float fy);
	void SetSize(float fcx, float fcy);
public:
	virtual void Initialize() = 0;
	virtual int Update() = 0;
	virtual void Render(HDC hdc) = 0;
	virtual void Release()=0;

public:
	void UpdateRect();
protected:
	INFO m_tInfo;
	RECT m_tRect;
	float m_fSpeed;
	float m_fRadian;
};

