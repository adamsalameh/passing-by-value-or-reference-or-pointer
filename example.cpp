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
    cout<<*i<<"--------"<<i<<endl; // The value of i is the memory address of x;
    cout<<i<<"--------"<<&i<<endl; // New memory address for the pointer i;
    }     

int main()
{
    int x =5;
    // passing by value : the function passvalue creates new variable i and gave it the value of x (copy the value of x to i);
    // the variable x still the same value before and after calling the function.
    // the add operation done on the variable i only;
    
    cout<<"------passing by value   ----------"<<endl;
    cout<<x<<"--------"<<&x<<endl;                  // print 5; before calling the function 
    passvalue(x);                                   // print 6; calling the function 
    cout<<x<<"--------"<<&x<<endl;                  // print 5; after calling the function 
    
    // passing by refrence : the function passref creates reference to the variable x and add one to it; 
    // The reference i has the same value of x and the same memory address;
    // any change on i effects on x;
    // the add operation done on the varible x by change the reference i;
    // int &i = x;
    
    cout<<"------passing by refrence----------"<<endl;    
    cout<<x<<"--------"<<&x<<endl;                  // print 5; before calling the function 
    passref(x);                                     // print 6; calling the function 
    cout<<x<<"--------"<<&x<<endl;                  // print 6; after calling the function 
   
   // passing by pointer: the function passpointer creates new pointer that points to the variable x and add one to it(*i)++;
   // not i++ because i is the memory address of x;
   // the value of the pointer i equals to the memory address of x, the memory address for i is different memory address;
   // the add operation done on the same varible x;
   // if the add operation done on i itself the pointer will change the variable that pointed to;
   // int *i = x;
   // i = &x;
   // &i = the memory address for the pointer.
   
    cout<<"------passing by pointer----------"<<endl;    
    cout<<x<<"--------"<<&x<<endl;                  // print 6; before calling the function, because x already 6 ;
    passpointer(&x);                                // print 7; calling the function
    cout<<x<<"--------"<<&x<<endl;                  // print 7; after calling the function
    
  
}
