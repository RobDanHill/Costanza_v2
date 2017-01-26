#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include <GL/glew.h>

/* This is a helper class which loads a shader and attaches it to out gl session */

class Shader {
public:
	// ctor
	Shader(const std::string& fileName);
	// dtor
	virtual ~Shader();
	void Bind();
	//void Update(); 

private:
	static const int NUM_SHADERS = 2;
	GLuint m_program; // Our GL program to which we attach shader programs
	GLuint m_shaders[NUM_SHADERS]; // an array to hold refs to our shader programs

	// op overload
	void operator = (const Shader& shader) {}
	Shader(const Shader& shader) {}

	std::string LoadShader(const std::string& fileName); // File IO to readin shader program files
	void CheckShaderError(GLuint shader, GLenum flag, bool isProgram, const std::string& errorMsg);
	GLuint CreateShader(const std::string& src, unsigned int type);
};
