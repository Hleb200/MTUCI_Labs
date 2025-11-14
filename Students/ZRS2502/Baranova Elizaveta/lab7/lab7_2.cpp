#include <iostream>
void Get(float& a, float& b, float& h1, float& c, float& d, float& h2);
void Put(float zMax);
float RegCikl2(float a, float b, float h1, float c, float d, float h2);
void main()
{
	float a, b, h1, c, d, h2, zMax;
	Get(a, b, h1, c, d, h2);
	zMax = RegCikl2(a, b, h1, c, d, h2);
	Put(zMax);
	system("PAUSE");
}