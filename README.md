# passing-by-value-or-reference-or-pointer
The difference between passing by value, reference and pointers c++

* Passing by value:

* void passvalue(int i){}
* passvalue(x);
* The function creates new variable i and set it value to the same value of the passed variable x
it's like we create a new variable and then make it equals to another one if we change the second one it doesn't effect on the first one.
* Example:
* int x =5;
* int i = x;
* i = 8;
* cout<< x ; //print 5
* cout<< i ; //print 8

* any changes on the variable i doesn't effects on the x .
passing by value doesn't effect on the passed variable after calling the function because the operation done on another variable i has the same value of x.
the new variable i in the function has different memory address .

* passing by reference:
* void passref(int &i){} 
* passref(x);  
* The function creates new reference &i and set it value to the value of the passed variable x (the same memory address also). 
it's like we create a new reference and then assign it to a veriable if we change the reference it effects on the variable.
* Example:
* int x =5;
* int &i = x;
* i = 8;
* cout<< x ; //print 8
* cout<< i ; //print 8
* any changes on the reference i it on the variable x .
passing by refernece effects on the passed variable after calling the function because the operation done on the same variable x.
the reference i in the function has the same value and same memory address of x.

* passing by pointer:
* void passpointer(int *i){}  
* passpointer(&x); 
* The function creates new pointer i and set it value to the  memory address for the passed variable x . 
* we can get the value of x by *i;
it's like we create new pointer and then assign it to a veriable memory address so we can access the value of the variable x by *i.
* Example:
* int x =5;
* int *i = &x; //  the pointer value is  i = &x . we can access The value of the variable that the pointer points to by *i = x;
* *i = 8;
* cout<< x ;  //print 8
* cout<< *i ; //print 8
* any changes on *i it on the value of x .
* any changes on the pointer value i (not *i) it makes the pointer points to another variable. because i containt the memory address of x.
passing by pointers effects on the passed variable value after calling the function because the operation done on the same variable x.
the pointer in the function i it value has the memory address of x.
the pointer has another memory address we can get it by &i;
we can access the value of the varibale that pointed to by *i. 





