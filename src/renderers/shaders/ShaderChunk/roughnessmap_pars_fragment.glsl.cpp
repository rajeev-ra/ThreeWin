#include "stdafx.h"

const char roughnessmap_pars_fragment[] = 

"#ifdef USE_ROUGHNESSMAP			\
	uniform sampler2D roughnessMap;			\
#endif			\
"
;