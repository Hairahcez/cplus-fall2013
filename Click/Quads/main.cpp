//if you get build errors:
//	right click math.h and select "open document"
//  right click the math.h tab and select "open containing folder"
//  take the "glut.h" file in the root of this project and copy into directory just opened



#include <math.h>
#include <stdio.h>
#include <iostream>
#include <glut.h>
#include "Ghost.h"
#include "Cube.h"
#include "string"

using namespace std;

/* GLfloat arrays to specify colors */ 
static GLfloat red[]     = {1.0, 0.0, 0.0, 1.0};
static GLfloat green[]   = {0.0, 1.0, 0.0, 1.0};
static GLfloat blue[]    = {0.0, 0.0, 1.0, 1.0};
static GLfloat yellow[]  = {1.0, 1.0, 0.0, 1.0}; 
static GLfloat white[]  = {1.0, 1.0, 1.0, 1.0};
static GLfloat magenta[]  = {1.0, 0.0, 1.0, 1.0};
static GLfloat cyan[]  = {0.0, 1.0, 1.0, 1.0};


Ghost g;

void write_message();
void init();
void reshape(int, int);
void display();
void draw();
void keyboard(unsigned char, int, int);






//position of light
static GLfloat light_one[] = {0.5,    0.0, 30.0, 5.0};
// position of viewer 
static GLdouble viewer[] = {0.0, -2.0, 20.0}; 

GLfloat x_inc = 0;
Quad q(1 + x_inc, 1, 3, Quad::RED);
Quad q2(0.25f + x_inc, 0.33f, 1, Quad::BLUE);
//Cube c(0,0,10, Quad::RED);
//Cube c2(3,4,10, Quad::RED);

Cube cubes[64];
//Quad* quads[4];

void draw()
{
	
	for (int i=0; i<64;i++)
	{
		//Cube* temp_cube = (Cube*) quads[i];
		cubes[i].move();
		cubes[i].Draw();
		//temp_cube->move();
		//temp_cube->Draw();
	}
	
	
	//c.move();
	//c.Draw();

	//c2.move();
	//c2.Draw();

	//g.move();
	//g.draw();


}

void display()
{
   /*start boiler*/
   glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
   glLoadIdentity(); 
   //set camera direction and position
   gluLookAt(viewer[0], viewer[1], viewer[2], 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
   //draw light source
   glLightfv(GL_LIGHT0, GL_POSITION, light_one);
   /*end boiler*/
   
   draw();
  

   /*start boiler*/
   glFlush();
   glutSwapBuffers();
   glutPostRedisplay();
   /*end boiler*/
}


void keyboard(unsigned char key, int x, int y)
{
   //user interaction here
	if (key == 'k')
	{
		g.set_rotation(1);
	}
	if (key == 'l')
	{
		g.set_x_speed(-0.01);
	}
	
	if(key == 'a')
	{
		viewer[0] -= 1.0;
	}
	if (key == 'd')
	{
		viewer[0] += 1.0;
	}
	if (key == 'w')
	{
		viewer[1] += 1.0;
	}
	if (key == 's')
	{
		viewer[1] -= 1.0;
	}
	if (key == 'e')
	{
		viewer[2] += 1.0;
	}
	if (key == 'q')
	{
		viewer[2] -= 1.0;
	}

	
}


//output in initial console
void write_message()
{
   //any control instructions go here
   cout << "OpenGL Demo" << endl;
}

//allows for resizing
void reshape(int w, int h)
{
   glViewport(0, 0, (GLsizei) w, (GLsizei) h);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   gluPerspective(45.0, (GLfloat) w / (GLfloat) h, 2.0, 100.0);
   glMatrixMode(GL_MODELVIEW);
}


void init() 
{
   write_message(); 
   //"Background" color = white
   glClearColor(0.0, 0.0, 0.0, 1.0);
   glShadeModel(GL_SMOOTH);
   glPolygonMode(GL_FRONT_AND_BACK,GL_FILL);
   
   int county = 0;
   int countx = 0;
   int countz = 0;
   
   int i=0;
   for(int z=0;z<4;z++)
   {
	   countx=0;
	   county=0;
		for(int x=0;x<4;x++)
		{
		   county=0;
		   
		   for(int y=0;y<4;y++)
		   {
			   //colors = colors1[y];
			   cubes[i] = Cube(countx,county,countz,2 , (Quad::Colors) (y % 7));

			   county+=2;
			   
			   i++;
		   }
		   countx+=2;
		   
		}
		countz+=2;
   }
   
   
   
      /* GL_FILL, GL_LINE to show wireframe */
   glEnable(GL_DEPTH_TEST);
   glEnable(GL_LIGHTING);
   glEnable(GL_LIGHT0);

 

}



int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
   glutInitWindowSize(1280, 700); 
   glutInitWindowPosition(50, 50);
   glutCreateWindow(argv[0]);
   init();
   glutDisplayFunc(display); 
   glutReshapeFunc(reshape); 
   glutKeyboardFunc(keyboard);
   glutMainLoop();
   return 0;
}
