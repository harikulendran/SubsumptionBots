#pragma once

#include <allegro5\allegro.h>
#include "Agent.h"
#include "WorldObject.h"
#include <vector>

class DisplayLoop {
	public:
		bool running = true;
		ALLEGRO_DISPLAY *display = nullptr;
		Agent agent{};
		std::vector<WorldObject> objects{};

	public:
		void run();
		void stop();

	private:
		void drawObjects();
};