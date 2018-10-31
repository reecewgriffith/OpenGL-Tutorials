//Tutorial 07: Shading
#include "glut.h"
#include <cstdio>
#include <stdexcept>
const int window_height = 640;
const int window_width = 640;

void DrawUnitTrinagleWithNormal()
{
    glBegin(GL_TRIANGLES);
    glNormal3f(0.f, 0.f, -1.f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glNormal3f(1.f, -1.f, 1.f);
    glVertex3f(1.0f, 0.0f, 0.0f);
    glNormal3f(0.f, 0.f, 1.f);
    glVertex3f(1.0f, 1.0f, 0.0f);
    glEnd();
}

void DrawTriangleGroup()
{
    glPushMatrix();
    glLoadIdentity();
    glTranslatef(0.f, 0.f, -10.f);
    glScalef(4.f, 4.f, 4.f);
    DrawUnitTrinagleWithNormal();
    glPopMatrix();
}

void RenderLoop()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60.f, 1.f, 0.01f, 30.f);
    /**** TODO: setup lightings, materials and shader for rendering ***/
    throw std::runtime_error("Tutorial7: No Implementation!"); // Remove this line
    // 1. Copy your lighting code here from tutorial 6 step 1 to 5 to enable lightin
    // 2. Before drawing the triangles, enable shading model: check glShadeModel with GL_SMOOTH, GL_FLAT etc.
    glMatrixMode(GL_MODELVIEW);
    DrawTriangleGroup();
    // 3. Copy your lighting code here from tutorial 6 step 6 to disable lighting
    glutSwapBuffers();
}

void InitializeGLUT(int argc, char* argv[])
{
    /**** TODO: Create a rendering window and basic rendering setup ***/
    throw std::runtime_error( "Tutorial7: No Implementation!" ); // Remove this line
    // 1. Copy your codes from Tutorial 1 here
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

