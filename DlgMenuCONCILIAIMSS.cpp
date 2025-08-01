// DlgMenuCONCILIAIMSS.cpp : implementation file
//

#include "stdafx.h"
#include "CONCILIAIMSS.h"
#include "DlgMenuCONCILIAIMSS.h"

#include "C_Menu.hpp"
#include ".\dlgmenuconciliaimss.h"

#include "CargarDLL.h"
#include "ESTRUCTURASELPDLL.HPP"

#include "global.hpp"




// CDlgMenuCONCILIAIMSS dialog

IMPLEMENT_DYNAMIC(CDlgMenuCONCILIAIMSS, CDialog)
CDlgMenuCONCILIAIMSS::CDlgMenuCONCILIAIMSS(CWnd* pParent /*=NULL*/)
	: CDialog(CDlgMenuCONCILIAIMSS::IDD, pParent)
{
}

CDlgMenuCONCILIAIMSS::~CDlgMenuCONCILIAIMSS()
{
}

void CDlgMenuCONCILIAIMSS::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDlgMenuCONCILIAIMSS, CDialog)
END_MESSAGE_MAP()


// CDlgMenuCONCILIAIMSS message handlers

void CDlgMenuCONCILIAIMSS::muestraMenu()
{
	
	bool bSalir = true;



	while(bSalir)
	{
		
		char * OpcionesEscoger[]={	"   F1   CARGAR INFORMACION                ",
								    "   F2   CONSULTA DE INFORMACION CARGADA   ",	
								    "   F3   CONFRONTE DE INFORMACION          ",
								    "" };

		
//		OpcionesMenu[sizeof(OpcionesMenu)] = 0;
		
		int RespuestaMenu[]={ F1,F2,F3,0 };
		
		C_Menu xMenu("MENU PRINCIPAL",OpcionesEscoger,RespuestaMenu);
		
		switch(xMenu.OpcionSeleccionada())
		{
			case F1: 
				{
					muestraMenuCargarInformacion();
					//cargaDllCONCILIA(1, 1);		
				}
				break;
			
			case F2: 
				{
					muestraMenuConsultaInformacion();
					//cargaDllCONCILIA(3, 1);	
					
				}
				break;
			
			case F3: 
				{	
					cargaDllCONCILIA(6, 1);
				}
				break;
			
			case ESC:			
				bSalir=FALSE;
				break;
			default:
				break;
		}					
	}
	
	
}

BOOL CDlgMenuCONCILIAIMSS::OnInitDialog()
{
	CDialog::OnInitDialog();

	muestraMenu();

	DestroyWindow();

	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX Property Pages should return FALSE
}


void CDlgMenuCONCILIAIMSS::cargaDllCONCILIA(int IDDll, int iOpcion)
{
	char cParamEntrada1[1024]={0},cParamEntrada2[1024]={0}, cNombreDLL[20] = {0}, cNombreFunEntrada[20] = {0};
	CString sOpcion, sTexto;

	sOpcion.Format("%ld", iOpcion);

	memset(cParamEntrada1,0,sizeof(cParamEntrada1));
	memset(cParamEntrada2,0,sizeof(cParamEntrada2));
	
	sprintf(parametroEntrada1.server1, g.serverPersonalPost ); //contabilidadnueva
	sprintf(parametroEntrada1.flag1, sOpcion);
	sprintf(parametroEntrada1.usuario, "");

	sprintf(parametroEntrada1.server2, g.serverPersonalSQL); //personal


	sprintf(parametroEntrada1.server3, g.serverHuellasPost); //server huellas postgres


	memcpy(cParamEntrada1,&parametroEntrada1,sizeof(EstructurasElp));
	memcpy(cParamEntrada2,&parametroEntrada2,sizeof(EstructurasElp));

	sTexto.Format("CONCILIAIMSS0%ld.DLL", IDDll); sTexto.Trim();
	sprintf(cNombreDLL, "%s", sTexto);

	//AfxMessageBox(cNombreDLL);

	sTexto.Format("CONCILIAIMSS%02ld", IDDll); sTexto.Trim();
	sprintf(cNombreFunEntrada, "%s", sTexto);
	
		CargarDLL cargar(cNombreDLL,cNombreFunEntrada,cParamEntrada1,cParamEntrada2);	

}


void CDlgMenuCONCILIAIMSS::muestraMenuCargarInformacion()
{
	
	bool bSalir = true;
	int iOpcion=0;


	while(bSalir)
	{
		
		char * OpcionesEscoger[]={	"   F1   CARGADO AUTOMATICO                ",
								    "   F2   CARGAR INFORMACION IDSE MENSUAL   ",	
								    "   F3   CARGAR INFORMACION SUA            ",
									"   F4   CARGAR INFORMACION IDSE BIMESTRAL ",    
								    "" };

				
		int RespuestaMenu[]={ F1,F2,F3,F4,0 };
		
		C_Menu xMenu("MENU CARGAR INFORMACION",OpcionesEscoger,RespuestaMenu);
		
		switch(xMenu.OpcionSeleccionada())
		{
			case F1: 
				{
					cargaDllCONCILIA(2, 1);	
				}
				break;
			
			case F2: 
				{
					cargaDllCONCILIA(1, 1);		
				}
				break;

			case F3: 
				{
					cargaDllCONCILIA(3, 1);	
				}
				break;
			
			case F4: 
				{
					cargaDllCONCILIA(1, 2);
				}
				break;
			
			case ESC:			
				bSalir=FALSE;
				break;
			default:
				break;
		}					
	}
	
	
}


void CDlgMenuCONCILIAIMSS::muestraMenuConsultaInformacion()
{
	bool bSalir = true;
	int iOpcion=0;

	while(bSalir)
	{
		
		char * OpcionesEscoger[]={	"   F1   CONSULTA DE INFORMACION CARGADA        ",
								    "   F2   CONSULTA DE INFORMACION CONFRONTADA    ",	
								    "   F3   CONSULTA DIFERENCIAS CONFRONTA         ",
								    "" };

		
//		OpcionesMenu[sizeof(OpcionesMenu)] = 0;
		
		int RespuestaMenu[]={ F1,F2,F3,0 };
		
		C_Menu xMenu("MENU CONSULTA INFORMACION",OpcionesEscoger,RespuestaMenu);
		
		switch(xMenu.OpcionSeleccionada())
		{
			case F1: 
				{
					cargaDllCONCILIA(4, 1);		
				}
				break;
			
			case F2: 
				{
					cargaDllCONCILIA(4, 2);	
					
				}
				break;

			case F3: 
				{
					//AfxMessageBox("entra  f3");
					cargaDllCONCILIA(5, 1);	
				}
				break;
			
			case ESC:			
				bSalir=FALSE;
				break;
			default:
				break;
		}					
	}
	
	
}


