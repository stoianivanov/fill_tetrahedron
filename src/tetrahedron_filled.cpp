#include <iostream>
#include <cmath>
#include <list>
float fill_tetrahedron(int num)
{
	float Habc=sqrt(3)*(num/2);
	float Sabc= (Habc*num)/2;
	float OB=(Habc*2)/3;
	float OD= sqrt(num*num - OB*OB);
	return Sabc*OD/3000;
}

int tetrahedron_filled(std::list<int> tetrahedrons,int  water){
	tetrahedrons.sort();

	int counter=0;
	for(std::list<int>::iterator it = tetrahedrons.begin();
			it!=tetrahedrons.end();++it){
			water=water-fill_tetrahedron(*it);

			if(water>=0){
				++counter;
			}else{
				return counter;
			}
	}
	return counter;
}

int main()
{

	std::list<int> tetrahedrons;
	tetrahedrons.push_back(100);
	tetrahedrons.push_back(20);
	tetrahedrons.push_back(30);
	tetrahedrons.push_back(5);
	std::cout<<tetrahedron_filled(tetrahedrons,10);
	return 0;
