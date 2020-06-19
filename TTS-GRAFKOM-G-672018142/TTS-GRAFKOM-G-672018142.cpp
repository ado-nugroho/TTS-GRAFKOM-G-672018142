#include <GL/glut.h>
#include <iostream>
void display() {

}
int main(int argc, char** argv) {
	//Inisialisasi Program
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(450, 450);
	glutCreateWindow("672018142");
	glutDisplayFunc(display);
	gluOrtho2D(0, 450, 450, 0);
	//Selesai Inisialisasi
	glutMainLoop();
}
