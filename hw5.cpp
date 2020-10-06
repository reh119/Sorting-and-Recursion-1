#include <iostream>
#include <vector>
#include <string>
#include "hw5.h"

/* Psuedocode: Bubble sort 
for loop from 0 to int (vector size)
nested for loop from 0, to again int (vector size)
if current element is greater than element in front 
call swap while passing both elements 
*/ 

/* Psuedocode: Swap 
recieves elements it needs to swap from bubble sort 
makes a temp pointer of type string 
sets pointer of a equal to pointer of b 
sets pointer of b equal to temp variable
*/ 

/* Psuedocode: InsertionHelper 
takes original vector and size 
base case goes first. checks if size of vector (n) is less than 0 (empty)
sets last = last element of vector 
sets j = n -2 
while j is greater than 0 and element is greater than last
next element  = current element 
exit while loop
set next element = last 
*/ 

/* Psuedocode: Insertion Sort
sets size of vector
calls insertion sort, passes vector and its size 
*/ 

/* Psuedocode: MergeHelper 
sets left and right side to its respective tempvec
sets left index to 0
set right index to 0
k=0
while left index is less than left size and while right index is less than right size
enter loop
if current element of left side (tempvec1) is <= current element of right side
set original vector equal to tempvec1 (left)
increment your left index 
increment k
else 
set orignal vector equal to right side (tempvec2)
increment right index
incremnet k
exit while loop
enter new while
while left index is less than left_size 
set original vector to 
*/ 

/* Psuedocode: MergeHelper 
base case goes first
if size is less than 1, stop
set middle 
create two temp vectors to hold right and left side 
for loop that will go through whole vector(size)
if i is less than middle, insert first half of original vector into tempvec1
else 
insert second half of oriinal vector to tempvec2
call merge sort (recursivecall) for each tempvec
call mergehelper , passing both temp vectors, as well as original
*/ 
static void Swap (std::string *a, std::string *b)
{
    std:: string temp = *a;
    *a = *b;
    *b = temp;
}
 void BubbleSort(std::vector<std::string> &vec){  
  {
  
    for (int i = 0; i < vec.size(); i++)
    {
        
        for(int j = 0; j < vec.size() - 1; j++)
        {   
            if (vec[j] > vec[j+1])
                Swap(&vec[j], &vec[j+1]);
                
        }
    }
}

}
static void InsertionHelper (std::vector<int> &v, int n){
if (n <= 0)
  return; 
  InsertionHelper(v,n-1);
int last = v[n-1]; 
int j = n-2; 
        while (j >= 0 && v[j] > last) 
        { 
            v[j+1] = v[j]; 
            j--; 
        } 
        v[j+1] = last; 
                
    } 
void InsertionSort(std::vector<int>& v){
  int n = v.size();  // creates variable for size of vector 
  InsertionHelper(v,n); // call function, pass my vector, and pass size

}
static void MergeHelper(std::vector<std::string> &j,std::vector<std::string> &temp_vec1,std::vector<std::string> &temp_vec2){
  int left_size= temp_vec1.size(); 
  int right_size= temp_vec2.size(); 


  int li =0;// left index
  int ri =0;// right
  int k = 0;
  while( li < left_size && ri < right_size)
  {
    
    if( temp_vec1[li] <= temp_vec2[ri]){
      j[k] =temp_vec1[li] ;
      li ++;
      k++;
    }
    else{
     j[k] =temp_vec2[ri] ;
     ri ++;
     k++;
    }
  }
  while(li < left_size) {
    j[k] = temp_vec1[li];
    li ++;
      k++;
  }
  while(ri < right_size) {
     j[k] =temp_vec2[ri] ;
     ri ++;
     k++;
  }
 
}
void MergeSort(std::vector<std::string> &j){ 
  if(j.size()<=1){
    return;
}
  int middle = j.size()/2; 
  std::vector<std::string> temp_vec1; // temp vectors
  std::vector<std::string> temp_vec2; 
 
 for (int i =0; i < j.size() ; i++){
   if(i<middle){
    temp_vec1.push_back(j[i]);
}
    else
    temp_vec2.push_back(j[i]);
 }
   MergeSort(temp_vec1);
   MergeSort(temp_vec2);
   MergeHelper(j,temp_vec1,temp_vec2); 
}