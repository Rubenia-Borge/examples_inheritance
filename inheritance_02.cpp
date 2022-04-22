/* Third Example: Inheritance
* Notice here the inheritance relationship is not public like the previous examples.
* In this case, the inheritance relationship is private.
* In private inheritance, public and protected members of the base class become the
* private members of the derived class.
* The methods in the base class can be used inside the member functions of the 
* derived class.*/

#include <iostream>  
using namespace std;  
class BaseClassA  
{  
    int x = 7;  
    int y = 10;  
    public:  
    int multiplyFunction()  
    {  
        int z = x * y;  
        return z;  
    }     
};  

/* See here that Inheritance here is private and not public like previous examples. 
 * In private inheritance the methods in the base class can be used inside the
 * member functions of the derived class.*/
class DerivedClassB : private BaseClassA  
{  
    public:  
    void display()  
    {  
        int printResult = multiplyFunction();  
        cout << "Object from the derived class. Result of x * y is : " << printResult << endl;  
    }  
};  

int main()  
{  
   BaseClassA myAObject;
   DerivedClassB myBObject; 

   // Notice that this is an object of the base class.
   cout << "Object from the base class: " << myAObject.multiplyFunction(); 
   cout << endl;
   
   // Notice that this is an object of the derived class
   myBObject.display();  
  
   return 0;  
}  