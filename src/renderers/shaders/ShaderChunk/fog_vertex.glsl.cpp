#include "stdafx.h"

const char fog_vertex[] = 

"#ifdef USE_FOG			\
	fogDepth = -mvPosition.z;			\
#endif			\
"
;