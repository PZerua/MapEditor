/**
* (c) 2017 Pablo Luis Garc�a. All rights reserved.
* Released under GPL v2 license. Read LICENSE for more details.
*/

#include "vertexbuffer.h"

namespace gfx
{

	VertexBuffer::VertexBuffer(GLfloat *data, GLsizei size)
	{
		glGenBuffers(1, &m_vboId);
		glBindBuffer(GL_ARRAY_BUFFER, m_vboId);
		glBufferData(GL_ARRAY_BUFFER, size * sizeof(GLfloat), &data[0], GL_STATIC_DRAW);
		glBindBuffer(GL_ARRAY_BUFFER, 0);
	}

	VertexBuffer::~VertexBuffer()
	{
		glDeleteBuffers(1, &m_vboId);
	}
	
	void VertexBuffer::bind() const
	{
		glBindBuffer(GL_ARRAY_BUFFER, m_vboId);
	}

	void VertexBuffer::unbind() const
	{
		glBindBuffer(GL_ARRAY_BUFFER, 0);
	}

} // namespace gfx