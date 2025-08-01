// MainFrm.h: interfaz de la clase CMainFrame
//


#pragma once
class CMainFrame : public CFrameWnd
{
	
protected: // Crear s�lo a partir de serializaci�n
	CMainFrame();
	DECLARE_DYNCREATE(CMainFrame)

// Atributos
public:

// Operaciones
public:

// Reemplazos
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// Implementaci�n
public:
	virtual ~CMainFrame();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:  // Miembros incrustados de la barra de control
	CStatusBar  m_wndStatusBar;
	CToolBar    m_wndToolBar;

// Funciones de asignaci�n de mensajes generadas
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	DECLARE_MESSAGE_MAP()
};


