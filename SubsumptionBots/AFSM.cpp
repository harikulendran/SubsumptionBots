#include "AFSM.h"

State::State(int i, bool ss = false, bool fs = false, double val = 0.0) : index(i), startState(ss), finalState(fs), value(val) {}

Transition::Transition(int d, std::string v) : dest(d), value(v) {}

AFSM::AFSM() {}

void AFSM::addState(int i, bool ss = false, bool fs = false, double val = 0.0) {
	states.push_back(State{ states.size(), ss, fs, val });
}
