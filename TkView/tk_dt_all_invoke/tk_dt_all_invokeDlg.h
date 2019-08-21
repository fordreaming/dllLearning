
// tk_dt_all_invokeDlg.h : ͷ�ļ�
//

#pragma once
#include "../tk_dt_dll/TKDetector.h"

#ifdef _DEBUG
#pragma comment(lib,"..\\Debug\\tk_dt_dll.lib")
#else
#pragma comment(lib,"..\\Release\\tk_dt_dll.lib")
#endif


// Ctk_dt_all_invokeDlg �Ի���
class Ctk_dt_all_invokeDlg : public CDialog
{
// ����
public:
	Ctk_dt_all_invokeDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_TK_DT_ALL_INVOKE_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��

public:
	CTkDetector m_tkDetector;


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};
