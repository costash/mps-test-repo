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
void citire() {
	int i, j, na, nb;
	
	ifstream f("matrix1.txt");
	ifstream g("matrix2.txt");

	f>>na;
	g>>nb
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
			g>>b[i][j];
		}
	}
}
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
