#include "stdafx.h"

const char color_fragment[] = 

"#ifdef USE_COLOR			\
	diffuseColor.rgb *= vColor;			\
#endif			\
"
;