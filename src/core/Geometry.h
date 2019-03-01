#pragma once

namespace THREE
{
	class Matrix4;
	class Vector2;
	class Vector3;
	class Mesh;
	class BufferGeometry;

	class Geometry
	{
	public:
		Geometry();
		~Geometry();

	public:
		Geometry& applyMatrix(const Matrix4& matrix);
		Geometry& rotateX(const float& angle);
		Geometry& rotateY(const float& angle);
		Geometry& rotateZ(const float& angle);
		Geometry& translate(const float& x, const float& y, const float& z);
		Geometry& scale(const float& x, const float& y, const float& z);
		Geometry& lookAt(const Vector3& vector);
		Geometry& fromBufferGeometry(const BufferGeometry& bufferGeometry);
		Geometry& center();
		Geometry& normalize();
		Geometry& computeFaceNormals();
		Geometry& computeVertexNormals();
		Geometry& computeFlatVertexNormals();
		Geometry& computeMorphNormals();
		Geometry& computeBoundingBox();
		Geometry& computeBoundingSphere();
		Geometry& mergeVertices();
		Geometry& sortFacesByMaterialIndex();
		Geometry& setFromPoints(const Vector2* points, const unsigned int count);
		Geometry& setFromPoints(const Vector3* points, const unsigned int count);
		Geometry& mergeMesh(const Mesh& mesh);
		Geometry& merge(const Geometry& geometry, const Matrix4& matrix, const int materialIndexOffset);
		Geometry& elementsNeedUpdate(const bool& val);
		Geometry& verticesNeedUpdate(const bool& val);
		Geometry& uvsNeedUpdate(const bool& val);
		Geometry& normalsNeedUpdate(const bool& val);
		Geometry& colorsNeedUpdate(const bool& val);
		Geometry& lineDistancesNeedUpdate(const bool& val);
		Geometry& groupsNeedUpdate(const bool& val);
		const bool& elementsNeedUpdate() const;
		const bool& verticesNeedUpdate() const;
		const bool& uvsNeedUpdate() const;
		const bool& normalsNeedUpdate() const;
		const bool& colorsNeedUpdate() const;
		const bool& lineDistancesNeedUpdate() const;
		const bool& groupsNeedUpdate() const;

	public:

	};
}