#include "Agent.h"
#include <allegro5/allegro_primitives.h>
#include <cmath>

#define PI 3.14159265

Agent::Agent() : center(100,100) {
	theta = 0;
	mag = 0;
}

void Agent::update() {

}

void Agent::sense() {

}

void Agent::updateVertices() {
	center.x += mod * (cos(theta * PI / 180.0)) * mag;
	center.y += mod * (sin(theta * PI / 180.0)) * mag;
	for (int i = 0; i < 3; i++) {
		vertices[i].x = center.x + size * cos((i*120 + theta) * PI / 180.0);
		vertices[i].y = center.y + size * sin((i*120 + theta) * PI / 180.0);
	}
	mag = 0;
	al_draw_triangle(vertices[0].x, vertices[0].y, vertices[1].x, vertices[1].y, vertices[2].x, vertices[2].y, al_map_rgb(255, 0, 0), 2.0);
}

void Agent::rotate(double deg) {
	theta += deg;
}

void Agent::move(int dir, double m) {
	mod = (dir > 0) ? 1 : -1;
	mag = m;
}