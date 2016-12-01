#include <iostream>
#include <string>
using namespace std;

void passvalue(int i){
    i++;
    cout<<i<<"--------"<<&i<<endl;
    }
void passref(int &i){
    i++;
    cout<<i<<"--------"<<&i<<endl;
    } 
void passpointer(int *i){
    (*i)++;
    cout<<*i<<"--------"<<i<<endl; // value of i is the memory address of x;
    cout<<i<<"--------"<<&i<<endl; // the pointer i the value is  the memory address of x and new memory address for the pointer i;
    }     

int main()
{
    int x =5;
    // passing by value : the function passvalue creates new variable i and gave it the value of x (copy the value of x to i);
    // the variable x still the same value before and after calling the function.
    // the add operation done on the variable i;
    
    cout<<"------passing by value   ----------"<<endl;
    cout<<x<<"--------"<<&x<<endl;                  // print 5; 
    passvalue(x);                                   // print 6;
    cout<<x<<"--------"<<&x<<endl;                  // print 5; 
    
    // passing by refrence : the function passref creates reference to the variable x and add one to it; 
    // same memory address and same value;
    // the add operation done on the same varible x;  
    
    cout<<"------passing by refrence----------"<<endl;    
    cout<<x<<"--------"<<&x<<endl;                  // print 5; 
    passref(x);                                     // print 6; 
    cout<<x<<"--------"<<&x<<endl;                  // print 6;
   
   // passing by pointer: the function passpointer creates new variable(pointer) point to the variable x and add one to it(*i)++;
   // not i++ because i is the memory address of x;
   // same memory address and same value for the variable x;
   // the pointer i is with different memory address and the vaule is the address of x;
   // the add operation done on the same varible x;
   // if the add operation done on i itself the pointer will change the variable pointed to;
   
    cout<<"------passing by pointer----------"<<endl;    
    cout<<x<<"--------"<<&x<<endl;                  // print 6; because x already 6 ;
    passpointer(&x);                                // print 7; 
    cout<<x<<"--------"<<&x<<endl;                  // print 7;
    
  
}