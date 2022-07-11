#include <iostream>
using namespace std;

int main() {

	int math_score[20] = { 75, 60, 88, 90, 50, 100, 95, 66, 78, 43, 85, 93, 50, 65, 91, 81, 100, 77, 63, 55 };
	int score = 0;

	for (int i = 0; i < 20; i++) {

		score += math_score[i];

	}

	cout << "ÃÑÁ¡: " << score << endl;
	cout << "Æò±Õ: " << score/20 << endl;
	return 0;
}