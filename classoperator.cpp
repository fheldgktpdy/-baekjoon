#include <iostream>
#include <string>
#include <vector>
#include<cmath>
#include<fstream>

class Assembly {
public:
	int value;
};

int main() {
	Assembly* ptr_a = new Assembly;
	ptr_a->value = 5;
	(*ptr_a).value = 5;



}