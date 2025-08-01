use contabilidadnueva 

GO

CREATE TABLE [dbo].[stmpconliquidaciondatosgenerales] ( 
    [regpat]             	char(11) NULL DEFAULT (''),
    [nada1]              	char(11) NULL DEFAULT (''),
    [nada2]              	char(1) NULL DEFAULT (''),
    [afiliacion]         	char(12) NULL DEFAULT (''),
    [nombre]             	char(52) NULL DEFAULT (''),
    [nada4]              	char(1) NULL DEFAULT (''),
    [nopropuesta]        	bigint NULL DEFAULT (0),
    [fecha]              	smalldatetime NULL DEFAULT ('19000101'),
    [prima]              	float NULL DEFAULT (0),
    [totalempleados]     	bigint NULL DEFAULT (0),
    [cuotafija]          	bigint NULL DEFAULT (0),
    [exedepat]           	bigint NULL DEFAULT (0),
    [exedeobrero]        	bigint NULL DEFAULT (0),
    [prestadineropat]    	bigint NULL DEFAULT (0),
    [prestadineroobrero] 	bigint NULL DEFAULT (0),
    [gastosmedpatron]    	bigint NULL DEFAULT (0),
    [gastosmedobrero]    	bigint NULL DEFAULT (0),
    [riesgotraba]        	bigint NULL DEFAULT (0),
    [invalidezvidapat]   	bigint NULL DEFAULT (0),
    [invalidezvidaobrero]	bigint NULL DEFAULT (0),
    [guarderias]         	bigint NULL DEFAULT (0),
    [nada5]              	char(5) NULL DEFAULT (''),
    [rfc]                	char(13) NULL DEFAULT (''),
    [domicilio]          	char(74) NULL DEFAULT (''),
    [nada6]              	char(5) NULL DEFAULT (''),
    [giro]               	char(41) NULL DEFAULT (''),
    [dias]               	bigint NULL DEFAULT (0),
    [nada7]              	char(5) NULL DEFAULT (''),
    [fecha1]             	smalldatetime NULL DEFAULT ('19000101'),
    [nada8]              	char(5) NULL DEFAULT (''),
    [fecha2]             	smalldatetime NULL DEFAULT ('1900101'),
    [conexion]           	bigint NULL,
    [fechaCorte]         	smalldatetime NOT NULL DEFAULT ('19000101') 
    )
GO



CREATE TABLE [dbo].[stmpconmovtosliquidacionimss] ( 
    [regpat]              	char(11) NULL DEFAULT (''),
    [nada1]               	char(11) NULL DEFAULT (''),
    [nada2]               	char(1) NULL DEFAULT (''),
    [afiliacion]          	char(11) NULL DEFAULT (''),
    [origen]              	char(1) NULL DEFAULT (''),
    [tipo]                	char(1) NULL DEFAULT (''),
    [fechamovto]          	smalldatetime NULL DEFAULT ('19000101'),
    [dias]                	int NULL DEFAULT (0),
    [saldiario]           	int NULL DEFAULT (0),
    [cuotafija]           	bigint NULL DEFAULT (0),
    [exedepatronal]       	bigint NULL DEFAULT (0),
    [exedeobrero]         	bigint NULL DEFAULT (0),
    [prestadineropatron]  	bigint NULL DEFAULT (0),
    [prestadineroobrero]  	bigint NULL DEFAULT (0),
    [gastosmedpatron]     	bigint NULL DEFAULT (0),
    [gastosmedobrero]     	bigint NULL DEFAULT (0),
    [riesgostrabajo]      	bigint NULL DEFAULT (0),
    [invalidezyvidapatron]	bigint NULL DEFAULT (0),
    [invalidezyvidaobrero]	bigint NULL DEFAULT (0),
    [guarderias]          	bigint NULL DEFAULT (0),
    [fechacorte]          	smalldatetime NULL DEFAULT ('19000101'),
    [conexion]            	bigint NULL 
    )
GO



CREATE TABLE [dbo].[stmpconmovtosliquidacionimssempleados] ( 
    [regpat]    	char(11) NULL DEFAULT (''),
    [nada1]     	char(11) NULL DEFAULT (''),
    [nada2]     	char(1) NULL DEFAULT (''),
    [afiliacion]	char(11) NULL DEFAULT (''),
    [nada3]     	char(1) NULL DEFAULT (''),
    [nombre]    	char(50) NULL DEFAULT (''),
    [nada4]     	char(3) NULL DEFAULT (''),
    [curp]      	char(18) NULL DEFAULT (''),
    [nada5]     	char(3) NULL DEFAULT (''),
    [fechacorte]	smalldatetime NULL DEFAULT ('19000101'),
    [conexion]  	bigint NULL 
    )
GO






CREATE TABLE [dbo].[stmpconliquidacionIMSSTotalesCarga] ( 
    [regpat]                	char(11) NOT NULL DEFAULT (''),
    [nombre]                	char(52) NOT NULL DEFAULT (''),
    [rfc]                   	char(13) NOT NULL DEFAULT (''),
    [domicilio]             	char(74) NOT NULL DEFAULT (''),
    [giro]                  	char(41) NOT NULL DEFAULT (''),
    [nopropuesta]           	bigint NOT NULL DEFAULT (0),
    [prima]                 	float NOT NULL DEFAULT (0),
    [totalempleados]        	bigint NOT NULL DEFAULT (0),
    [cuotafija]             	bigint NOT NULL DEFAULT (0),
    [exedepat]              	bigint NOT NULL DEFAULT (0),
    [exedeobrero]           	bigint NOT NULL DEFAULT (0),
    [prestadineropat]       	bigint NOT NULL DEFAULT (0),
    [prestadineroobrero]    	bigint NOT NULL DEFAULT (0),
    [gastosmedpatron]       	bigint NOT NULL DEFAULT (0),
    [gastosmedobrero]       	bigint NOT NULL DEFAULT (0),
    [riesgotraba]           	bigint NOT NULL DEFAULT (0),
    [invalidezvidapat]      	bigint NOT NULL DEFAULT (0),
    [invalidezvidaobrero]   	bigint NOT NULL DEFAULT (0),
    [guarderias]            	bigint NOT NULL DEFAULT (0),
    [dias]                  	bigint NOT NULL DEFAULT (0),
    [totalempleadosMov]     	bigint NOT NULL DEFAULT (0),
    [cuotafijaMov]          	bigint NOT NULL DEFAULT (0),
    [exedepatMov]           	bigint NOT NULL DEFAULT (0),
    [exedeobreroMov]        	bigint NOT NULL DEFAULT (0),
    [prestadineropatMov]    	bigint NOT NULL DEFAULT (0),
    [prestadineroobreroMov] 	bigint NOT NULL DEFAULT (0),
    [gastosmedpatronMov]    	bigint NOT NULL DEFAULT (0),
    [gastosmedobreroMov]    	bigint NOT NULL DEFAULT (0),
    [riesgotrabaMov]        	bigint NOT NULL DEFAULT (0),
    [invalidezvidapatMov]   	bigint NOT NULL DEFAULT (0),
    [invalidezvidaobreroMov]	bigint NOT NULL DEFAULT (0),
    [guarderiasMov]         	bigint NOT NULL DEFAULT (0),
    [diasMov]               	bigint NOT NULL DEFAULT (0),
    [totalempleadosDif]     	bigint NOT NULL DEFAULT (0),
    [cuotafijaDif]          	bigint NOT NULL DEFAULT (0),
    [exedepatDif]           	bigint NOT NULL DEFAULT (0),
    [exedeobreroDif]        	bigint NOT NULL DEFAULT (0),
    [prestadineropatDif]    	bigint NOT NULL DEFAULT (0),
    [prestadineroobreroDif] 	bigint NOT NULL DEFAULT (0),
    [gastosmedpatronDif]    	bigint NOT NULL DEFAULT (0),
    [gastosmedobreroDif]    	bigint NOT NULL DEFAULT (0),
    [riesgotrabaDif]        	bigint NOT NULL DEFAULT (0),
    [invalidezvidapatDif]   	bigint NOT NULL DEFAULT (0),
    [invalidezvidaobreroDif]	bigint NOT NULL DEFAULT (0),
    [guarderiasDif]         	bigint NOT NULL DEFAULT (0),
    [diasDif]               	bigint NOT NULL DEFAULT (0),
    [conexion]              	int NOT NULL DEFAULT (0),
    [totalPat]              	bigint NOT NULL DEFAULT (0),
    [totalMovtos]           	bigint NOT NULL DEFAULT (0),
    [totalDif]              	bigint NOT NULL DEFAULT (0),
    [fechaCorte]            	smalldatetime NOT NULL DEFAULT ('19000101'),
    [fechaAltaRegistro]     	smalldatetime NOT NULL DEFAULT (getdate()) 
    )
GO

CREATE TABLE [dbo].[conliquidaciondatosgenerales] ( 
    [regpat]             	char(11) NULL DEFAULT (''),
    [nada1]              	char(11) NULL DEFAULT (''),
    [nada2]              	char(1) NULL DEFAULT (''),
    [afiliacion]         	char(12) NULL DEFAULT (''),
    [nombre]             	char(52) NULL DEFAULT (''),
    [nada4]              	char(1) NULL DEFAULT (''),
    [nopropuesta]        	bigint NULL DEFAULT (0),
    [fecha]              	smalldatetime NULL DEFAULT ('19000101'),
    [prima]              	float NULL DEFAULT (0),
    [totalempleados]     	bigint NULL DEFAULT (0),
    [cuotafija]          	bigint NULL DEFAULT (0),
    [exedepat]           	bigint NULL DEFAULT (0),
    [exedeobrero]        	bigint NULL DEFAULT (0),
    [prestadineropat]    	bigint NULL DEFAULT (0),
    [prestadineroobrero] 	bigint NULL DEFAULT (0),
    [gastosmedpatron]    	bigint NULL DEFAULT (0),
    [gastosmedobrero]    	bigint NULL DEFAULT (0),
    [riesgotraba]        	bigint NULL DEFAULT (0),
    [invalidezvidapat]   	bigint NULL DEFAULT (0),
    [invalidezvidaobrero]	bigint NULL DEFAULT (0),
    [guarderias]         	bigint NULL DEFAULT (0),
    [nada5]              	char(5) NULL DEFAULT (''),
    [rfc]                	char(13) NULL DEFAULT (''),
    [domicilio]          	char(74) NULL DEFAULT (''),
    [nada6]              	char(5) NULL DEFAULT (''),
    [giro]               	char(41) NULL DEFAULT (''),
    [dias]               	bigint NULL DEFAULT (0),
    [nada7]              	char(5) NULL DEFAULT (''),
    [fecha1]             	smalldatetime NULL DEFAULT ('19000101'),
    [nada8]              	char(5) NULL DEFAULT (''),
    [fecha2]             	smalldatetime NULL DEFAULT ('1900101'),
    [keyx]               	int IDENTITY(1,1) NOT NULL,
    [fechaAltaRegistro]  	smalldatetime NOT NULL DEFAULT (getdate()),
    [fechaCorte]         	smalldatetime NOT NULL DEFAULT ('19000101') 
    )
GO



CREATE TABLE [dbo].[conmovtosliquidacionimssempleados] ( 
    [regpat]    	char(11) NULL DEFAULT (''),
    [nada1]     	char(11) NULL DEFAULT (''),
    [nada2]     	char(1) NULL DEFAULT (''),
    [afiliacion]	char(11) NULL DEFAULT (''),
    [nada3]     	char(1) NULL DEFAULT (''),
    [nombre]    	char(50) NULL DEFAULT (''),
    [nada4]     	char(3) NULL DEFAULT (''),
    [curp]      	char(18) NULL DEFAULT (''),
    [nada5]     	char(3) NULL DEFAULT (''),
    [fechacorte]	smalldatetime NULL DEFAULT ('19000101'),
    [keyx]      	int IDENTITY(1,1) NOT NULL 
    )
GO


CREATE TABLE [dbo].[conmovtosliquidacionimss] ( 
    [regpat]              	char(11) NULL DEFAULT (''),
    [nada1]               	char(11) NULL DEFAULT (''),
    [nada2]               	char(1) NULL DEFAULT (''),
    [afiliacion]          	char(11) NULL DEFAULT (''),
    [origen]              	char(1) NULL DEFAULT (''),
    [tipo]                	char(1) NULL DEFAULT (''),
    [fechamovto]          	smalldatetime NULL DEFAULT ('19000101'),
    [dias]                	int NULL DEFAULT (0),
    [saldiario]           	int NULL DEFAULT (0),
    [cuotafija]           	bigint NULL DEFAULT (0),
    [exedepatronal]       	bigint NULL DEFAULT (0),
    [exedeobrero]         	bigint NULL DEFAULT (0),
    [prestadineropatron]  	bigint NULL DEFAULT (0),
    [prestadineroobrero]  	bigint NULL DEFAULT (0),
    [gastosmedpatron]     	bigint NULL DEFAULT (0),
    [gastosmedobrero]     	bigint NULL DEFAULT (0),
    [riesgostrabajo]      	bigint NULL DEFAULT (0),
    [invalidezyvidapatron]	bigint NULL DEFAULT (0),
    [invalidezyvidaobrero]	bigint NULL DEFAULT (0),
    [guarderias]          	bigint NULL DEFAULT (0),
    [fechacorte]          	smalldatetime NULL DEFAULT ('19000101'),
    [keyx]                	int IDENTITY(1,1) NOT NULL 
    )
GO


CREATE TABLE [dbo].[stmpconLiquidaIMSSListadoErrores] ( 
    [claveError]       	int NOT NULL DEFAULT (0),
    [NombreArchivo]    	char(25) NOT NULL DEFAULT (''),
    [fechaCorte]       	smalldatetime NOT NULL DEFAULT ('19000101'),
    [DescripcionErr]   	char(30) NOT NULL DEFAULT (''),
    [RegistroPatronal] 	char(12) NULL,
    [fechaAltaRegistro]	smalldatetime NULL DEFAULT (getdate()) 
    )
GO




CREATE TABLE [dbo].[ConLiquidacionIMSSArchivos] ( 
    [NombreArchivo]    	char(22) NOT NULL DEFAULT (''),
    [fechaCorte]       	smalldatetime NOT NULL DEFAULT ('19000101'),
    [status]           	int NOT NULL DEFAULT (0),
    [fechaAltaRegistro]	smalldatetime NOT NULL DEFAULT (getdate()),
    [registroPatronal] 	char(12) NOT NULL DEFAULT (''),
    [Keyx]             	int IDENTITY(1,1) NOT NULL 
    )
GO



USE PERSONAL 
GO

CREATE TABLE [dbo].[stmpListadoDeArchivosLiquidacionIMSS] ( 
    [NombreArchivo]   	char(22) NULL,
    [CONEXION]        	int NULL,
    [registroPatronal]	char(12) NOT NULL DEFAULT ('') 
    )
GO







--CONCILIAIMSS03
USE CONTABILIDADNUEVA
GO


CREATE TABLE [dbo].[stmpsuamovimientospagosCONIMSS] ( 
    [regpatronal]  	char(11) NOT NULL DEFAULT (''),
    [numafiliacion]	char(11) NOT NULL DEFAULT (''),
    [clavemov]     	int NOT NULL DEFAULT (0),
    [fechamov]     	smalldatetime NOT NULL DEFAULT ('19000101'),
    [comenta]      	char(10) NOT NULL DEFAULT (''),
    [importe]      	int NOT NULL DEFAULT (0),
    [fechacorte]   	smalldatetime NOT NULL DEFAULT ('19000101'),
    [conexion]     	int NOT NULL DEFAULT (0) 
    )
GO


CREATE TABLE [dbo].[stmpsuamovimientospagossuaCONIMSS] ( 
    [Clave]           	char(2) NOT NULL DEFAULT (''),
    [registropatronal]	char(11) NOT NULL DEFAULT (''),
    [rfcempresa]      	char(13) NOT NULL DEFAULT (''),
    [fecha]           	smalldatetime NOT NULL DEFAULT ('19000101'),
    [afiliacion]      	char(11) NOT NULL DEFAULT (''),
    [rfctrabajador]   	char(13) NOT NULL DEFAULT (''),
    [curp]            	char(18) NOT NULL DEFAULT (''),
    [numerocredito]   	char(10) NOT NULL DEFAULT (''),
    [fechacredito]    	smalldatetime NOT NULL DEFAULT ('19000101'),
    [clavex]          	char(2) NOT NULL DEFAULT (''),
    [nombre]          	char(50) NOT NULL DEFAULT (''),
    [sdi]             	int NOT NULL DEFAULT (0),
    [clave02]         	char(2) NOT NULL DEFAULT (''),
    [diastrabajados]  	int NOT NULL DEFAULT (0),
    [clave03]         	char(2) NOT NULL DEFAULT (''),
    [cuotafija]       	int NOT NULL DEFAULT (0),
    [exedente]        	int NOT NULL DEFAULT (0),
    [pdinero]         	int NOT NULL DEFAULT (0),
    [gmp]             	int NOT NULL DEFAULT (0),
    [riesgotraba]     	int NOT NULL DEFAULT (0),
    [invalidez]       	int NOT NULL DEFAULT (0),
    [gps]             	int NOT NULL DEFAULT (0),
    [ceros01]         	char(7) NOT NULL DEFAULT (''),
    [diasbim]         	int NOT NULL DEFAULT (0),
    [diasincapa]      	int NOT NULL DEFAULT (0),
    [diasaucencia]    	int NOT NULL DEFAULT (0),
    [retiro]          	int NOT NULL DEFAULT (0),
    [ceros02]         	char(7) NOT NULL DEFAULT (''),
    [vejezempresa]    	int NOT NULL DEFAULT (0),
    [vejeztrabajador] 	int NOT NULL DEFAULT (0),
    [ceros03]         	char(7) NOT NULL DEFAULT (''),
    [ceros04]         	char(7) NOT NULL DEFAULT (''),
    [aportapat]       	int NOT NULL DEFAULT (0),
    [amortiza]        	int NOT NULL DEFAULT (0),
    [blancos]         	char(18) NOT NULL DEFAULT (''),
    [fechacorte]      	smalldatetime NOT NULL DEFAULT ('19000101'),
    [conexion]        	int NOT NULL DEFAULT (0) 
    )
GO

