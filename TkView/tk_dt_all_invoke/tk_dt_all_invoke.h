
// tk_dt_all_invoke.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// Ctk_dt_all_invokeApp:
// �йش����ʵ�֣������ tk_dt_all_invoke.cpp
//

class Ctk_dt_all_invokeApp : public CWinAppEx
{
public:
	Ctk_dt_all_invokeApp();

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern Ctk_dt_all_invokeApp theApp;