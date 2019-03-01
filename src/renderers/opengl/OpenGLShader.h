#pragma once

namespace THREE
{
	class OpenGLShader
	{
	public:
		OpenGLShader(const GLenum& type, const char* shader);

		const GLint& get() const;

	private:
		GLint m_shader;
	};
}