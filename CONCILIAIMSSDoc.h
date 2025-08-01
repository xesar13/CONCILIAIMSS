// CONCILIAIMSSDoc.h: interfaz de la clase CCONCILIAIMSSDoc
//


#pragma once

class CCONCILIAIMSSDoc : public CDocument
{
protected: // Crear sólo a partir de serialización
	CCONCILIAIMSSDoc();
	DECLARE_DYNCREATE(CCONCILIAIMSSDoc)

// Atributos
public:

// Operaciones
public:

// Reemplazos
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// Implementación
public:
	virtual ~CCONCILIAIMSSDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Funciones de asignación de mensajes generadas
protected:
	DECLARE_MESSAGE_MAP()
};


