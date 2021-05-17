#include <iostream>
#include <vector>
#include<string>
#include<fstream>


int main() {
	std::string out_line;
	std::ofstream out("coffee.txt");
	for (int i = 0; i < 4; i++) {
		std::cin >> out_line;
		out << out_line << std::endl;
	}
	out.close();

	std::string in_line;
	std::ifstream fin("coffee.txt");
		while(std::getline(fin, in_line)) {
			std::cout << in_line << std::endl;
	}
		fin.close();
}
