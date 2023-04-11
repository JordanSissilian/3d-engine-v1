
const char *vertexShaderSource = 
    "#version 330 core\n"
    "layout (location = 0) in vec3 aPos;\n"
    "out vec4 vertexColor;\n"
    "uniform mat4 matrixModel;"
    "uniform mat4 matrixView;"
    "uniform mat4 matrixProjection;"
    "void main()\n"
        "{\n"
        "   gl_Position = matrixProjection * matrixView * matrixModel * vec4(aPos.x, aPos.y, aPos.z, 1.0);\n"
        "   vertexColor = mcolor;"
        "}\0";