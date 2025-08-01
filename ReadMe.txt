================================================================================
    BIBLIOTECA DE MICROSOFT FOUNDATION CLASS: CONCILIAIMSS Información general del proyecto
===============================================================================

El Asistente para aplicaciones ha creado esta CONCILIAIMSS aplicación para usted. Esta 
aplicación no sólo muestra los conceptos básicos para utilizar Microsoft Foundation Classes,
sino que también es un punto de partida para escribir su aplicación.

Este archivo contiene un resumen de lo que encontrará en cada uno de los archivos que
componen su CONCILIAIMSS aplicación.

CONCILIAIMSS.vcproj
    Este es el archivo de proyecto principal para proyectos de VC++ generados con un Asistente 
    para aplicaciones. Contiene información sobre la versión de Visual C++ que generó el archivo e 
    información acerca de las plataformas, las configuraciones y las características del proyecto
    seleccionadas con el Asistente para aplicaciones.

CONCILIAIMSS.h
    Este es el archivo de encabezado principal para la aplicación. Incluye otros
    encabezados específicos del proyecto (incluyendo Resource.h) y declara la
    clase de la aplicación CCONCILIAIMSSApp.

CONCILIAIMSS.cpp
    Este es el archivo de código fuente principal de la aplicación que contiene la
    clase de la aplicación CCONCILIAIMSSApp.

CONCILIAIMSS.rc
    Esta es una lista de todos los recursos de Microsoft Windows que utiliza
    el programa. Incluye los iconos, mapas de bits y cursores almacenados en el
    subdirectorio RES. Este archivo se puede editar directamente en Microsoft
    Visual C++. Los recursos del proyecto están en 3082.

res\CONCILIAIMSS.ico
    Este es un archivo de icono, que se utiliza como icono de la aplicación. El
    icono está incluido en el archivo de recursos principal CONCILIAIMSS.rc.

res\CONCILIAIMSS.rc2
    Este archivo contiene recursos no editados por Microsoft 
    Visual C++. Debe ubicar todos los recursos no editables por
    el editor de recursos en este archivo.
/////////////////////////////////////////////////////////////////////////////

Para la ventana de marco principal:
    El proyecto incluye una interfaz de MFC estándar.
MainFrm.h, MainFrm.cpp
    Estos archivos contienen la clase de marco CMainFrame, que deriva de
    CFrameWnd y controla todas las funciones de marco SDI.
res\Toolbar.bmp
    Este archivo de mapa de bits se utiliza para crear imágenes en mosaico para la barra de herramientas.
    La barra de herramientas y la barra de estado iniciales se construyen en la clase CMainFrame.
    Edite el mapa de bits de esta barra de herramientas con el editor de recursos y
    actualice la matriz IDR_MAINFRAME TOOLBAR en CONCILIAIMSS.rc para agregar
    botones de la barra de herramientas.
/////////////////////////////////////////////////////////////////////////////

El Asistente para aplicaciones crea un tipo de documento y una vista:

CONCILIAIMSSDoc.h, CONCILIAIMSSDoc.cpp - documento
    Estos archivos contienen la clase CCONCILIAIMSSDoc. Edite estos archivos para
    agregar sus datos de documentos especiales e implementar la carga y guardado de archivos
    (via CCONCILIAIMSSDoc::Serialize).
CONCILIAIMSSView.h, CONCILIAIMSSView.cpp - vista del documento
    Estos archivos contienen la clase CCONCILIAIMSSView.
    Los objetos CCONCILIAIMSSView se utilizan para ver objetos CCONCILIAIMSSDoc.
/////////////////////////////////////////////////////////////////////////////

Otras características:

Controles ActiveX
    La aplicación admite el uso de los controles ActiveX.

Compatibilidad para impresión y vista preliminar
    El Asistente para aplicaciones generó el código para controlar los comandos de impresión, de configuración
    de impresión y de vista preliminar llamando a las funciones miembro en la clase CView desde la biblioteca MFC.

Compatibilidad con bases de datos
    El Asistente para aplicaciones agregó el nivel básico de compatibilidad con bases de datos para el programa. 
    Sólo se han incluido los archivos necesarios.
/////////////////////////////////////////////////////////////////////////////
Otros archivos estándar:

StdAfx.h, StdAfx.cpp
    Estos archivos se utilizan para compilar un archivo de encabezado precompilado (PCH)
    denominado CONCILIAIMSS.pch y un archivo de tipos precompilados denominado StdAfx.obj.

Resource.h
    Este es el archivo de encabezado estándar, que define nuevos identificadores de recursos.
    Microsoft Visual C++ lee y actualiza este archivo.

/////////////////////////////////////////////////////////////////////////////

Otras notas:

El Asistente para aplicaciones utiliza "ToDo:" para indicar las partes del código fuente que
debe agregar o personalizar.

Si su aplicación utiliza MFC en un archivo DLL compartido y la aplicación está en un
idioma distinto al idioma actual del sistema operativo, será necesario copiar 
los recursos MFC70XXX.DLL localizados correspondientes del CD-ROM de Microsoft
Visual C++ bajo el directorio Win\System en el directorio del sistema o 
system32 de su equipo y cambiar el nombre a MFCLOC.DLL. ("XXX" corresponde a la 
abreviatura del idioma. Por ejemplo, MFC70DEU.DLL contiene recursos traducidos
al alemán.) Si no realiza esta operación, algunos de los elementos de la interfaz de usuario de
su aplicación permanecerán en el idioma del sistema operativo.

/////////////////////////////////////////////////////////////////////////////
