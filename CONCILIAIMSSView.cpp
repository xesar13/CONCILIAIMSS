// CONCILIAIMSSView.cpp: implementaci�n de la clase CCONCILIAIMSSView
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
	// Comandos de impresi�n est�ndar
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// Construcci�n o destrucci�n de CCONCILIAIMSSView

CCONCILIAIMSSView::CCONCILIAIMSSView()
{
	// TODO: agregar aqu� el c�digo de construcci�n

}

CCONCILIAIMSSView::~CCONCILIAIMSSView()
{
}

BOOL CCONCILIAIMSSView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: modificar aqu� la clase Window o los estilos cambiando
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

	// TODO: agregar aqu� el c�digo de dibujo para datos nativos
}


// Impresi�n de CCONCILIAIMSSView

BOOL CCONCILIAIMSSView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Preparaci�n predeterminada
	return DoPreparePrinting(pInfo);
}

void CCONCILIAIMSSView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: agregar inicializaci�n adicional antes de imprimir
}

void CCONCILIAIMSSView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: agregar limpieza despu�s de imprimir
}


// Diagn�sticos de CCONCILIAIMSSView

#ifdef _DEBUG
void CCONCILIAIMSSView::AssertValid() const
{
	CView::AssertValid();
}

void CCONCILIAIMSSView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCONCILIAIMSSDoc* CCONCILIAIMSSView::GetDocument() const // La versi�n de no depuraci�n es en l�nea
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCONCILIAIMSSDoc)));
	return (CCONCILIAIMSSDoc*)m_pDocument;
}
#endif //_DEBUG


// Controladores de mensaje de CCONCILIAIMSSView
