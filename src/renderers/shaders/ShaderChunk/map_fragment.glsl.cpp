#include "stdafx.h"

const char map_fragment[] = 

"#ifdef USE_MAP			\
	vec4 texelColor = texture2D( map, vUv );			\
	texelColor = mapTexelToLinear( texelColor );			\
	diffuseColor *= texelColor;			\
#endif			\
"
;