#version 140

in vec4 vertexPosition;
uniform mat4 modelMatrix;

void main()
{
    gl_Position = modelMatrix * vertexPosition;
}
