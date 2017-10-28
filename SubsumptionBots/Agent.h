#pragma once

struct Coord {
	double x, y;
};

class Agent {
private:
	Coord center, vertices[3];
	double theta;
	double size = 30;

public:
	Agent();
	void rotate(double deg);
	void move(int dir, int mag);

private:
	void updateVertices();
};
