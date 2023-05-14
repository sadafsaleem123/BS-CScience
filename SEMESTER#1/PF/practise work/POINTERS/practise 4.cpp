// using pointers 
#include <iostream> 
using namespace std; 
  
void reverse(int array[], int array_size) 
{ 
  
    // pointer1 pointing at the beginning of the array 
    int *pointer1 = array;
  
        // pointer2 pointing at end of the array 
        *pointer2 = array + array_size - 1; 
    while (pointer1 < pointer2) { 
        swap(pointer1, pointer2); 
        pointer1++; 
        pointer2--; 
    } 
} 
  
