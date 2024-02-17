#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	cout << "¬ведите радиус:" << endl;
	int a;
	cin >> a;
	
	double p = 3.14;
	double answer = a * a * p;

	cout << "ѕлощадь круга: " << answer << endl;

	return 0;
}