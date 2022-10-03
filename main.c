#include <stdio.h>
#include <stdlib.h>
#include "circle.c"
#include "jollyJumper.c"
#include <stdbool.h>

void printCircle(circle c) {
	printf("p.x: %d, p.y: %d, r: %d\n", c.p.x, c.p.y, c.r);
}

int main(void) {
	/*testing circles - make sure that you know how it works and what it is supposed to print out*/
	circle c[5];
	fiveCircles(c);
	for (int i = 0; i < 5; i++) {
		printCircle(c[i]);
	}
	point p;
	p.x = 2; // det som vi vil tilføje til cirklens x værdi
	p.y = 2; // det som vi vil tilføje til cirklens y værdi
	translate(&c[1], &p);
	printCircle(c[1]);
	printf("\nisValid: %d\n\n", circleIsValid(&c[1]));

	int numbers[] = {11, 7, 4, 2, 1, 6};
	int n = sizeof(numbers)/ sizeof(numbers[0]);

	if (isJollyJumper(numbers, n)) {
		printf("\n\nJolly\n");}
	else {
		printf("\n\nNot Jolly\n");}
	return 0;

}