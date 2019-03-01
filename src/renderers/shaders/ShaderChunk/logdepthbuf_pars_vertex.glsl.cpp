#include "stdafx.h"

const char logdepthbuf_pars_vertex[] = 

"#ifdef USE_LOGDEPTHBUF			\
	#ifdef USE_LOGDEPTHBUF_EXT			\
		varying float vFragDepth;			\
	#else			\
		uniform float logDepthBufFC;			\
	#endif			\
#endif			\
"
;