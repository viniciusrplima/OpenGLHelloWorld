#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <stdio.h>

int main() {
    if (!glfwInit()) {
        printf("Failed to initialize GLFW!");
        return 1;
    }

    GLFWwindow* window = glfwCreateWindow(600, 400, "OpenGL Hello World", NULL, NULL);

    if (!window) {
        printf("Failed to create window!");
        glfwTerminate();
        return 1;
    }

    glfwMakeContextCurrent(window);

    if (glewInit()) {
        printf("Failed to initialize OpenGL!");
        glfwTerminate();
        return 1;
    }

    glViewport(0, 0, 600, 400);

    while (!glfwWindowShouldClose(window)) {

        // render triangle
        glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        glBegin(GL_TRIANGLES);

        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex3f(0.0f, 0.5f, 0.0f);
        glColor3f(0.0f, 1.0f, 0.0f);
        glVertex3f(0.5f, -0.5f, 0.0f);
        glColor3f(0.0f, 0.0f, 1.0f);
        glVertex3f(-0.5f, -0.5f, 0.0f);
        
        glEnd();
        glFlush();

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
}