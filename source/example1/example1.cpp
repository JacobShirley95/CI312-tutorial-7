// Include standard headers
#include <stdio.h>
#include <stdlib.h>

// Include GLEW
#include <GL/glew.h>

// Include GLFW
#include <glfw3.h>
GLFWwindow* window;

// Include GLM
#include <glm/glm.hpp>
using namespace glm;

#include <iostream>
#include <vector>
#include "common/shader.hpp"
#include "common/objloader.hpp"
#include "common/vboindexer.hpp"
#include "common/controls.hpp"
#include <glm/gtx/transform.hpp>

#include "Viewer.h";


#include <glfw3.h>


int main(void)
{
    if (!glfwInit())
    {
        fprintf(stderr, "Failed to initialize GLFW\n");
        getchar();
        return -1;
    }
    
    Viewer *viewer = new Viewer(1000, 800);
    viewer->setup();
    viewer->render();
    viewer->cleanup();

    
    return 0;
}


