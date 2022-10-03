#include <stdio.h>
#include <stdlib.h>
#include "circle.c"
#include "jollyJumper.c"
#include <stdbool.h>
#include <assert.h>

void printCircle(circle c) {
	printf("\np.x: %d, p.y: %d, r: %d\n", c.p.x, c.p.y, c.r);
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

	int n; /*number of numbers to read*/
	scanf("%d", &n); /*readin n and check that is is OK*/
	assert(n>0);

	int *numbers = malloc(sizeof(int) * n); /*the numbers read*/

	/*read in the n numbers in the array numbers*/
	for (int i = 0; i < n; i++)
  		scanf("%d", &numbers[i]);


	if (isJollyJumper(numbers, n)) {
		printf("it is a Jolly Jumper");}
	else {
		printf("not a Jolly Jumper");}

	return 0;

}