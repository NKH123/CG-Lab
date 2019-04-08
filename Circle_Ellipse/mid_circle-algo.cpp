
#include<GL/glut.h>
#include<stdio.h>
#include<GL/gl.h>
#include<iostream>

using namespace std;

int r;


void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    float p = 1-r;
    int x=0,y=r;

    glBegin(GL_POINTS);

    while(x <= y){
            x++;
        if(p<=0){

            p += 1 + 2*x;
        }else{
            y--;
            p+= 1 + 2*(x-y);
        }

        glVertex2d(x,y);
        glVertex2d(-x,y);
        glVertex2d(-x,-y);
        glVertex2d(x,-y);
        glVertex2d(y,x);
        glVertex2d(-y,-x);
        glVertex2d(y,-x);
        glVertex2d(-y,x);



    }

     glEnd();
        glFlush();

}

int main(int argv,char** argc){
    glutInit(&argv,argc);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(0,0);
    cin >> r;
    glutCreateWindow("Midpoint Circle ");

    

    glutDisplayFunc(display);

        gluOrtho2D(-500,500,-500,500);
    glutMainLoop();
    return 0;
}

