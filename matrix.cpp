#include <iostream>

#define NMAX 100
#define N 10

int A[NMAX][NMAX];
int B[NMAX][NMAX];
int C[NMAX][NMAX];

//Afisarea
void afisare() {
	for (int i = 0; i < N; ++ i, printf("\n"))
		for (int j = 0; j < N; ++j)
			printf("%d ",C[i][j]);
}
//
//void citire() {
//}
//
void adunare() {
int i,j;
for (i=0;i<N;i++)
	for (j=0;j<N;j++)
	C[i][j]=A[i][j]+B[i][j];
}
void inmultire() {
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			for (int k = 0; k < N; ++k) {
				C[i][j] += A[i][k] * B[k][j];
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
