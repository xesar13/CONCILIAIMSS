// CONCILIAIMSSDoc.cpp: implementación de la clase CCONCILIAIMSSDoc
//

#include "stdafx.h"
#include "CONCILIAIMSS.h"

#include "CONCILIAIMSSDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCONCILIAIMSSDoc

IMPLEMENT_DYNCREATE(CCONCILIAIMSSDoc, CDocument)

BEGIN_MESSAGE_MAP(CCONCILIAIMSSDoc, CDocument)
END_MESSAGE_MAP()


// Construcción o destrucción de CCONCILIAIMSSDoc

CCONCILIAIMSSDoc::CCONCILIAIMSSDoc()
{
	// TODO: agregar aquí el código de construcción único

}

CCONCILIAIMSSDoc::~CCONCILIAIMSSDoc()
{
}

BOOL CCONCILIAIMSSDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: agregar aquí código de reinicio
	// (los documentos SDI volverán a utilizar este documento)

	return TRUE;
}




// Serialización de CCONCILIAIMSSDoc

void CCONCILIAIMSSDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: agregar aquí el código de almacenamiento
	}
	else
	{
		// TODO: agregar aquí el código de carga
	}
}


// Diagnósticos de CCONCILIAIMSSDoc

#ifdef _DEBUG
void CCONCILIAIMSSDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCONCILIAIMSSDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// Comandos de CCONCILIAIMSSDoc
