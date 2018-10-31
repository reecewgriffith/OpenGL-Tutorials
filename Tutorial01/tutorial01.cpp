//Tutorial 01: Hello World Window!

#include "glut.h"
#include <stdexcept>
const int window_height = 640;
const int window_width = 640;

void RenderLoop()
{
    //Nothing for now !
}

void InitializeGLUT(int argc, char* argv[])
{
    /**** TODO: Create a rendering window and basic rendering setup ***/
    throw std::runtime_error( "Tutorial1: No Implementation!" ); // Remove this line
    // 0. Init glut: check glutInit
    // 1. Init Display Mode: check glutInitDisplayMode
    // 2. Create Window: check glutCreateWindow
    // 3. Reshape Window to desired size: check glutReshapeWindow
    // 4. Setup Display Callback: check glutDisplayFunc
    // 5. Init Window Color: use glClearColor
    // 6. Activate the rendering loop: check glutMainLoop
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