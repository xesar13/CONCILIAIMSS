#pragma once


// CDlgMenuCONCILIAIMSS dialog

class CDlgMenuCONCILIAIMSS : public CDialog
{
	DECLARE_DYNAMIC(CDlgMenuCONCILIAIMSS)

public:
	CDlgMenuCONCILIAIMSS(CWnd* pParent = NULL);   // standard constructor
	virtual ~CDlgMenuCONCILIAIMSS();

// Dialog Data
	enum { IDD = IDD_DlgMenu };

	void muestraMenu();

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	void cargaDllCONCILIA(int IDDll, int iOpcion);
	void muestraMenuCargarInformacion();
	void muestraMenuConsultaInformacion();

};
