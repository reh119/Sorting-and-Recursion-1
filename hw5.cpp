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
return; // base case 

InsertionHelper(v,n-1);// calls itself, while decrementing n 

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