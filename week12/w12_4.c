#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define numFighters 3
#define numAttributes 3
#define strength 0
#define agility 1
#define health 2

void createFighters(int fighters[numFighters][numAttributes]) {
	for (int i = 0; i < numFighters; i++) {
		for (int j = 0; j < numAttributes; j++) {
			fighters[i][j] = rand() % 101;
		}
	}
}

int totalScore(int fighters[numAttributes]) {
	return fighters[strength] + fighters[agility] + fighters[health];
}

void increaseScore(int fighters[numAttributes], int percent) {
	for (int i = 0; i < numAttributes; i++) {
		fighters[i] += fighters[i] * percent / 100;
	}
}

int* arena(int* fighter1, int* fighter2) {
	if(totalScore(fighter1) > totalScore(fighter2)) {
		increaseScore(fighter1, 2);
		increaseScore(fighter2, 1);
		return fighter1;
	} else {
		increaseScore(fighter1, 2);
		increaseScore(fighter2, 2);
		return fighter2;
	}
}

void game(int n, int fighters[numFighters][numAttributes]) {
	for (int i = 0; i < n; i++) {
		printf("Round %d\n", i+1);
		int *winner = arena(fighters[0], fighters[1]);
		printf("Winner between Fighter1 and Fighter2: Fighter%d\n", winner == fighters[0] ? 1 : 2);
		winner = arena(winner, fighters[2]);
		printf("Winner of the round: Fighter%d\n\n", winner == fighters[0] ? 1 : (winner == fighters[1] ? 2 : 3));
	}

	printf("Final score:\n");
	for (int i = 0; i < numFighters; i++) {
		printf("Fighter%d: Strength=%d, Agility=%d, Health=%d\n", i+1, fighters[i][strength], fighters[i][agility], fighters[i][health]);
	}
}

int main() {
	srand(time(NULL));
	int fighters[numFighters][numAttributes];
	createFighters(fighters);
	game(10, fighters);
	return 0;
}
