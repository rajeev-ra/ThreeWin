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
#include "math\Vector4.h"
#include "math\Euler.h"
#include "math\Quaternion.h"
#include "math\Plane.h"
#include "math\Frustrum.h"

#include "core\Object3D.h"
#include "core\Geometry.h"

#include "cameras\Camera.h"

#include "materials\Material.h"
#include "materials\MeshBasicMaterial.h"
#include "materials\MeshLambertMaterial.h"

#include "objects\Mesh.h"

#include "scenes\Scene.h"

#include "renderers\OpenGLRenderer.h"
#include "renderers\opengl\OpenGLShadowMap.h"
#include "renderers\OpenGLWinRenderer.h"