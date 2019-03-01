#pragma once

namespace THREE
{
	class Matrix4;
	class Geometry;
	class BufferGeometry
	{
	public:
	public:
		BufferGeometry& setIndex(const unsigned int& index);
		const unsigned int& getIndex() const;
		
		BufferGeometry& addGroup(const unsigned int& start, const unsigned int& count, const unsigned int& materialIndex);
		BufferGeometry& clearGroups();
		BufferGeometry& setDrawRange(const unsigned int& start, const unsigned int& count);
		BufferGeometry& applyMatrix(const Matrix4& matrix);
		BufferGeometry& rotateX(const float& angle);
		BufferGeometry& rotateX(const float& angle);
		BufferGeometry& rotateZ(const float& angle);
		BufferGeometry& translate(const float& x, const float& y, const float& z);
		BufferGeometry& scale(const float& x, const float& y, const float& z);
		BufferGeometry& lookAt(const Vector3& position);
		BufferGeometry& center();
		BufferGeometry& merge(const BufferGeometry& geometry, const unsigned int& offset);
		BufferGeometry& fromGeometry(const Geometry& geometry);
		BufferGeometry& fromDirectGeometry(const Geometry& geometry);
		BufferGeometry& computeBoundingBox();
		BufferGeometry& computeBoundingSphere();
		BufferGeometry& computeFaceNormals();
		BufferGeometry& computeVertexNormals();

	};
}