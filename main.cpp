#include <windows.h>
#include<mmsystem.h>
#include <GL/glut.h>
#include <math.h>

void display()
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)102, 163, 255
	glLoadIdentity(); //Reset the drawing perspective
	glMatrixMode(GL_MODELVIEW);
	glColor3f(0.0f,0.1f,0.1f);//38, 77, 115
	glBegin(GL_QUADS);
    glVertex2f(-1.0f,1.0f);
	glVertex2f(-1.0f,-1.0f);
	glVertex2f(1.0f,-1.0f);
	glVertex2f(1.0f,1.0f);
	glEnd();

    glColor3ub(25, 50, 77);//road partition 1
    glLineWidth(175);
	glBegin(GL_LINES);
    glVertex2f(-1.0f,-1.3f);
	glVertex2f(1.0f,0.03f);
	glEnd();

    glColor3ub(25, 50, 77);//road partition 2
    glLineWidth(187);
	glBegin(GL_LINES);
    glVertex2f(-1.0f,-2.6f);
	glVertex2f(1.0f,0.0f);
	glEnd();

	glColor3ub(25, 50, 77);//road partition 3
    glLineWidth(140);
	glBegin(GL_LINES);
    glVertex2f(-1.0f,-1.9f);
	glVertex2f(1.0f,0.05f);
	glEnd();

	glColor3f(0.1f,0.0f,0.0f);//38, 77, 115//inside road//road 3d view black block
	glBegin(GL_QUADS);
  glVertex2f(-0.88f,-1.0f);
	glVertex2f(1.0f,0.3f);
	glVertex2f(1.0f,-0.2f);
	glVertex2f(0.3f,-1.0f);
	glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);//road middle mark
    glLineWidth(10);
	glBegin(GL_LINES);
    glVertex2f(-1.45f,-1.45f);
	glVertex2f(1.0f,0.25f);
	glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);//road middle mark
    glLineWidth(10);
	glBegin(GL_LINES);
	glVertex2f(1.0f,-0.15f);
	glVertex2f(0.25f,-1.0f);
	glEnd();

//    glColor3f(1.0f, 1.0f, 1.0f);//road middle mark
//    glLineWidth(60);
//	glBegin(GL_LINES);
//	glVertex2f(0.15f,-0.8f);
//	glVertex2f(-0.6f,-1.6f);
//	glEnd();



	glFlush();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1080, 720);
    glutInitWindowPosition (100, 150);
    glutCreateWindow ("Road");
    glutDisplayFunc(display);
   // glutTimerFunc(20,update,0); //animation er speed control
//    myInit ();
   // glutKeyboardFunc(handleKeypress);
   // glutMouseFunc(handleMouse);
    glutMainLoop();
    return 0;
}
