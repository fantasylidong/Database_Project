
// Job_Manage_System.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CJob_Manage_SystemApp:
// �йش����ʵ�֣������ Job_Manage_System.cpp
//

class CJob_Manage_SystemApp : public CWinApp
{
public:
	CJob_Manage_SystemApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CJob_Manage_SystemApp theApp;