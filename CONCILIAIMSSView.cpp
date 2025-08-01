// CONCILIAIMSSView.cpp: implementación de la clase CCONCILIAIMSSView
//

#include "stdafx.h"
#include "CONCILIAIMSS.h"

#include "CONCILIAIMSSDoc.h"
#include "CONCILIAIMSSView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCONCILIAIMSSView

IMPLEMENT_DYNCREATE(CCONCILIAIMSSView, CView)

BEGIN_MESSAGE_MAP(CCONCILIAIMSSView, CView)
	// Comandos de impresión estándar
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// Construcción o destrucción de CCONCILIAIMSSView

CCONCILIAIMSSView::CCONCILIAIMSSView()
{
	// TODO: agregar aquí el código de construcción

}

CCONCILIAIMSSView::~CCONCILIAIMSSView()
{
}

BOOL CCONCILIAIMSSView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: modificar aquí la clase Window o los estilos cambiando
	//  CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// Dibujo de CCONCILIAIMSSView

void CCONCILIAIMSSView::OnDraw(CDC* /*pDC*/)
{
	CCONCILIAIMSSDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: agregar aquí el código de dibujo para datos nativos
}


// Impresión de CCONCILIAIMSSView

BOOL CCONCILIAIMSSView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Preparación predeterminada
	return DoPreparePrinting(pInfo);
}

void CCONCILIAIMSSView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: agregar inicialización adicional antes de imprimir
}

void CCONCILIAIMSSView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: agregar limpieza después de imprimir
}


// Diagnósticos de CCONCILIAIMSSView

#ifdef _DEBUG
void CCONCILIAIMSSView::AssertValid() const
{
	CView::AssertValid();
}

void CCONCILIAIMSSView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCONCILIAIMSSDoc* CCONCILIAIMSSView::GetDocument() const // La versión de no depuración es en línea
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCONCILIAIMSSDoc)));
	return (CCONCILIAIMSSDoc*)m_pDocument;
}
#endif //_DEBUG


// Controladores de mensaje de CCONCILIAIMSSView
