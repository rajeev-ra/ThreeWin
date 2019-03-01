#include "stdafx.h"

const char tonemapping_fragment[] = 

"#if defined( TONE_MAPPING )			\
  gl_FragColor.rgb = toneMapping( gl_FragColor.rgb );			\
#endif			\
"
;