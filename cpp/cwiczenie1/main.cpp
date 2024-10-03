#include <iostream>
#include <chrono>
#include <cstdlib>
#include <ctime>

using namespace std;

int switch_case(int x) {
	switch (x) {
		case 0: return 0;
		case 1: return 1;
		case 2: return 2;
		case 3: return 3;
		case 4: return 4;
		case 5: return 5;
		case 6: return 6;
		case 7: return 7;
		case 8: return 8;
		case 9: return 9;
		default: return -1;
	}
}

int if_else_case(int x) {
	if (x==0) return 0;
	else if (x==1) return 1;
	else if (x==2) return 2;
	else if (x==3) return 3;
	else if (x==4) return 4;
	else if (x==5) return 5;
	else if (x==6) return 6;
	else if (x==7) return 7;
	else if (x==8) return 8;
	else if (x==9) return 9;
	else return -1;
}

int main(){
	const int num_tests = 1000000;
	srand(time(0));

	auto start_switch = chrono::high_resolution_clock::now();
	for (int i = 0; i < num_tests; ++i) {
		int x = rand() % 10;
		switch_case(x)
	}
	auto end_switch = chrono::high_resolution_clock::now();
	chrono::duration<double> duration_switch = end_switch - start_switch;
	cout<< "Czas wykonania switcha: " << duration_switch.count() << endl;


	auto start_if_else = chrono::high_resolution_clock::now();
	for (int i = 0; i < num_tests; ++i) {
		int x = rand() % 10;
		if_else_case(x)
	}
	auto end_if_else = chrono::high_resolution_clock::now();
	chrono::duration<double> duration_if_else = end_if_else - start_if_else;
	cout<< "Czas wykonania if-else: " << duration_if_else.count() << endl;
	
	return 0;
}
