#pragma once

#include "CherryFont.h"
#include "CherryEditBackWnd.h"

///////////////////////////////////////////////////////////////////////////
///
/// \class		CCherryEdit
/// \brief		����Ʈ ��Ʈ��
/// \author		ogoons
/// \date		2013-07-10
/// \remark		
/// \section	
///
///////////////////////////////////////////////////////////////////////////

class AFX_EXT_CLASS CCherryEdit : public CEdit, public CCherryFont
{
	DECLARE_DYNAMIC(CCherryEdit)

// Constructors
public:
	CCherryEdit();
	CHERRY_RET Create(LPCTSTR lpszBackImagePath, COLORREF backColor, DWORD dwStyle, const RECT &rect, CWnd* pParentWnd, UINT nID);
	

// Attributes
protected:
	CCherryEditBackWnd	m_backWnd;
	CFont				m_font;

	COLORREF m_textColor;
	COLORREF m_backColor;

// Operations
public:
	void SetBackColor(COLORREF backColor);

	void SetCherryFont(LPCTSTR lpszFontName, float fFontSize, Color fontColor, DWORD dwFontStyle);
	BOOL SetCherryFont(CCherryFont *pCherryFont);
	void SetFontName(LPCTSTR lpszFontName);
	void SetFontSize(float fFontSize);
	void SetFontColor(Color fontColor);
	void SetFontStyle(DWORD dwFontStyle);

// Overridables
protected:
	virtual void PreSubclassWindow();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg HBRUSH CtlColor(CDC* /*pDC*/, UINT /*nCtlColor*/);

// Implementation
public:
	virtual ~CCherryEdit();

protected:
	DECLARE_MESSAGE_MAP()
};