#include<GL/glut.h>
void mydisplay(){
	glClear(GL_COLOR_BUFFER_BIT);
	


	glFlush();
}
int main(int argc, char *argv[]){
	glutInit(&argc,argv);
	glutCreateWindow("simple");
	glutDisplayFunc(mydisplay);
	glutMainLoop();
}
// to compile use -lglut -lGL flags