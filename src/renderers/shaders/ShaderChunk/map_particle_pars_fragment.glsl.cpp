#include "stdafx.h"

const char map_particle_pars_fragment[] = 

"#ifdef USE_MAP			\
	uniform mat3 uvTransform;			\
	uniform sampler2D map;			\
#endif			\
"
;