#include "stdafx.h"

const char emissivemap_pars_fragment[] = 

"#ifdef USE_EMISSIVEMAP			\
	uniform sampler2D emissiveMap;			\
#endif			\
"
;