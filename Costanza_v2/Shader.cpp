#include "Shader.h"

Shader::Shader(const std::string & fileName) {

	// Create a program to work with
	m_program = glCreateProgram();

	// Load the shader source files
	m_shaders[0] = CreateShader(LoadShader(fileName + ".vs"), GL_VERTEX_SHADER);
	m_shaders[1] = CreateShader(LoadShader(fileName + ".fs"), GL_FRAGMENT_SHADER);

}

Shader::~Shader() {
}

void Shader::Bind() {
}

std::string Shader::LoadShader(const std::string& fileName) {

	// typical file IO stuff
	std::ifstream file;
	file.open(fileName);

	std::string output;
	std::string line;

	if (file.is_open()) {
		while (file.good()) {
			getline(file, line);
			output.append(line + "\n");
		}
	}
	else {
		std::cerr << "Error: Unable to open shader file '" + fileName +  "'" << std::endl;
	}

	return output;

}

void Shader::CheckShaderError(GLuint shader, GLenum flag, bool isProgram, const std::string & errorMsg) {
}

GLuint Shader::CreateShader(const std::string & src, unsigned int type) {
	GLuint shader = glCreateShader(type);

	if (shader == 0) {
		std::cerr << "Error: Could not compile shader." << std::endl;
	}

	// we need to have an array of lines of the source as c-strs
	const GLchar* shaderSrcLns[1];
	shaderSrcLns[0] = src.c_str();
	// need an array of source line lengths
	GLint srcLnLens[1];
	srcLnLens[0] = src.length();

	// Give GL the source of the shader
	glShaderSource(shader, 1, shaderSrcLns, srcLnLens);
	// Tell GL to compile the shader
	glCompileShader(shader);

	CheckShaderError(shader, GL_COMPILE_STATUS, false, "Error: unable to compile shader.");

	return shader;
}
