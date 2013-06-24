#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int tickets[10] = {5, 10, 19, 29, 33, 34, 45, 68, 71, 89 };

int getNextWinner(void) {
	static int winners[10] = {0};
	int i;
	i = rand()%10;

	while(winners[i] != 0){
		i = rand()%10;
	}

	winners[i] = 1;
	return tickets[i];
	// to be completed
}

int main(void) {
	unsigned int iseed = (unsigned int)time(NULL);
	srand(iseed);
	for (int i=0; i<10; i++) {
		printf("Winner of prize %d is ticket %d\n",i,getNextWinner());
	}
}

