#include<windows.h>//for MS Windows
#include<mmsystem.h>
#include<GL/glut.h>//Glut, include glu.h and gl.h
//#include "draw.h"
#include<math.h>
#define PI 3.141516

GLfloat position = 0.05f;
GLfloat speed = 0.0158f;


void update(int value) {

    if(position <-0.7)
        position = 0.09999f;


    position -= speed;

glutPostRedisplay();//display refresh and render
glutTimerFunc(100, update, 0);
}


void drawRoad()
{




glBegin (GL_POLYGON);//For Road shape
glColor3ub (76,54,71);
glVertex2f(-0.996875f,-0.990741f);
glVertex2f(-0.998958f,-0.761111f);
glVertex2f(0.19375f,-0.348148f);
glVertex2f(0.279167f,-0.348148f);
glVertex2f(0.501042f,-0.994444f);
glEnd();

glBegin (GL_POLYGON);//For Road side line Left
glColor3ub (211,185,180);
glVertex2f(-0.994792f,-0.853704f);
glVertex2f(-0.996875f,-0.790741f);
glVertex2f(0.184375f,-0.353704f);
glVertex2f(0.184375f,-0.353704f);
glEnd();
glBegin (GL_POLYGON);//For Road side line right
glColor3ub (211,185,180);
glVertex2f(0.392708f,-0.994444f);
glVertex2f(0.276042f,-0.35f);
glVertex2f(0.444792f,-0.990741f);
glEnd();
glBegin (GL_POLYGON);//For Road side line Middle left
glColor3ub (195,93,50);
glVertex2f(-0.430208f,-0.998148f);
glVertex2f(-0.49375f,-0.998148f);
glVertex2f(0.23125f,-0.348148f);
glVertex2f(0.234375f,-0.348148f);
glEnd();
glBegin (GL_POLYGON);//For Road side line Middle right
glColor3ub (195,93,50);
glVertex2f(-0.308333f,-0.998148f);
glVertex2f(-0.369792f,-0.998148f);
glVertex2f(0.238542f,-0.348148f);
glVertex2f(0.240625f,-0.348148f);
glEnd();




}

void display()
{

 drawRoad();

glPushMatrix();
glTranslatef(position,position, 0.0f);

glPopMatrix();

glFlush();//Render now
}
int main(int argc, char** argv)
{

    glutInitWindowSize(1920,1080); //Set the window's initital width & height
    glutInit(&argc,argv);//Initialize GLUT
    glutCreateWindow("Racing Track"); //Create a window with the given title
    glutDisplayFunc(display);// register display callback handler for window re-paint
    glutTimerFunc(100, update, 0);//recursion start from here
    glutMainLoop(); //Enter the event processing loop


    return 0;






}
