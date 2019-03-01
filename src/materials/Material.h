#pragma once

namespace THREE
{
	class Material
	{
	public:
		Material();
	public:
	public:
		std::string name;
		int id;
		bool fog;
		bool lights;
		int blending;
		int side;
		bool flatShading;
		int vertexColor;
		float opacity;
		bool transparent;

		int blendSrc;
		int blendDst;
		int blendEquation;
		int blendSrcAlpha;
		int blendDstAlpha;
		int blendEquationAlpha;

		int depthFunc;
		bool depthTest;
		bool depthWrite;

		std::vector<Plane> clippingPlanes;
		bool clipIntersection;
		bool clipShadows;

		int shadowSide;

		bool colorWrite;

		int precision; // override the renderer's default precision for this material

		bool polygonOffset;
		int polygonOffsetFactor;
		int polygonOffsetUnits;

		bool dithering;

		int alphaTest;
		bool premultipliedAlpha;

		bool visible;

		int userData;

		bool needsUpdate;

	private:
		static int material_id;
	};
}