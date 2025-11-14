#include <iostream>

void Get(float& a, float& b, float& h);
void Put(int nPos);
void RegCikl(float a, float b, float h, int& nPos);
void main()
{
	float a, b, h;
	int nPos;
	Get(a, b, h);
	RegCikl(a, b, h, nPos);
	Put( nPos);
	system("PAUSE");
}