/*
 * main.cpp
 *
 *  Created on: 13.02.2015 г.
 *      Author: stoian
 */
#include <iostream>
#include <cmath>
float fill_tetrahedron(int num)
{
	float Habc=sqrt(3)*(num/2);
	float Sabc= (Habc*num)/2;
	float OB=(Habc*2)/3;
	float OD= sqrt(num*num - OB*OB);
	return Sabc*OD/3000;
}


int main()
{
	std::cout<<fill_tetrahedron(100);

	return 0;
}
