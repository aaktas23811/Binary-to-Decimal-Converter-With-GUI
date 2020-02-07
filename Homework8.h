
// Homework8.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CHomework8App:
// See Homework8.cpp for the implementation of this class
//

class CHomework8App : public CWinApp
{
public:
	CHomework8App();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CHomework8App theApp;