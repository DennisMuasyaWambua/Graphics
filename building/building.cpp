#include <GL/glut.h>
#include<Windows.h>

void display(void) {
	glClearColor(1.0,1.0,1.0,1.0);
	glClear(GL_COLOR_BUFFER_BIT);

	//Drawing the rectangle 
	glBegin(GL_QUADS);
	glColor3ub(21, 253, 41);
	glVertex2f(-0.4, 0.3);
	glVertex2f(-0.1, 0.3);
	glVertex2f(-0.1, 0.1);
	glVertex2f(-0.4, 0.1);
	glEnd();

	glFlush();





}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutCreateWindow("A simple rectangle");
	glutInitWindowSize(640, 500);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}