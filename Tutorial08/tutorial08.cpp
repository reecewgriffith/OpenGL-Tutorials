//Tutorial 08: Texture
#include "glut.h"
#include <cstdio>
#include <stdexcept>
const int window_height = 640;
const int window_width = 640;
GLuint checkerboardTextureHandle;

// Function to generate checkboard pattern
void GenerateCheckerboardPattern(int blockSide, int repetitions, unsigned char * pattern){
    int textureSide = blockSide * repetitions;
    for (int i = 0; i < textureSide; i++) for (int j = 0; j < textureSide; j++)
    {
        int pi = i / blockSide;
        int pj = j / blockSide;
        for (int c = 0; c < 3; c++) pattern[3 * (i*textureSide + j) + c] = ((pi + pj) % 2 == 0) ? 255 : 0;
    }
}

void SetupTexture(GLuint & textureHandle, int width, int height, unsigned char * pattern){
    /**** TODO: setup lightings and materials for rendering ***/
    throw std::runtime_error("Tutorial8: No Implementation!"); // Remove this line
    // 1. Generate texture handle into textureHandle: check glGenTextures
	// 2. Bind the texture as 2D: check glBindTexture with GL_TEXTURE_2D
    // 3. Copy the generated checkerboard pattern into the gpu texture memeory: check glTexImage2D
    // 4. Unbind the texture: check glBindTexture with GL_TEXTURE_2D
}

void DrawUnitTrinagleWithTexture()
{
    glBegin(GL_TRIANGLES);
    glTexCoord2d(0, 0);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glTexCoord2d(1, 0);
    glVertex3f(1.0f, 0.0f, 0.0f);
    glTexCoord2d(1, 1);
    glVertex3f(1.0f, 1.0f, 0.0f);
    glEnd();
}

void DrawTriangleGroup()
{
    glPushMatrix();
    glLoadIdentity();
    glTranslatef(0.f, 0.f, -10.f);
    glScalef(4.f, 4.f, 4.f);
    DrawUnitTrinagleWithTexture();
    glPopMatrix();
}

void RenderLoop()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60.f, 1.f, 0.01f, 30.f);
    /**** TODO: bind the texture for texuring ***/
    throw std::runtime_error("Tutorial8: No Implementation!"); // Remove this line
    // 1. Enable Texture: check glEnable with GL_TEXTURE_2D
    // 2. Bind the Texture with checkerboardTextureHandle: check glBindTexture
    // 3. Setup parameters for texture interpolation etc...: check glTexParameteri
    // Draw the triangle
	glMatrixMode(GL_MODELVIEW);
    DrawTriangleGroup();
    // 4. Unbind the Texture: check glBindTexture
    // 5. Disable Texture: check glDisable with GL_TEXTURE_2D
	glutSwapBuffers();
}

void InitializeGLUT(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("Tutorial 08: Texture");
    glutReshapeWindow(window_width, window_height);
    glutDisplayFunc(RenderLoop);
    int repetitions = 12;
    int blockSide = 20;
    int textureSide = blockSide*repetitions;
    unsigned char * checkerboarPattern = new unsigned char[textureSide*textureSide * 3];
    GenerateCheckerboardPattern(blockSide, repetitions, checkerboarPattern);
    SetupTexture(checkerboardTextureHandle, textureSide, textureSide, checkerboarPattern);
    delete checkerboarPattern;
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