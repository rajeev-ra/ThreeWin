#include "stdafx.h"

const char displacementmap_pars_vertex[] = 

"#ifdef USE_DISPLACEMENTMAP			\
	uniform sampler2D displacementMap;			\
	uniform float displacementScale;			\
	uniform float displacementBias;			\
#endif			\
"
;