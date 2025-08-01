// CONCILIAIMSSView.h: interfaz de la clase CCONCILIAIMSSView
//


#pragma once


class CCONCILIAIMSSView : public CView
{
protected: // Crear s�lo a partir de serializaci�n
	CCONCILIAIMSSView();
	DECLARE_DYNCREATE(CCONCILIAIMSSView)

// Atributos
public:
	CCONCILIAIMSSDoc* GetDocument() const;

// Operaciones
public:

// Reemplazos
	public:
	virtual void OnDraw(CDC* pDC);  // Reemplazado para dibujar esta vista
virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementaci�n
public:
	virtual ~CCONCILIAIMSSView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Funciones de asignaci�n de mensajes generadas
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Versi�n de depuraci�n en CONCILIAIMSSView.cpp
inline CCONCILIAIMSSDoc* CCONCILIAIMSSView::GetDocument() const
   { return reinterpret_cast<CCONCILIAIMSSDoc*>(m_pDocument); }
#endif

