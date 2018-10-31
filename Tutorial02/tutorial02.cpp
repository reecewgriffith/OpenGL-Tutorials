//Tutorial 02: First Triangle Rendering

#include "glut.h"
#include <cstdio>
#include <stdexcept>
const int window_height = 640;
const int window_width = 640;

void RenderLoop()
{
    /**** TODO: Examine current transformation and render a simple triangle ***/
    throw std::runtime_error("Tutorial2: No Implementation!"); // Remove this line
    // 1. Clear Color and Depth Buffer: check glClear with GL_COLOR_BUFFER_BIT and GL_DEPTH_BUFFER_BIT
    // 2. Get and print out current Model View Matrix: check glGetFloatv with GL_MODELVIEW_MATRIX
    // 3. Get and print out current Projection Matrix: check glGetFloatv with GL_PROJECTION_MATRIX
    // 4. Render a simple triangle with vertices (0, 0, -1), (1, 0, -1), and (1, 1, -1), and colors Red, Green, and Blue: check glBegin with GL_TRIANGLES, glEnd, glColor3f, and glVertex3f
    // 5. Swap buffer to refresh window: check glutSwapBuffers()
}

void InitializeGLUT(int argc, char* argv[])
{
    /**** TODO: Create a rendering window and basic rendering setup ***/
    throw std::runtime_error( "Tutorial2: No Implementation!" ); // Remove this line
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

