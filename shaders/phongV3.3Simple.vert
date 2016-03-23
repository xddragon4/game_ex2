#version 330

layout(location = 0) in vec4 position;

out vec4 fragColor;

uniform mat4 gModel, gView, gProjection;
//uniform vec4 gLightPosition; // light (in world)
//uniform vec3 gEyePosition; // camera (in world)

void main()
{
	mat4 MVP = gProjection * gView * gModel;
	
	// Output position of the vertex, in clip space : gMVP * position
	gl_Position =  MVP * position;

	fragColor = vec4(0.4, 0.0, 0.2, 1.0);
}
