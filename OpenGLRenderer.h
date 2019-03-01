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

	private:
		BOOL InitGL();

	private:
		HWND m_hWnd;
		HWND m_parent;
		HDC m_hDC;
		HGLRC m_hRC;
	};
}