#include "Quad.h"


class Cube : public Quad
{

private:


public:
	void Draw();
	Cube();
	Cube(GLfloat, GLfloat,GLfloat ,GLfloat, Colors);



};

Cube::Cube()
{
	Cube(0,0,0,10,RED);
}

Cube::Cube(GLfloat x, GLfloat y,GLfloat z, GLfloat height, Colors color)
{
	x_pos_ = x;
	y_pos_ = y;
	z_pos_ = z;
	height_ = height;

	x_speed_ = 0;
	y_speed_ = 0;
	
	angle_ = 0;
	rotation_ = 0;
	set_color(color);
}

void Cube::Draw()
{

	static GLfloat red[]     = {1.0, 0.0, 0.0, 1.0};
	static GLfloat green[]   = {0.0, 1.0, 0.0, 1.0};
	static GLfloat blue[]    = {0.0, 0.0, 1.0, 1.0};
	static GLfloat yellow[]  = {1.0, 1.0, 0.0, 1.0}; 
	static GLfloat white[]  = {1.0, 1.0, 1.0, 1.0};

	 GLfloat half_height = height_ / 2.0f;


	 glPushMatrix();
	 
	 glTranslatef(x_pos_, y_pos_, z_pos_);
	  glRotatef(angle_, 0.0f, 0.0f, 1.0f);
	  

	   glBegin(GL_TRIANGLES);
       glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, color_);
	   
	   //Front Face
	   glVertex3f(-half_height, -half_height,half_height);
	   glVertex3f(half_height, half_height,half_height);
       glVertex3f(half_height, -half_height,half_height);

	   glVertex3f(-half_height, -half_height,half_height);
	   glVertex3f(-half_height,half_height,half_height);
	   glVertex3f(half_height, half_height,half_height);

	   //Back Face
	   glVertex3f(-half_height, -half_height,-half_height);
	   glVertex3f(half_height, half_height,-half_height);
       glVertex3f(half_height, -half_height,-half_height);

	   glVertex3f(-half_height, -half_height,-half_height);
	   glVertex3f(-half_height,half_height,-half_height);
	   glVertex3f(half_height, half_height,-half_height);

	   //top
	   glVertex3f(-half_height,half_height,half_height);
	   glVertex3f(-half_height,half_height,-half_height);
	   glVertex3f(half_height, half_height,-half_height);

	   glVertex3f(-half_height,half_height,half_height);
	   glVertex3f(half_height, half_height,-half_height);
	   glVertex3f(half_height, half_height,half_height);

	   //bottom
	   glVertex3f(-half_height,-half_height,half_height);
	   glVertex3f(-half_height,-half_height,-half_height);
	   glVertex3f(half_height, -half_height,-half_height);

	   glVertex3f(-half_height,-half_height,half_height);
	   glVertex3f(half_height,-half_height,-half_height);
	   glVertex3f(half_height,-half_height,half_height);

	   //left
	   glVertex3f(-half_height, half_height,half_height);
	   glVertex3f(-half_height, half_height,-half_height);
	   glVertex3f(-half_height, -half_height,-half_height);

	   glVertex3f(-half_height, half_height,half_height);
	   glVertex3f(-half_height, -half_height,-half_height);
	   glVertex3f(-half_height, -half_height,half_height);

	   //right
	   glVertex3f(half_height, half_height,half_height);
	   glVertex3f(half_height, half_height,-half_height);
	   glVertex3f(half_height, -half_height,-half_height);

	   glVertex3f(half_height, half_height,half_height);
	   glVertex3f(half_height, -half_height,-half_height);
	   glVertex3f(half_height, -half_height,half_height);
     glEnd();

	 glPopMatrix();
}