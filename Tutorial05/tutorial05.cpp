//Tutorial 05: Call Lists
#include "glut.h"
#include <cstdio>
#include <stdexcept>
const int window_height = 640;
const int window_width = 640;
GLuint listID;

void DrawUnitTriangle()
{
    /**** TODO: Function for drawing a single triangle ***/
    throw std::runtime_error( "Tutorial5: No Implementation!" ); // Remove this line
    // 1. Copy your code from tutorial 4
}

void DrawTriangleGroup()
{
    /**** TODO: Function for drawing a triangle group ***/
    throw std::runtime_error( "Tutorial5: No Implementation!" ); // Remove this line
    // 1. Copy your code from tutorial 4
}

void setCallList()
{
    /**** TODO: setup call list that draws the griangle group ***/
    throw std::runtime_error( "Tutorial5: No Implementation!" ); // Remove this line
    // 1. Generate a call list handle: check glGenLists
    // 2. Compile the list: check glNewList
    DrawTriangleGroup(); // Call the drawing function to put it into the call list
    // 3. Finish the call list: check glEndList()
}

void RenderLoop()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60.f, 1.f, 0.01f, 30.f);
    glMatrixMode(GL_MODELVIEW);
    /**** TODO: use the call list to draw the triangle group ***/
    // 1. Study the example below to see how it is done
    glPushMatrix(); // Node 0 Begin 
    glLoadIdentity();
    glCallList(listID);
    glTranslatef(0.f, 0.f, -10.f);

        glPushMatrix(); // Node 0->0 Begin
        glTranslatef(-3.5f, 0.f,0.f);
        glCallList(listID);
        glPopMatrix(); // Node 0->0 End

        glPushMatrix(); // Node 0->1 Begin
        glTranslatef(4.f, 0.f, 0.f);
        glCallList(listID);
        glPopMatrix(); // Node 0->1 End

    glPopMatrix(); // Node 0 End 
    // 2. Create your own call to draw a mirror version of it
    throw std::runtime_error("Tutorial5: No Implementation!"); // Remove this line
	glutSwapBuffers();
}

void InitializeGLUT(int argc, char* argv[])
{
    /**** TODO: Create a rendering window and basic rendering setup ***/
    throw std::runtime_error( "Tutorial5: No Implementation!" ); // Remove this line
    // 1. Copy your codes from Tutorial 1 here
    // 2. Insert setCallList() before glutMainLoop() to setup call list
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
