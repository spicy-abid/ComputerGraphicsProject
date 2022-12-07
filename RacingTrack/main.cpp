#include <windows.h>
#include<mmsystem.h>
#include <GL/glut.h>
#include <math.h>

void drawLamp(){   //lamp up

     ///L1
     glBegin(GL_QUADS);
      glColor3f(0.90f, 0.60f, 0.0f);
      glVertex2f(-1.0f,-0.050f);
      glVertex2f(-0.90f,-0.050f);
      glVertex2f(-0.90f,0.050f);
      glVertex2f(-1.0f,0.050f);
      glEnd();
       ///L2
      glBegin(GL_QUADS);
      glColor3f(0.90f, 0.60f, 0.0f);
      glVertex2f(-0.450f,-0.050f);
      glVertex2f(-0.350f,-0.050f);
      glVertex2f(-0.350f,0.050f);
      glVertex2f(-0.450f,0.050f);
      glEnd();
      ///L3
      glBegin(GL_QUADS);
      glColor3f(0.90f, 0.60f, 0.0f);
      glVertex2f(0.10f,-0.050f);
      glVertex2f(0.20f,-0.050f);
      glVertex2f(0.20f,0.050f);
      glVertex2f(0.10f,0.050f);
      glEnd();
      ///L4
      glBegin(GL_QUADS);
      glColor3f(0.90f, 0.60f, 0.0f);
      glVertex2f(0.650f,-0.050f);
      glVertex2f(0.750f,-0.050f);
      glVertex2f(0.750f,0.050f);
      glVertex2f(0.650f,0.050f);
      glEnd();

      //lamp stand
      ///L1
      glBegin(GL_QUADS);
      glColor3f(0.90f, 0.60f, 0.0f);
      glVertex2f(-0.970f,-0.40f);
      glVertex2f(-0.930f,-0.40f);
      glVertex2f(-0.930f,0.0f);
      glVertex2f(-0.970f,0.0f);
      glEnd();
      ///L2
      glBegin(GL_QUADS);
      glColor3f(0.90f, 0.60f, 0.0f);
      glVertex2f(-0.420f,-0.40f);
      glVertex2f(-0.380f,-0.40f);
      glVertex2f(-0.380f,0.0f);
      glVertex2f(-0.420f,0.0f);
      glEnd();
      ///L3
      glBegin(GL_QUADS);
      glColor3f(0.90f, 0.60f, 0.0f);
      glVertex2f(0.130f,-0.40f);
      glVertex2f(0.170f,-0.40f);
      glVertex2f(0.170f,0.0f);
      glVertex2f(0.130f,0.0f);
      glEnd();
      ///L4
      glBegin(GL_QUADS);
      glColor3f(0.90f, 0.60f, 0.0f);
      glVertex2f(0.680f,-0.40f);
      glVertex2f(0.720f,-0.40f);
      glVertex2f(0.720f,0.0f);
      glVertex2f(0.680f,0.0f);
      glEnd();

      //lamp current line
      ///L1
      glLineWidth(2);
      glBegin(GL_LINES);
      glColor3f(0.0f, 0.0f, 0.0f);
      glVertex2f(-0.650f,0.0f);
      glVertex2f(-0.70f,-0.10f);
      glVertex2f(-0.70f,-0.10f);
      glVertex2f(-0.40f,0.0f);
      glVertex2f(-0.40f,0.0f);
      glVertex2f(-0.10f,-0.10f);
      glVertex2f(-0.10f,-0.10f);
      glVertex2f(0.150f,0.0f);
      glVertex2f(0.150f,0.0f);
      glVertex2f(0.450f,-0.10f);
      glVertex2f(0.450f,-0.10f);
      glVertex2f(0.70f,0.0f);
      glVertex2f(0.70f,0.0f);
      glVertex2f(1.0f,-0.10f);
      glEnd();

      //lamp current line2
      ///L2
      glLineWidth(2);
      glBegin(GL_LINES);
      glColor3f(0.0f, 0.0f, 0.0f);
      glVertex2f(-0.950f,0.0f);
      glVertex2f(-0.70f,-0.050f);
      glVertex2f(-0.70f,-0.050f);
      glVertex2f(-0.40f,0.0f);
      glVertex2f(-0.40f,0.0f);
      glVertex2f(-0.10f,-0.050f);
      glVertex2f(-0.10f,-0.050f);
      glVertex2f(0.150f,0.0f);
      glVertex2f(0.150f,0.0f);
      glVertex2f(0.450f,-0.050f);
      glVertex2f(0.450f,-0.050f);
      glVertex2f(0.70f,0.0f);
      glVertex2f(0.70f,0.0f);
      glVertex2f(1.0f,-0.050f);
      glEnd();


      glFlush();
}

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

	glColor3ub(31,63,96);//31, 63, 96
	glBegin(GL_POLYGON);//..........................................building
    glVertex2f(-1.0f,-.059f);
    glVertex2f(-1.0f,0.02f);
	glVertex2f(-0.98f,0.02f);
	glVertex2f(-0.98f,0.15f);
	glVertex2f(-0.95f,0.018f);
	glVertex2f(-0.92f,0.015f);
	glVertex2f(-0.92f,0.03f);
	glVertex2f(-0.89f,0.03f);
	glVertex2f(-0.89f,0.027f);
	glVertex2f(-0.86f,0.027f);
	glVertex2f(-0.86f,0.025f);
	glVertex2f(-0.83f,0.025f);
	glVertex2f(-0.83f,0.02f);
	glVertex2f(-0.8f,0.023f);
	glVertex2f(-0.77f,0.02f);
	glVertex2f(-0.74f,0.02f);
	glVertex2f(-0.74f,0.035f);
	glVertex2f(-0.7f,0.035f);
	glVertex2f(-0.7f,0.02f);
	glVertex2f(-0.67f,0.02f);
	glVertex2f(1.0f,-0.059f);
	glEnd();

	glBegin(GL_POLYGON);
    glVertex2f(-0.67f,-0.059f);
    glVertex2f(-0.67f,0.04f);
    glVertex2f(-0.61f,0.04f);
    glVertex2f(-0.61f,0.03f);
    glVertex2f(-0.55f,0.03f);
    glVertex2f(-0.55f,0.025f);
    glVertex2f(-0.53f,0.025f);
    glVertex2f(-0.51f,0.02f);
    glVertex2f(-0.46f,0.02f);
	glVertex2f(1.0f,-0.059f);
	glEnd();

	glBegin(GL_POLYGON);
    glVertex2f(-0.46f,-0.059f);
    glVertex2f(-0.46f,0.05f);
    glVertex2f(-0.35f,0.05f);
    glVertex2f(-0.35f,0.025f);
    glVertex2f(-0.3f,0.025f);
	glVertex2f(1.0f,-0.059f);
	glEnd();

	glBegin(GL_POLYGON);
    glVertex2f(-0.3f,-0.059f);
    glVertex2f(-0.3f,0.05f);
    glVertex2f(-0.25f,0.05f);
    glVertex2f(-0.25f,0.053f);
    glVertex2f(-0.23f,0.053f);
    glVertex2f(-0.23f,0.025f);
    glVertex2f(-0.23f,0.04f);
    glVertex2f(-0.14f,0.04f);
    glVertex2f(-0.14f,0.025f);
    glVertex2f(-0.1f,0.025f);
    glVertex2f(-0.1f,0.02f);
    glVertex2f(-0.05f,0.02f);
	glVertex2f(1.0f,-0.059f);
	glEnd();

	glBegin(GL_POLYGON);
    glVertex2f(-0.05f,-0.059f);
    glVertex2f(-0.05f,0.05f);
    glVertex2f(0.05f,0.05f);
    glVertex2f(0.05f,0.025f);
	glVertex2f(1.0f,-0.059f);
	glEnd();

	glBegin(GL_POLYGON);
    glVertex2f(0.3f,-0.059f);
    glVertex2f(0.3f,0.05f);
    glVertex2f(0.25f,0.05f);
    glVertex2f(0.25f,0.053f);
    glVertex2f(0.23f,0.053f);
    glVertex2f(0.23f,0.025f);
    glVertex2f(0.23f,0.04f);
    glVertex2f(0.14f,0.04f);
    glVertex2f(0.14f,0.025f);
    glVertex2f(0.1f,0.025f);
    glVertex2f(0.1f,0.02f);
    glVertex2f(0.05f,0.02f);
	glVertex2f(-1.0f,-0.059f);
	glEnd();

	glBegin(GL_POLYGON);
    glVertex2f(0.46f,-0.059f);
    glVertex2f(0.46f,0.05f);
    glVertex2f(0.35f,0.05f);
    glVertex2f(0.35f,0.025f);
    glVertex2f(0.3f,0.025f);
	glVertex2f(-1.0f,-0.059f);
	glEnd();

	glBegin(GL_POLYGON);
    glVertex2f(0.67f,-0.059f);
    glVertex2f(0.67f,0.04f);
    glVertex2f(0.61f,0.04f);
    glVertex2f(0.61f,0.03f);
    glVertex2f(0.55f,0.03f);
    glVertex2f(0.55f,0.025f);
    glVertex2f(0.53f,0.025f);
    glVertex2f(0.51f,0.02f);
    glVertex2f(0.46f,0.02f);
	glVertex2f(-1.0f,-0.059f);
	glEnd();

	glBegin(GL_POLYGON);
    glVertex2f(1.0f,-0.059f);
    glVertex2f(1.0f,0.02f);
	glVertex2f(0.98f,0.02f);
	glVertex2f(0.98f,0.015f);
	glVertex2f(0.95f,0.018f);
	glVertex2f(0.92f,0.015f);
	glVertex2f(0.92f,0.03f);
	glVertex2f(0.89f,0.03f);
	glVertex2f(0.89f,0.027f);
	glVertex2f(0.86f,0.027f);
	glVertex2f(0.86f,0.025f);
	glVertex2f(0.83f,0.025f);
	glVertex2f(0.83f,0.02f);
	glVertex2f(0.8f,0.023f);
	glVertex2f(0.77f,0.02f);
	glVertex2f(0.74f,0.02f);
	glVertex2f(0.74f,0.035f);
	glVertex2f(0.7f,0.035f);
	glVertex2f(0.7f,0.02f);
	glVertex2f(0.67f,0.02f);
	glVertex2f(-1.0f,-0.059f);
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

	 //River
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.23, 0.70, 0.81);
    glVertex3f(-1.0f, -2.5f, 0.0f);
    glVertex3f(1.f, -1.0f, 0.0f);
    glVertex3f(1.0f, -0.25f, 0.0f);

    glEnd();


    glColor3f(1.0f, 1.0f, 1.0f);//road middle mark
    glLineWidth(60);
	glBegin(GL_LINES);
	glVertex2f(0.15f,-0.8f);
	glVertex2f(-0.6f,-1.6f);
	glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);//road middle mark
    glLineWidth(60);
	glBegin(GL_LINES);
	glVertex2f(0.15f,-0.8f);
	glVertex2f(-0.6f,-1.6f);
	glEnd();

    drawLamp();

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
