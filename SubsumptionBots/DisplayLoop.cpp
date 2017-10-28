#include "DisplayLoop.h"

void DisplayLoop::run() {
	int count = 0;
	while (running) {
		al_rest(0.03);
		agent.rotate(1);
		al_flip_display();
		al_clear_to_color(al_map_rgb(0, 0, 0));
		if (count > 600)
			stop();
		count++;
	}
}

void DisplayLoop::stop() {
	running = false;
}