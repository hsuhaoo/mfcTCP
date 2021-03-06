
// mfcTCPDlg.h: 头文件
//

#pragma once
#include <vector>
using namespace std;
// CmfcTCPDlg 对话框
class CmfcTCPDlg : public CDialog
{
// 构造
public:
	CmfcTCPDlg(CWnd* pParent = NULL);	// 标准构造函数
	CString m_DestIPAddr;
	int m_DestPort;
	CString m_SendData;
	afx_msg void OnBnClickedButton1();
	CString m_RecvData;
	SOCKET sock,ns,s;
	afx_msg void OnBnClickedButton2();
	int m_MyPort;
	vector<CString> que;
// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCTCP_DIALOG };
#endif


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持
	virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton3();
};
