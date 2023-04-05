#include <stdio.h>
#include <time.h>

#define N 10
#define M 10

int main() {
	srand(time(NULL));
	int r = 0, c = 0, choice = 0, i = 0;
	char array[N][M];

	for (int i = 0; i < N; ++i)
		for (int j = 0; j < M; ++j)
			array[i][j] = '.';

	array[r][c] = 'A';

	while (i < 25) {
		choice = 1 + rand() % 100;
		choice = choice % 4;

		if (choice == 0) {
			if (r > 0 && array[r - 1][c] == '.') {
				r--;
				i++;
				array[r][c] = 'A' + i;
			}
		}
		else if (choice == 1) {
			if (c < (M - 1) && array[r][c + 1] == '.') {
				c++;
				i++;
				array[r][c] = 'A' + i;
			}
		}
		else if (choice == 2) {
			if (r < (N - 1) && array[r + 1][c] == '.') {
				r++;
				i++;
				array[r][c] = 'A' + i;
			}
		}
		else if (choice == 3) {
			if (c > 0 && array[r][c - 1] == '.') {
				c--;
				i++;
				array[r][c] = 'A' + i;
			}
		}

		if (array[r - 1][c] != '.' &&
			array[r][c + 1] != '.' &&
			array[r + 1][c] != '.' &&
			array[r][c - 1] != '.') {
			break;
		}
	}

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			printf("%2c", array[i][j]);
		}
		printf("\n");
	}
}