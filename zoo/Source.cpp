#include <iostream>
#include "Animal.h"
#include <vector>
using namespace std;
int main() 
{
	Dog john("john", 3, "gav gav");
	Cat Amd("Amd", 2, "meov");
	Owl amtech("amtech", 4, "xz");
	Amd.show();
	john.show();


	vector<Animal*> anim{&john,&Amd};
	return 0;
}