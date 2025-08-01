// CONCILIAIMSS.h: archivo de encabezado principal para la aplicación CONCILIAIMSS
//
#pragma once

#ifndef __AFXWIN_H__
	#error incluye 'stdafx.h' antes de incluir este archivo para PCH
#endif

#include "resource.h"       // Símbolos principales


// CCONCILIAIMSSApp:
// Consulte la sección CONCILIAIMSS.cpp para obtener información sobre la implementación de esta clase
//

class CCONCILIAIMSSApp : public CWinApp
{
public:
	CCONCILIAIMSSApp();
	bool obtenerIps();


// Reemplazos
public:
	virtual BOOL InitInstance();

// Implementación
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCONCILIAIMSSApp theApp;
