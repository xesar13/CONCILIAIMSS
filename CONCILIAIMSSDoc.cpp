// CONCILIAIMSSDoc.cpp: implementaci�n de la clase CCONCILIAIMSSDoc
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


// Construcci�n o destrucci�n de CCONCILIAIMSSDoc

CCONCILIAIMSSDoc::CCONCILIAIMSSDoc()
{
	// TODO: agregar aqu� el c�digo de construcci�n �nico

}

CCONCILIAIMSSDoc::~CCONCILIAIMSSDoc()
{
}

BOOL CCONCILIAIMSSDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: agregar aqu� c�digo de reinicio
	// (los documentos SDI volver�n a utilizar este documento)

	return TRUE;
}




// Serializaci�n de CCONCILIAIMSSDoc

void CCONCILIAIMSSDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: agregar aqu� el c�digo de almacenamiento
	}
	else
	{
		// TODO: agregar aqu� el c�digo de carga
	}
}


// Diagn�sticos de CCONCILIAIMSSDoc

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
