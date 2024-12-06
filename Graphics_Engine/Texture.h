#pragma once

#include <string>
#include "gl.h"

class Texture
{

public:

	Texture();

	void Bind() const;
	bool Load(const std::string& filename);
	void Unbind() const;
	void Unload() const;

private:
	std::string m_texturePath;
	GLuint m_ID;

};