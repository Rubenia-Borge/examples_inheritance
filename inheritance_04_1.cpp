/* Sixth Example: Inheritance.
* This is the same code from the Fifth Example.
* Here notice the following in class First, the data member is protected and 
* the function is public and the compilation errors are fixed.
* Also notice in line 33, this is an example of a derived class inheriting from
* multiple classes. This is multiple class inheritance. A derived class can inherit
* from two or more base classes. 
*/

#include <iostream>  
using namespace std;  
class First  
{  
    protected:  
      int x;  
    public:  
    void get_x(int n)  
    {  
        x = n;  
    }  
};  
  
class Second  
{  
    protected:  
      int y;  
    public:  
      void get_y(int n)  
    {  
        y = n;  
    }  
};

// Derived class Third inherits from two base classes, First and Second
class Third : public First, public Second  
{  
  public:  
    void display()  
    {  
        cout << "Access members from class First, x is : " << x << endl;  
        cout << "Access member from class Second, of y is : " << y << endl;  
        cout << "Class Third has access to members from both class First and class Second. " << endl;
        cout << "Inheritance from multiple classes, x + y =  " << x + y << endl;  
    }  
};  

// An object of the derived class Third can access methods in class First and Second.
int main()  
{  
  
  Third z;  
  z.get_x(300);  
  z.get_y(100);  
  z.display();  
  
  return 0;  
}  