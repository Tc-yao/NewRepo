
// LuaTest.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CLuaTestApp: 
// �йش����ʵ�֣������ LuaTest.cpp
//

class CLuaTestApp : public CWinApp
{
public:
	CLuaTestApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CLuaTestApp theApp;