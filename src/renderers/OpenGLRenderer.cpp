#include "stdafx.h"
#include "OpenGLRenderer.h"

std::map<HWND, THREE::OpenGLRenderer*> g_ObjMap;

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	auto itr = g_ObjMap.find(hwnd);
	if(g_ObjMap.end() == itr)
		return DefWindowProc(hwnd, msg, wParam, lParam);

	switch (msg)
	{
	case WM_CLOSE:
		DestroyWindow(hwnd);
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		return DefWindowProc(hwnd, msg, wParam, lParam);
	}
	return 0;
}

THREE::OpenGLRenderer::OpenGLRenderer() : m_hWnd(NULL), m_parent(NULL), m_hDC(NULL)
{
	
}

THREE::OpenGLRenderer::~OpenGLRenderer()
{
	if (m_hWnd)
	{
		g_ObjMap.erase(m_hWnd);
		ReleaseDC(m_hWnd, m_hDC);
		wglDeleteContext(m_hRC);
		DestroyWindow(m_hWnd);
		m_hWnd = NULL;
	}
}

BOOL THREE::OpenGLRenderer::Init(HWND parent)
{
	m_parent = parent;
	const wchar_t renderWindowClassName[] = L"ThreeOpenGLRenderer";
	HINSTANCE hInstance = GetModuleHandle(NULL);
	WNDCLASSEX wc;
	MSG Msg;

	//Step 1: Registering the Window Class
	wc.cbSize = sizeof(WNDCLASSEX);
	wc.style = 0;
	wc.lpfnWndProc = WndProc;
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	wc.hInstance = hInstance;
	wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	wc.lpszMenuName = NULL;
	wc.lpszClassName = renderWindowClassName;
	wc.hIconSm = LoadIcon(NULL, IDI_APPLICATION);

	if (!RegisterClassEx(&wc))
	{
		return FALSE;
	}

	// Step 2: Creating the Window
	m_hWnd = CreateWindowEx(
		0,
		renderWindowClassName,
		renderWindowClassName,
		WS_CHILDWINDOW,
		CW_USEDEFAULT, CW_USEDEFAULT, 240, 120,
		parent, NULL, hInstance, NULL);

	if (m_hWnd == NULL)
	{
		return FALSE;
	}

	g_ObjMap.insert(std::make_pair(m_hWnd, this));
	ShowWindow(m_hWnd, SW_SHOW);
	UpdateWindow(m_hWnd);
	if (FALSE == InitGL())
	{
		return FALSE;
	}
	Resize();
	Render();
	return TRUE;
}

HWND THREE::OpenGLRenderer::GetHWND()
{
	return m_hWnd;
}

HWND THREE::OpenGLRenderer::GetParent()
{
	return m_parent;
}

void THREE::OpenGLRenderer::Resize()
{
	if (!m_hWnd) return;
	RECT rcParent;
	GetClientRect(m_parent, &rcParent);
	SetWindowPos(m_hWnd, NULL, rcParent.left, rcParent.top, rcParent.right - rcParent.left, rcParent.bottom - rcParent.top, SWP_NOZORDER);
	wglMakeCurrent(m_hDC, m_hRC);
	glViewport(0, 0, rcParent.right - rcParent.left, rcParent.bottom - rcParent.top);
	Render();
	wglMakeCurrent(NULL, NULL);
}

void THREE::OpenGLRenderer::Render()
{
	wglMakeCurrent(m_hDC, m_hRC);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2i(0, 1);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2i(-1, -1);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2i(1, -1);
	glEnd();
	glFlush();
	wglMakeCurrent(NULL, NULL);
}

BOOL THREE::OpenGLRenderer::InitGL()
{
	PIXELFORMATDESCRIPTOR pfd;
	memset(&pfd, 0, sizeof(pfd));
	pfd.nSize = sizeof(pfd);
	pfd.nVersion = 1;
	pfd.dwFlags = PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL;
	pfd.iPixelType = PFD_TYPE_RGBA;
	pfd.cColorBits = 32;

	m_hDC = GetDC(m_hWnd);
	int pf = ChoosePixelFormat(m_hDC, &pfd);
	if (pf == 0)
	{
		return FALSE;
	}

	if (SetPixelFormat(m_hDC, pf, &pfd) == FALSE)
	{
		return FALSE;
	}

	DescribePixelFormat(m_hDC, pf, sizeof(PIXELFORMATDESCRIPTOR), &pfd);

	m_hRC = wglCreateContext(m_hDC);
}
