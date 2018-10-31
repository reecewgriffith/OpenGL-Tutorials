//Tutorial 04: Transformation Stack

#include "glut.h"
#include <cstdio>
#include <stdexcept>
const int window_height = 640;
const int window_width = 640;

void DrawUnitTriangle()
{
    /**** TODO: Function for drawing a single triangle ***/
    throw std::runtime_error( "Tutorial4: No Implementation!" ); // Remove this line
    // 1. Put your draw triangle code here from glBegin to glEnd
    // 2. Remove all glcolor3f as we want to specify the color outside the function
}

void DrawTriangleGroup()
{
    /**** TODO: Play around the transformation stack ***/
    // 1. Study the following example to see how transformation stack is used to draw multiple triangles at different positions.
    glPushMatrix();  // Node 0 Begin 
    glTranslatef(0.f, 0.f, -10.f);
        
        glPushMatrix(); // Node 0->0 Begin
        glTranslatef(-2.f, 2.f, 0.f);
        glRotatef(45.f, 0.f, 0.f, 1.f);
        glColor3f(1.f, 1.f, 1.f);
            
            glPushMatrix(); // Node 0->0->0 Begin
            glTranslatef(-1.f, 0.f, 0.f);
            DrawUnitTriangle();
            glPopMatrix(); // Node 0->0->0 End
            
            glPushMatrix(); // Node 0->0->1 Begin
            glTranslatef(0.f, 0.f, 0.f);
            DrawUnitTriangle();
            glPopMatrix(); // Node 0->0->1 End
            
            glPushMatrix(); // Node 0->0->2 Begin
            glTranslatef(-1.f,-1.f, 0.f);
            DrawUnitTriangle();
            glPopMatrix(); // Node 0->0->2 End
            
            glPushMatrix(); // Node 0->0->3 Begin
            glTranslatef(-1.f,0.f, 0.f);
            DrawUnitTriangle();
            glPopMatrix(); // Node 0->0->3 End
            
        glPopMatrix(); // Node 0->0 End
        
        glPushMatrix(); // Node 0->1 Begin
        glTranslatef(-3.f, 0.f, 0.f);
        glRotatef(-60.f, 0.f, 0.f, 1.f);
        glColor3f(1.f, 0.f, 0.f);
        DrawUnitTriangle();
        glPopMatrix(); // Node 0->1 End
        
    glPopMatrix(); // Node 0 End 
    // 2. Draw a new set of triangles by mirroring the above along the y-axis
    throw std::runtime_error("Tutorial4: No Implementation!"); // Remove this line
}

void RenderLoop()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60.f, 1.f, 0.01f, 30.f);
    glMatrixMode(GL_MODELVIEW);
    DrawTriangleGroup();
    glutSwapBuffers();
}

void InitializeGLUT(int argc, char* argv[])
{
    /**** TODO: Create a rendering window and basic rendering setup ***/
    throw std::runtime_error( "Tutorial4: No Implementation!" ); // Remove this line
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

