#pragma once

namespace THREE
{
	class Mesh : public Object3D
	{
	public:
	public:
		Mesh(const Geometry& geom, const Material& mat);
		Mesh(const Mesh& mesh);
		~Mesh();

	public:
	private:
		Geometry* m_pGeometry;
		Material* m_pMaterial;
	};
}