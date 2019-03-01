#pragma once

namespace THREE
{
	typedef std::map<std::string, std::string> ShaderMap;
	class ShaderChunk
	{
	public:
		ShaderChunk();

	public:
		const char* GetShader(const char* id) const;

	private:
		static ShaderMap m_shaders;
	};
}