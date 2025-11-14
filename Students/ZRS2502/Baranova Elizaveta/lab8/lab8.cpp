#include <iostream>

double func(int n);
double Kop(int start);
int Get(int& start);
void Put(int n);

int main() {
	int n;
	int start;
	start = Get(start);
	n = Kop(start);
	Put(n);
	system("PAUSE");
	return 0;
}