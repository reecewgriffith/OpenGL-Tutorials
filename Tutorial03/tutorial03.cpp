//Tutorial 03: Model View and Projection Matrices

#include "glut.h"
#include <cstdio>
#include <stdexcept>
const int window_height = 640;
const int window_width = 640;

void RenderLoop()
{
    /**** TODO: Play around the Projection Matrix and Model View Matrix ***/
    throw std::runtime_error("Tutorial3: No Implementation!"); // Remove this line
    // 1. Copy your codes from Tutorial 2 here
    // 2. Before rendering the triangle, i.e. before calling glBegin(XXX), modify the Projection matrix using gluPerspective 
    //    with fovy=60, aspect=1, znear=0.01, zfar=30.  You will need to set the glMatrixMode and glLoadIdentity before modifying
    // 3. Also before rendering the triangle, modify the Model View matrix using gluLookAt.  Understand the parameters and 
    //    setup the camera at the origin, looking into -z direction and up vector pointing +y
    // 4. Play around the parameters and check out the effect
    // 5. Last, try out glRotatef, glTranslatef before rendering the triangle
}

void InitializeGLUT(int argc, char* argv[])
{
    /**** TODO: Create a rendering window and basic rendering setup ***/
    throw std::runtime_error( "Tutorial3: No Implementation!" ); // Remove this line
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

