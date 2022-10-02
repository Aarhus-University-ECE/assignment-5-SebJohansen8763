#pragma once
typedef struct point {
	int x;
	int y;
} point;

typedef struct circle { // struct som repræsenterer cirklen som indeholder point struct og radius
	point p; // struct som indeholder x og y
	int r; // radius
} circle;

void fiveCircles(circle c[]);
int circleIsValid(const circle * c);
void translate(circle * c, const point* p);