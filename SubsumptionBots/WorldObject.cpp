#include "WorldObject.h"
#include "allegro5/allegro_primitives.h"
#include <iostream>

WorldObject::WorldObject(double x, double y) : position(x,y) {}

void WorldObject::draw() {
	Coord* last = nullptr;
	Coord* cur;
	for (int i = 0; i <= bound.size(); i++) {
		cur = &bound.at(i%bound.size());
		if (last != nullptr) {
			al_draw_line(last->x, last->y, cur->x, cur->y, al_map_rgb(255, 0, 0), 2.0);
		}
		last = cur;
	}
}

void WorldObject::addBound(double x, double y) {
	bound.emplace_back(Coord{ x,y });
}