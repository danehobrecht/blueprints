#include <stdlib.h> /* Standard general library      */
#include <stdio.h> /* Standard input output library */
#include <time.h> /* System time                   */

int main() {
	time_t t;
	srand((unsigned)time(&t));

	int die1 = rand()%6 + 1;
	int die2 = rand()%6 + 1;
	int sum = die1 + die2;
	printf("Die1 : %d , Die2 : %d, Sum : %d\n", die1, die2, sum);

	return 0;
}
