/* Second Example: Inheritance
* The base class is Animal and Dog is the derived class.
* In this example you see inheritance of public functions.
* The derived class inherits the public functions of the base class.
* In Inheritance, the derived class inherits the public data members 
* of the base class. These public data members can be data and/or functions
*/

#include <iostream>  
using namespace std;  
 
class Animal {  
   public:  
     void eat() {   
       cout<<"We're inside the base class Animal. Eating..."<<endl;   
     }    
}; 

class Dog: public Animal {    
  public:  
    void bark(){  
      cout<<"We are inside the derived class Dog. Barking...";   
    }    
}; 

/* Notice that an object of the derived class can use the functions in the base class
And the functions in the derived class. As long as they are public.*/
int main() {  
    Dog dog1;  
    dog1.eat();  
    dog1.bark();  
    return 0;  
}  