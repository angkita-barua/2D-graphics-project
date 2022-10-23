
#include<windows.h>
#include<mmsystem.h>
#include<GL\glut.h>
#include <GL/glu.h>
#include<math.h>
#include <stdlib.h>
#include<stdio.h>

#define PI 3.1416

GLint i, j, k,x=0,y=0,speed=0,alt=0,n1=1000,n2=1100,s1=0,s2=1,s3=1;
GLfloat sun_spin=0, sun_x=0, sun_y=0,reduce=10;
GLfloat ax=0,bx=0,cx=0,dx=0,str=500.0,mn=500.0;
GLfloat sr=0.0,sg=0.749,sb=1.0;
GLfloat spin = 0.0;

bool condition=false;
GLfloat position = 0.0f;
GLfloat _move =5.0f;
GLfloat position1 = 0.0f;
GLfloat _move1 =3.0f;
GLfloat position2 = 900.0f;
GLfloat _move2 =3.0f;




void init(void)
{
	glClearColor(.40, .110, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 1000.0, 0.0, 700.0);
}

float r(int a){

return x=4,y=8;


}


float r(int a,int b){


    return x=0,y=0;

}
void circle(GLdouble rad)
{
   glBegin(GL_POLYGON);
    {
      	for(int i=0;i<50;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/50;
            float r=rad;
            float x = r * cos(A);

            float y = r * sin(A);
            glVertex2f(x,y );
        }
    }
    glEnd();
}

void Sun_Model(){

    glPushMatrix();
    glTranslatef(700,600,0);
    circle(24);
    glPopMatrix();

}
void cloud_model_one(){

    glColor3f(1.25, 0.924, 0.930);

    ///Top_Left

    glPushMatrix();
    glTranslatef(320,210,0);
    circle(15);
    glPopMatrix();

    ///Top

    glPushMatrix();
    glTranslatef(340, 225, 0);
    circle(16);
    glPopMatrix();

    ///Right

    glPushMatrix();
    glTranslatef(360,210,0);
    circle(16);
    glPopMatrix();


    ///middle_Fill
    glPushMatrix();
    glTranslatef(355,210,0);
    circle(16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(350,210,0);
    circle(16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(345,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(340,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(335,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(330,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(325,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(320,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(315,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(310,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(305,204,0);
    circle(10);
    glPopMatrix();



}

void cloud_model_Two(){
    glColor3f(1.25, 0.924, 0.930);

    ///Left_Part
    glPushMatrix();
    glTranslatef(305,205,0);
    circle(10);
    glPopMatrix();

    ///Top

    glPushMatrix();
    glTranslatef(320,210,0);
    circle(15);
    glPopMatrix();

    ///Right_Part
    glPushMatrix();
    glTranslatef(334,207,0);
    circle(10);
    glPopMatrix();

    ///Bottom_Part
    glPushMatrix();
    glTranslatef(320,207,0);
    circle(10);
    glPopMatrix();



}

void cloud_model_Three(){
    glColor3f(1.25, 0.924, 0.930);

    ///Left_Part
    glPushMatrix();
    glTranslatef(300,200,0);
    circle(15);
    glPopMatrix();

    ///Top_Left

    glPushMatrix();
    glTranslatef(320,210,0);
    circle(15);
    glPopMatrix();

    ///Top
    glPushMatrix();
    glTranslatef(340,220,0);
    circle(16);
    glPopMatrix();

    ///Top_Right
    glPushMatrix();
    glTranslatef(360,210,0);
    circle(15);
    glPopMatrix();

    ///Right_Part
    glPushMatrix();
    glTranslatef(380,200,0);
    circle(15);
    glPopMatrix();

    ///Bottom_Right
    glPushMatrix();
    glTranslatef(360,190,0);
    circle(20);
    glPopMatrix();

    ///Bottom_Left
    glPushMatrix();
    glTranslatef(320,190,0);
    circle(20);
    glPopMatrix();

    ///Bottom
    glPushMatrix();
    glTranslatef(340,190,0);
    circle(20);
    glPopMatrix();
}
void house(){

    glPushMatrix();
    glTranslatef(300, 250,0);
    glScalef(0.21,0.35,0);

glBegin(GL_QUADS);
	glColor3ub(0.0f, 101.0f, 128.0f);
	glVertex2f(150.0f, 30.0f);
	glVertex2f(150.0f, 200.0f);
	glVertex2f(450.0f, 200.0f);
	glVertex2f(450.0f, 30.0f);
	glEnd();




glBegin(GL_POLYGON);
	glColor3ub(165.0f, 42.0f, 42.0f);
	glVertex2f(100.0f, 200.0f);
	glVertex2f(300.0f, 300.0f);
	glVertex2f(500.0f, 200.0f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(128.0f, 0.0f, 0.0f);
	glVertex2f(250.0f, 30.0f);
	glVertex2f(250.0f, 120.0f);
	glVertex2f(320.0f, 120.0f);
	glVertex2f(320.0f, 30.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(128.0f, 0.0f, 0.0f);
	glVertex2f(350.0f, 120.0f);
	glVertex2f(350.0f, 145.0f);
	glVertex2f(395.0f, 145.0f);
	glVertex2f(395.0f, 120.0f);
	glEnd();



	glBegin(GL_QUADS);
	glColor3ub(128.0f, 0.0f, 0.0f);
	glVertex2f(175.0f, 120.0f);
	glVertex2f(175.0f, 145.0f);
	glVertex2f(220.0f, 145.0f);
	glVertex2f(220.0f, 120.0f);
	glEnd();





		glBegin(GL_QUADS);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(800.0f,200.0f);
	glVertex2f(800.0f, 200.0f);
	glVertex2f(800.0f, 110.0f);
	glVertex2f(800.0f, 80.0f);
	glEnd();
	glPopMatrix();

}



void Tilla_Two_Model(){

	glColor3ub(34.0, 153.0, 84.0);
    /// Left_Part
    glPushMatrix();
    glTranslatef(430,90,0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(420,87,0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(410,80,0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(400,80,0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(390,70,0);
    circle(30);
    glPopMatrix();

    ///Right_Part
    glPushMatrix();
    glTranslatef(445,80,0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(455,75,0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(465,70,0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(470,65,0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(480,60,0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(485,55,0);
    circle(20);
    glPopMatrix();



}



void house1(){

    glPushMatrix();
    glTranslatef(680, 250,0);
    glScalef(0.18,0.35,0);



glBegin(GL_QUADS);
	glColor3ub(0.0f, 128.0f, 128.0f);
	glVertex2f(150.0f, 30.0f);
	glVertex2f(150.0f, 200.0f);
	glVertex2f(450.0f, 200.0f);
	glVertex2f(450.0f, 30.0f);
	glEnd();


glBegin(GL_POLYGON);
	glColor3ub(165.0f, 42.0f, 42.0f);
	glVertex2f(100.0f, 200.0f);
	glVertex2f(300.0f, 300.0f);
	glVertex2f(500.0f, 200.0f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(128.0f, 0.0f, 0.0f);
	glVertex2f(250.0f, 30.0f);
	glVertex2f(250.0f, 120.0f);
	glVertex2f(320.0f, 120.0f);
	glVertex2f(320.0f, 30.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(128.0f, 0.0f, 0.0f);
	glVertex2f(350.0f, 120.0f);
	glVertex2f(350.0f, 145.0f);
	glVertex2f(395.0f, 145.0f);
	glVertex2f(395.0f, 120.0f);
	glEnd();



	glBegin(GL_QUADS);
	glColor3ub(128.0f, 0.0f, 0.0f);
	glVertex2f(175.0f, 120.0f);
	glVertex2f(175.0f, 145.0f);
	glVertex2f(220.0f, 145.0f);
	glVertex2f(220.0f, 120.0f);
	glEnd();






glBegin(GL_QUADS);
	glColor3ub(185.0f, 119.0f, 14.0f);
	glVertex2f(450.0f, 30.0f);
	glVertex2f(450.0f, 150.0f);
	glVertex2f(800.0f, 150.0f);
	glVertex2f(800.0f, 30.0f);
	glEnd();



		glBegin(GL_QUADS);
	glColor3ub(128.0f, 0.0f, 0.0f);
	glVertex2f(500.0f, 80.0f);
	glVertex2f(500.0f, 110.0f);
	glVertex2f(570.0f, 110.0f);
	glVertex2f(570.0f, 80.0f);
	glEnd();



		glBegin(GL_QUADS);
	glColor3ub(128.0f, 0.0f, 0.0f);
	glVertex2f(600.0f, 80.0f);
	glVertex2f(600.0f, 110.0f);
	glVertex2f(670.0f, 110.0f);
	glVertex2f(670.0f, 80.0f);
	glEnd();


		glBegin(GL_QUADS);
	glColor3ub(128.0f, 0.0f, 0.0f);
	glVertex2f(700.0f, 80.0f);
	glVertex2f(700.0f, 110.0f);
	glVertex2f(770.0f, 110.0f);
	glVertex2f(770.0f, 80.0f);
	glEnd();
	glPopMatrix();


}











///*** Field_Model ***///
void field(){
    ///Field


	glBegin(GL_POLYGON);
    glColor3ub(90, 153, 51);
	glVertex2i(0, 250);
	glVertex2i(0,270);
	glVertex2i(1000, 270);
	glVertex2i(1000, 250);

	glEnd();


    ///Field_Shadow
	glBegin(GL_POLYGON);
	glColor3ub(0, 153, 51);
	glVertex2i(0, 230);
	glVertex2i(0, 250);
	glVertex2i(1000, 250);
	glVertex2i(1000, 200);

	glEnd();



	 ///river0.7/0.4/0.4


	glBegin(GL_POLYGON);
    glColor3ub(0, 143, 179);
	glVertex2i(0,0);
	glVertex2i(0,230);
	glVertex2i(600,225);
	glVertex2i(600,0);

	glEnd();

    ///river curve
	glBegin(GL_POLYGON);
	glColor3ub(0, 143, 179);
	glVertex2i(600,0);
	glVertex2i(600, 225);
	glVertex2i(1000, 245);
	glVertex2i(1000,0);

	glEnd();


	 ///Field_2
	glBegin(GL_POLYGON);
	glColor3ub(0, 153, 51);
	glVertex2i(0, 00);
	glVertex2i(0, 80);
	glVertex2i(600,50);
	glVertex2i(640, 0);

	glEnd();




		 ///Field_Shadow2
	glBegin(GL_POLYGON);
	glColor3ub(0, 153, 51);
	glVertex2i(0, 00);
	glVertex2i(0, 50);
	glVertex2i(600,50);
	glVertex2i(600, 0);

	glEnd();


	///Field_Shadow3
	glBegin(GL_POLYGON);
	glColor3ub(0, 153, 51);
	glVertex2i(600,0);
	glVertex2i(600, 50);
	glVertex2i(1000,30);
	glVertex2i(1000,0);

	glEnd();

}






void Boat(){


        glPushMatrix();
    glTranslatef(position,0.0f,0.0f);
        glTranslatef(-70,40.0f,0.0f);

glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(200,50);
	glVertex2i(100, 100);
	glVertex2i(400,100);
	glVertex2i(300,50);


glEnd();


glBegin(GL_POLYGON);
	glColor3ub(165.0, 42.0, 42.0);
	glVertex2i(180,100);
	glVertex2i(180, 150);
	glVertex2i(320,150);
	glVertex2i(320,100);


glEnd();



glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(360,140);
	glVertex2i(350, 80);
	glVertex2i(360,50);



glEnd();

    glPopMatrix();

}

void update(int value) {


    if(position <-300.0)
        position = 1500.0f;

    position -= _move;

	glutPostRedisplay();


	glutTimerFunc(50, update, 0);
}
void Tree_Model_One(){

 glPushMatrix();
    glTranslatef(110,110,0);
    circle(15);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(110,100,0);
    circle(15);
    glPopMatrix();

    glBegin(GL_POLYGON);
    glColor3ub(27.0, 38,49);
	glVertex2f(109, 70);
	glVertex2f(109, 90);
	glVertex2f(111, 90);
	glVertex2f(111, 70);

    glEnd();

}
void Tilla_one(){

    glPushMatrix();
    glTranslatef(-360,200,0);
    Tilla_Two_Model();
    glPopMatrix();


}

void Tilla_Two(){

    glPushMatrix();
    glTranslatef(-200,200,0);
    Tilla_Two_Model();
    glPopMatrix();
}
void Tilla_Three(){

    glPushMatrix();
    glTranslatef(35,200,0);
    Tilla_Two_Model();
    glPopMatrix();
}

void Tilla_Four(){

    glPushMatrix();
    glTranslatef(195,200,0);
    Tilla_Two_Model();
    glPopMatrix();
}
void Tilla_Five(){

    glPushMatrix();
    glTranslatef(470,200,0);
    Tilla_Two_Model();
    glPopMatrix();
}


void Sun(){
    glColor3f(255, 128,0);
    glPushMatrix();
     Sun_Model();
    glPopMatrix();
}




void cloud_one(){
    glPushMatrix();
    glTranslatef(cx,225,0);//-40
    cloud_model_one();
    glPopMatrix();

}










void cloud_two(){
    glPushMatrix();
    glTranslatef(bx+100,290,0);
    cloud_model_one();
    glPopMatrix();

}



void cloud_three(){
    glPushMatrix();
    glTranslatef(ax-80,230,0);
    cloud_model_Two();
    glPopMatrix();

}


void cloud_four(){
    glPushMatrix();
    glTranslatef(dx+300,275,0);
    cloud_model_Two();
    glPopMatrix();

}

void cloud_five(){

    glPushMatrix();
    glTranslatef(ax+-300,310,0);
    cloud_model_Three();
    glPopMatrix();
}

void cloud_six(){

    glPushMatrix();
    glTranslatef(cx+-500,390,0);
    cloud_model_Three();
    glPopMatrix();
}








void Tree_One(){
     glColor3ub(46, 204, 13.0);
    glPushMatrix();
    glTranslatef(45,200,0);
    Tree_Model_One();
    glPopMatrix();
}

void Tree_Two(){

glColor3ub(46, 204, 13.0);
    glPushMatrix();
    glTranslatef(440,200,0);
    Tree_Model_One();
    glPopMatrix();




}



void Tree_Three(){


glColor3ub(46, 204, 13.0);
    glPushMatrix();
    glTranslatef(200,200,0);
    Tree_Model_One();
    glPopMatrix();


}

void Tree_Seven(){
    glColor3ub(46, 204, 13.0);
    glPushMatrix();
    glTranslatef(870,200,0);
    Tree_Model_One();
    glPopMatrix();
}








void tree(){


    glColor3f(0.11, 0.23, 0.36);
    glPushMatrix();
    glTranslatef(-120,-110,0);

    glPopMatrix();

}





void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 1.0);








    Sun();


tree();

    cloud_three();
    cloud_four();






    cloud_one();
    house();
    house1();

Tree_One();

    Tree_Two();
    Tree_Three();



     Tree_Seven();




    Tilla_one();
    Tilla_Two();
    Tilla_Three();
    Tilla_Four();
    Tilla_Five();








    cloud_two();
    cloud_five();
    cloud_six();
    field();
    Boat();

	glFlush();
}



int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(50, 50);
	glutInitWindowSize(1000, 900);
	glutCreateWindow("Village View");
	init();
	glutDisplayFunc(display);
	glutTimerFunc(20, update, 0);



	glutMainLoop();
}
