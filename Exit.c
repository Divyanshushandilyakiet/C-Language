#include<iostream> 
#include<stdio.h> 
#include<stdlib.h> 
  
using namespace std; 
  
class Test { 
public: 
  Test() { 
    printf("Inside Test's Constructor\n"); 
  } 
  
  ~Test(){ 
    printf("Inside Test's Destructor"); 
    getchar(); 
  } 
}; 
  
int main() { 
  Test t1; 
  
  // using exit(0) to exit from main 
  exit(0); 
} 
