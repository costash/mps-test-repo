#include <iostream>

#define NMAX 100
#define N 10

int A[NMAX][NMAX];
int B[NMAX][NMAX];
int C[NMAX][NMAX];

//Afisarea
//void afisare() {
//}
//
//void citire() {
//}
//
//void adunare() {
//}
void inmultire() {
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			for (int k = 0; k < N; ++k) {
				C[i][j] += A[i][k] + B[k][j];
			}
		}
	}
}
//
//
//
//int main() {
//
//	return 0;
//	}
//
