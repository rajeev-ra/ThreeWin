#include "stdafx.h"

const char displacementmap_vertex[] = 

"#ifdef USE_DISPLACEMENTMAP			\
	transformed += normalize( objectNormal ) * ( texture2D( displacementMap, uv ).x * displacementScale + displacementBias );			\
#endif			\
"
;