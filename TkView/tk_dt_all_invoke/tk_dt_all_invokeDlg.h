
// tk_dt_all_invokeDlg.h : 头文件
//

#pragma once
#include "../tk_dt_dll/TKDetector.h"

#ifdef _DEBUG
#pragma comment(lib,"..\\Debug\\tk_dt_dll.lib")
#else
#pragma comment(lib,"..\\Release\\tk_dt_dll.lib")
#endif


// Ctk_dt_all_invokeDlg 对话框
class Ctk_dt_all_invokeDlg : public CDialog
{
// 构造
public:
	Ctk_dt_all_invokeDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_TK_DT_ALL_INVOKE_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持

public:
	CTkDetector m_tkDetector;


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};
