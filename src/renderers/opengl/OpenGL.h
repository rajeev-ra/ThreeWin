#pragma once

namespace THREE
{
	class OpenGL
	{
	public:
		OpenGL();
		~OpenGL();

	public:
		GLuint createShader(const GLenum& shaderType) const;
		void ShaderSource(GLuint shader, GLsizei count, const char **string, const GLint *length);
		void CompileShader(GLuint shader);
		void GetShaderiv(GLuint shader, GLenum pname, GLint *params);
		void GetShaderInfoLog(GLuint shader, GLsizei maxLength, GLsizei *length, const char *infoLog);

	public:
		const GLenum COMPILE_STATUS = 35713;
		const GLenum INFO_LOG_LENGTH = 35716;

	private:
		void* GetGLFuncAddress(const char*);

	private:
		void* m_glCreateShader, 
			*m_glShaderSource, 
			*m_glCompileShader,
			*m_glGetShaderiv,
			*m_glGetShaderInfoLog;
		HMODULE m_module;
	};

	extern OpenGL gl;
}