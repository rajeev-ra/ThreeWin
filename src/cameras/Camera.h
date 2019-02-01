#pragma once

namespace THREE
{
	class Camera : public Object3D
	{
	public:
	public:
		Camera();
		Camera(const Camera& camera);
		~Camera();

	public:
		Matrix4& GetMatrixWorldInverse();
		Matrix4& GetProjectionMatrix();
		Matrix4& GetProjectionMatrixInverse();

	private:
		Matrix4 m_MatrixWorldInverse;
		Matrix4 m_ProjectionMatrix;
		Matrix4 m_ProjectionMatrixInverse;
	};
}