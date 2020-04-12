#include <iostream>
#include <thread>
using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	clock_t start = clock();
	thread first([] {
		for (int i = 0; i < 1000; i++) {
			cout << "a";
		}
	});
	thread second([] {
		for (int i = 0; i < 1000; i++) {
			cout << "b";
		}
	});
	thread third([] {
		for (int i = 0; i < 1000; i++) {
			cout << "c";
		}
	});
	first.join();
	second.join();
	third.join();
	clock_t end = clock();
	cout << "закончилось в " << (double)(end - start) / 1000 << " секунд";
	system("pause");
	return 0;
}