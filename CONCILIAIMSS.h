// CONCILIAIMSS.h: archivo de encabezado principal para la aplicaci�n CONCILIAIMSS
//
#pragma once

#ifndef __AFXWIN_H__
	#error incluye 'stdafx.h' antes de incluir este archivo para PCH
#endif

#include "resource.h"       // S�mbolos principales


// CCONCILIAIMSSApp:
// Consulte la secci�n CONCILIAIMSS.cpp para obtener informaci�n sobre la implementaci�n de esta clase
//

class CCONCILIAIMSSApp : public CWinApp
{
public:
	CCONCILIAIMSSApp();
	bool obtenerIps();


// Reemplazos
public:
	virtual BOOL InitInstance();

// Implementaci�n
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCONCILIAIMSSApp theApp;
