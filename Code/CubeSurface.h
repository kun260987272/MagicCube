#pragma once

#include<Windows.h>
#include<gl\glut.h>

class CubeSurface
{
public:
	CubeSurface(GLint rr,GLint gg,GLint bb)
	{
		r=rr;
		g=gg;
		b=bb;
	}
	GLint getR()
	{
		return r;
	}
	GLint getG()
	{
		return g;
	}
	GLint getB()
	{
		return b;
	}
	void setR(GLint rr)
	{
		r=rr;	
	}
	void setG(GLint gg)
	{
		g=gg;
	}
	void setB(GLint bb)
	{
		b=bb;
	}
	void draw(GLfloat x1,GLfloat y1,GLfloat z1,GLfloat x2,GLfloat y2,GLfloat z2,GLfloat x3,GLfloat y3,GLfloat z3,GLfloat x4,GLfloat y4,GLfloat z4)
	{
		glColor3ub(r,g,b);
		glBegin(GL_QUADS);
		glVertex3f(x1,y1,z1);
		glVertex3f(x2,y2,z2);
		glVertex3f(x3,y3,z3);
		glVertex3f(x4,y4,z4);
		glEnd();
	}
private:
	GLint r;
	GLint g;
	GLint b;
};