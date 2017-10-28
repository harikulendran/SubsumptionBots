#pragma once

#include <allegro5\allegro.h>
#include "Agent.h"

class DisplayLoop {
	public:
		bool running = true;
		ALLEGRO_DISPLAY *display = nullptr;
		Agent agent{};

	public:
		void run();
		void stop();

};