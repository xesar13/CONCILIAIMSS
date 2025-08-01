	// Global.h: interface for the Global class.
//
//////////////////////////////////////////////////////////////////////
#ifndef GLOBAL_HPP

        #define GLOBAL_HPP



	#include <c_odbc.hpp>

	struct Global
	{
		CString user,
				serverPersonalSQL,
				serverPersonalPost,
				serverHuellasPost;	
		
	};

	#ifndef MAIN
		extern Global g;
		extern C_ODBC odbcDRP1,odbcDRP2;
		
		
	
		
		//extern DatosEmpresa datosEmpresa;
	#else

		Global g;
		
		C_ODBC odbcDRP1,odbcDRP2;
		
	

		//DatosEmpresa datosEmpresa;
		
	#endif

#endif

