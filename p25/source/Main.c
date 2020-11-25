#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void assign(int [][13]);
void deal(int[][13], const char *[], const char *[]);

void assign(int cards[][13]) {
	int Ccolor, Cnumber;

	for (int total = 0; total < 52; total++) {
		do {
			Ccolor = rand() % 4;
			Cnumber = rand() % 13;
		} while (cards[Ccolor][Cnumber] != 0);

		cards[Ccolor][Cnumber] = total;
	}
}

void deal(int cards[][13], const char *color[], const char *number[]) {
	for (int total = 0; total < 52; total++) {
		for (int Dcolor = 0; Dcolor < 4; Dcolor++) {
			for (int Dnumber = 0; Dnumber < 13; Dnumber++) {
				if (cards[Dcolor][Dnumber] == total) {
					printf("%5s of %-8s", number[Dnumber], color[Dcolor]);
					if ((total % 2) == 0) {
						printf("\t");
					}else {
						printf("\n");
					}
				}
			}
		}
	}
}

int main(void) {
	const char *color[4] = { "¶Â®ç" , "¬õ¤ß" , "Æp¥Û" , "±öªá" };
	const char *number[13] = {  "A" , "2" , "3" ,  "4" ,  "5" ,  "6" ,
								"7" , "8" , "9" ,  "10" , "J" ,  "Q" ,  "K" };

	int cards[4][13] = { 0 };
	srand(time(NULL));

	assign(cards);
	deal(cards, color, number);

	system("pause");
	return 0;
}