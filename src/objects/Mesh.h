#pragma once

namespace THREE
{
	class Mesh : public Object3D
	{
	public:
	public:
		Mesh(const Geometry *pGeom = nullptr, const Material* pMat = nullptr);
		Mesh(const Mesh& mesh);
		~Mesh();

	public:
	private:
		Geometry* m_pGeometry;
		Material* m_pMaterial;
	};
}