#define _USE_MATH_DEFINES
#include <iostream>
#include <GL/freeglut.h>
#include <math.h>

GLfloat ctrlpoints[4][3] = {
		{ 75.0, 75.0, 0.0}, { 60.0, 15.0, 0.0}, {30, 10, 0.0}, {.0, .0, 0.0}
};

void circlehor(int xp, int yp, int r, int n, int ax, int ay) {
	float a, x, y;
	glColor4ub(0, 0, 0, 200);glBegin(GL_POLYGON);
	a = 6.28 / n;

	for (int i = 0; i < n; i++) {
		r = 25;
		x = ax + r*2.5 * cos(i * a);
		y = ay + r* sin(i * a);
		glVertex2d(x, y);
	}
	glEnd();
}

void circlever(int xp, int yp, int r, int n, int ax, int ay) {
	float a, x, y;
	glColor4ub(0, 0, 0, 200); glBegin(GL_POLYGON);
	a = 6.28 / n;
	//glRotatef(180, 0, 1, 0);
	for (int i = 0; i < n; i++) {
		r = 25;
		x = ax + r * cos(i * a);
		y = ay + r * 2.5 * sin(i * a);
		glVertex2d(x, y);
	}
	glEnd();
}

void pola1(float aq, float aw) {
	//glPushMatrix();
	glLineWidth(2);
	int x, row, column;
	glTranslatef(aq, aw, 0);
	for (int z = 0; z < 2; z++) {
		glColor3f(1.0, 1.0 + 1.50 * z, 1.0);

		glRotatef(180, 0, 1, 0);

		glRotatef(90, 0, 0, 1);
		glBegin(GL_POLYGON);

		int i;
		for (i = 0; i <= 30; i++)
			glEvalCoord1f((GLfloat)i / 30.0);
		glEnd();
	}
}


void pola2(float aq, float aw) {

	//glPushMatrix();
	glLineWidth(2);
	int x, row, column;

	glTranslatef(aq, aw, 0);
	glRotatef(180, 0, 1, 0);
	for (int z = 0; z < 2; z++) {
		glColor3f(1.0, 1.0 + 1.50 * z, 1.0);

		glRotatef(180, 0, 1, 0);

		glRotatef(90, 0, 0, 1);
		glBegin(GL_POLYGON);

		int i;
		for (i = 0; i <= 30; i++)
			glEvalCoord1f((GLfloat)i / 30.0);
		glEnd();
	}
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();

	glColor3f(128, 0.0, 0.4); 
	glBegin(GL_POLYGON);
	glVertex2f(0.0, 0);glVertex2f(720.0, 0);glVertex2f(720.0, 480.0);glVertex2f(0.0, 480.0);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);glBegin(GL_POINTS);glVertex2f(7,8 );
	glEnd();
	
	glColor3f(1.0, 1.0, 1.0);glBegin(GL_POINTS);glVertex2f(7, 210);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);glBegin(GL_POINTS);glVertex2f(210, 210);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);glBegin(GL_POINTS);glVertex2f(210, 8);
	glEnd();


	glColor3f(1.0, 1.0, 1.0);glBegin(GL_POINTS); glVertex2f(220, 8);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);glBegin(GL_POINTS); glVertex2f(220, 210);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);glBegin(GL_POINTS); glVertex2f(423, 210);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);glBegin(GL_POINTS); glVertex2f(423, 8);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);glBegin(GL_POINTS); glVertex2f(435, 8);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);glBegin(GL_POINTS); glVertex2f(435, 210);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);glBegin(GL_POINTS); glVertex2f(638, 210);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POINTS); glVertex2f(638, 8);
	glEnd();


	glColor3f(1.0, 1.0, 1.0);glBegin(GL_POINTS); glVertex2f(7, 223);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);glBegin(GL_POINTS); glVertex2f(7, 425);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);glBegin(GL_POINTS); glVertex2f(210, 425);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);glBegin(GL_POINTS); glVertex2f(210, 223);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);glBegin(GL_POINTS); glVertex2f(220, 223);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);glBegin(GL_POINTS); glVertex2f(220,425 );
	glEnd();

	glColor3f(1.0, 1.0, 1.0);glBegin(GL_POINTS); glVertex2f(423, 425);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);glBegin(GL_POINTS); glVertex2f(423, 223);
	glEnd();
	
	glColor3f(1.0, 1.0, 1.0);glBegin(GL_POINTS); glVertex2f(435, 223);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);glBegin(GL_POINTS); glVertex2f(435, 425);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);glBegin(GL_POINTS); glVertex2f(638, 425);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);glBegin(GL_POINTS); glVertex2f(638, 223);
	glEnd();

	
	glColor3f(0, 0, 0);
	glBegin(GL_TRIANGLES);
	glVertex2f(60, 15.0); glVertex2f(108.0, 70.0);  glVertex2f(160.0, 15.0);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_TRIANGLES);
	glVertex2f(57, 205.0); glVertex2f(160.0, 205.0); glVertex2f(108.0, 145.0);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_TRIANGLES);
	glVertex2f(15, 58.0); glVertex2f(15.0, 158.0);  glVertex2f(73.0, 107.5);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_TRIANGLES);
	glVertex2f(146.0, 107.5); glVertex2f(203, 53.0); glVertex2f(203.0, 163.0); 
	
	glColor3f(0, 0, 0);
	glBegin(GL_TRIANGLES);
	glVertex2f(232, 58.0); glVertex2f(232.0, 158.0);  glVertex2f(288.0, 107.5);
	glEnd();
	
	glColor3f(0, 0, 0);
	glBegin(GL_TRIANGLES);
	glVertex2f(275, 15.0); glVertex2f(323.0, 70.0);  glVertex2f(370.0, 15.0);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_TRIANGLES);
	glVertex2f(490, 15.0); glVertex2f(538.0, 70.0);  glVertex2f(585.0, 15.0);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_TRIANGLES);
	glVertex2f(60, 230.0); glVertex2f(108.0, 285.0);  glVertex2f(160.0, 230.0);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_TRIANGLES);
	glVertex2f(275, 230.0); glVertex2f(323.0, 285.0);  glVertex2f(370.0, 230.0);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_TRIANGLES);
	glVertex2f(490, 230.0); glVertex2f(538.0, 285.0);  glVertex2f(585.0, 230.0);
	glEnd();

	glColor3f(0, 0, 0);//11
	glBegin(GL_TRIANGLES);
	glVertex2f(275, 205.0); glVertex2f(370.0, 205.0); glVertex2f(323.0, 145.0);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_TRIANGLES);
	glVertex2f(490, 205.0); glVertex2f(585.0, 205.0); glVertex2f(538.0, 145.0);
	glEnd();
	

	glColor3f(0, 0, 0);//13
	glBegin(GL_TRIANGLES);
	glVertex2f(366.0, 107.5); glVertex2f(423, 53.0); glVertex2f(423.0, 163.0);
	glEnd();
	
	glColor3f(0, 0, 0);//14
	glBegin(GL_TRIANGLES);
	glVertex2f(586.0, 107.5); glVertex2f(643,53.0); glVertex2f(643.0, 163.0);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_TRIANGLES);
	glVertex2f(443, 58.0); glVertex2f(443.0, 158.0);  glVertex2f(495.0, 107.5);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_TRIANGLES);
	glVertex2f(15, 275.0); glVertex2f(15.0, 373.0);  glVertex2f(73.0, 323.5);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_TRIANGLES);
	glVertex2f(232, 275.0); glVertex2f(232.0, 373.0);  glVertex2f(288.0, 323.5);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_TRIANGLES);
	glVertex2f(443, 275.0); glVertex2f(443.0, 373.0);  glVertex2f(495.0, 323.5);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_TRIANGLES);
	glVertex2f(146.0, 323.5); glVertex2f(203, 275.0); glVertex2f(203.0, 373.0);
	glEnd();

	glColor3f(0, 0, 0);//13
	glBegin(GL_TRIANGLES);
	glVertex2f(366.0, 323.5); glVertex2f(423, 275.0); glVertex2f(423.0, 373.0);
	glEnd();

	glColor3f(0, 0, 0);//14
	glBegin(GL_TRIANGLES);
	glVertex2f(586.0, 323.5); glVertex2f(643, 275.0); glVertex2f(643.0, 373.0);
	glEnd();
	
	glColor3f(0, 0, 0);
	glBegin(GL_TRIANGLES);
	glVertex2f(57, 425.0); glVertex2f(160.0, 425.0); glVertex2f(108.0, 365.0);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_TRIANGLES);
	glVertex2f(275, 425.0); glVertex2f(370.0, 425.0); glVertex2f(323.0, 365.0);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_TRIANGLES);
	glVertex2f(490, 425.0); glVertex2f(585.0, 425.0); glVertex2f(538.0, 365.0);
	glEnd();
	
	circlehor(0, 0, 100, 255, 110, 0);
	circlehor(0, 0, 100, 255, 108, 218);
	circlever(0, 0, 100, 255, 0, 108);
	circlever(0, 0, 100, 255, 218, 108);

	circlehor(0, 0, 100, 255, 323, 0);
	circlehor(0, 0, 100, 255, 323, 218);
	circlever(0, 0, 100, 255, 430, 108);

	circlehor(0, 0, 100, 255, 538, 0);
	circlever(0, 0, 100, 255, 212, 108);
	circlever(0, 0, 100, 255, 648, 108);
	circlehor(0, 0, 100, 255, 538, 218);

	circlever(0, 0, 100, 255, 0, 325);
	circlever(0, 0, 100, 255, 218, 325);
	circlever(0, 0, 100, 255, 430, 325);
	circlever(0, 0, 100, 255, 648, 325);

	circlehor(0, 0, 100, 255, 110, 436);
	circlehor(0, 0, 100, 255, 323, 436);
	circlehor(0, 0, 100, 255, 538, 436);

	pola1(20.0, 20.0);
	pola1(100.0, 100.0);
	pola2(75.0, -100.0);
	pola1(100.0, 100.0);
	
	pola1(-315.0, -100.0);
	pola1(100.0, 100.0);
	pola2(75.0, -100.0);
	pola1(100.0, 100.0);

	pola1(115.0, -100.0);
	pola1(100.0, 100.0);
	pola2(75.0, -100.0);
	pola1(100.0, 100.0);

	pola1(329.0, 115.0);
	pola1(100.0, 100.0);
	pola2(75.0, -100.0);
	pola1(100.0, 100.0);

	pola1(115.0, -100.0);
	pola1(100.0, 100.0);
	pola2(75.0, -100.0);
	pola1(100.0, 100.0);

	pola1(-315.0, -100);
	pola1(100.0, 100.0);
	pola2(75.0, -100.0);
	pola1(100.0, 100.0);

	glPopMatrix();
	glFlush();
	glutSwapBuffers();
}


void myinit() {
	glShadeModel(GL_FLAT);
	glMap1f(GL_MAP1_VERTEX_3, 0.0, 1.0, 3, 4, &ctrlpoints[0][0]);
	glEnable(GL_MAP1_VERTEX_3);
	glClearColor(.0, .0, .0, .0);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(15.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 640, 430.0, .0);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 430);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("TTS Grafkom H 672018152");
	glutDisplayFunc(display);

	myinit();

	glutMainLoop();

	return 0;
}