#include "stdafx.h"

const char dithering_fragment[] = 

"#if defined( DITHERING )			\
  gl_FragColor.rgb = dithering( gl_FragColor.rgb );			\
#endif			\
"
;