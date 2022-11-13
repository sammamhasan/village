#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <windows.h>

float windowHeight = 500;
float windowWidth = 500;
float s = 0;
bool ssun = false;
float n =0;
bool ncar = false;

void sky()
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(51,255,255);
    glVertex2f(-35.0,35.0);
    glVertex2f(-35.0,15.0);
    glVertex2f(35.0,15.0);
    glVertex2f(35.0,35.0);
    glEnd();
    glPopMatrix();

}

void sun()
{
    glPushMatrix();

    glColor3ub(255,128,0);
    glTranslatef(30+s,25,0);
    glScalef(.8,.8,0);
    glutSolidSphere(5.5,50,7);

    glPopMatrix();
    glEnd();

}



void car()
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(20.0-n,10.0);
    glVertex2f(20.0-n,6.0);
    glVertex2f(26.0-n,6.0);
    glVertex2f(26.0-n,10.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(16.0-n,8.0);
    glVertex2f(16.0-n,6.0);
    glVertex2f(20.0-n,6.0);
    glVertex2f(20.0-n,10.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(16.0-n,8.0);
    glVertex2f(16.0-n,7.0);
    glColor3ub(0,0,0);
    glVertex2f(20.0-n,7.0);
    glVertex2f(20.0-n,10.0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3ub(0,0,0);
    glTranslatef(18.5-n,5,0);
    glScalef(.25,.25,0);
    glutSolidSphere(5.5,50,7);
    glPopMatrix();
    glEnd();


    glPushMatrix();
    glColor3ub(0,0,0);
    glTranslatef(24-n,5,0);
    glScalef(.25,.25,0);
    glutSolidSphere(5.5,50,7);
    glPopMatrix();
    glEnd();

}

void ground()
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(0,102,0);
    glVertex2f(-35.0,15.0);
    glVertex2f(-35.0,-35.0);
    glVertex2f(35.0,-35.0);
    glVertex2f(35.0,15.0);
    glEnd();
    glPopMatrix();

}


void building()
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,1.0);
    glVertex2f(-20.0,21.0);
    glVertex2f(-20.0,-6.0);
    glVertex2f(-5.0,-6.0);
    glVertex2f(-5.0,21.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.0,1.0,1.0);
    glVertex2f(-17.0,-1.0);
    glVertex2f(-17.0,-4.0);
    glVertex2f(-14.0,-4.0);
    glVertex2f(-14.0,-1.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.0,1.0,1.0);
    glVertex2f(-17.0,4.0);
    glVertex2f(-17.0,1.0);
    glVertex2f(-14.0,1.0);
    glVertex2f(-14.0,4.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.0,1.0,1.0);
    glVertex2f(-17.0,9.0);
    glVertex2f(-17.0,6.0);
    glVertex2f(-14.0,6.0);
    glVertex2f(-14.0,9.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.0,1.0,1.0);
    glVertex2f(-17.0,14.0);
    glVertex2f(-17.0,11.0);
    glVertex2f(-14.0,11.0);
    glVertex2f(-14.0,14.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.0,1.0,1.0);
    glVertex2f(-17.0,19.0);
    glVertex2f(-17.0,16.0);
    glVertex2f(-14.0,16.0);
    glVertex2f(-14.0,19.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.0,1.0,1.0);
    glVertex2f(-11.0,-1.0);
    glVertex2f(-11.0,-4.0);
    glVertex2f(-8.0,-4.0);
    glVertex2f(-8.0,-1.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.0,1.0,1.0);
    glVertex2f(-11.0,4.0);
    glVertex2f(-11.0,1.0);
    glVertex2f(-8.0,1.0);
    glVertex2f(-8.0,4.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.0,1.0,1.0);
    glVertex2f(-11.0,9.0);
    glVertex2f(-11.0,6.0);
    glVertex2f(-8.0,6.0);
    glVertex2f(-8.0,9.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.0,1.0,1.0);
    glVertex2f(-11.0,14.0);
    glVertex2f(-11.0,11.0);
    glVertex2f(-8.0,11.0);
    glVertex2f(-8.0,14.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.0,1.0,1.0);
    glVertex2f(-11.0,19.0);
    glVertex2f(-11.0,16.0);
    glVertex2f(-8.0,16.0);
    glVertex2f(-8.0,19.0);
    glEnd();
    glPopMatrix();


}

void road()
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(96,96,96);
    glVertex2f(-40.0,0.0);
    glVertex2f(-40.0,-7.0);
    glVertex2f(40.0,-7.0);
    glVertex2f(40.0,0.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-40.0,-3.0);
    glVertex2f(-40.0,-4.0);
    glVertex2f(40.0,-4.0);
    glVertex2f(40.0,-3.0);
    glEnd();
    glPopMatrix();
}

void tree()
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(-3.0,8.0);
    glVertex2f(-3.0,1.0);
    glVertex2f(-2.0,1.0);
    glVertex2f(-2.0,8.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0,1.0,0.0);
    glVertex2f(-2.5,14.0);
    glVertex2f(-6.0,8.0);
    glVertex2f(1.0,8.0);
    glEnd();
    glPopMatrix();


}

void dishouse()
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(1.0,7.0);
    glVertex2f(1.0,1.0);
    glVertex2f(7.0,1.0);
    glVertex2f(7.0,7.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,1.0);
    glVertex2f(3.0,5.0);
    glVertex2f(3.0,1.0);
    glVertex2f(5.0,1.0);
    glVertex2f(5.0,5.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0,1.0,0.0);
    glVertex2f(4.0,10.0);
    glVertex2f(1.0,7.0);
    glVertex2f(7.0,7.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(1.5,4.0);
    glVertex2f(1.5,3.0);
    glVertex2f(2.0,3.0);
    glVertex2f(2.0,4.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(5.5,4.0);
    glVertex2f(5.5,3.0);
    glVertex2f(6.0,3.0);
    glVertex2f(6.0,4.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(2.0,1.0);
    glVertex2f(2.0,0.4);
    glVertex2f(6.0,0.4);
    glVertex2f(6.0,1.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(3.0,0.6);
    glVertex2f(3.0,0.0);
    glVertex2f(5.0,0.0);
    glVertex2f(5.0,0.6);
    glEnd();
    glPopMatrix();


}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluOrtho2D(-35, 35, -35, 35);
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();
    sky();
    sun();
    ground();


    dishouse();
    glPushMatrix();
    glTranslatef(-14,0,0);
    dishouse();
    glPopMatrix();

    tree();

    glPushMatrix();
    glTranslatef(0,-3,0);
    road();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0,-13,0);
    car();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(30,0,0);
    tree();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(25,0,0);
    tree();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(10,0,0);
    dishouse();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-12,5,0);
    building();
    glPopMatrix();

    glFlush();
    glutSwapBuffers();
}

void key( unsigned char key, int x, int y )
{
    switch ( key )
    {
    case 'A':
        ssun = true;

        glutPostRedisplay();
        break;
    case 'a':
        ssun = false;
        glutPostRedisplay();
        break;


    case 'B':
        ncar = true;

        glutPostRedisplay();
        break;
    case 'b':
        ncar = false;
        glutPostRedisplay();
        break;


    }
}


void nsun()
{
    if(ssun == true)
    {
        s += 0.003;
        if(s > 40)
            s = -40;
    }
    else if (ssun == false)
    {
        s = 1;

    }
}

void scar()
{
    if(ncar == true)
    {
        n += 0.005;
        if(n > 40)
            n = -40;
    }
    else if (ncar == false)
    {
        n = 1;

    }
}

void sammam(void)
{
    scar();
    nsun();
}

int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(windowWidth, windowHeight);
    glutCreateWindow("Sammam's Home");

    glutKeyboardFunc(key);
    glutIdleFunc(sammam);

    glutDisplayFunc(display);
    glutMainLoop();
    return 0;

}
