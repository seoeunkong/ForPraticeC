#include <iostream>
using namespace std;

const int SIZE = 15;
int L[SIZE] = { 10, 4, 7, 1, -2, 12, 28, 66, 9, 3, 5, 7, 6, 21, 11 };


void print_data()
{
	for (int i = 0; i < SIZE; i++)
		cout << " " << L[i] << " ";
	cout << endl;
}

void quick_sort(int from, int to)
{
	/* 이 곳에 알맞은 내용을 추가하시오. */
	/* 입력 데이타는 L[]에 들어 있으며, 전체 원소 개수는 SIZE이다. */

	int i = 0;
	int j = 0;
	int temp, t;

	if (to > from) {
		temp = L[to];
		i = from - 1;
		j = to;

		do {
			do { i = i + 1; } while (L[i] < temp);
			do { j = j - 1; } while (L[j] > temp);

			if (i < j) {
				t = L[i];
				L[i] = L[j];
				L[j] = t;
			}
		} while (j > i);


		t = L[i];
		L[i] = L[to];
		L[to] = t;
		quick_sort(from, i - 1);
		quick_sort(i + 1, to);

	}

}




void main()
{
	cout << "Input Data : ";
	print_data();

	/* sort the elements of array L[] in ascending order */
	quick_sort(0, SIZE - 1);

	cout << "\n\nSorted Data : ";
	print_data();

}
