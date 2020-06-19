#include <iostream>
#include <GL/freeglut.h>

int a = 0;
int b = 0;

void Backround1() {
	glColor3ub(25, 25, 112);
	glBegin(GL_POLYGON);

	glVertex2f(0, 0);
	glVertex2f(0, 450);
	glVertex2f(450, 450);
	glVertex2f(450, 0);

	glEnd();
}

void Backround2() {
	glColor3ub(255, 255, 254);
	glBegin(GL_POLYGON);

	glVertex2f(10, 10);
	glVertex2f(10, 440);
	glVertex2f(440, 440);
	glVertex2f(440, 10);

	glEnd();
}

void Backround3() {
	glColor3ub(255, 99, 71);
	glBegin(GL_POLYGON);

	glVertex2f(22.5, 22.5);
	glVertex2f(22.5, 427.5);
	glVertex2f(427.5, 427.5);
	glVertex2f(427.5, 22.5);

	glEnd();
}

void Backround4() {
	glColor3ub(255, 215, 0);
	glBegin(GL_POLYGON);

	glVertex2f(32.5, 32.5);
	glVertex2f(32.5, 417.5);
	glVertex2f(417.5, 417.5);
	glVertex2f(417.5, 32.5);

	glEnd();
}

void Backround5() {
	glColor3ub(25, 25, 112);
	glBegin(GL_POLYGON);

	glVertex2f(50, 50);
	glVertex2f(50, 400);
	glVertex2f(400, 400);
	glVertex2f(400, 50);

	glEnd();
}

void Segitiga1() {
	glColor3ub(255, 99, 71);
	glBegin(GL_TRIANGLES);

	glVertex2f(50 + a, 56 + b);
	glVertex2f(50 + a, 131.5 + b);
	glVertex2f(87.5 + a, 93.5 + b);

	glEnd();
}

void Segitiga2() {
	glColor3ub(255, 99, 71);
	glBegin(GL_TRIANGLES);

	glVertex2f(137.5 + a, 56 + b);
	glVertex2f(137.5 + a, 131.5 + b);
	glVertex2f(99.5 + a, 93.5 + b);

	glEnd();
}

void Segitiga3() {
	glColor3ub(255, 99, 71);
	glBegin(GL_TRIANGLES);

	glVertex2f(143.5 + a, 50 + b);
	glVertex2f(219 + a, 50 + b);
	glVertex2f(181 + a, 87.5 + b);

	glEnd();
}

void Segitiga4() {
	glColor3ub(255, 99, 71);
	glBegin(GL_TRIANGLES);

	glVertex2f(143.5 + a, 137.5 + b);
	glVertex2f(219 + a, 137.5 + b);
	glVertex2f(181 + a, 99.5 + b);


	glEnd();
}

void GarisSegitiga1() {
	glColor3ub(0, 0, 0);
	glLineWidth(1);
	glBegin(GL_LINE_LOOP);

	glVertex2f(50 + a, 56 + b);
	glVertex2f(50 + a, 131.5 + b);
	glVertex2f(87.5 + a, 93.5 + b);

	glEnd();
}

void GarisSegitiga2() {
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);

	glVertex2f(137.5 + a, 56 + b);
	glVertex2f(137.5 + a, 131.5 + b);
	glVertex2f(99.5 + a, 93.5 + b);

	glEnd();
}

void GarisSegitiga3() {
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);

	glVertex2f(143.5 + a, 50 + b);
	glVertex2f(219 + a, 50 + b);
	glVertex2f(181 + a, 87.5 + b);

	glEnd();
}

void GarisSegitiga4() {
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);

	glVertex2f(143.5 + a, 137.5 + b);
	glVertex2f(219 + a, 137.5 + b);
	glVertex2f(181 + a, 99.5 + b);

	glEnd();
}

void GarisBackround1() {
	glColor3ub(25, 25, 112);
	glLineWidth(2);
	glBegin(GL_LINE_LOOP);

	glVertex2f(22.5, 22.5);
	glVertex2f(22.5, 426.5);
	glVertex2f(426.5, 426.5);
	glVertex2f(426.5, 22.5);

	glEnd();
}

void GarisBackround2() {
	glColor3ub(0, 0, 0);
	glLineWidth(1);
	glBegin(GL_LINE_LOOP);

	glVertex2f(32.5, 32.5);
	glVertex2f(32.5, 416.5);
	glVertex2f(416.5, 416.5);
	glVertex2f(416.5, 32.5);

	glEnd();
}

void GarisBackround3() {
	glColor3ub(0, 0, 0);
	glLineWidth(1);
	glBegin(GL_LINE_LOOP);

	glVertex2f(50, 50);
	glVertex2f(50, 400);
	glVertex2f(400, 400);
	glVertex2f(400, 50);

	glEnd();
}

void SegitigaPutih1() {
	glColor3ub(255, 255, 254);
	glBegin(GL_TRIANGLES);

	glVertex2f(50 + a, 50 + b);
	glVertex2f(50 + a, 137.5 + b);
	glVertex2f(93.5 + a, 93.5 + b);

	glEnd();
}

void SegitigaPutih2() {
	glColor3ub(255, 255, 254);
	glBegin(GL_TRIANGLES);

	glVertex2f(137.5 + a, 50 + b);
	glVertex2f(137.5 + a, 137.5 + b);
	glVertex2f(93.5 + a, 93.5 + b);

	glEnd();
}

void SegitigaPutih3() {
	glColor3ub(255, 255, 254);
	glBegin(GL_TRIANGLES);

	glVertex2f(137.5 + a, 50 + b);
	glVertex2f(225 + a, 50 + b);
	glVertex2f(181 + a, 93.5 + b);

	glEnd();
}

void SegitigaPutih4() {
	glColor3ub(255, 255, 254);
	glBegin(GL_TRIANGLES);

	glVertex2f(137.5 + a, 137.5 + b);
	glVertex2f(225 + a, 137.5 + b);
	glVertex2f(181 + a, 93.5 + b);

	glEnd();
}

void display() {
	glClearColor(0, 0, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT);

	Backround1();
	Backround2();
	Backround3();
	Backround4();
	Backround5();
	SegitigaPutih1();
	SegitigaPutih2();
	SegitigaPutih3();
	SegitigaPutih4();
	Segitiga1();
	Segitiga2();
	Segitiga3();
	Segitiga4();
	GarisSegitiga1();
	GarisSegitiga2();
	GarisSegitiga3();
	GarisSegitiga4();
;	GarisBackround1();
	GarisBackround2();
	GarisBackround3();

	a += 175;
	SegitigaPutih1();
	SegitigaPutih2();
	Segitiga1();;
	Segitiga2();
	GarisSegitiga1();
	GarisSegitiga2();

	SegitigaPutih3();
	SegitigaPutih4();
	Segitiga3();;
	Segitiga4();
	GarisSegitiga3();
	GarisSegitiga4();


	b += 87.5;
	a = -87.5;
	SegitigaPutih3();
	SegitigaPutih4();
	Segitiga3();;
	Segitiga4();
	GarisSegitiga3();
	GarisSegitiga4();

	a += 87.5 * 2;
	SegitigaPutih1();
	SegitigaPutih2();
	Segitiga1();;
	Segitiga2();
	GarisSegitiga1();
	GarisSegitiga2();

	SegitigaPutih3();
	SegitigaPutih4();
	Segitiga3();;
	Segitiga4();
	GarisSegitiga3();
	GarisSegitiga4();

	a += 87.5 * 2;
	SegitigaPutih1();
	SegitigaPutih2();
	Segitiga1();;
	Segitiga2();
	GarisSegitiga1();
	GarisSegitiga2();

	a = 0;
	b += 87.5;
	SegitigaPutih1();
	SegitigaPutih2();
	Segitiga1();;
	Segitiga2();
	GarisSegitiga1();
	GarisSegitiga2();

	SegitigaPutih3();
	SegitigaPutih4();
	Segitiga3();;
	Segitiga4();
	GarisSegitiga3();
	GarisSegitiga4();

	a += 87.5 * 2;
	SegitigaPutih1();
	SegitigaPutih2();
	Segitiga1();;
	Segitiga2();
	GarisSegitiga1();
	GarisSegitiga2();

	SegitigaPutih3();
	SegitigaPutih4();
	Segitiga3();;
	Segitiga4();
	GarisSegitiga3();
	GarisSegitiga4();

	b += 87.5;
	a = -87.5;
	SegitigaPutih3();
	SegitigaPutih4();
	Segitiga3();;
	Segitiga4();
	GarisSegitiga3();
	GarisSegitiga4();

	a += 87.5 * 2;
	SegitigaPutih1();
	SegitigaPutih2();
	Segitiga1();;
	Segitiga2();
	GarisSegitiga1();
	GarisSegitiga2();

	SegitigaPutih3();
	SegitigaPutih4();
	Segitiga3();;
	Segitiga4();
	GarisSegitiga3();
	GarisSegitiga4();

	a += 87.5 * 2;
	SegitigaPutih1();
	SegitigaPutih2();
	Segitiga1();;
	Segitiga2();
	GarisSegitiga1();
	GarisSegitiga2();

	a = 0;
	b = 0;
	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(450, 450);
	glutCreateWindow("672018142");
	glutDisplayFunc(display);
	gluOrtho2D(0, 450, 450, 0);
	glutMainLoop();
}
