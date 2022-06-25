#include <stdio.h>

int main() {
	int num;
	printf("Enter a number in range 1-9 (int): ");
	scanf("%i", &num);

	switch(num) {
		case 1: case 2: case 3: 
			printf("Low.\n");
			break;
		case 4: case 5: case 6:
			printf("Medium.\n");
			break;
		case 7: case 8: case 9:
			printf("High.\n");
			break;
		default:
			printf("Invalid.\n");
			break;
	}

	return 0;
}
