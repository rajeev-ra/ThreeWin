#include "stdafx.h"

const char defaultnormal_vertex[] = 

"vec3 transformedNormal = normalMatrix * objectNormal;			\
#ifdef FLIP_SIDED			\
	transformedNormal = - transformedNormal;			\
#endif			\
"
;