#include "DisplayLoop.h"

void DisplayLoop::run() {
	int count = 0;
	WorldObject wo{0,0};
	wo.addBound(10, 10);
	wo.addBound(110, 10);
	wo.addBound(110, 60);
	wo.addBound(10, 60);
	objects.push_back(wo);

	while (running) {
		al_rest(0.015);
		//agent.update();
		drawObjects();
		/*if (count > 200)
			agent.move(1,1.0);
		agent.rotate(1);
		agent.updateVertices();
		if (count > 600)
			stop();
		count++;
		*/
		al_flip_display();
		al_clear_to_color(al_map_rgb(0, 0, 0));
	}
}

void DisplayLoop::drawObjects() {
	for (WorldObject wo : objects)
		wo.draw();
}

void DisplayLoop::stop() {
	running = false;
}