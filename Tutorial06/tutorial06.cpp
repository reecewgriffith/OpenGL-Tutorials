//Tutorial 06: Lighting
#include "glut.h"
#include <cstdio>
#include <stdexcept>
const int window_height = 640;
const int window_width = 640;

void DrawUnitTriangle(){
    /**** TODO: Function for drawing a single triangle ***/
    throw std::runtime_error( "Tutorial6: No Implementation!" ); // Remove this line
    // 1. Copy your code from tutorial 4
}

void DrawTriangleGroup()
{
    glPushMatrix();
    glLoadIdentity();
    glTranslatef(0.f, 0.f, -10.f);

        glPushMatrix();
        glTranslatef(0.f, 4.f, 0.f);
        glRotatef(0.f, 1.f, 0.f, 0.f);
        DrawUnitTriangle();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(0.f, 2.f, 0.f);
        glRotatef(15.f, 1.f, 0.f, 0.f);
        DrawUnitTriangle();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(0.f, 0.f, 0.f);
        glRotatef(30.f, 1.f, 0.f, 0.f);
        DrawUnitTriangle();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(0.f, -1.f, 0.f);
        glRotatef(45.f, 1.f, 0.f, 0.f);
        DrawUnitTriangle();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(0.f, -2.f, 0.f);
        glRotatef(60.f, 1.f, 0.f, 0.f);
        DrawUnitTriangle();
        glPopMatrix();

    glPopMatrix();
}

void RenderLoop()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60.f, 1.f, 0.01f, 30.f);
    /**** TODO: setup lightings and materials for rendering ***/
    throw std::runtime_error("Tutorial6: No Implementation!"); // Remove this line
    // 1. Enable lighting: check glEnable with GL_LIGHTING
    // 2. Enable light 0: check glEnable with GL_LIGHT0
    // 3. Setup light 0 color: check glLightfv with GL_LIGHT0, GL_DIFFUSE
    // 4. Setup light 0 position: check glLightfv with GL_LIGHT0, GL_POSITION
	// 5. Setup material for rendering: check glMaterialfv with GL_FRONT_AND_BACK, GL_DIFFUSE
    // Draw Triangle Group using the lighting and material for coloring
	glMatrixMode(GL_MODELVIEW);
    DrawTriangleGroup();
    // 6. Disable lighting: check glDisable with GL_LIGHTING
	glutSwapBuffers();
}

void InitializeGLUT(int argc, char* argv[])
{
    /**** TODO: Create a rendering window and basic rendering setup ***/
    throw std::runtime_error( "Tutorial6: No Implementation!" ); // Remove this line
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