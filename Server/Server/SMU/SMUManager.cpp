#include "stdafx.h"
#include "SMUManager.h"


SMUPool<HumanSMU>*	g_pHumanSMUPool = NULL;;

template<>
BOOL	SMUManager<HumanSMU>::HeartBeat(UINT uTime/* =0 */)
{
	return TRUE;
}



