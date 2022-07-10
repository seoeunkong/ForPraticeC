#include <iostream>
using namespace std;

int main() {

	const int subjects = 3;
	const int students = 10;
	

	int score[subjects][students] = { { 75, 60, 88, 90, 50, 100, 95, 66, 78, 43 }, {85, 93, 50, 65, 91, 81, 100, 77, 63, 55}, {65, 93, 52, 65, 61, 81, 50, 77, 63, 95} };

	for (int sub = 0; sub < subjects; sub++) {
		double sum = 0;

		for (int stu = 0; stu < students; stu++) {
			sum += score[sub][stu];
		}

		cout << sub + 1 << "번째 과목의 합: " << sum << endl;
		cout << sub + 1 << "번째 과목의 평균: " << sum/students << endl;
	}

	cout << endl;

	for (int stu = 0; stu < students; stu++) {
		double sum = 0;

		for (int sub = 0; sub < subjects; sub++) {
			sum += score[sub][stu];
		}

		cout << stu + 1 << "번째 학생의 평균: " << sum / subjects << endl;
	}

	return 0;
}