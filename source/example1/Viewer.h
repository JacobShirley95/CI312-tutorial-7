#pragma once

// Include standard headers
#include <stdio.h>
#include <stdlib.h>

// Include GLEW
#include <GL/glew.h>

// Include GLFW
#include <glfw3.h>

class Viewer {
public:
    Viewer(int width, int height);
    void addTriangleWithViewport(int x, int y);
    void setup();
    void render();
    void cleanup();
private:
    GLFWwindow* window;
    GLuint programId;
    GLuint VertexArrayID;
    GLuint vertexbuffer;
    GLuint colorbuffer;
    int width;
    int height;
};