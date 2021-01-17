// lab6.2(2).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>

using namespace std;

int array_result_min(int A[], int i, int min, int key) {
	if (A[i] < min)
	{
		key = i;
		min = A[i];
	}
	i++;
	if (i < 15) {
		key = array_result_min(A, i, min, key);
	}
	return key;
}
int array_result_max(int A[], int i, int max, int key) {
	if (A[i] > max)
	{
		key = i;
		max = A[i];
	}
	i++;
	if (i < 15) {
		key = array_result_max(A, i, max, key);
	}
	return key;
}
int output(int A[], int i) {
	cout << "[" << i << "] " << A[i] << "   ";
	i++;
	if (i < 15) {
		output(A, i);
	}
	return 1;
}
int main() {
	int A[10];
	for (int i = 0; i < 10; i++) {
		A[i] = rand() % 90 + 5;
	}
	int max = A[0];
	int min = A[0];
	int i = 0;
	int key = 0;
	cout << "Result(min): " << array_result_min(A, i, min, key) << endl;
	cout << "Result(max): " << array_result_max(A, i, max, key) << endl;
	cout << "Array: " << output(A, 0) << endl;
	return 0;
}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
