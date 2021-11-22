#include <GL/glut.h>
#include<Windows.h>

void display(void) {

	glClear(GL_COLOR_BUFFER_BIT);

	//Drawing the rectangle 
	glBegin(GL_LINE_LOOP);
	glColor3ub(21, 253, 41);
	//the kahouse
	glVertex2f(-0.9, 0.6);
	glVertex2f(0.8, 0.6);
	glVertex2f(0.8, 0.5);
	glVertex2f(0.5, 0.5);
	glVertex2f(0.5, -0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(-0.9, 0.5);
	glEnd();

	//the windows
	//left window
	glBegin(GL_LINE_LOOP);
	glColor3ub(21, 253, 41);
	glVertex2f(-0.4, 0.2);
	glVertex2f(-0.2, 0.2); 
	glVertex2f(-0.2, 0);
	glVertex2f(-0.4, 0);
	glEnd();

	//right window
	glBegin(GL_LINE_LOOP);
	glColor3ub(21, 253, 41);
	glVertex2f(0.4, 0.2);
	glVertex2f(0.2, 0.2);
	glVertex2f(0.2, 0);
	glVertex2f(0.4, 0);
	glEnd();

	//the door
	glBegin(GL_LINE_LOOP);
	glColor3ub(21, 253, 41);
	glVertex2f(-0.1, 0.1);
	glVertex2f(0.1, 0.1);
	glVertex2f(0.1, -0.5);
	glVertex2f(-0.1, -0.5);
	glEnd();

	
	


	



	glFlush();





}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutCreateWindow("A simple rectangle");
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(1000, 1000);
	glutDisplayFunc(display);
	glutMainLoop();


	return 0;
}