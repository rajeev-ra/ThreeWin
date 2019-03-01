#include "stdafx.h"

const char alphamap_fragment[] = 

"#ifdef USE_ALPHAMAP										\
	diffuseColor.a *= texture2D( alphaMap, vUv ).g;			\
#endif														\
"
;