// GetAlmanac.cpp : 實作檔
//

#include "stdafx.h"
#include "GPS.h"
#include "GetAlmanac.h"


// CGetAlmanac 對話方塊

IMPLEMENT_DYNAMIC(CGetAlmanac, CDialog)
CGetAlmanac::CGetAlmanac(CWnd* pParent /*=NULL*/)
	: CDialog(CGetAlmanac::IDD, pParent)
{
	isGlonass = 0;
}

CGetAlmanac::~CGetAlmanac()
{
}

void CGetAlmanac::DoDataExchange(CDataExchange* pDX)
{
	DDX_Control(pDX,IDC_ALMANAC_FILE,m_filename);
	DDX_Control(pDX,IDC_ALMANAC_SV,m_sv);
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CGetAlmanac, CDialog)
	ON_BN_CLICKED(IDC_ALMANAC_BROWSE, OnBnClickedAlmanacBrowse)
	ON_BN_CLICKED(IDOK, OnBnClickedOk)
END_MESSAGE_MAP()


// CGetAlmanac 訊息處理常式

void CGetAlmanac::OnBnClickedAlmanacBrowse()
{
	if (isGlonass == 0)
	{
		fileName = "GPS_Almanac.log";
	}
	else if (isGlonass == 1)
	{
		fileName = "Glonass_Almanac.log";
	}
	else if (isGlonass == 2)
	{
		fileName = "Beidou_Almanac.log";
	}

	CFileDialog dlgFile(false, _T("log"), fileName, OFN_HIDEREADONLY, _T("ALL Files (*.*)|*.*||"), this);
	INT_PTR nResult = dlgFile.DoModal();
	fileName = dlgFile.GetPathName();
	if(nResult == IDOK)
	{
		m_filename.SetWindowText(fileName);
	}
}

BOOL CGetAlmanac::OnInitDialog()
{
	CDialog::OnInitDialog();

	CString temp;
	m_sv.ResetContent();
	m_sv.AddString("All SVs");
	int svCount = 0;
	if (isGlonass == 0)
	{
		svCount = 32;
	}
	else if (isGlonass == 1)
	{
		svCount = 24;
	}		
	else if (isGlonass == 2)
	{
		svCount = 37;
	}	

	for(int i=0;i<svCount;i++)
	{
		temp.Format("SV #%d",i+1);
		m_sv.AddString(temp);
	}

	m_sv.SetCurSel(0);

	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX 屬性頁應傳回 FALSE
}

void CGetAlmanac::OnBnClickedOk()
{
	sv = m_sv.GetCurSel();
	OnOK();
}
