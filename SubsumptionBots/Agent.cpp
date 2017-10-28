#include "Agent.h"
#include <allegro5\allegro_primitives.h>
#include <cmath>

#define PI 3.14159265

Agent::Agent() {
	center.x = 100;
	center.y = 100;
	theta = 0;
}

void Agent::updateVertices() {
	for (int i = 0; i < 3; i++) {
		vertices[i].x = center.x + size * cos((i*120 + theta) * PI / 180.0);
		vertices[i].y = center.y + size * sin((i*120 + theta) * PI / 180.0);
	}
	al_draw_triangle(vertices[0].x, vertices[0].y, vertices[1].x, vertices[1].y, vertices[2].x, vertices[2].y, al_map_rgb(255, 0, 0), 2.0);
}

void Agent::rotate(double deg) {
	theta += deg;
	updateVertices();
}