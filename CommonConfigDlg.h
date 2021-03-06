#pragma once


// CCommonConfigDlg 對話方塊

class CCommonConfigDlg : public CDialog
{
	DECLARE_DYNAMIC(CCommonConfigDlg)

public:
	CCommonConfigDlg(UINT nIDTemplate, CWnd* pParent = NULL);
	virtual ~CCommonConfigDlg();

	virtual void DoCommand() = 0;
	virtual BOOL OnInitDialog();
protected:
	CButton *pCancelBtn;
	CButton *pAcceptBtn;

	DECLARE_MESSAGE_MAP()
};

// CConfigDGPS 對話方塊
class CConfigDGPS : public CCommonConfigDlg
{
	DECLARE_DYNAMIC(CConfigDGPS)
public:
	CConfigDGPS(CWnd* pParent = NULL);   // 標準建構函式
	virtual ~CConfigDGPS() {};

	virtual void DoCommand();

	afx_msg void OnBnClickedOk();
	virtual BOOL OnInitDialog();

protected:
	BOOL m_bEnable;
	int m_nOverdueSeconds;
	int m_nAttribute;	
	
	DECLARE_MESSAGE_MAP()
};

// CConfigSmoothMode 對話方塊
class CConfigSmoothMode : public CCommonConfigDlg
{
	DECLARE_DYNAMIC(CConfigSmoothMode)
public:
	CConfigSmoothMode(CWnd* pParent = NULL);   // 標準建構函式
	virtual ~CConfigSmoothMode() {};

	virtual void DoCommand();

	afx_msg void OnBnClickedOk();
	virtual BOOL OnInitDialog();

protected:
	BOOL m_bEnable;
	int m_nAttribute;	
	
	DECLARE_MESSAGE_MAP()
};

// CConfigTimeStamping 對話方塊
class CConfigTimeStamping : public CCommonConfigDlg
{
	DECLARE_DYNAMIC(CConfigTimeStamping)
public:
	CConfigTimeStamping(CWnd* pParent = NULL);   // 標準建構函式
	virtual ~CConfigTimeStamping() {};

	virtual void DoCommand();

	afx_msg void OnBnClickedOk();
	virtual BOOL OnInitDialog();

protected:
	BOOL m_bEnable;
	BOOL m_bTiggerMode;
	int m_nAttribute;	
	
	DECLARE_MESSAGE_MAP()
};

// CConfigSBAS 對話方塊
class CConfigSBAS : public CCommonConfigDlg
{
	DECLARE_DYNAMIC(CConfigSBAS)
public:
	CConfigSBAS(CWnd* pParent = NULL);   // 標準建構函式
	virtual ~CConfigSBAS() {};

	virtual void DoCommand();

	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedEnableWaas();
	afx_msg void OnBnClickedEnableEgnos();
	afx_msg void OnBnClickedEnableMasa();
	afx_msg void OnBnClickedEnableGagan();
	afx_msg void OnBnClickedEnableAll();

	virtual BOOL OnInitDialog();

protected:
	BOOL m_bEnable;
	BOOL m_bRanging;
	BOOL m_bCorrection;
	int m_nUraMask;
	int m_nTrackingChannel;
	BOOL m_bWAAS;
	BOOL m_bEGNOS;
	BOOL m_bMSAS;
	BOOL m_bGAGAN;
	BOOL m_bAll;
	int m_nAttribute;

	DECLARE_MESSAGE_MAP()
};

// CConfigSAGPS 對話方塊
class CConfigSAEE : public CCommonConfigDlg
{
	DECLARE_DYNAMIC(CConfigSAEE)
public:
	CConfigSAEE(CWnd* pParent = NULL);   // 標準建構函式
	virtual ~CConfigSAEE() {};

	virtual void DoCommand();

	afx_msg void OnBnClickedOk();
	virtual BOOL OnInitDialog();

protected:
	int m_nEnable;
	int m_nAttribute;

	DECLARE_MESSAGE_MAP()
};

// CConfigQZSS 對話方塊
class CConfigQZSS : public CCommonConfigDlg
{
	DECLARE_DYNAMIC(CConfigQZSS)
public:
	CConfigQZSS(CWnd* pParent = NULL);   // 標準建構函式
	virtual ~CConfigQZSS() {};

	virtual void DoCommand();

	afx_msg void OnBnClickedOk();
	virtual BOOL OnInitDialog();

protected:
	BOOL m_bEnable;
	int m_nTrackingChannel;
	int m_nAttribute;

	DECLARE_MESSAGE_MAP()
};

// CConfigInterferenceDetectControl 對話方塊
class CConfigInterferenceDetectControl : public CCommonConfigDlg
{
	DECLARE_DYNAMIC(CConfigInterferenceDetectControl)
public:
	CConfigInterferenceDetectControl(CWnd* pParent = NULL);   // 標準建構函式
	virtual ~CConfigInterferenceDetectControl() {};

	virtual void DoCommand();

	afx_msg void OnBnClickedOk();
	virtual BOOL OnInitDialog();

protected:
	BOOL m_nMode;
	int m_nAttribute;

	DECLARE_MESSAGE_MAP()
};

// CConfigNMEABinaryOutputDestination 對話方塊
class CConfigNMEABinaryOutputDestination : public CCommonConfigDlg
{
	DECLARE_DYNAMIC(CConfigNMEABinaryOutputDestination)
public:
	CConfigNMEABinaryOutputDestination(CWnd* pParent = NULL);   // 標準建構函式
	virtual ~CConfigNMEABinaryOutputDestination() {};

	virtual void DoCommand();

	afx_msg void OnBnClickedOk();
	virtual BOOL OnInitDialog();

protected:
	BOOL m_nMode;
	int m_nAttribute;

	DECLARE_MESSAGE_MAP()
};

// CConfigParameterSearchEngineNumber 對話方塊
class CConfigParameterSearchEngineNumber : public CCommonConfigDlg
{
	DECLARE_DYNAMIC(CConfigParameterSearchEngineNumber)
public:
	CConfigParameterSearchEngineNumber(CWnd* pParent = NULL);   // 標準建構函式
	virtual ~CConfigParameterSearchEngineNumber() {};

	virtual void DoCommand();

	afx_msg void OnBnClickedOk();
	virtual BOOL OnInitDialog();
	afx_msg void OnCbnSelchangeMode();

protected:
	BOOL m_nMode;
	int m_nAttribute;

	DECLARE_MESSAGE_MAP()
};

// CConfigPositionFixNavigationMask 對話方塊
class CConfigPositionFixNavigationMask : public CCommonConfigDlg
{
	DECLARE_DYNAMIC(CConfigPositionFixNavigationMask)
public:
	CConfigPositionFixNavigationMask(CWnd* pParent = NULL);   // 標準建構函式
	virtual ~CConfigPositionFixNavigationMask() {};

	virtual void DoCommand();

	afx_msg void OnBnClickedOk();
	virtual BOOL OnInitDialog();
protected:
	int m_nMask1;
	int m_nMask2;
	int m_nAttribute;

	DECLARE_MESSAGE_MAP()
};

// ConfigRefTimeToGpsTimeDlg 對話方塊
class ConfigRefTimeToGpsTimeDlg : public CCommonConfigDlg
{
	DECLARE_DYNAMIC(ConfigRefTimeToGpsTimeDlg)
public:
	ConfigRefTimeToGpsTimeDlg(CWnd* pParent = NULL);   // 標準建構函式
	virtual ~ConfigRefTimeToGpsTimeDlg() {};

	virtual void DoCommand();

	afx_msg void OnBnClickedOk();
	virtual BOOL OnInitDialog();

protected:
	BOOL m_isEnable;
	int m_nYear;
	int m_nMonth;
	int m_nDay;
	int m_nAttribute;

	DECLARE_MESSAGE_MAP()
};

// ConfigGnssConstellationTypeDlg 對話方塊
class ConfigGnssConstellationTypeDlg : public CCommonConfigDlg
{
	DECLARE_DYNAMIC(ConfigGnssConstellationTypeDlg)
public:
	ConfigGnssConstellationTypeDlg(CWnd* pParent = NULL);   // 標準建構函式
	virtual ~ConfigGnssConstellationTypeDlg() {};

	virtual void DoCommand();

	afx_msg void OnBnClickedOk();
	virtual BOOL OnInitDialog();

protected:
	U16 m_mode;
	U08 m_attribute;

	DECLARE_MESSAGE_MAP()
};

// ConfigBinaryMeasurementDataOutDlg 對話方塊
class ConfigBinaryMeasurementDataOutDlg : public CCommonConfigDlg
{
	DECLARE_DYNAMIC(ConfigBinaryMeasurementDataOutDlg)
public:
	ConfigBinaryMeasurementDataOutDlg(CWnd* pParent = NULL);   // 標準建構函式
	virtual ~ConfigBinaryMeasurementDataOutDlg() {};

	virtual void DoCommand();

	afx_msg void OnBnClickedOk();
	virtual BOOL OnInitDialog();
protected:
	U08 m_rate;
	U08 m_measTime;
	U08 m_rawMeas;
	U08 m_svChStatus;
	U08 m_rcvChStatus;
	U08 m_subFrame;
	U08 m_attribute;

	DECLARE_MESSAGE_MAP()
};

// CConfigLeapSeconds 對話方塊
class CConfigLeapSeconds : public CCommonConfigDlg
{
	DECLARE_DYNAMIC(CConfigLeapSeconds)
public:
	CConfigLeapSeconds(CWnd* pParent = NULL);   // 標準建構函式
	virtual ~CConfigLeapSeconds() {};

	virtual void DoCommand();

	afx_msg void OnBnClickedOk();
	virtual BOOL OnInitDialog();

protected:
	U08 m_nLeapSeconds;
	int m_nAttribute;	
	
	DECLARE_MESSAGE_MAP()
};

// CConfigPowerMode 對話方塊
class CConfigPowerMode : public CCommonConfigDlg
{
	DECLARE_DYNAMIC(CConfigPowerMode)
public:
	CConfigPowerMode(CWnd* pParent = NULL);   // 標準建構函式
	virtual ~CConfigPowerMode() {};

	virtual void DoCommand();

	afx_msg void OnBnClickedOk();
	virtual BOOL OnInitDialog();

protected:
	U16 m_nPowerMode;
	int m_nAttribute;	
	
	DECLARE_MESSAGE_MAP()
};

// CConfigParamSearchEngineSleepCRiteria 對話方塊
class CConfigParamSearchEngineSleepCRiteria : public CCommonConfigDlg
{
	DECLARE_DYNAMIC(CConfigParamSearchEngineSleepCRiteria)
public:
	CConfigParamSearchEngineSleepCRiteria(CWnd* pParent = NULL);   // 標準建構函式
	virtual ~CConfigParamSearchEngineSleepCRiteria() {};

	virtual void DoCommand();

	afx_msg void OnBnClickedOk();
	virtual BOOL OnInitDialog();

protected:
	U08 m_nTrackedNumber;
	int m_nAttribute;	
	
	DECLARE_MESSAGE_MAP()
};

// CConfigDatumIndex 對話方塊
class CConfigDatumIndex : public CCommonConfigDlg
{
	DECLARE_DYNAMIC(CConfigDatumIndex)
public:
	CConfigDatumIndex(CWnd* pParent = NULL);   // 標準建構函式
	virtual ~CConfigDatumIndex() {};

	virtual void DoCommand();

	afx_msg void OnBnClickedOk();
	virtual BOOL OnInitDialog();

protected:
	U16 m_nDatumIndex;
	int m_nAttribute;	
	
	DECLARE_MESSAGE_MAP()
};

// CConfigUartPassThrough 對話方塊
/*
class CConfigUartPassThrough : public CCommonConfigDlg
{
	DECLARE_DYNAMIC(CConfigUartPassThrough)
public:
	CConfigUartPassThrough(CWnd* pParent = NULL);   // 標準建構函式
	virtual ~CConfigUartPassThrough() {};

	virtual void DoCommand();

	afx_msg void OnBnClickedOk();
	virtual BOOL OnInitDialog();

protected:
	U08 m_nPassThrough;
	
	DECLARE_MESSAGE_MAP()
};
*/
// CSUP800EraseUserDataDlg 對話方塊
class CSUP800EraseUserDataDlg : public CCommonConfigDlg
{
	DECLARE_DYNAMIC(CSUP800EraseUserDataDlg)
public:
	CSUP800EraseUserDataDlg(CWnd* pParent = NULL);   // 標準建構函式
	virtual ~CSUP800EraseUserDataDlg() {};

	virtual void DoCommand();

	afx_msg void OnBnClickedErase();
	virtual BOOL OnInitDialog();

protected:
	U08 m_nSector;
	
	DECLARE_MESSAGE_MAP()
};


// CSUP800WriteUserDataDlg 對話方塊
class CSUP800WriteUserDataDlg : public CCommonConfigDlg
{
	DECLARE_DYNAMIC(CSUP800WriteUserDataDlg)
public:
	CSUP800WriteUserDataDlg(CWnd* pParent = NULL);   // 標準建構函式
	virtual ~CSUP800WriteUserDataDlg() {};

	virtual void DoCommand();

	afx_msg void OnEnChangeInput();
	afx_msg void OnBnClickedWrite();
	afx_msg void OnBnClickedLoad();
	virtual BOOL OnInitDialog();

protected:
	U08 m_nSector;
	UINT16 m_nOffset;
	BinaryData m_binData;

	DECLARE_MESSAGE_MAP()
};


// CSUP800ReadUserDataDlg 對話方塊
class CSUP800ReadUserDataDlg : public CCommonConfigDlg
{
	DECLARE_DYNAMIC(CSUP800ReadUserDataDlg)
public:
	CSUP800ReadUserDataDlg(CWnd* pParent = NULL);   // 標準建構函式
	virtual ~CSUP800ReadUserDataDlg() {};

	virtual void DoCommand();

	afx_msg void OnEnChangeInput();
	afx_msg void OnBnClickedRead();
	afx_msg void OnBnClickedSave();
	virtual BOOL OnInitDialog();

protected:
	U08 m_nSector;
	U16 m_nOffset;
	U16 m_nDataSize;

	void ReadUserData();
	
	DECLARE_MESSAGE_MAP()
};

// CConfigureSignalDisturbanceStatusDlg 對話方塊
class CConfigureSignalDisturbanceStatusDlg : public CCommonConfigDlg
{
	DECLARE_DYNAMIC(CConfigureSignalDisturbanceStatusDlg)
public:
	CConfigureSignalDisturbanceStatusDlg(CWnd* pParent = NULL);   // 標準建構函式
	virtual ~CConfigureSignalDisturbanceStatusDlg() {};

	virtual void DoCommand();

	afx_msg void OnBnClickedOk();
	virtual BOOL OnInitDialog();

protected:
	U08 m_nOperationType;

	DECLARE_MESSAGE_MAP()
};

// CConfigureGpsUtcLeapSecondsInUtcDlg 對話方塊
class CConfigureGpsUtcLeapSecondsInUtcDlg : public CCommonConfigDlg
{
	DECLARE_DYNAMIC(CConfigureGpsUtcLeapSecondsInUtcDlg)
public:
	CConfigureGpsUtcLeapSecondsInUtcDlg(CWnd* pParent = NULL);   // 標準建構函式
	virtual ~CConfigureGpsUtcLeapSecondsInUtcDlg() {};

	virtual void DoCommand();

	afx_msg void OnBnClickedOk();
	virtual BOOL OnInitDialog();

protected:
	U16 m_nYear;
	U08 m_nMonth;
	S08 m_nLeapSeconds;
	S08 m_nInsertSecond;
	U08 m_attribute;


	DECLARE_MESSAGE_MAP()
};

// CConfigNoisePowerControlDlg 對話方塊
class CConfigNoisePowerControlDlg : public CCommonConfigDlg
{
	DECLARE_DYNAMIC(CConfigNoisePowerControlDlg)
public:
	CConfigNoisePowerControlDlg(CWnd* pParent = NULL);   // 標準建構函式
	virtual ~CConfigNoisePowerControlDlg() {};

	virtual void DoCommand();
	virtual BOOL OnInitDialog();

	afx_msg void OnCbnSelchangeMode();
	afx_msg void OnBnClickedOk();

protected:
	U08 m_nMode;
	U08 m_nDefault;
	U32 m_nValue;
	U08 m_attribute;

	DECLARE_MESSAGE_MAP()
};

// ConfigPowerSavingParametersRomDlg 對話方塊
class ConfigPowerSavingParametersRomDlg : public CCommonConfigDlg
{
	DECLARE_DYNAMIC(ConfigPowerSavingParametersRomDlg)
public:
	ConfigPowerSavingParametersRomDlg(CWnd* pParent = NULL);   // 標準建構函式
	virtual ~ConfigPowerSavingParametersRomDlg() {};

	virtual void DoCommand();

	afx_msg void OnBnClickedOk();
	virtual BOOL OnInitDialog();
	void SetRomMode(bool b) { m_bRomMode = b; }

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支援

	bool m_bRomMode;
	S16 m_param[9];
	U08 m_attribute;

	DECLARE_MESSAGE_MAP()
};

// CIqPlot 對話方塊
class CIqPlot : public CCommonConfigDlg
{
	DECLARE_DYNAMIC(CIqPlot)
public:
	CIqPlot(CWnd* pParent = NULL);   // 標準建構函式
	virtual ~CIqPlot() {};

	virtual void DoCommand();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedSend();

	virtual BOOL OnInitDialog();

protected:
	static U08 m_gnssType;
	static U16 m_nmeaSvid;
	static U08 m_rate;
	static BOOL m_bEnable;

	DECLARE_MESSAGE_MAP()
};



