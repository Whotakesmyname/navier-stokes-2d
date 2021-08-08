#include <cstdio>

#include <glad/glad.h>
#include <GLFW/glfw3.h>


// error handler callback
void error_callback(int, const char* err_str) {
    std::printf("GLFW Error: %s\n", err_str);
}

// window resize callback
void framebuffer_size_callback(GLFWwindow* windows, int width, int height);

int main() {
    glfwInit();
    glfwSetErrorCallback(error_callback);

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow* window = glfwCreateWindow(800, 600, "Navier Stokes 2D Simulator", nullptr, nullptr);
    if (!window) {
        std::printf("Failed to create GLFW window\n");
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        std::printf("Failed to initialize GLAD\n");
        return -1;
    }

    // callback set
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

    // main loop
    while (!glfwWindowShouldClose(window))
    {
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    
    
    glfwTerminate();
    return 0;
}

void framebuffer_size_callback(GLFWwindow* windows, int width, int height) {
    glViewport(0, 0, width, height);
}