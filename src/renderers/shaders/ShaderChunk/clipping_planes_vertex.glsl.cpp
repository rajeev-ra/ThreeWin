#include "stdafx.h"

const char clipping_planes_vertex[] = 

"#if NUM_CLIPPING_PLANES > 0 && ! defined( PHYSICAL ) && ! defined( PHONG ) && ! defined( MATCAP )			\
	vViewPosition = - mvPosition.xyz;			\
#endif			\
"
;