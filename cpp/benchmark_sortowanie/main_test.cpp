#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include "gtest/gtest.h"
#include <chrono>

void bubbleSort(std::vector<int>& vec) {
	int n = vec.size();
	bool swapped;

	for(int i = 0; i < n - 1; i++){
		swapped = false;
		for(int j=0; j < n - i - 1; j++){
			if(vec[j] > vec[j+1]){
				std::swap(vec[j], vec[j+1]);
				swapped = true;
			}
		}
		if(!swapped) break;
	}
}



// Funkcja sortująca wektor za pomocą QuickSort
void quickSort(std::vector<int>& vec) {
    if (vec.size() <= 1) return;
    int pivot = vec[vec.size() / 2];
    std::vector<int> left, right;
    for (size_t i = 0; i < vec.size(); i++) {
        if (vec[i] < pivot) left.push_back(vec[i]);
        else if (vec[i] > pivot) right.push_back(vec[i]);
    }
    quickSort(left);
    quickSort(right);
    vec.clear();
    vec.insert(vec.end(), left.begin(), left.end());
    vec.push_back(pivot);
    vec.insert(vec.end(), right.begin(), right.end());
}
TEST(BenchmarkTest, bubbleSort)  {
    std::vector<int> vec1(10000);
    std::srand(std::time(0));
    std::generate(vec1.begin(), vec1.end(), std::rand);

    auto start = std::chrono::high_resolution_clock::now();
    bubbleSort(vec1);

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::cout << "Czas sortowwania babelkowego: " << elapsed_seconds.count() << "s\n";
}


// Test wydajności sortowania QuickSort
TEST(BenchmarkTest, QuickSortBenchmark) {
    std::vector<int> vec(10000); // Tworzymy wektor z 10000 losowymi liczbami
    std::srand(std::time(0)); // Inicjalizacja generatora liczb losowych
    std::generate(vec.begin(), vec.end(), std::rand);

    // Początek pomiaru czasu
    auto start = std::chrono::high_resolution_clock::now();

    quickSort(vec); // Sortujemy wektor

    // Koniec pomiaru czasu
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;

    std::cout << "Czas sortowania Quicksort: " << elapsed_seconds.count() << "s\n";
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

