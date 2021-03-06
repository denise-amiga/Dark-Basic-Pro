
//
// DBOFile Functions Header
//

#ifndef _DBOFILE_H_
#define _DBOFILE_H_

//////////////////////////////////////////////////////////////////////////////////////
// DBOFORMAT INCLUDE /////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
#include "DBOData.h"

#include "..\global.h"

/*
//#define DARKSDK __declspec ( dllexport )

#ifndef DARKSDK_COMPILE
	#define DARKSDK __declspec ( dllexport )
	#define DBPRO_GLOBAL 
#else
	#define DARKSDK static
	#define DBPRO_GLOBAL static
#endif
*/

/////////////////////////////////////////////////////////////////////////////////////
// EXTERN GLOBAL VARIABLES //////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////
extern char g_WindowsTempDirectory[_MAX_PATH];

DARKSDK int LoadDBOEx ( LPSTR pFilename, sObject** ppObject );
DARKSDK int SaveDBOEx ( LPSTR pFilename, sObject* pObject );

#endif _DBOFILE_H_