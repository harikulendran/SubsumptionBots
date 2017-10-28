#pragma once
#include <map>
#include <string>

struct State {
	public:
		bool finalState = false;
		int index;
		State(int i);
};

class AFSM {
	private:
		std::map<int, int> transition;

	public:
		void read(std::string i);
};