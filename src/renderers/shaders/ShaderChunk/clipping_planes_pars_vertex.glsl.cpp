#include "stdafx.h"

const char clipping_planes_pars_vertex[] = 

"#if NUM_CLIPPING_PLANES > 0 && ! defined( PHYSICAL ) && ! defined( PHONG ) && ! defined( MATCAP )			\
	varying vec3 vViewPosition;			\
#endif			\
"
;