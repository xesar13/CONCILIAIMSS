// stdafx.h: archivo de inclusi�n para archivos de inclusi�n est�ndar del sistema,
// o archivos de inclusi�n espec�ficos del proyecto utilizados frecuentemente,
// pero cambiados rara vez

#pragma once

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN		// Excluir material rara vez utilizado de encabezados de Windows
#endif

// Modificar las siguientes secciones define si su objetivo es una plataforma distinta a las especificadas a continuaci�n.
// Consulte la referencia MSDN para obtener la informaci�n m�s reciente sobre los valores correspondientes a diferentes plataformas.
#ifndef WINVER				// Permitir el uso de caracter�sticas espec�ficas de Windows 95 y Windows NT 4 o posterior.
#define WINVER 0x0400		// Cambiar para establecer el valor apropiado para Windows 98 y Windows 2000 o posterior.
#endif

#ifndef _WIN32_WINNT		// Permitir el uso de caracter�sticas espec�ficas de Windows NT 4 o posterior.
#define _WIN32_WINNT 0x0400		// Cambiar para establecer el valor apropiado para Windows 98 y Windows 2000 o posterior.
#endif						

#ifndef _WIN32_WINDOWS		// Permitir el uso de caracter�sticas espec�ficas de Windows 98 o posterior.
#define _WIN32_WINDOWS 0x0410 // Cambiar para establecer el valor apropiado para Windows Me o posterior.
#endif

#ifndef _WIN32_IE			// Permitir el uso de caracter�sticas espec�ficas de Internet Explorer 4.0 o posterior.
#define _WIN32_IE 0x0400	// Cambiar para establecer el valor apropiado para IE 5.0 o posterior.
#endif

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS	// Algunos constructores CString ser�n expl�citos

// Desactiva la ocultaci�n de MFC para algunos mensajes de advertencia comunes y, muchas veces, omitidos de forma consciente
#define _AFX_ALL_WARNINGS

#include <afxwin.h>         // Componentes principales y est�ndar de MFC
#include <afxext.h>         // Extensiones de MFC
#include <afxdisp.h>        // Clases de automatizaci�n de MFC
 // Se requiere compatibilidad m�nima con bases de datos. No se selecciona ninguna vista.

#include <afxdtctl.h>		// Compatibilidad MFC para controles comunes de Internet Explorer 4
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// Compatibilidad MFC para controles comunes de Windows
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxdb.h>        // ODBC
