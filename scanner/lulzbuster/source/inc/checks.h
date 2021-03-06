/*******************************************************************************
*                ____                     _ __                                 *
*     ___  __ __/ / /__ ___ ______ ______(_) /___ __                           *
*    / _ \/ // / / (_-</ -_) __/ // / __/ / __/ // /                           *
*   /_//_/\_,_/_/_/___/\__/\__/\_,_/_/ /_/\__/\_, /                            *
*                                            /___/ team                        *
*                                                                              *
* lulzbuster                                                                   *
* A very fast and smart web-dir/file enumeration tool written in C.            *
*                                                                              *
* FILE                                                                         *
* checks.h                                                                     *
*                                                                              *
* AUTHOR                                                                       *
* noptrix@nullsecurity.net                                                     *
*                                                                              *
*******************************************************************************/


#ifndef CHECKS_H
#define CHECKS_H


/*******************************************************************************
 * INCLUDES
 ******************************************************************************/


/* sys includes */


/* own includes */
#include "opts.h"
#include "http.h"


/*******************************************************************************
 * MACROS
 ******************************************************************************/


/*******************************************************************************
 * VARS
 ******************************************************************************/


/*******************************************************************************
 * FUNCTION PROTOTYPES
 ******************************************************************************/


/* cmdline argument check routines */
void check_argc(int);
void check_args();

/* opts check routines */
void check_opts(opts_T *);


#endif

