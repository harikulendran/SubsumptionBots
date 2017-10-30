#pragma once
#include <map>
#include <vector>
#include <string>

struct State {
	public:
		bool startState = false;
		bool finalState = false;
		int index;
		double value = 0;
		State(int i, bool ss, bool fs, double val);
};

struct Transition {
public:
	int dest;
	std::string value;
	Transition(int d, std::string v);
};

class AFSM {
	private:
		std::map<int, Transition> transition;
		std::vector<State> states;

	public:
		AFSM();
		void addState(int i, bool ss, bool fs, double val);
		void read(std::string i);
};

//TODO: integrate transitions into states