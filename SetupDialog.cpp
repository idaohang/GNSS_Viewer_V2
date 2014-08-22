// SetupDialog.cpp : ��@��
//

#include "stdafx.h"
#include "SetupDialog.h"
#include "resource.h"


// CSetupDialog ��ܤ��

IMPLEMENT_DYNAMIC(CSetupDialog, CDialog)

CSetupDialog::CSetupDialog(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_SETUP, pParent)
{
	setting = NULL;
}

CSetupDialog::~CSetupDialog()
{
}

void CSetupDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSetupDialog, CDialog)
	ON_BN_CLICKED(IDOK, &CSetupDialog::OnBnClickedOk)
	ON_BN_CLICKED(IDC_BROWSE, &CSetupDialog::OnBnClickedBrowse)
END_MESSAGE_MAP()


// CSetupDialog �T���B�z�`��
#define BOOST_BAUDIDX_BASE		5
void CSetupDialog::OnBnClickedOk()
{
	// TODO: �b���[�J����i���B�z�`���{���X
	CString s;
	GetDlgItem(IDC_BINSIZE_DELAY)->GetWindowText(s);
	if(s.IsEmpty())
	{
		setting->delayBeforeBinsize = 0;
	}
	else
	{
		setting->delayBeforeBinsize = atoi(s);
	}

	int boostBaudIdx = ((CComboBox*)GetDlgItem(IDC_BOOST_BAUDRATE))->GetCurSel() + BOOST_BAUDIDX_BASE;
	setting->boostBaudIndex = boostBaudIdx;

	setting->autoQueryVersion = ((CButton*)GetDlgItem(IDC_AUTO_QUERY_VERSION))->GetCheck();
	setting->boostEphemeris = ((CButton*)GetDlgItem(IDC_BOOST_EPHEMERIS))->GetCheck();
	setting->checkNmeaError = ((CButton*)GetDlgItem(IDC_CHECK_NMEA_ERR))->GetCheck();
	setting->downloadTesting = ((CButton*)GetDlgItem(IDC_DOWNLOAD_TEST))->GetCheck();
	setting->responseLog = ((CButton*)GetDlgItem(IDC_ENABLE_LOG))->GetCheck();
	((CEdit*)GetDlgItem(IDC_LOG_PATH))->GetWindowText(setting->responseLogPath);

	OnOK();
}

void CSetupDialog::OnBnClickedBrowse()
{
	CString fileName(setting->responseLogPath);	
	CFileDialog dlgFile(FALSE, _T("log"), fileName, OFN_HIDEREADONLY, _T("ALL Files (*.*)|*.*||"), this);
	INT_PTR nResult = dlgFile.DoModal();
	if(nResult == IDOK)
	{  				
		fileName = dlgFile.GetPathName();
		setting->responseLogPath = fileName;
		((CEdit*)GetDlgItem(IDC_LOG_PATH))->SetWindowText(fileName);
	}		
}

BOOL CSetupDialog::OnInitDialog()
{
	CDialog::OnInitDialog();

	if(setting==NULL)
	{
		return TRUE;
	}

	CString s;
	s.Format("%d", setting->delayBeforeBinsize);
	GetDlgItem(IDC_BINSIZE_DELAY)->SetWindowText(s);
	
	if(setting->boostBaudIndex >= BOOST_BAUDIDX_BASE)
	{
		((CComboBox*)GetDlgItem(IDC_BOOST_BAUDRATE))->SetCurSel(setting->boostBaudIndex - BOOST_BAUDIDX_BASE);
	}
	((CButton*)GetDlgItem(IDC_AUTO_QUERY_VERSION))->SetCheck(setting->autoQueryVersion);
	((CButton*)GetDlgItem(IDC_BOOST_EPHEMERIS))->SetCheck(setting->boostEphemeris);
	((CButton*)GetDlgItem(IDC_CHECK_NMEA_ERR))->SetCheck(setting->checkNmeaError);
	((CButton*)GetDlgItem(IDC_DOWNLOAD_TEST))->SetCheck(setting->downloadTesting);
	((CButton*)GetDlgItem(IDC_ENABLE_LOG))->SetCheck(setting->responseLog);
	((CEdit*)GetDlgItem(IDC_LOG_PATH))->SetWindowText(setting->responseLogPath);
	
	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX �ݩʭ����Ǧ^ FALSE
}