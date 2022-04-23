/* Fifth Example: Inheritance.
* Run this example and notice the errors that the compiler gives you.
* In the base class First, the data member and the function are declared as private.
* The errors happen because the derived class wants to access data members or functions
* that are declared as private in the base class First. That is not possible. Only public and protected class
* members can be accessed by the derived class.
*/

#include <iostream>  
using namespace std;  
class First  
{  
    private:  
      int x;  
    private:  
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

int main()  
{  
  Third z;  
  z.get_x(300);  
  z.get_y(100);  
  z.display();  
  
  return 0;  
}  