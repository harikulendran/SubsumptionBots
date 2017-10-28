#pragma once

struct Coord {
	double x, y;
};

class Agent {
private:
	Coord center, vertices[3];
	double theta, mag;
	double size = 30;
	int mod;

public:
	Agent();
	void rotate(double deg);
	void move(int dir, double m);

public:
	void updateVertices();
};
