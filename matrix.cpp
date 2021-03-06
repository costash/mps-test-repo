#include <iostream>
#include <fstream>
#include <cstdio>
#define NMAX 100

using namespace std;
int  N;

int A[NMAX][NMAX];
int B[NMAX][NMAX];
int C[NMAX][NMAX];

//Afisarea
void afisare(int C[NMAX][NMAX]) {
	for (int i = 0; i < N; ++ i, printf("\n"))
		for (int j = 0; j < N; ++j)
			printf("%d ",C[i][j]);
}
//
void citire() {
	int i, j, na, nb;
	
	ifstream f("matrix1.txt");
	ifstream g("matrix2.txt");

	f>>na;
	g>>nb;
	N = na;
	for(i = 0; i < na; i++)
	{
		for(j = 0; j < na; j++)
		{
			f>>A[i][j];
		}
	}
	
	for(i = 0; i < nb; i++)
	{
		for(j = 0; j < nb; j++)
		{
			g>>B[i][j];
		}
	}
}
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
int main() {

	citire();
	printf("A:\n");
	afisare(A);
	printf("B:\n");
	afisare(B);
	printf("Inmultire:\n");
	inmultire();

	afisare(C);
	adunare();
	printf("Adunare:\n");
	afisare(C);
	return 0;
}

