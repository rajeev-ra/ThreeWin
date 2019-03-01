#include "stdafx.h"
#include "OpenGL.h"

#define INIT_PROC(proc) m_##proc = GetGLFuncAddress("proc")

typedef GLuint(*GLUI_GLE)(GLenum);
typedef void(*V_GLUI_GLSZ_CCPP_GLIP)(GLuint, GLsizei, const char **, const GLint *);
typedef void(*V_GLUI)(GLuint);
typedef void(*V_GLUI_GLEN_GLIP)(GLuint, GLenum, GLint*);
typedef void(*V_GLUI_GLSZ_GLSZP_CCP)(GLuint, GLsizei, GLsizei*, const char*);

namespace THREE
{
	OpenGL::OpenGL()
	{
		INIT_PROC(glCreateShader);
		INIT_PROC(glShaderSource);
		INIT_PROC(glCompileShader);
		INIT_PROC(glGetShaderiv);
		INIT_PROC(glGetShaderInfoLog);
	}

	OpenGL::~OpenGL()
	{

	}

	void* OpenGL::GetGLFuncAddress(const char* name)
	{
		void *p = (void *)wglGetProcAddress(name);
		if (p == 0 || (p == (void*)0x1) || (p == (void*)0x2) || (p == (void*)0x3) || (p == (void*)-1))
		{
			p = (void *)GetProcAddress(m_module, name);
		}
		return p;
	}

	GLuint OpenGL::createShader(const GLenum& shaderType) const
	{
		return ((GLUI_GLE)m_glCreateShader)(shaderType);
	}

	void OpenGL::ShaderSource(GLuint shader, GLsizei count, const char **string, const GLint *length)
	{
		return ((V_GLUI_GLSZ_CCPP_GLIP)m_glShaderSource)(shader, count, string, length);
	}

	void OpenGL::CompileShader(GLuint shader)
	{
		return ((V_GLUI)m_glCompileShader)(shader);
	}

	void OpenGL::GetShaderiv(GLuint shader, GLenum pname, GLint *params)
	{
		return ((V_GLUI_GLEN_GLIP)m_glGetShaderiv)(shader, pname, params);
	}

	void OpenGL::GetShaderInfoLog(GLuint shader, GLsizei maxLength, GLsizei *length, const char *infoLog)
	{
		return((V_GLUI_GLSZ_GLSZP_CCP)m_glGetShaderInfoLog)(shader, maxLength, length, infoLog);
	}

	OpenGL gl;
}