#ifndef __HW5_H__
#define __HW5_H__
#include <string>
// header files that call functions 
// add helper functions if needed 

void BubbleSort(std::vector<std::string> &vec);
static void Swap (std::string *i, std::string *j) ;

// For this problem, implement the Bubble Sort (optimized so best case is O(n)) algorithm iteratively. 
// Hint: given two strings str1 and str2, we can use str1.compare(str2). compare() returns 0 if the strings are equal,
// < 0 if str1 comes first alphabetically, and > 0 if str2 comes first alphabetically.
//////////////////////////////////////////////////////////////////////////
static void InsertionHelper (std::vector<int> &vec, int n); // might be string 
//n is size
void InsertionSort(std::vector<int>& v); // string? 

// For this problem, re-implement the Insertion Sort algorithm recursively.
// Rather than use a loop to go through each position we must insert into, use a recursive call. We want to insert the smallest element into the first position first and continue until we insert the largest element into the last position last. Remember that the last recursive call (the base case) finishes executing first and that the first recursive call finishes executing last.
static void MergeHelper(std::vector<std::string> &j,std::vector<std::string> &tempVec1,std::vector<std::string> &tempvec2);
void MergeSort(std::vector<std::string> &j);

//void MergeSort(std::vector<std::string> & v);
// Complete the functions to implement MergeSort on a vector of strings to sort it in alphabetical order.
// Merge merges two already sorted sub-vectors: begin is the first element of the left-hand sub-vector; mid is the last
// of the left-hand sub-vector (and therefore mid + 1 is the first element of the right-hand sub-vector); and end is the
// last element of the right-hand sub-vector.
// Hint: MergeSort (with a single parameter, the vector to be sorted) makes a single call to its helper function.




#endif /* __HW5_H__ */
