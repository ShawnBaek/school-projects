// KPU_FHMIPv6Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "KPU_FHMIPv6.h"
#include "KPU_FHMIPv6Dlg.h"
#include "Furthest.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CKPU_FHMIPv6Dlg dialog

//출력 부분
CKPU_FHMIPv6Dlg::CKPU_FHMIPv6Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(CKPU_FHMIPv6Dlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CKPU_FHMIPv6Dlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CKPU_FHMIPv6Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CKPU_FHMIPv6Dlg)
	DDX_Control(pDX, IDC_ANIMATE1, m_baby);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CKPU_FHMIPv6Dlg, CDialog)
	//{{AFX_MSG_MAP(CKPU_FHMIPv6Dlg)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_Mobility, OnMobility)
	ON_BN_CLICKED(IDC_Furthest, OnFurthest)
	ON_BN_CLICKED(IDC_Adaptive, OnAdaptive)
	ON_NOTIFY(NM_OUTOFMEMORY, IDC_PROGRESS2, OnTimeProgress)
	ON_NOTIFY(NM_OUTOFMEMORY, IDC_ANIMATE1, OnDownloadStreaming)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CKPU_FHMIPv6Dlg message handlers

BOOL CKPU_FHMIPv6Dlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	m_baby.Open(IDR_AVI2);
	m_baby.Play(0,-1,-1);
	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CKPU_FHMIPv6Dlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CKPU_FHMIPv6Dlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CKPU_FHMIPv6Dlg::OnFurthest() 
{
	Furthest FurthestMAP;
	
	m_baby.Play(0,-1,-1);
	
	
	// TODO: Add your control notification handler code here
	
}

void CKPU_FHMIPv6Dlg::OnMobility() 
{
	// TODO: Add your control notification handler code here
	m_baby.Play(0,-1,-1);
}



void CKPU_FHMIPv6Dlg::OnAdaptive() 
{
	// TODO: Add your control notification handler code here
	
}

void CKPU_FHMIPv6Dlg::OnTimeProgress(NMHDR* pNMHDR, LRESULT* pResult) 
{
	// TODO: Add your control notification handler code here
	
	*pResult = 0;
}

void CKPU_FHMIPv6Dlg::OnDownloadStreaming(NMHDR* pNMHDR, LRESULT* pResult) 
{
	// TODO: Add your control notification handler code here
	
	*pResult = 0;
}
