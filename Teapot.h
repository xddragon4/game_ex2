#pragma once

#include "OpenMeshObject.h"

class Teapot : public OpenMeshObject
{
public:
	enum Commands
	{
		CHANGE_COLOR,

		// Number of commands
		NUM_OF_COMMANDS = 6
	};

	Teapot(const char* vShaderFile, const char* fShaderFile, const std::string textureIMG, const char*  meshPath);

	void draw(const glm::mat4& projection, const glm::mat4& view,
			  const glm::vec3 camPos, Light* light);
	void update();
	void init();

	void changeColor();

private:
	int _colorIndicator;
	float _angle;
	bool _commands[Commands::NUM_OF_COMMANDS];

	void _updateCommands();
	void _changeColor();

	//std::vector<GLuint> _triangles;
};