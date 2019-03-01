#include "stdafx.h"
#include "OpenGL.h"
#include "OpenGLShader.h"

namespace THREE
{
	OpenGLShader::OpenGLShader(const GLenum& type, const char* shader)
	{
		GLint len[] = { strlen(shader) };
		m_shader = gl.createShader(type);
		gl.ShaderSource(m_shader, 1, &shader, len);
		gl.CompileShader(m_shader);

		GLint success = 0;
		gl.GetShaderiv(m_shader, gl.COMPILE_STATUS, &success);

		if (GL_FALSE == success)
		{
			GLint logSize = 0;
			gl.GetShaderiv(m_shader, gl.INFO_LOG_LENGTH, &logSize);

			char* log = (char*)alloca(logSize + 1);
			gl.GetShaderInfoLog(m_shader, logSize, &logSize, log);
		}
	}

	const GLint& OpenGLShader::get() const
	{
		return m_shader;
	}
}