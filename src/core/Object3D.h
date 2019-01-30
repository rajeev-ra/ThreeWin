#pragma once

namespace THREE
{
	class Object3D
	{
	public:
	public:
		Object3D();
		Object3D(const Object3D& obj);
		~Object3D();

	public:
		Object3D& applyMatrix(const Matrix4& matrix);
		Object3D& applyQuaternion(const Quaternion& q);
		Object3D& setRotationFromAxisAngle(const Vector3& axis, const float& angle);
		Object3D& setRotationFromEuler(const Euler& e);
		Object3D& setRotationFromMatrix(const Matrix4& matrix);
		Object3D& setRotationFromQuaternion(const Quaternion& q);
		Object3D& rotateOnAxis(const Vector3& axis, const float& angle);
		Object3D& rotateOnWorldAxis(const Vector3& axis, const float& angle);
		Object3D& rotateX(const float& angle);
		Object3D& rotateY(const float& angle);
		Object3D& rotateZ(const float& angle);
		Object3D& translateOnAxis(const Vector3& axis, const float& distance);
		Object3D& translateX(const float& distance);
		Object3D& translateY(const float& distance);
		Object3D& translateZ(const float& distance);
		Vector3 localToWorld(const Vector3& vector);
		Vector3 worldToLocal(const Vector3& vector);
		Object3D& lookAt(const float& x, const float& y, const float& z);
		Object3D& add(Object3D* object);
		Object3D& remove(Object3D* object);
		Object3D& getObjectById(const char* id);
		Object3D& operator=(Object3D& obj) const;

	private:

	};
}