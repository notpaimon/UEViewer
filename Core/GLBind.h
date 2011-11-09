// Autogenerated file: do not modify

struct GL_t
{
	void	(APIENTRY * AlphaFunc) (GLenum func, GLclampf ref);
	void	(APIENTRY * Begin) (GLenum mode);
	void	(APIENTRY * BindTexture) (GLenum target, GLuint texture);
	void	(APIENTRY * BlendFunc) (GLenum sfactor, GLenum dfactor);
	void	(APIENTRY * Clear) (GLbitfield mask);
	void	(APIENTRY * ClearColor) (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
	void	(APIENTRY * Color3f) (GLfloat red, GLfloat green, GLfloat blue);
	void	(APIENTRY * Color3fv) (const GLfloat *v);
	void	(APIENTRY * Color4f) (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
	void	(APIENTRY * ColorPointer) (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
	void	(APIENTRY * CullFace) (GLenum mode);
	void	(APIENTRY * DeleteTextures) (GLsizei n, const GLuint *textures);
	void	(APIENTRY * DepthFunc) (GLenum func);
	void	(APIENTRY * DepthMask) (GLboolean flag);
	void	(APIENTRY * DepthRange) (GLclampd zNear, GLclampd zFar);
	void	(APIENTRY * Disable) (GLenum cap);
	void	(APIENTRY * DisableClientState) (GLenum array);
	void	(APIENTRY * DrawElements) (GLenum mode, GLsizei count, GLenum type, const GLvoid *indices);
	void	(APIENTRY * Enable) (GLenum cap);
	void	(APIENTRY * EnableClientState) (GLenum array);
	void	(APIENTRY * End) ();
	void	(APIENTRY * Finish) ();
	void	(APIENTRY * GenTextures) (GLsizei n, GLuint *textures);
	GLenum	(APIENTRY * GetError) ();
	void	(APIENTRY * GetIntegerv) (GLenum pname, GLint *params);
	void	(APIENTRY * GetMaterialfv) (GLenum face, GLenum pname, GLfloat *params);
	const GLubyte *	(APIENTRY * GetString) (GLenum name);
	GLboolean	(APIENTRY * IsEnabled) (GLenum cap);
	GLboolean	(APIENTRY * IsTexture) (GLuint texture);
	void	(APIENTRY * LightModeli) (GLenum pname, GLint param);
	void	(APIENTRY * Lightfv) (GLenum light, GLenum pname, const GLfloat *params);
	void	(APIENTRY * LineWidth) (GLfloat width);
	void	(APIENTRY * LoadIdentity) ();
	void	(APIENTRY * LoadMatrixf) (const GLfloat *m);
	void	(APIENTRY * Materialf) (GLenum face, GLenum pname, GLfloat param);
	void	(APIENTRY * Materialfv) (GLenum face, GLenum pname, const GLfloat *params);
	void	(APIENTRY * MatrixMode) (GLenum mode);
	void	(APIENTRY * Normal3fv) (const GLfloat *v);
	void	(APIENTRY * NormalPointer) (GLenum type, GLsizei stride, const GLvoid *pointer);
	void	(APIENTRY * Ortho) (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
	void	(APIENTRY * PolygonMode) (GLenum face, GLenum mode);
	void	(APIENTRY * PopMatrix) ();
	void	(APIENTRY * PushMatrix) ();
	void	(APIENTRY * ReadPixels) (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels);
	void	(APIENTRY * Rotatef) (GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
	void	(APIENTRY * Scissor) (GLint x, GLint y, GLsizei width, GLsizei height);
	void	(APIENTRY * ShadeModel) (GLenum mode);
	void	(APIENTRY * TexCoord2f) (GLfloat s, GLfloat t);
	void	(APIENTRY * TexCoordPointer) (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
	void	(APIENTRY * TexImage2D) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
	void	(APIENTRY * TexParameteri) (GLenum target, GLenum pname, GLint param);
	void	(APIENTRY * Vertex2f) (GLfloat x, GLfloat y);
	void	(APIENTRY * Vertex3f) (GLfloat x, GLfloat y, GLfloat z);
	void	(APIENTRY * Vertex3fv) (const GLfloat *v);
	void	(APIENTRY * VertexPointer) (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
	void	(APIENTRY * Viewport) (GLint x, GLint y, GLsizei width, GLsizei height);

#if _WIN32


#endif

	void	(APIENTRY * ActiveTexture) (GLenum unit);
	void	(APIENTRY * AttachShader) (GLuint program, GLuint shader);
	void	(APIENTRY * CompileShader) (GLuint obj);
	GLuint	(APIENTRY * CreateProgram) ();
	GLuint	(APIENTRY * CreateShader) (GLenum shaderType);
	void	(APIENTRY * DeleteProgram) (GLuint obj);
	void	(APIENTRY * DeleteShader) (GLuint obj);
	void	(APIENTRY * DetachShader) (GLuint program, GLuint shader);
	void	(APIENTRY * DisableVertexAttribArray) (GLuint index);
	void	(APIENTRY * EnableVertexAttribArray) (GLuint index);
	GLint	(APIENTRY * GetAttribLocation) (GLuint obj, const GLchar *name);
	void	(APIENTRY * GetProgramiv) (GLuint obj, GLenum pname, GLint *v);
	void	(APIENTRY * GetProgramInfoLog) (GLuint obj, GLsizei maxLength, GLsizei *size, GLchar *infoLog);
	void	(APIENTRY * GetShaderiv) (GLuint obj, GLenum pname, GLint *v);
	void	(APIENTRY * GetShaderInfoLog) (GLuint obj, GLsizei maxLength, GLsizei *size, GLchar *infoLog);
	GLint	(APIENTRY * GetUniformLocation) (GLuint obj, const GLchar *name);
	void	(APIENTRY * LinkProgram) (GLuint obj);
	void	(APIENTRY * ShaderSource) (GLuint obj, GLsizei size, const GLchar** src, const GLint *length);
	void	(APIENTRY * UseProgram) (GLuint obj);
	void	(APIENTRY * Uniform1f) (GLint, GLfloat);
	void	(APIENTRY * Uniform2f) (GLint, GLfloat, GLfloat);
	void	(APIENTRY * Uniform1i) (GLint index, GLint value);
	void	(APIENTRY * VertexAttrib3fv) (GLuint index, const GLfloat *v);
	void	(APIENTRY * VertexAttribPointer) (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer);
	void	(APIENTRY * BindRenderbufferEXT) (GLenum target, GLuint renderbuffer);
	void	(APIENTRY * DeleteRenderbuffersEXT) (GLsizei n, const GLuint *renderbuffers);
	void	(APIENTRY * GenRenderbuffersEXT) (GLsizei n, GLuint *renderbuffers);
	void	(APIENTRY * RenderbufferStorageEXT) (GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
	void	(APIENTRY * BindFramebufferEXT) (GLenum target, GLuint framebuffer);
	void	(APIENTRY * DeleteFramebuffersEXT) (GLsizei n, const GLuint *framebuffers);
	void	(APIENTRY * GenFramebuffersEXT) (GLsizei n, GLuint *framebuffers);
	GLenum	(APIENTRY * CheckFramebufferStatusEXT) (GLenum target);
	void	(APIENTRY * FramebufferTexture2DEXT) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
	void	(APIENTRY * FramebufferRenderbufferEXT) (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
	void	(APIENTRY * GenerateMipmapEXT) (GLenum target);

#if _WIN32


#elif __linux__

#endif

};

extern GL_t GL;


#define glAlphaFunc	GL.AlphaFunc
#define glBegin	GL.Begin
#define glBindTexture	GL.BindTexture
#define glBlendFunc	GL.BlendFunc
#define glClear	GL.Clear
#define glClearColor	GL.ClearColor
#define glColor3f	GL.Color3f
#define glColor3fv	GL.Color3fv
#define glColor4f	GL.Color4f
#define glColorPointer	GL.ColorPointer
#define glCullFace	GL.CullFace
#define glDeleteTextures	GL.DeleteTextures
#define glDepthFunc	GL.DepthFunc
#define glDepthMask	GL.DepthMask
#define glDepthRange	GL.DepthRange
#define glDisable	GL.Disable
#define glDisableClientState	GL.DisableClientState
#define glDrawElements	GL.DrawElements
#define glEnable	GL.Enable
#define glEnableClientState	GL.EnableClientState
#define glEnd	GL.End
#define glFinish	GL.Finish
#define glGenTextures	GL.GenTextures
#define glGetError	GL.GetError
#define glGetIntegerv	GL.GetIntegerv
#define glGetMaterialfv	GL.GetMaterialfv
#define glGetString	GL.GetString
#define glIsEnabled	GL.IsEnabled
#define glIsTexture	GL.IsTexture
#define glLightModeli	GL.LightModeli
#define glLightfv	GL.Lightfv
#define glLineWidth	GL.LineWidth
#define glLoadIdentity	GL.LoadIdentity
#define glLoadMatrixf	GL.LoadMatrixf
#define glMaterialf	GL.Materialf
#define glMaterialfv	GL.Materialfv
#define glMatrixMode	GL.MatrixMode
#define glNormal3fv	GL.Normal3fv
#define glNormalPointer	GL.NormalPointer
#define glOrtho	GL.Ortho
#define glPolygonMode	GL.PolygonMode
#define glPopMatrix	GL.PopMatrix
#define glPushMatrix	GL.PushMatrix
#define glReadPixels	GL.ReadPixels
#define glRotatef	GL.Rotatef
#define glScissor	GL.Scissor
#define glShadeModel	GL.ShadeModel
#define glTexCoord2f	GL.TexCoord2f
#define glTexCoordPointer	GL.TexCoordPointer
#define glTexImage2D	GL.TexImage2D
#define glTexParameteri	GL.TexParameteri
#define glVertex2f	GL.Vertex2f
#define glVertex3f	GL.Vertex3f
#define glVertex3fv	GL.Vertex3fv
#define glVertexPointer	GL.VertexPointer
#define glViewport	GL.Viewport

#if _WIN32


#endif

#define glActiveTexture	GL.ActiveTexture
#define glAttachShader	GL.AttachShader
#define glCompileShader	GL.CompileShader
#define glCreateProgram	GL.CreateProgram
#define glCreateShader	GL.CreateShader
#define glDeleteProgram	GL.DeleteProgram
#define glDeleteShader	GL.DeleteShader
#define glDetachShader	GL.DetachShader
#define glDisableVertexAttribArray	GL.DisableVertexAttribArray
#define glEnableVertexAttribArray	GL.EnableVertexAttribArray
#define glGetAttribLocation	GL.GetAttribLocation
#define glGetProgramiv	GL.GetProgramiv
#define glGetProgramInfoLog	GL.GetProgramInfoLog
#define glGetShaderiv	GL.GetShaderiv
#define glGetShaderInfoLog	GL.GetShaderInfoLog
#define glGetUniformLocation	GL.GetUniformLocation
#define glLinkProgram	GL.LinkProgram
#define glShaderSource	GL.ShaderSource
#define glUseProgram	GL.UseProgram
#define glUniform1f	GL.Uniform1f
#define glUniform2f	GL.Uniform2f
#define glUniform1i	GL.Uniform1i
#define glVertexAttrib3fv	GL.VertexAttrib3fv
#define glVertexAttribPointer	GL.VertexAttribPointer
#define glBindRenderbufferEXT	GL.BindRenderbufferEXT
#define glDeleteRenderbuffersEXT	GL.DeleteRenderbuffersEXT
#define glGenRenderbuffersEXT	GL.GenRenderbuffersEXT
#define glRenderbufferStorageEXT	GL.RenderbufferStorageEXT
#define glBindFramebufferEXT	GL.BindFramebufferEXT
#define glDeleteFramebuffersEXT	GL.DeleteFramebuffersEXT
#define glGenFramebuffersEXT	GL.GenFramebuffersEXT
#define glCheckFramebufferStatusEXT	GL.CheckFramebufferStatusEXT
#define glFramebufferTexture2DEXT	GL.FramebufferTexture2DEXT
#define glFramebufferRenderbufferEXT	GL.FramebufferRenderbufferEXT
#define glGenerateMipmapEXT	GL.GenerateMipmapEXT

#if _WIN32


#elif __linux__

#endif



#define QGL_1_3	(1 << 0)
#define QGL_2_0	(1 << 1)
#define QGL_EXT_FRAMEBUFFER_OBJECT	(1 << 2)
#define QGL_ARB_TEXTURE_FLOAT	(1 << 3)

#if _WIN32


#elif __linux__

#endif


