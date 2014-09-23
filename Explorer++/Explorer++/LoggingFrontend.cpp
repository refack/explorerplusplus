/******************************************************************
 *
 * Project: Explorer++
 * File: LoggingFrontend.cpp
 * License: GPL - See LICENSE in the top level directory
 *
 * Provides a logging frontend for Pantheios. By default,
 * this frontend will enable all logging in debug mode,
 * and disable all logging in release mode. This setting
 * can then be changed dynamically.
 *
 * Written by David Erceg
 * www.explorerplusplus.com
 *
 *****************************************************************/

#include "stdafx.h"
#include "LoggingFrontend.h"


namespace
{
	bool g_EnableLogging =
#ifdef _DEBUG
		true;
#else
		false;
#endif;
}


bool NLoggingFrontend::CheckLoggingEnabled()
{
	return 0;
}

#pragma warning( disable: 4100 )
void NLoggingFrontend::EnableLogging(bool Enable)
{
}