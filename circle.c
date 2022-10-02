#include <stdlib.h>
#include "circle.h"
#include <stdbool.h>

void fiveCircles(circle c[]) { // laver 5 cirkler
	/*post: returns an array with five circles - solution to 6.b*/
	c[0].p.x = 1;//går ind og tager point x fra vores struct
	c[0].p.y = 1;// går ind og tager point y fra vores struct
	c[0].r = 2;// tager radius af cirklen fra vores struct
	c[1].p.x = 2;
	c[1].p.y = 2;
	c[1].r = 3;
	c[2].p.x = 3;
	c[2].p.y = 3;
	c[2].r = 4;
	c[3].p.x = 4;
	c[3].p.y = 4;
	c[3].r = 5;
	c[4].p.x = 5;
	c[4].p.y = 5;
	c[4].r = 6;
}

int circleIsValid(const circle * c) {// tjekker om cirklens radius er større end nul
	if(c->r > 0){ 
		return true;
	} else {
		return false;
	}
}

void translate(circle * c, const point *p) {
	c->p.x += p->x; // tager en af cirklernes x værdier og plusser med den x værdi vi vil translate
	c->p.y += p->y; // gør det samme ^^ som den ovenover bare med y.
}