// KPU_FHMIPv6.h : main header file for the KPU_FHMIPV6 application
//

#if !defined(AFX_KPU_FHMIPV6_H__B6D537DF_2D51_4F88_AEA1_0D5F7F79E524__INCLUDED_)
#define AFX_KPU_FHMIPV6_H__B6D537DF_2D51_4F88_AEA1_0D5F7F79E524__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CKPU_FHMIPv6App:
// See KPU_FHMIPv6.cpp for the implementation of this class
//

class CKPU_FHMIPv6App : public CWinApp
{
public:
	CKPU_FHMIPv6App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CKPU_FHMIPv6App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CKPU_FHMIPv6App)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_KPU_FHMIPV6_H__B6D537DF_2D51_4F88_AEA1_0D5F7F79E524__INCLUDED_)
