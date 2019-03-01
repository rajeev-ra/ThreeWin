#include "stdafx.h"

const char premultiplied_alpha_fragment[] = 

"#ifdef PREMULTIPLIED_ALPHA			\
	// Get get normal blending with premultipled, use with CustomBlending, OneFactor, OneMinusSrcAlphaFactor, AddEquation.			\
	gl_FragColor.rgb *= gl_FragColor.a;			\
#endif			\
"
;