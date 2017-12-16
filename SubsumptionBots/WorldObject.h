#pragma once

#include <vector>
#include "Agent.h"

class WorldObject {
	public:
		WorldObject(double x, double y);
	protected:
		Coord position;
		std::vector<Coord> bound{};

	public:
		void draw();
		void addBound(double x, double y);
};