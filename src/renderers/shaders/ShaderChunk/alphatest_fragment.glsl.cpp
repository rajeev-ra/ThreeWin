#include "stdafx.h"

const char alphatest_fragment[] = 

"#ifdef ALPHATEST										\
	if ( diffuseColor.a < ALPHATEST ) discard;			\
#endif													\
"
;