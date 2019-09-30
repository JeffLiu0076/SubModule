/*

        Copyright (c) 2019 Digecor Pty Ltd - Brisbane, Australia

-----------------------------------------------------------------------------------------
/      Use of this software is bound by the conditions of your licensing agreement.     /
/	              This notice must not be removed or modified.							/
/--------------------------------------------------------------------------------------*/
/*!
  \file 	version.h

  \brief 	DTU Version History and version-related defines.

  <pre>

*/
#ifndef VERSION_H_
#define VERSION_H_

#include "config.h"

#define VERSION 			"0.00.01"			// Version string of the UVS code
#define BUILD_NR        	"01"                // Build number
#define VERSION_DATE		"30 July 2019"		// Date of this version
#define FULL_VERSION    	VERSION "." BUILD_NR    // Concatenated version & build number
#define BUILD_STRING		"Production Build"


#define TAS_PROGRAM_INFO	(\
							PROJECT_NAME " - v"   FULL_VERSION " - " VERSION_DATE " - Compiled "\
							__DATE__ " at " __TIME__ " - " BUILD_STRING\
							)
/*  MODIFICATION HISTORY:

Version	Who Date    Changes
-------	--- ------- ---------------------------------------------------------------------
0.01.00 JL	30Jul2019	First version
</pre>
*/

#endif /*VERSION_H_*/
