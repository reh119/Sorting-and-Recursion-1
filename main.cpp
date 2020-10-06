#include <iostream>
#include <vector>
#include <string>
#include "hw5.h"

void print(std::vector<std::string> &v) {
  std::cout << "[";
  bool first = true;
  for (auto x : v) {
    if (!first) {
      std::cout << ", ";
    }
    std::cout << x;
    first = false;
  }
  std::cout << "]";
  std::cout << std::endl;
}

int main() {
  std::vector<std::string> v; // creates vector v of strings
  std::vector<int> k; // creates vector of int

  v = {"emma", "dora", "ruth", "ziegellaub", "eichler"};
  k= {5,4,3,2,1};
  std::cout << "Case 1: ";
 // MergeSort(v); // calls merge sort, passes vevtor v. 
 BubbleSort(v);
 InsertionSort(k);
  print(v);
  std::cout << "Expected: [dora, eichler, emma, ruth, ziegellaub]" << std::endl;
}