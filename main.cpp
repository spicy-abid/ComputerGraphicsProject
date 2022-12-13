#include<windows.h>//for MS Windows
#include<GL/glut.h>//Glut, include glu.h and gl.h
#include<math.h>
#define PI 3.141516

GLfloat position = 0.5f;
GLfloat mov=0.0f;
GLfloat mov2=0.0f;
GLfloat speed = 0.06558f;
GLfloat speedC1=0.01f;

void Run(int value) {


    if(position >10 )
        position = 0.5f;




    position += speed;


glutPostRedisplay();//display refresh and render
glutTimerFunc(100, Run, 0);
}
void moveCloud(int value)
{
    if(mov >1.5)
        mov=-1.0f;

  mov +=speedC1;

  glutPostRedisplay();
  glutTimerFunc(100,moveCloud,0);
}
void moveCloud2(int value)
{
    if(mov2 <-1.5)
        mov2=1.0f;

  mov2 -=speedC1;
  glutPostRedisplay();
  glutTimerFunc(100,moveCloud2,0);
}
void sand()
{
glBegin (GL_POLYGON);//left side and area
glColor3ub (255,222,72);
glVertex2f(-0.998958f,-0.762963f);
glVertex2f(-1.0f,-0.35f);
glVertex2f(0.194792f,-0.348148f);
glEnd();
glBegin (GL_POLYGON);//right side sand area
glColor3ub (255,222,72);
glVertex2f(0.50625f,-0.996296f);
glVertex2f(0.28125f,-0.348148f);
glVertex2f(0.995833f,-0.35f);
glVertex2f(0.995833f,-0.996296f);
glEnd();
///For sand
glBegin (GL_POLYGON);//Hill right side(left back
glColor3ub (238,158,62);
glVertex2f(-1.0f,-0.762963f);
glVertex2f(-0.998958f,-0.609259f);
 glVertex2f(-0.494792f,-0.588889f);
glEnd();
glBegin (GL_POLYGON);//Hill right side(left back
glColor3ub (178,66,31);
glVertex2f(-0.998958f,-0.762963f);
glVertex2f(-0.998958f,-0.705556f);
glVertex2f(-0.796875f,-0.67037f);
glVertex2f(-0.733333f,-0.609259f);
glVertex2f(-0.676042f,-0.65f);
glEnd();
glBegin (GL_POLYGON);//Hill right side(left back
glColor3ub (178,66,31);
glVertex2f(-0.6625f,-0.646296f);
glVertex2f(-0.701042f,-0.598148f);
glVertex2f(-0.382292f,-0.535185f);
glVertex2f(-0.34375f,-0.505556f);
glVertex2f(-0.284375f,-0.516667f);
glEnd();
glBegin (GL_POLYGON);//Hill right side(left back
glColor3ub (178,66,31);
glVertex2f(-0.984375f,-0.525926f);
glVertex2f(-0.815625f,-0.503704f);
glVertex2f(-0.769792f,-0.503704f);
glVertex2f(-0.754167f,-0.496296f);
glVertex2f(-0.652083f,-0.503704f);
glVertex2f(-0.632292f,-0.527778f);
glEnd();

}
void cloud()
{
glBegin (GL_POLYGON);//Cloud 1
glColor3ub (153,240,254);
glVertex2f(-0.639583f,0.637037f);
glVertex2f(-0.584375f,0.653704f);
glVertex2f(-0.555208f,0.657407f);
glVertex2f(-0.534375f,0.651852f);
glVertex2f(-0.521875f,0.644444f);
glVertex2f(-0.515625f,0.633333f);
glVertex2f(-0.511458f,0.618519f);
glVertex2f(-0.510417f,0.607407f);
glEnd();

glPushMatrix();
glTranslatef(mov,0.0f,0.0f);
glBegin (GL_POLYGON);//Cloud 2 part 1
glColor3ub (153,240,254);
glVertex2f(-0.477083f,0.603704f);
glVertex2f(-0.41875f,0.618519f);
glVertex2f(-0.386458f,0.622222f);
glVertex2f(-0.363542f,0.612963f);
glVertex2f(-0.346875f,0.601852f);
glVertex2f(-0.328125f,0.587037f);
glVertex2f(-0.325f,0.577778f);
glEnd();

glBegin (GL_POLYGON);//Cloud 2 part 2
glVertex2f(-0.325f,0.577778f);
glVertex2f(-0.303125f,0.622222f);
glVertex2f(-0.2875f,0.640741f);
glVertex2f(-0.26875f,0.651852f);
glVertex2f(-0.251042f,0.651852f);
glVertex2f(-0.238542f,0.644444f);
glVertex2f(-0.222917f,0.611111f);
glVertex2f(-0.216667f,0.561111f);
glEnd();

glBegin (GL_POLYGON);//Cloud 2 part 3
glVertex2f(-0.216667f,0.561111f);
glVertex2f(-0.20625f,0.585185f);
glVertex2f(-0.19375f,0.607407f);
glVertex2f(-0.179167f,0.62963f);
glVertex2f(-0.163542f,0.651852f);
glVertex2f(-0.151042f,0.672222f);
glVertex2f(-0.136458f,0.688889f);
glVertex2f(-0.125f,0.701852f);
glVertex2f(-0.111458f,0.716667f);
glVertex2f(-0.096875f,0.72963f);
glVertex2f(-0.0802083f,0.740741f);
glVertex2f(-0.0666667f,0.744444f);
glVertex2f(-0.0541667f,0.742593f);
glVertex2f(-0.04375f,0.737037f);
glVertex2f(-0.0364583f,0.725926f);
glVertex2f(-0.0322917f,0.709259f);
glVertex2f(-0.03125f,0.688889f);
glVertex2f(-0.0333333f,0.67037f);
glVertex2f(-0.0354167f,0.653704f);
glVertex2f(-0.0385417f,0.635185f);
glVertex2f(-0.04375f,0.618519f);
glVertex2f(-0.0489583f,0.601852f);
glVertex2f(-0.0552083f,0.583333f);
glVertex2f(-0.0614583f,0.568519f);
glVertex2f(-0.065625f,0.555556f);
glVertex2f(-0.0697917f,0.546296f);
glVertex2f(-0.0697917f,0.537037f);

glEnd();

glBegin (GL_POLYGON);//Cloud 2 part 4
glVertex2f(-0.0697917f,0.537037f);
glVertex2f(-0.0625f,0.559259f);
glVertex2f(-0.05625f,0.575926f);
glVertex2f(-0.0489583f,0.590741f);
glVertex2f(-0.0395833f,0.605556f);
glVertex2f(-0.03125f,0.618519f);
glVertex2f(-0.0208333f,0.62963f);
glVertex2f(-0.0114583f,0.642593f);
glVertex2f(-0.00104167f,0.65f);
glVertex2f(0.0135417f,0.659259f);
glVertex2f(0.028125f,0.661111f);
glVertex2f(0.040625f,0.659259f);
glVertex2f(0.053125f,0.655556f);
glVertex2f(0.0645833f,0.644444f);
glVertex2f(0.0729167f,0.631481f);
glVertex2f(0.0791667f,0.62037f);
glVertex2f(0.0864583f,0.601852f);
glVertex2f(0.090625f,0.581481f);
glVertex2f(0.09375f,0.561111f);
glVertex2f(0.0958333f,0.542593f);
glVertex2f(0.096875f,0.525926f);
glVertex2f(0.0979167f,0.509259f);
glEnd();

glBegin (GL_POLYGON);//Cloud 2 part 5
glVertex2f(0.096875f,0.509259f);
glVertex2f(0.140625f,0.522222f);
glVertex2f(0.164583f,0.52037f);
glVertex2f(0.197917f,0.509259f);
glVertex2f(0.233333f,0.487037f);

glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(mov2,0.0f,0.0f);
glBegin (GL_POLYGON);//Cloud 3 part 1
glVertex2f(0.378125f,0.674074f);
glVertex2f(0.388542f,0.683333f);
glVertex2f(0.403125f,0.688889f);
glVertex2f(0.433333f,0.688889f);
glVertex2f(0.453125f,0.683333f);
glVertex2f(0.463542f,0.672222f);
glVertex2f(0.467708f,0.662963f);
glEnd();

glBegin (GL_POLYGON);//Cloud 3 part 2
glVertex2f(0.467708f,0.662963f);
glVertex2f(0.477083f,0.687037f);
glVertex2f(0.490625f,0.709259f);
glVertex2f(0.50625f,0.733333f);
glVertex2f(0.520833f,0.75f);
glVertex2f(0.535417f,0.764815f);
glVertex2f(0.553125f,0.774074f);
glVertex2f(0.571875f,0.775926f);
glVertex2f(0.590625f,0.772222f);
glVertex2f(0.604167f,0.764815f);
glVertex2f(0.617708f,0.751852f);
glVertex2f(0.630208f,0.735185f);
glVertex2f(0.641667f,0.711111f);
glVertex2f(0.648958f,0.688889f);
glVertex2f(0.654167f,0.664815f);
glVertex2f(0.657292f,0.640741f);
glEnd();

glBegin (GL_POLYGON);//Cloud 3 part 3
glVertex2f(0.657292f,0.640741f);
glVertex2f(0.663542f,0.65f);
glVertex2f(0.676042f,0.653704f);
glVertex2f(0.695833f,0.653704f);
glVertex2f(0.727083f,0.646296f);
glVertex2f(0.748958f,0.638889f);
glVertex2f(0.76875f,0.627778f);

glEnd();
glPopMatrix();




glPushMatrix();
glTranslatef(mov,0.0f,0.0f);
glTranslatef(0.5f,0.2f,0.0f);
glBegin (GL_POLYGON);//Cloud 4 part 1
glVertex2f(0.378125f,0.674074f);
glVertex2f(0.388542f,0.683333f);
glVertex2f(0.403125f,0.688889f);
glVertex2f(0.433333f,0.688889f);
glVertex2f(0.453125f,0.683333f);
glVertex2f(0.463542f,0.672222f);
glVertex2f(0.467708f,0.662963f);
glEnd();

glBegin (GL_POLYGON);//Cloud 4 part 2
glVertex2f(0.467708f,0.662963f);
glVertex2f(0.477083f,0.687037f);
glVertex2f(0.490625f,0.709259f);
glVertex2f(0.50625f,0.733333f);
glVertex2f(0.520833f,0.75f);
glVertex2f(0.535417f,0.764815f);
glVertex2f(0.553125f,0.774074f);
glVertex2f(0.571875f,0.775926f);
glVertex2f(0.590625f,0.772222f);
glVertex2f(0.604167f,0.764815f);
glVertex2f(0.617708f,0.751852f);
glVertex2f(0.630208f,0.735185f);
glVertex2f(0.641667f,0.711111f);
glVertex2f(0.648958f,0.688889f);
glVertex2f(0.654167f,0.664815f);
glVertex2f(0.657292f,0.640741f);
glEnd();

glBegin (GL_POLYGON);//Cloud 4 part 3
glVertex2f(0.657292f,0.640741f);
glVertex2f(0.663542f,0.65f);
glVertex2f(0.676042f,0.653704f);
glVertex2f(0.695833f,0.653704f);
glVertex2f(0.727083f,0.646296f);
glVertex2f(0.748958f,0.638889f);
glVertex2f(0.76875f,0.627778f);

glEnd();
glPopMatrix();




glPushMatrix();
glTranslatef(mov2,0.0f,0.0f);
glTranslatef(0.03f,-0.5f,0.0f);
glBegin (GL_POLYGON);//Cloud 2 part 1
glColor3ub (153,240,254);
glVertex2f(-0.477083f,0.603704f);
glVertex2f(-0.41875f,0.618519f);
glVertex2f(-0.386458f,0.622222f);
glVertex2f(-0.363542f,0.612963f);
glVertex2f(-0.346875f,0.601852f);
glVertex2f(-0.328125f,0.587037f);
glVertex2f(-0.325f,0.577778f);
glEnd();

glBegin (GL_POLYGON);//Cloud 2 part 2
glVertex2f(-0.325f,0.577778f);
glVertex2f(-0.303125f,0.622222f);
glVertex2f(-0.2875f,0.640741f);
glVertex2f(-0.26875f,0.651852f);
glVertex2f(-0.251042f,0.651852f);
glVertex2f(-0.238542f,0.644444f);
glVertex2f(-0.222917f,0.611111f);
glVertex2f(-0.216667f,0.561111f);
glEnd();

glBegin (GL_POLYGON);//Cloud 2 part 3
glVertex2f(-0.216667f,0.561111f);
glVertex2f(-0.20625f,0.585185f);
glVertex2f(-0.19375f,0.607407f);
glVertex2f(-0.179167f,0.62963f);
glVertex2f(-0.163542f,0.651852f);
glVertex2f(-0.151042f,0.672222f);
glVertex2f(-0.136458f,0.688889f);
glVertex2f(-0.125f,0.701852f);
glVertex2f(-0.111458f,0.716667f);
glVertex2f(-0.096875f,0.72963f);
glVertex2f(-0.0802083f,0.740741f);
glVertex2f(-0.0666667f,0.744444f);
glVertex2f(-0.0541667f,0.742593f);
glVertex2f(-0.04375f,0.737037f);
glVertex2f(-0.0364583f,0.725926f);
glVertex2f(-0.0322917f,0.709259f);
glVertex2f(-0.03125f,0.688889f);
glVertex2f(-0.0333333f,0.67037f);
glVertex2f(-0.0354167f,0.653704f);
glVertex2f(-0.0385417f,0.635185f);
glVertex2f(-0.04375f,0.618519f);
glVertex2f(-0.0489583f,0.601852f);
glVertex2f(-0.0552083f,0.583333f);
glVertex2f(-0.0614583f,0.568519f);
glVertex2f(-0.065625f,0.555556f);
glVertex2f(-0.0697917f,0.546296f);
glVertex2f(-0.0697917f,0.537037f);

glEnd();

glBegin (GL_POLYGON);//Cloud 2 part 4
glVertex2f(-0.0697917f,0.537037f);
glVertex2f(-0.0625f,0.559259f);
glVertex2f(-0.05625f,0.575926f);
glVertex2f(-0.0489583f,0.590741f);
glVertex2f(-0.0395833f,0.605556f);
glVertex2f(-0.03125f,0.618519f);
glVertex2f(-0.0208333f,0.62963f);
glVertex2f(-0.0114583f,0.642593f);
glVertex2f(-0.00104167f,0.65f);
glVertex2f(0.0135417f,0.659259f);
glVertex2f(0.028125f,0.661111f);
glVertex2f(0.040625f,0.659259f);
glVertex2f(0.053125f,0.655556f);
glVertex2f(0.0645833f,0.644444f);
glVertex2f(0.0729167f,0.631481f);
glVertex2f(0.0791667f,0.62037f);
glVertex2f(0.0864583f,0.601852f);
glVertex2f(0.090625f,0.581481f);
glVertex2f(0.09375f,0.561111f);
glVertex2f(0.0958333f,0.542593f);
glVertex2f(0.096875f,0.525926f);
glVertex2f(0.0979167f,0.509259f);
glEnd();

glBegin (GL_POLYGON);//Cloud 2 part 5
glVertex2f(0.096875f,0.509259f);
glVertex2f(0.140625f,0.522222f);
glVertex2f(0.164583f,0.52037f);
glVertex2f(0.197917f,0.509259f);
glVertex2f(0.233333f,0.487037f);

glEnd();
glPopMatrix();

}
void sky()
{
glClear(GL_COLOR_BUFFER_BIT); //Clear the color buffer (Background)
    glBegin (GL_POLYGON);//sky part 1
glColor3ub (5,159,218);
glVertex2f(-1.0f,0.933333f);
glVertex2f(-0.997917f,0.996296f);
glVertex2f(0.995833f,1.0f);
glVertex2f(0.996875f,0.783333f);
glEnd();
    glBegin (GL_POLYGON);//sky part 2
glColor3ub (46,197,221);
glVertex2f(-0.998958f,0.835185f);
glVertex2f(-0.998958f,0.933333f);
glVertex2f(0.996875f,0.790741f);
glVertex2f(0.994792f,0.583333f);
glEnd();
    glBegin (GL_POLYGON);//sky part 3
glColor3ub (54,197,210);
glVertex2f(-1.0f,0.75f);
glVertex2f(-0.998958f,0.835185f);
glVertex2f(0.996875f,0.601852f);
glVertex2f(0.996875f,0.462963f);
glEnd();
  glBegin (GL_POLYGON);//sky part 4
glColor3ub (56,196,217);
glVertex2f(-1.0f,0.687037f);
glVertex2f(-0.998958f,0.757407f);
glVertex2f(0.995833f,0.483333f);
glVertex2f(0.995833f,0.416667f);
glEnd();
glBegin (GL_POLYGON);//sky part 5
glColor3ub (100,228,217);
glVertex2f(-1.0f,0.687037f);
glVertex2f(0.995833f,0.416667f);
glVertex2f(0.995833f,0.214815f);
glVertex2f(-1.0f,0.533333f);
glEnd();
glBegin (GL_POLYGON);//sky part 6
glColor3ub (123,233,204);
glVertex2f(-1.0f,0.533333f);
glVertex2f(0.995833f,0.214815f);
glVertex2f(0.995833f,-0.166667f);
glVertex2f(-0.998958f,0.155556f);
glEnd();
  glBegin (GL_POLYGON);//sky part DOWN
glColor3ub (210,250,225);
 glVertex2f(-0.998958f,0.155556f);
glVertex2f(0.996875f,-0.131481f);
 glVertex2f(0.995833f,-0.35f);
 glVertex2f(-0.998958f,-0.351852f);
glEnd();


}
void hill()
{


glBegin (GL_POLYGON);//Hill left side
glColor3ub (255,177,68);
glVertex2f(-0.998958f,-0.274074f);
glVertex2f(-0.967708f,-0.318519f);
glVertex2f(-0.998958f,-0.348148f);

glEnd();



glBegin (GL_POLYGON);//Hill left side
glColor3ub (255,177,68);
glVertex2f(-0.998958f,-0.348148f);
glVertex2f(-0.935417f,-0.309259f);
glVertex2f(-0.813542f,-0.337037f);
glEnd();
glBegin (GL_POLYGON);//Hill left side
glColor3ub (223,109,40);
glVertex2f(-1.0f,-0.348148f);
glVertex2f(-0.96875f,-0.318519f);
glVertex2f(-0.935417f,-0.311111f);
glEnd();
glBegin (GL_POLYGON);//Hill left side
glColor3ub (223,109,40);
glVertex2f(-1.0f,-0.348148f);
glVertex2f(-0.8125f,-0.337037f);
glVertex2f(-0.813542f,-0.35f);
glEnd();
glBegin (GL_POLYGON);//Hill left side
glColor3ub (255,177,68);
glVertex2f(-0.814583f,-0.348148f);
 glVertex2f(-0.815625f,-0.331481f);
glVertex2f(-0.796875f,-0.314815f);
glVertex2f(-0.722917f,-0.298148f);
glVertex2f(-0.69375f,-0.32037f);
glVertex2f(-0.694792f,-0.348148f);
glEnd();
glBegin (GL_POLYGON);//Hill left side
glColor3ub (223,109,40);
glVertex2f(-0.79375f,-0.318519f);
glVertex2f(-0.71875f,-0.305556f);
glVertex2f(-0.696875f,-0.318519f);
glEnd();
glBegin (GL_POLYGON);//Hill left side
glColor3ub (255,177,68);
glVertex2f(-0.695833f,-0.318519f);
glVertex2f(-0.71875f,-0.298148f);
glVertex2f(-0.697917f,-0.264815f);
glVertex2f(-0.683333f,-0.287037f);
glEnd();
glBegin (GL_POLYGON);//Hill left side
glColor3ub (223,109,40);
glVertex2f(-0.694792f,-0.348148f);
glVertex2f(-0.69375f,-0.32037f);
glVertex2f(-0.683333f,-0.287037f);
glVertex2f(-0.5f,-0.246296f);
glVertex2f(-0.497917f,-0.348148f);
glEnd();
glBegin (GL_POLYGON);//Hill left side
glColor3ub (255,177,68);
glVertex2f(-0.695833f,-0.318519f);
glVertex2f(-0.71875f,-0.298148f);
glVertex2f(-0.697917f,-0.264815f);
glVertex2f(-0.683333f,-0.287037f);
glEnd();
glBegin (GL_POLYGON);//Hill left side
glColor3ub (223,109,40);
glVertex2f(-0.697917f,-0.264815f);
glVertex2f(-0.69375f,-0.32037f);
glVertex2f(-0.683333f,-0.287037f);
glEnd();
glBegin (GL_POLYGON);//Hill left side
glColor3ub (255,177,68);
glVertex2f(-0.697917f,-0.264815f);
glVertex2f(-0.71875f,-0.298148f);
//glVertex2f(-0.5f,-0.246296f);
glVertex2f(-0.497917f,-0.348148f);
glEnd();
glBegin (GL_POLYGON);//Hill left side(right back
glColor3ub (255,177,68);
glVertex2f(-0.503125f,-0.246296f);
glVertex2f(-0.471875f,-0.177778f);
glVertex2f(-0.366667f,-0.162963f);
glVertex2f(-0.297917f,-0.272222f);
glVertex2f(-0.301042f,-0.351852f);
glVertex2f(-0.498958f,-0.35f);
glEnd();
glBegin (GL_POLYGON);//Hill left side(right)
glColor3ub (223,109,40);
glVertex2f(-0.30625f,-0.348148f);
glVertex2f(-0.3125f,-0.298148f);
glVertex2f(-0.301042f,-0.264815f);
glVertex2f(-0.270833f,-0.281481f);
glVertex2f(-0.20625f,-0.351852f);
glEnd();
glBegin (GL_POLYGON);//Hill left side(right back
glColor3ub (255,177,68);
glVertex2f(-0.19375f,-0.35f);
glVertex2f(-0.11875f,-0.327778f);
glVertex2f(-0.0229167f,-0.346296f);
glEnd();
glBegin (GL_POLYGON);//Hill left side(right back
glColor3ub (255,177,68);
glVertex2f(-0.0302083f,-0.348148f);
glVertex2f(0.053125f,-0.305556f);
glVertex2f(0.183333f,-0.338889f);
glVertex2f(0.18125f,-0.35f);
glEnd();




glBegin (GL_POLYGON);//Hill right side(left back
glColor3ub (255,177,68);
glVertex2f(0.502083f,-0.355556f);
glVertex2f(0.504167f,-0.337037f);
glVertex2f(0.5125f,-0.316667f);
glVertex2f(0.615625f,-0.316667f);
glVertex2f(0.619792f,-0.348148f);
glEnd();
}
void stop()
{
glBegin (GL_POLYGON);//soil
glColor3ub (194,77,33);
glVertex2f(0.415625f,-0.705556f);
glVertex2f(0.452083f,-0.703704f);
glVertex2f(0.475f,-0.685185f);
glVertex2f(0.5f,-0.687037f);
glVertex2f(0.530208f,-0.714815f);
glVertex2f(0.44375f,-0.711111f);
glEnd();

glBegin (GL_POLYGON);//bar
glColor3ub (97,105,127);
glVertex2f(0.453125f,-0.707407f);
glVertex2f(0.461458f,-0.705556f);
glVertex2f(0.44375f,-0.116667f);
glEnd();

glBegin (GL_POLYGON);//outer red
glColor3ub (193,38,33);
glVertex2f(0.385417f,-0.296296f);
glVertex2f(0.514583f,-0.288889f);
glVertex2f(0.44375f,-0.116667f);
glEnd();

glBegin (GL_POLYGON);//inner white
glColor3ub (160,206,227);
glVertex2f(0.397917f,-0.283333f);
glVertex2f(0.494792f,-0.275926f);
glVertex2f(0.44375f,-0.142593f);
glEnd();

}

void cactus()
{
glBegin (GL_POLYGON);//left soil
glColor3ub (194,77,33);
glVertex2f(-0.829167f,-0.390741f);
glVertex2f(-0.766667f,-0.394444f);
glVertex2f(-0.790625f,-0.375926f);
glVertex2f(-0.8f,-0.374074f);
glVertex2f(-0.807292f,-0.381481f);
glEnd();


glBegin (GL_POLYGON);//left cactus
glColor3ub (101,104,0);
glVertex2f(-0.798958f,-0.374074f);
glVertex2f(-0.805208f,-0.312963f);
glVertex2f(-0.809375f,-0.262963f);
glVertex2f(-0.783333f,-0.246296f);
glVertex2f(-0.7875f,-0.340741f);
glVertex2f(-0.790625f,-0.375926f);
glEnd();

glBegin (GL_POLYGON);//left cactus
glColor3ub (101,104,0);
glVertex2f(-0.783333f,-0.337037f);
glVertex2f(-0.778125f,-0.32037f);
glVertex2f(-0.772917f,-0.307407f);
glVertex2f(-0.767708f,-0.303704f);
glVertex2f(-0.761458f,-0.312963f);
glVertex2f(-0.761458f,-0.316667f);
glVertex2f(-0.766667f,-0.331481f);
glVertex2f(-0.778125f,-0.342593f);
glVertex2f(-0.786458f,-0.346296f);
glEnd();


glBegin (GL_POLYGON);//right cactus
glColor3ub (101,104,0);
glVertex2f(0.648958f,-0.888889f);
glVertex2f(0.619792f,-0.633333f);
glVertex2f(0.7f,-0.564815f);
glVertex2f(0.679167f,-0.87037f);
glEnd();

glBegin (GL_POLYGON);//right cactus
glColor3ub (95,100,0);
glVertex2f(0.686458f,-0.685185f);
glVertex2f(0.711458f,-0.655556f);
glVertex2f(0.721875f,-0.546296f);
glVertex2f(0.759375f,-0.57963f);
glVertex2f(0.742708f,-0.644444f);
glVertex2f(0.720833f,-0.675926f);
glEnd();

glBegin (GL_POLYGON);//right cactus
glColor3ub (101,104,0);
glVertex2f(0.642708f,-0.783333f);
glVertex2f(0.566667f,-0.662963f);
glVertex2f(0.558333f,-0.662963f);
glVertex2f(0.545833f,-0.703704f);
glVertex2f(0.544792f,-0.735185f);
glVertex2f(0.557292f,-0.761111f);
glVertex2f(0.589583f,-0.788889f);
glVertex2f(0.61875f,-0.796296f);
glEnd();

glBegin (GL_POLYGON);//right tila
glColor3ub (143,36,13);
glVertex2f(0.544792f,-0.996296f);
glVertex2f(0.564583f,-0.948148f);
glVertex2f(0.652083f,-0.890741f);
glVertex2f(0.667708f,-0.931481f);
glVertex2f(0.691667f,-0.996296f);
glEnd();

glBegin (GL_POLYGON);//right tila
glColor3ub (179,63,23);
glVertex2f(0.691667f,-0.996296f);
glVertex2f(0.652083f,-0.890741f);
glVertex2f(0.679167f,-0.866667f);
glVertex2f(0.814583f,-0.868519f);
glVertex2f(0.925f,-0.838889f);
glVertex2f(1.00f,-0.87963f);
glVertex2f(1.0f,-1.0f);
glEnd();

glBegin (GL_POLYGON);//right tila
glColor3ub (225,117,44);
glVertex2f(0.691667f,-0.877778f);
glVertex2f(0.766667f,-0.655556f);
glVertex2f(0.901042f,-0.661111f);
glVertex2f(1.0f,-0.614815f);
glVertex2f(1.0f,-0.87963f);
glEnd();

glBegin (GL_POLYGON);//right tila
glColor3ub (238,158,62);
glVertex2f(0.766667f,-0.655556f);
glVertex2f(0.865625f,-0.585185f);
glVertex2f(1.0f,-0.614815f);
glVertex2f(0.901042f,-0.661111f);
glEnd();

glBegin (GL_POLYGON);//right tila
glColor3ub (179,63,23);
glVertex2f(0.865625f,-0.585185f);
glVertex2f(1.0f,-0.614815f);


glEnd();

}

void lamp()
{
glBegin (GL_POLYGON);//Lamp 1 left shade
glColor3ub (125,186,216);
glVertex2f(-0.910417f,-0.675926f);
glVertex2f(-0.935417f,-0.677778f);
glVertex2f(-0.921875f,0.75f);
glVertex2f(-0.914583f,0.751852f);
glEnd();

glBegin (GL_POLYGON);//Lamp 1 right shade
glColor3ub (102,113,130);
glVertex2f(-0.898958f,-0.672222f);
glVertex2f(-0.910417f,-0.675926f);
glVertex2f(-0.914583f,0.751852f);
glVertex2f(-0.910417f,0.751852f);
glVertex2f(-0.898958f,-0.672222f);
glEnd();

glBegin (GL_POLYGON);//Lamp 1 upper
glColor3ub (172,199,200);
glVertex2f(-0.820833f,0.759259f);
glVertex2f(-0.825f,0.755556f);
glVertex2f(-0.836458f,0.714815f);
glVertex2f(-0.836458f,0.694444f);
glVertex2f(-0.825f,0.698148f);
glEnd();

glBegin (GL_POLYGON);//Lamp 1 upper
glColor3ub (172,199,200);
 glVertex2f(-0.982292f,0.733333f);
 glVertex2f(-0.989583f,0.733333f);
 glVertex2f(-0.989583f,0.675926f);
 glVertex2f(-0.982292f,0.675926f);
glEnd();

glBegin (GL_POLYGON);//Lamp 1 upper
glColor3ub (172,199,200);
glVertex2f(-0.989583f,0.696296f);
glVertex2f(-0.989583f,0.675926f);
glVertex2f(-0.836458f,0.694444f);
glVertex2f(-0.836458f,0.714815f);
glEnd();

glBegin (GL_POLYGON);//Lamp 1 light handle
glColor3ub (98,90,128);
glVertex2f(-0.914583f,0.592593f);
glVertex2f(-0.895833f,0.618519f);
glVertex2f(-0.891667f,0.611111f);
glVertex2f(-0.909375f,0.581481f);
glVertex2f(-0.914583f,0.592593f);
glEnd();

glBegin (GL_POLYGON);//Lamp 1 light
glColor3ub (230,239,242);
glVertex2f(-0.894792f,0.624074f);
glVertex2f(-0.894792f,0.616667f);
glVertex2f(-0.888542f,0.609259f);
glVertex2f(-0.779167f,0.627778f);
glVertex2f(-0.798958f,0.642593f);
glVertex2f(-0.894792f,0.624074f);
glEnd();


glBegin (GL_POLYGON);//Lamp 2 left shade
glColor3ub (125,186,216);
glVertex2f(-0.333333f,-0.485185f);
glVertex2f(-0.348958f,-0.485185f);
glVertex2f(-0.341667f,0.351852f);
glVertex2f(-0.336458f,0.353704f);
glVertex2f(-0.333333f,-0.485185f);
glEnd();

glBegin (GL_POLYGON);//Lamp 2 right shade
glColor3ub (102,113,130);
glVertex2f(-0.328125f,-0.481481f);
 glVertex2f(-0.334375f,-0.485185f);
 glVertex2f(-0.336458f,0.351852f);
glVertex2f(-0.333333f,0.353704f);
glVertex2f(-0.328125f,-0.481481f);
glEnd();


glBegin (GL_POLYGON);//Lamp 2 upper left
glColor3ub (172,199,200);
glVertex2f(-0.38125f,0.344444f);
glVertex2f(-0.377083f,0.342593f);
glVertex2f(-0.373958f,0.311111f);
glVertex2f(-0.38125f,0.311111f);
glVertex2f(-0.38125f,0.344444f);
glEnd();

glBegin (GL_POLYGON);//Lamp 2 upper right
glColor3ub (172,199,200);
glVertex2f(-0.285417f,0.355556f);
glVertex2f(-0.290625f,0.338889f);
glVertex2f(-0.290625f,0.322222f);
glVertex2f(-0.28125f,0.32037f);
glVertex2f(-0.28125f,0.355556f);
glVertex2f(-0.285417f,0.355556f);
glEnd();

glBegin (GL_POLYGON);//Lamp 2 mid
glColor3ub (172,199,200);
glVertex2f(-0.378125f,0.324074f);
glVertex2f(-0.378125f,0.312963f);
glVertex2f(-0.289583f,0.322222f);
glVertex2f(-0.291667f,0.335185f);
glVertex2f(-0.378125f,0.324074f);
glEnd();

glBegin (GL_POLYGON);//Lamp 2 light handle
glColor3ub (98,90,128);
glVertex2f(-0.336458f,0.257407f);
glVertex2f(-0.335417f,0.248148f);
glVertex2f(-0.333333f,0.248148f);
glVertex2f(-0.325f,0.261111f);
glVertex2f(-0.325f,0.27037f);
glVertex2f(-0.336458f,0.257407f);
glEnd();

glBegin (GL_POLYGON);//Lamp 2 light
glColor3ub (230,239,242);
glVertex2f(-0.325f,0.274074f);
glVertex2f(-0.322917f,0.262963f);
glVertex2f(-0.258333f,0.274074f);
glVertex2f(-0.269792f,0.285185f);
glVertex2f(-0.326042f,0.274074f);
glVertex2f(-0.325f,0.274074f);
glEnd();

glBegin (GL_POLYGON);//Lamp 3 left shade
glColor3ub (125,186,216);
 glVertex2f(0.00625f,-0.392593f);
glVertex2f(0.0f,-0.392593f);
glVertex2f(0.00416667f,0.012963f);
glVertex2f(0.00625f,0.0111111f);
glVertex2f(0.00625f,-0.392593f);
glEnd();

glBegin (GL_POLYGON);//Lamp 3 right shade
glColor3ub (102,113,130);
glVertex2f(0.0104167f,-0.390741f);
glVertex2f(0.00625f,-0.392593f);
glVertex2f(0.00416667f,0.012963f);
glVertex2f(0.00833333f,0.012963f);
glVertex2f(0.0104167f,-0.390741f);
glEnd();


glBegin (GL_POLYGON);//Lamp 3 bar
glColor3ub (172,199,200);
glVertex2f(-0.015625f,-0.00185185f);
glVertex2f(0.0322917f,0.0037037f);
glVertex2f(0.0333333f,-0.00925926f);
glVertex2f(-0.015625f,-0.012963f);
glVertex2f(-0.015625f,-0.00185185f);
glEnd();

glBegin (GL_POLYGON);//Lamp 3 light handle
glColor3ub (98,90,128);
glVertex2f(0.00625f,-0.0296296f);
glVertex2f(0.00729167f,-0.0351852f);
glVertex2f(0.0114583f,-0.0296296f);
glVertex2f(0.0104167f,-0.0259259f);
glVertex2f(0.00625f,-0.0296296f);
glEnd();

glBegin (GL_POLYGON);//Lamp 3 light
glColor3ub (230,239,242);
glVertex2f(0.0104167f,-0.0222222f);
glVertex2f(0.0125f,-0.0296296f);
glVertex2f(0.04375f,-0.0259259f);
glVertex2f(0.040625f,-0.0203704f);
glVertex2f(0.0104167f,-0.0222222f);
glEnd();


glBegin (GL_POLYGON);//Lamp 4
glColor3ub (115,176,200);
glVertex2f(0.159375f,-0.12963f);
glVertex2f(0.1625f,-0.125926f);
glVertex2f(0.163542f,-0.338889f);
glVertex2f(0.158333f,-0.353704f);
glVertex2f(0.159375f,-0.12963f);
glEnd();

glBegin (GL_POLYGON);//Lamp 4 right shade
glColor3ub (102,113,130);
glVertex2f(0.159365f,-0.12953f);
glVertex2f(0.1615f,-0.125916f);
glVertex2f(0.163532f,-0.338879f);
glVertex2f(0.158323f,-0.353604f);
glVertex2f(0.159365f,-0.12953f);
glEnd();

glBegin (GL_POLYGON);//Lamp 4 bar
glColor3ub (172,199,200);
glVertex2f(0.151042f,-0.133333f);
glVertex2f(0.176042f,-0.131481f);
glVertex2f(0.177083f,-0.137037f);
glVertex2f(0.151042f,-0.133333f);
glEnd();

glBegin (GL_POLYGON);//Lamp 4 light
glColor3ub (255,255,255);
glVertex2f(0.1625f,-0.146296f);
glVertex2f(0.183333f,-0.142593f);
glVertex2f(0.183333f,-0.146296f);
glVertex2f(0.1625f,-0.146296f);
glEnd();

glBegin (GL_POLYGON);//wire
glColor3ub (102,113,130);
glVertex2f(-0.99375f,0.998148f);
glVertex2f(-0.833333f,0.692593f);
glVertex2f(-0.835417f,0.690741f);
glVertex2f(-1.00f,0.996296f);
glEnd();

glBegin (GL_POLYGON);//wire
glColor3ub (102,113,130);
glVertex2f(-0.833333f,0.692593f);
glVertex2f(-0.289583f,0.337037f);
glVertex2f(-0.289583f,0.333333f);
glVertex2f(-0.835417f,0.690741f);
glEnd();



glBegin (GL_POLYGON);//wire
glColor3ub (102,113,130);
glVertex2f(-0.280208f,0.32037f);
//glVertex2f(0.028125f,0.00185185f);
glVertex2f(0.028125f,-0.00185185f);
glVertex2f(-0.28125f,0.316667f);
glEnd();

glBegin (GL_POLYGON);//wire
glColor3ub (102,113,130);
glVertex2f(0.028125f,0.00185185f);
glVertex2f(0.0302083f,-0.0037037f);
glVertex2f(0.176042f,-0.131481f);
glVertex2f(0.176042f,-0.133333f);
glEnd();

glBegin (GL_POLYGON);//wire
glColor3ub (102,113,130);

glEnd();

glBegin (GL_POLYGON);//wire
glColor3ub (102,113,130);
glVertex2f(-0.998958f,0.722222f);
glVertex2f(-0.989583f,0.711111f);
glVertex2f(-0.990625f,0.703704f);
glVertex2f(-0.997917f,0.712963f);
glEnd();

glBegin (GL_POLYGON);//wire
glColor3ub (102,113,130);
glVertex2f(-0.963542f,0.675926f);
glVertex2f(-0.923958f,0.622222f);
glVertex2f(-0.925f,0.612963f);
glVertex2f(-0.966667f,0.672222f);
glEnd();

glBegin (GL_POLYGON);//wire
glColor3ub (102,113,130);
glVertex2f(-0.903125f,0.596296f);
glVertex2f(-0.383333f,0.314815f);
glVertex2f(-0.384375f,0.311111f);
glVertex2f(-0.904167f,0.592593f);
glEnd();

glBegin (GL_POLYGON);//wire
glColor3ub (102,113,130);
glVertex2f(-0.367708f,0.307407f);
glVertex2f(-0.342708f,0.266667f);
glVertex2f(-0.369792f,0.305556f);
glEnd();

glBegin (GL_POLYGON);//wire
glColor3ub (102,113,130);
glVertex2f(-0.33125f,0.253704f);
glVertex2f(-0.0166667f,-0.0037037f);
glVertex2f(-0.0177083f,-0.00185185f);
glVertex2f(-0.333333f,0.25f);
glEnd();

glBegin (GL_POLYGON);//wire
glColor3ub (102,113,130);
glVertex2f(0.009375f,-0.0314815f);
glVertex2f(0.153125f,-0.133333f);
glVertex2f(0.0104167f,-0.037037f);
glEnd();
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
void car()
{
glPushMatrix();
//glRotatef(90.0f,0.0f,0.0f,0.0f);
glTranslatef(0.180208f,-0.283704f,0.0f);

glScalef(position,position,0.0f);
glScalef(0.2f,0.2f,0.0f);
//if(position > 6)
//        glTranslatef(0.0677083f,-0.851852f,0.0f);
//car
glBegin (GL_POLYGON);//Car glass frame
glColor3ub (225,55,50);
glVertex2f(0.0833333f,-0.42037f);
glVertex2f(0.119792f,-0.366667f);
glVertex2f(0.135417f,-0.359259f);
glVertex2f(0.239583f,-0.357407f);
glVertex2f(0.254167f,-0.364815f);
glVertex2f(0.291667f,-0.42037f);
glEnd();
glBegin (GL_POLYGON);//Car glass
glColor3ub (0,0,0);
glVertex2f(0.0875f,-0.42037f);
glVertex2f(0.120833f,-0.37037f);
glVertex2f(0.129167f,-0.364815f);
glVertex2f(0.246875f,-0.364815f);
glVertex2f(0.254167f,-0.37037f);
glVertex2f(0.288542f,-0.42037f);
glEnd();

glBegin (GL_POLYGON);//Looking glass 1
glColor3ub (225,55,50);
glVertex2f(0.0791667f,-0.42037f);
glVertex2f(0.0604167f,-0.418519f);
glVertex2f(0.05625f,-0.412963f);
glVertex2f(0.05625f,-0.405556f);
glVertex2f(0.0604167f,-0.4f);
glVertex2f(0.0770833f,-0.398148f);
glVertex2f(0.0822917f,-0.405556f);
glVertex2f(0.0822917f,-0.414815f);
glEnd();
glBegin (GL_POLYGON);//Looking glass 2
glColor3ub (225,55,50);
glVertex2f(0.295833f,-0.422222f);
glVertex2f(0.315625f,-0.418519f);
glVertex2f(0.31875f,-0.411111f);
glVertex2f(0.314583f,-0.4f);
glVertex2f(0.296875f,-0.398148f);
glVertex2f(0.292708f,-0.409259f);
glEnd();

glBegin (GL_POLYGON);//Part 1
glColor3ub (255,63,57);
glVertex2f(0.110417f,-0.477778f);
 glVertex2f(0.115625f,-0.509259f);
glVertex2f(0.115625f,-0.52037f);
glVertex2f(0.096875f,-0.516667f);
 glVertex2f(0.0760417f,-0.505556f);
 glVertex2f(0.0760417f,-0.492593f);
 glVertex2f(0.0708333f,-0.472222f);
glVertex2f(0.0697917f,-0.45f);
glVertex2f(0.0697917f,-0.427778f);
 glVertex2f(0.0770833f,-0.422222f);
glVertex2f(0.10625f,-0.424074f);
glEnd();
glBegin (GL_POLYGON);//Part 2
glColor3ub (193,63,33);
glVertex2f(0.110417f,-0.477778f);
glVertex2f(0.10625f,-0.424074f);
glVertex2f(0.115625f,-0.42037f);
glVertex2f(0.129167f,-0.42037f);
glVertex2f(0.146875f,-0.427778f);
glVertex2f(0.128125f,-0.483333f);
glVertex2f(0.128125f,-0.522222f);
glVertex2f(0.115625f,-0.522222f);
glEnd();
glBegin (GL_POLYGON);//Part 3
glColor3ub (255,63,57);
 glVertex2f(0.128125f,-0.483333f);
 glVertex2f(0.145833f,-0.42963f);
glVertex2f(0.229167f,-0.42963f);
glVertex2f(0.246875f,-0.483333f);
glVertex2f(0.247917f,-0.522222f);
glVertex2f(0.128125f,-0.522222f);
glEnd();
glBegin (GL_POLYGON);//Part 5
glColor3ub (255,63,57);
glVertex2f(0.263542f,-0.477778f);
glVertex2f(0.266667f,-0.425926f);
glVertex2f(0.298958f,-0.42037f);
glVertex2f(0.303125f,-0.424074f);
glVertex2f(0.305208f,-0.42963f);
glVertex2f(0.305208f,-0.464815f);
glVertex2f(0.3f,-0.494444f);
glVertex2f(0.298958f,-0.507407f);
glVertex2f(0.285417f,-0.514815f);
glVertex2f(0.259375f,-0.52037f);
glEnd();
glBegin (GL_POLYGON);//Part 4
glColor3ub (193,63,33);
glVertex2f(0.246875f,-0.483333f);
glVertex2f(0.229167f,-0.42963f);
glVertex2f(0.238542f,-0.424074f);
glVertex2f(0.245833f,-0.42037f);
glVertex2f(0.261458f,-0.42037f);
glVertex2f(0.267708f,-0.425926f);
glVertex2f(0.265625f,-0.468518f);
glVertex2f(0.263542f,-0.477778f);
glVertex2f(0.259375f,-0.52037f);
glVertex2f(0.246875f,-0.522222f);
glEnd();





glBegin (GL_POLYGON);//HEAD LIGHT LEFT
glColor3ub (163,165,186);
glVertex2f(0.0760417f,-0.492593f);
glVertex2f(0.0927083f,-0.492593f);
glVertex2f(0.107292f,-0.47963f);
glVertex2f(0.107292f,-0.468518f);
glVertex2f(0.071875f,-0.448148f);
glVertex2f(0.071875f,-0.462963f);
glEnd();
glBegin (GL_POLYGON);//HEAD LIGHT Right
glColor3ub (163,165,186);
glVertex2f(0.298958f,-0.490741f);
glVertex2f(0.282292f,-0.492593f);
glVertex2f(0.267708f,-0.47963f);
 glVertex2f(0.267708f,-0.468518f);
glVertex2f(0.303125f,-0.448148f);
glEnd();




glBegin (GL_POLYGON);//Left most Part
glColor3ub (193,63,33);
glVertex2f(0.0760417f,-0.507407f);
glVertex2f(0.0760417f,-0.592593f);
glVertex2f(0.0677083f,-0.588889f);
glVertex2f(0.059375f,-0.587037f);
glVertex2f(0.05625f,-0.581481f);
glVertex2f(0.0552083f,-0.574074f);
glVertex2f(0.0552083f,-0.55f);
glVertex2f(0.05625f,-0.546296f);
glVertex2f(0.05625f,-0.477778f);
glVertex2f(0.05625f,-0.477778f);
glVertex2f(0.0583333f,-0.448148f);
glVertex2f(0.0604167f,-0.438889f);
glVertex2f(0.0645833f,-0.431481f);
glVertex2f(0.06875f,-0.427778f);
 glVertex2f(0.0697917f,-0.448148f);
 glVertex2f(0.0739583f,-0.492593f);
glEnd();
glBegin (GL_POLYGON);//Left most Part
glColor3ub (193,63,33);
glVertex2f(0.298958f,-0.507407f);
glVertex2f(0.3f,-0.490741f);
glVertex2f(0.305208f,-0.427778f);
glVertex2f(0.311458f,-0.431481f);
glVertex2f(0.315625f,-0.438889f);
glVertex2f(0.317708f,-0.453704f);
glVertex2f(0.31875f,-0.462963f);
glVertex2f(0.31875f,-0.538889f);
glVertex2f(0.320833f,-0.548148f);
glVertex2f(0.320833f,-0.574074f);
glVertex2f(0.31875f,-0.585185f);
glVertex2f(0.314583f,-0.588889f);
glVertex2f(0.307292f,-0.588889f);
glEnd();
glBegin (GL_POLYGON);//Middle Most part
glColor3ub (193,63,33);
glVertex2f(0.0760417f,-0.507407f);
glVertex2f(0.0927083f,-0.514815f);
glVertex2f(0.114583f,-0.522222f);
glVertex2f(0.246875f,-0.522222f);
glVertex2f(0.269792f,-0.518519f);
glVertex2f(0.298958f,-0.507407f);
glVertex2f(0.307292f,-0.587037f);
glVertex2f(0.285417f,-0.594444f);
glVertex2f(0.25f,-0.594444f);
glVertex2f(0.240625f,-0.590741f);
glVertex2f(0.134375f,-0.590741f);
glVertex2f(0.125f,-0.594444f);
glVertex2f(0.0760417f,-0.590741f);
glVertex2f(0.0677083f,-0.588889f);
glEnd();



//car designing


glLineWidth(2.5);
glBegin (GL_LINES);//Mid design
glColor3ub (0,0,0);
glVertex2f(0.0833333f,-0.422222f);
glVertex2f(0.0979167f,-0.461111f);
glVertex2f(0.107292f,-0.468518f);
glEnd();
glLineWidth(2.5);
glBegin (GL_LINES);//Mid design
glColor3ub (0,0,0);
glVertex2f(0.0979167f,-0.461111f);
glVertex2f(0.107292f,-0.468518f);
glEnd();
glBegin (GL_LINES);//Mid design
glColor3ub (0,0,0);
glVertex2f(0.107292f,-0.468518f);
glVertex2f(0.108333f,-0.477778f);
glEnd();
glBegin (GL_LINES);//Mid design
glColor3ub (0,0,0);
glVertex2f(0.108333f,-0.477778f);
glVertex2f(0.117708f,-0.481481f);
glEnd();
glBegin (GL_LINES);//Mid design
glColor3ub (0,0,0);
glVertex2f(0.117708f,-0.481481f);
glVertex2f(0.245833f,-0.483333f);
glEnd();
glBegin (GL_LINES);//Mid design
glColor3ub (0,0,0);
glVertex2f(0.245833f,-0.483333f);
glVertex2f(0.266667f,-0.477778f);
glEnd();
glBegin (GL_LINES);//Mid design
glColor3ub (0,0,0);
glVertex2f(0.266667f,-0.477778f);
glVertex2f(0.267708f,-0.468518f);
glEnd();
glBegin (GL_LINES);//Mid design
glColor3ub (0,0,0);
glVertex2f(0.267708f,-0.468518f);
glVertex2f(0.276042f,-0.461111f);
glEnd();
glBegin (GL_LINES);//Mid design
glColor3ub (0,0,0);
glVertex2f(0.276042f,-0.461111f);
glVertex2f(0.291667f,-0.422222f);
glEnd();



//down design
glBegin (GL_POLYGON);//Middle Most part
glColor3ub (0,0,0);
glVertex2f(0.0770833f,-0.514815f);
glVertex2f(0.0989583f,-0.531481f);
glVertex2f(0.0885417f,-0.564815f);
glVertex2f(0.096875f,-0.572222f);
glVertex2f(0.071875f,-0.57037f);
glVertex2f(0.065625f,-0.559259f);
glEnd();
glBegin (GL_POLYGON);//Middle Most part
glColor3ub (0,0,0);
glVertex2f(0.276042f,-0.531481f);
glVertex2f(0.297917f,-0.514815f);
glVertex2f(0.309375f,-0.559259f);
glVertex2f(0.302083f,-0.57037f);
glVertex2f(0.277083f,-0.572222f);
glVertex2f(0.286458f,-0.564815f);
glEnd();



glBegin (GL_POLYGON);//Middle Most part
glColor3ub (0,0,0);
glVertex2f(0.0947917f,-0.57037f);
glVertex2f(0.115625f,-0.531481f);
glVertex2f(0.258333f,-0.533333f);
glVertex2f(0.280208f,-0.57037f);
glVertex2f(0.271875f,-0.572222f);
 glVertex2f(0.251042f,-0.555556f);
 glVertex2f(0.125f,-0.555556f);
 glVertex2f(0.102083f,-0.574074f);
glEnd();
glBegin (GL_POLYGON);//Middle Most part
glColor3ub (54,54,54);
glVertex2f(0.10625f,-0.587037f);
glVertex2f(0.266667f,-0.585185f);
glVertex2f(0.257292f,-0.575926f);
glVertex2f(0.11875f,-0.575926f);
glEnd();

//Tier
glBegin (GL_POLYGON);//Middle Most part
glColor3ub (0,0,0);
glVertex2f(0.0614583f,-0.588889f);
 glVertex2f(0.0614583f,-0.594444f);
 glVertex2f(0.0645833f,-0.603704f);
 glVertex2f(0.102083f,-0.601852f);
 glVertex2f(0.105208f,-0.594444f);
glEnd();
glBegin (GL_POLYGON);//Middle Most part
glColor3ub (0,0,0);
glVertex2f(0.26875f,-0.594444f);
glVertex2f(0.272917f,-0.605556f);
glVertex2f(0.311458f,-0.601852f);
glVertex2f(0.314583f,-0.587037f);
glEnd();
//logo
glBegin (GL_POLYGON);//Middle Most part
glColor3ub (0,0,0);
glVertex2f(0.18125f,-0.492593f);
glVertex2f(0.19375f,-0.492593f);
glVertex2f(0.1875f,-0.507407f);
glEnd();

//glass focus
glBegin (GL_POLYGON);//Middle Most part
glColor3ub (175,168,160);
glVertex2f(0.117708f,-0.42037f);
glVertex2f(0.132292f,-0.381481f);
glVertex2f(0.142708f,-0.364815f);
glVertex2f(0.127083f,-0.364815f);
glVertex2f(0.119792f,-0.372222f);
glVertex2f(0.0885417f,-0.418519f);
glEnd();
glBegin (GL_POLYGON);//Middle Most part
glColor3ub (175,168,160);
glVertex2f(0.136458f,-0.422222f);
glVertex2f(0.138542f,-0.4f);
glVertex2f(0.147917f,-0.364815f);
glVertex2f(0.152083f,-0.364815f);
glVertex2f(0.145833f,-0.424074f);
glEnd();
//headlight middle
glBegin (GL_POLYGON);//Middle Most part
glColor3ub (44,44,63);
glVertex2f(0.0770833f,-0.47037f);
glVertex2f(0.0770833f,-0.461111f);
glVertex2f(0.0958333f,-0.466667f);
glVertex2f(0.0875f,-0.485185f);
glEnd();
glBegin (GL_POLYGON);//Middle Most part
glColor3ub (44,44,63);
glVertex2f(0.2875f,-0.485185f);
glVertex2f(0.280208f,-0.466667f);
glVertex2f(0.297917f,-0.459259f);
glVertex2f(0.297917f,-0.47037f);
glEnd();



//Bottom Design

glBegin (GL_POLYGON);//Middle Most part
glColor3ub (0,0,0);
glVertex2f(0.0552083f,-0.498148f);
glVertex2f(0.0635417f,-0.522222f);
glVertex2f(0.0552083f,-0.572222f);
glEnd();
glBegin (GL_POLYGON);//Middle Most part
glColor3ub (0,0,0);
glVertex2f(0.31875f,-0.507407f);
glVertex2f(0.310417f,-0.524074f);
glVertex2f(0.319792f,-0.57037f);
glEnd();



glPopMatrix();

}

void display()
{
sky();
cloud();
hill();
sand();
drawRoad();
lamp();
cactus();
stop();
car();
glFlush();//Render now
}
int main(int argc, char** argv)
{

    glutInitWindowSize(1920,1080); //Set the window's initital width & height
    glutInit(&argc,argv);//Initialize GLUT
    glutCreateWindow("Racing Track"); //Create a window with the given title
    glutDisplayFunc(display);// register display callback handler for window re-paint
    glutTimerFunc(100, Run, 0);//recursion start from here
    glutTimerFunc(100, moveCloud, 0);//recursion start from here
    glutTimerFunc(100, moveCloud2, 0);//recursion start from here
    glutMainLoop(); //Enter the event processing loop


    return 0;






}
