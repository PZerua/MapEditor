/**
* (c) 2017 Pablo Luis Garc�a. All rights reserved.
* Released under GPL v2 license. Read LICENSE for more details.
*/

#pragma once

#include <GL/glew.h>

namespace gfx
{

class VertexBuffer
{
private:
	GLuint m_vboId;

public:

	VertexBuffer(GLvoid *data, GLsizei size, GLenum drawType = GL_STATIC_DRAW);
	VertexBuffer();
	~VertexBuffer();

	inline GLuint getId() const { return m_vboId; };

	void bind() const;
	void unbind() const;

	void changeData(GLvoid *data, GLsizei size, GLenum drawType = GL_DYNAMIC_DRAW);
};

} // namespace gfx