#include <iostream>
#include <vector>
#include <string>
#include "hw5.h"
/* Psuedocode

*/ 
static void Swap (std::string *a, std::string *b)
{
    std:: string temp = *a;
    *a = *b;
    *b = temp;
}
/* Psuedocode

*/ 
 void BubbleSort(std::vector<std::string> &vec){  
  {
    std::cout<<"Elements in the array: "<<vec.size()<<std::endl;

    //comparisons will be done n times
    for (int i = 0; i < vec.size(); i++)
    {
        //compare elemet to the next element, and swap if condition is true
        for(int j = 0; j < vec.size() - 1; j++)
        {   
            if (vec[j] > vec[j+1])
                Swap(&vec[j], &vec[j+1]);// calls swap func
                // vec[j] = current element in list
                //vec[j+1]= next element in list (two elemnts together)
                // swap takes elements it needs to switch as parameters 
        }
    }
}

}

////////////////////
/* Psuedocode

*/ 
static void InsertionHelper (std::vector<int> &v, int n){
// n = 5
if (n <= 0) // if size (vector) is 0 (empty)
return; // base  tht stops loop 

InsertionHelper(v,n-1);// calls itself, while decrementing n by 1 //like a loop

int last = v[n-1]; 
        int j = n-2; 
       
        /* Move elements of v[0..i-1], that are 
          greater than key, to one position ahead 
          of their current position */
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
///////////////
static void MergeHelper(std::vector<std::string> &j,std::vector<std::string> &tempvec1,std::vector<std::string> &tempvec2){
  int left_size= tempvec1.size(); 
  int right_size= tempvec2.size(); 


int li =0;
  int ri =0;
  int k = 0;
  while( li < left_size && ri < right_size)
  {
    
    if( tempvec1[li] <= tempvec2[ri]){
      j[k] =tempvec1[li] ;
      li ++;
      k++;
    }
    else{
     j[k] =tempvec2[ri] ;
     ri ++;
     k++;
    }
  }
  while(li < left_size) {
    j[k] = tempvec1[li];
    li ++;
      k++;
  }
  while(ri < right_size) {
    j[k] =tempvec2[ri] ;
     ri ++;
     k++;
  }
 
}




void MergeSort(std::vector<std::string> &j){

if(j.size() <=1){
  return;
}

int middle = j.size()/2; 
//int right = v.size()-1; 

  std::vector<std::string> tempvec1; // temp vector 
  std::vector<std::string> tempvec2; // temp vector 

 for (int i =0; i < middle ; i++){
    tempvec1.push_back(j[i]);
    std::cout << tempvec1[i];

 }
  // MergeSort(tempvec1);

 for (int i=middle; i < j.size(); i++){
   tempvec2.push_back(j[i]);
    std::cout << tempvec2[i];

 }
 MergeSort(tempvec1);
 MergeSort(tempvec2);
 

  MergeHelper(j,tempvec1,tempvec2); 
}