/* Fourth Example: Inheritance
* This is an example of multilevel inheritance. Puppy inherits from Dog and Dog
* inherits from Animal. Hence, Puppy inherits from Animal. The opposite is not true.
* Animal does not inherit from Dog and Dog does not inherits from Puppy.
*/

#include <iostream>  
using namespace std;  

class Animal {  
  public:  
    void eat() {   
      cout<<"Inside Class Animal. Eating..." << endl;   
    }    
}; 

/* Notice that Dog is a derived class with respect to Animal and a base class with
respect to Puppy. */
class Dog: public Animal {    
  public:  
    void bark(){  
      cout<<"Inside Class Dog. Barking..." << endl;   
    }    
};

class Puppy: public Dog {    
  public:  
    void weep() {  
      cout<<"Inside Class Puppy. Weeping..." << endl;   
    }    
};

/*Notice that the object of type Puppy can access the public functions from Dog
 and since Dog inherits from Animal, Puppy can access the public functions from Animal.*/
int main(void) {  
    
    Puppy myPuppyObject;  
    
    myPuppyObject.eat();  
    myPuppyObject.bark();  
    myPuppyObject.weep();  
    
    return 0;  
}  