// CONCILIAIMSS.cpp : define los comportamientos de las clases para la aplicación.
//

#define MAIN
#include "stdafx.h"
#include "CONCILIAIMSS.h"
//#include "MainFrm.h"


#include "CObteneripyBasedeDatos.cpp"
#include "sysservers.hpp"

#include "C_archiv.hpp"


#include "estruct.hpp"
#include "Global.hpp"





#include "ESTRUCTURASELPDLL.HPP"


#include "DlgMenuCONCILIAIMSS.h"



#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCONCILIAIMSSApp

BEGIN_MESSAGE_MAP(CCONCILIAIMSSApp, CWinApp)
	ON_COMMAND(ID_APP_ABOUT, OnAppAbout)
	// Comandos de documento estándar basados en archivo
	ON_COMMAND(ID_FILE_NEW, CWinApp::OnFileNew)
	ON_COMMAND(ID_FILE_OPEN, CWinApp::OnFileOpen)
	// Comando de configuración de impresión estándar
	ON_COMMAND(ID_FILE_PRINT_SETUP, CWinApp::OnFilePrintSetup)
END_MESSAGE_MAP()


// Construcción de CCONCILIAIMSSApp

CCONCILIAIMSSApp::CCONCILIAIMSSApp()
{
	// TODO: agregar aquí el código de construcción,
	// Colocar toda la inicialización importante en InitInstance
}


// El único objeto CCONCILIAIMSSApp

CCONCILIAIMSSApp theApp;

// Inicialización de CCONCILIAIMSSApp

BOOL CCONCILIAIMSSApp::InitInstance()
{
	// Windows XP requiere InitCommonControls() si un manifiesto de 
	// aplicación especifica el uso de ComCtl32.dll versión 6 o posterior para habilitar
	// estilos visuales. De lo contrario, se generará un error al crear ventanas.
	InitCommonControls();

	CWinApp::InitInstance();

	// Inicializar bibliotecas OLE
	if (!AfxOleInit())
	{
		AfxMessageBox(IDP_OLE_INIT_FAILED);
		return FALSE;
	}
	AfxEnableControlContainer();

	if(obtenerIps())
	{
		CDlgMenuCONCILIAIMSS xMenu;
		xMenu.DoModal();
	}

	return TRUE;
}



// Cuadro de diálogo CAboutDlg utilizado para el comando Acerca de

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Datos del cuadro de diálogo
	enum { IDD = IDD_ABOUTBOX };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Compatibilidad con DDX/DDV

// Implementación
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
END_MESSAGE_MAP()

// Comando de la aplicación para ejecutar el cuadro de diálogo
void CCONCILIAIMSSApp::OnAppAbout()
{
	CAboutDlg aboutDlg;
	aboutDlg.DoModal();
}


// Controladores de mensaje de CCONCILIAIMSSApp


bool CCONCILIAIMSSApp::obtenerIps()
{
	bool bFlag = true;
	char cadena[21];
	CString sqlTxt, sTexto, sCadena, sServerDrp1, sServerDrp2;

	CtrlOdbc ctrlOdbc;

	
	if (access("c:\\sys\\progs\\sysadmon.dat", 0) == 0 )
	{
		C_Archivo ctrl;
		ctrl.abrir("c:\\sys\\progs\\sysadmon.dat", &ctrlOdbc, sizeof(CtrlOdbc));
		ctrl.leer();		

		CWaitCursor cursor;
        memcpy(cadena, ctrlOdbc.server, 20);
        cadena[20] = 0;
        sServerDrp1 = cadena;
        sServerDrp1.Trim();
       // g.flagSqlServer = TRUE;
        memcpy(cadena, ctrlOdbc.dsn, 20);
        cadena[20] = 0;
        sServerDrp2 = cadena;
        sServerDrp2.Trim();


		if( !odbcDRP1.OpenWithNoDSN(sServerDrp1, "syspersonal", "d894dab691238a6b66b73b2a94abd3f5", "personal") )
		{
			if( !odbcDRP1.OpenWithNoDSN( sServerDrp2, "postgres", "admin", "personal"   ) )
			{
				AfxMessageBox("No se pudo conectar a los servidores de personal");
				bFlag = false;
			}

		}

		if( bFlag )
		{
			{ //servidor personal SQL
				sqlTxt.Format("select ip, bd from sapipsadmon where clave = %d", BDPERSONALSQLSERVER );
				
				CObteneripyBasedeDatos movtos(&odbcDRP1);

				if (!movtos.Exec(sqlTxt))
				{
					bFlag = false;
					AfxMessageBox("error al leer tablas de ips ");
				}
				else
				{
					movtos.activarCols();
					if (movtos.leer()>0L)
					{
						g.serverPersonalSQL.Format("%s", movtos.ip);
						g.serverPersonalSQL.Trim();		
					}
				}
			}	
			
			if( bFlag )
			{ //servidor personal POSTGRES
				sqlTxt.Format("select ip, bd from sapipsadmon where clave = %d", BDPERSONALPOSTGRESQL);
				CObteneripyBasedeDatos movtos(&odbcDRP1);

				if (!movtos.Exec(sqlTxt))
				{
					bFlag = false;
					AfxMessageBox("error al leer tablas de ips ");
				}
				else
				{
					movtos.activarCols();
					if (movtos.leer()>0L)
					{
						
						g.serverPersonalPost.Format("%s", movtos.ip);
						g.serverPersonalPost.Trim();	

					}
				}
			}	
				
			if( bFlag )
			{ //servidor personal POSTGRES
				sqlTxt.Format("select ip, bd from sapipsadmon where clave = %d", BDHUELLASEMPSPOSTGRESQL);
				CObteneripyBasedeDatos movtos(&odbcDRP1);

				if (!movtos.Exec(sqlTxt))
				{
					bFlag = false;
					AfxMessageBox("error al leer tablas de ips ");
				}
				else
				{
					movtos.activarCols();
					if (movtos.leer()>0L)
					{
						g.serverHuellasPost.Format("%s", movtos.ip);
						g.serverHuellasPost.Trim();		
					}
				}
			}	

			
		}
		else
		{
			AfxMessageBox("No se pudo establecer conexion con ningun servidor de personal");
			bFlag = false;
		}
	}
	
    
	return bFlag;


}

