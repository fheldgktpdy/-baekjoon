#include<iostream>
#include<vector>

using namespace std;

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void selection_sort(vector<int>& a) {
	int n = a.size();
	for (int i = 0; i < n - 1; i++) {
		int small = i;
		for (int j = i + 1; j < n; j++)
			if (a[j] < a[small])
				small = j;
		if (i != small)
			swap(a[i], a[small]);
	}
}

bool less_than(int a, int b) {
	return a < b;
}

bool greater_than(int a, int b) {
	return a > b;
}

void flexible_sort(vector <int>& a, bool(*hit)(int, int)) {
	int n = a.size();
	for (int i = 0; i < n - 1; i++) {
		int small = i;
		for (int j = i + 1; j < n; j++)
			if (hit(a[j], a[small]))
				small = j;
		if (i != small)
			std::swap(a[i], a[small]);
	}
}

void print(const vector<int>& a) {
	int n = a.size();
	for (int i = 0; i < n; i++)
		std::cout << a[i] << ' ';
}

int main() {
	std::vector<int> list{ 23, -3, 4, 215, 0, -3, 2, 23, 100, 88, -10 }; 
	std::cout << "Before: "; 
	print(list); 
	flexible_sort(list,greater_than); 
	std::cout << "After: "; 
	print(list);

}
