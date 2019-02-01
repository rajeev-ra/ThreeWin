#pragma once

namespace THREE
{
	class THREEDLL OpenGLRenderer
	{
	public:
		OpenGLRenderer();
		~OpenGLRenderer();

		BOOL Init(HWND parent);
		HWND GetHWND();
		HWND GetParent();
		void Resize();
		void Render();
		void render(Scene& scene, Camera& camera);

	private:
		BOOL InitGL();

	private:
		HWND m_hWnd;
		HWND m_parent;
		HDC m_hDC;
		HGLRC m_hRC;

	private:
		Matrix4 m_projScreenMatrix;
		Vector4 m_currentViewport;
		Vector4	m_currentScissor;
		Frustrum m_frustum;
	};
}