#include "stdafx.h"

const char specularmap_pars_fragment[] = 

"#ifdef USE_SPECULARMAP			\
	uniform sampler2D specularMap;			\
#endif			\
"
;