#pragma once

struct Coord {
	double x, y;
	Coord(double xx=0, double yy=0) : x(xx), y(yy) {}
};

class Agent {
private:
	Coord center, vertices[3];
	double theta, mag;
	double size = 30;
	int mod;

public:
	Agent();
	void update();
	void rotate(double deg);
	void move(int dir, double m);

public:
	void sense();
	void updateVertices();
};
