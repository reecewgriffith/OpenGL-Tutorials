//Tutorial 10: Transparency

#include "glut.h"
#include <cstdio>
#include <stdexcept>
const int window_height = 640;
const int window_width = 640;

void DrawUnitTriangle()
{
    glBegin(GL_TRIANGLES);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(1.0f, 0.0f, 0.0f);
    glVertex3f(1.0f, 1.0f, 0.0f);
    glEnd();
}

void DrawTriangleGroup()
{
    glPushMatrix();
    glLoadIdentity();
    glTranslatef(-0.5f, -0.25f, -4.f);
    glColor4f(0.0, 1.0, 0.0, 1.f);
    DrawUnitTriangle();
    glPopMatrix();

    glPushMatrix();
    glLoadIdentity();
    glTranslatef(0.f, 0.f, -2.f);
    glColor4f(1.0, 0.0, 0.0, 0.5);
    DrawUnitTriangle();
    glPopMatrix();
}

void RenderLoop()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60.f, 1.f, 0.01f, 30.f);
    /**** TODO: Enable Depth Test ***/
    throw std::runtime_error("Tutorial10: No Implementation!"); // Remove this line
    // 1. Enable depth test and blending for transparency: check glEnable with GL_DEPTH_TEST and GL_BLEND
    // 2. Specify which blending function to use: check glBlendFunc
    // Draw Triangle Group
    glMatrixMode(GL_MODELVIEW);
    DrawTriangleGroup();
    // 3. Disable depth test and blending for transparency: check glDisable with GL_DEPTH_TEST and GL_BLEND
    glutSwapBuffers();
}

void InitializeGLUT(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("Tutorial 10: Transparency");
    glutReshapeWindow(window_width, window_height);
    glutDisplayFunc(RenderLoop);
    glutMainLoop();
}

int main(int argc, char* argv[])
{
    try
    {
        InitializeGLUT(argc, argv);
    }
    catch (std::runtime_error &e)
    {
        fprintf(stderr, "%s\n", e.what());
    }
    return 0;
}