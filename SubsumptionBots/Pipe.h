#pragma once
#include <string>

class Pipe {
private:
	std::string input, output, sideTap;
public:
	void setInput(std::string in);
	void getOutput(std::string out);
};
