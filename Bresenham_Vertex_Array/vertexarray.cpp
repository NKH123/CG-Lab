

#include<GL/glut.h>
#include<stdio.h>
#include<GL/gl.h>

void display(){

    GLfloat coord[][2] = {{-.75, -.75},{0., -1.0},{.75, -.75},{.75, .75},{0., 0.5}};
    unsigned short indices[] = {0, 1, 2, 3, 4};

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1., 1., -1., 1., 1., 100.);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(0., 0., 10., 0., 0., 0., 0., 1., 0.);

    glEnableClientState(GL_VERTEX_ARRAY);
    glVertexPointer(2, GL_FLOAT, 0, coord);

    glDrawElements(GL_POLYGON, 5, GL_UNSIGNED_SHORT, indices);
    glFlush();

}

int main(int argv,char** argc){
    glutInit(&argv,argc);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Vertex Arrays");
    glutDisplayFunc(display);
    //gluOrtho2D( 0.0, 500.0, 500.0,0.0 );
    gluOrtho2D(-500,500,-500,500);
    glutMainLoop();
    return 0;
}
