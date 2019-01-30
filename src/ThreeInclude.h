#pragma once

#if defined(THREE_WIN_EXPORTS)
#define THREEDLL __declspec(dllexport)
#else
#define THREEDLL __declspec(dllimport)
#endif

#include "math\math.h"
#include "math\Matrix3.h"
#include "math\Matrix4.h"
#include "math\Vector3.h"
#include "math\Euler.h"
#include "math\Quaternion.h"


#include "core\Object3D.h"
#include "core\Geometry.h"

#include "materials\Material.h"

#include "objects\Mesh.h"

#include "renderers\OpenGLRenderer.h"