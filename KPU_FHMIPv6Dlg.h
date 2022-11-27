// KPU_FHMIPv6Dlg.h : header file
//

#if !defined(AFX_KPU_FHMIPV6DLG_H__3CF8D403_629A_49E9_8157_FA364D531D82__INCLUDED_)
#define AFX_KPU_FHMIPV6DLG_H__3CF8D403_629A_49E9_8157_FA364D531D82__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CKPU_FHMIPv6Dlg dialog

class CKPU_FHMIPv6Dlg : public CDialog
{
// Construction
public:
	CKPU_FHMIPv6Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CKPU_FHMIPv6Dlg)
	enum { IDD = IDD_KPU_FHMIPV6_DIALOG };
	CAnimateCtrl	m_baby;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CKPU_FHMIPv6Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CKPU_FHMIPv6Dlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void On_Furthest();
	afx_msg void OnMobility();
	afx_msg void OnFurthest();
	afx_msg void OnAdaptive();
	afx_msg void OnTimeProgress(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnDownloadStreaming(NMHDR* pNMHDR, LRESULT* pResult);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_KPU_FHMIPV6DLG_H__3CF8D403_629A_49E9_8157_FA364D531D82__INCLUDED_)
