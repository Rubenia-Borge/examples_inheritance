/* First Example: Inheritance
* This is an example of simple inheritance.
* The base class is PayrollAccount, the derived class is SalesRepresentative
* A derived class inherits the public class members of the base class
* In this example, you see inheritance of public data members.*/

#include <iostream>  
using namespace std;  
class PayrollAccount {  
   public:  
   float employeeSalary = 7000;   
};  

class SalesRepresentative: public PayrollAccount {  
   public:  
   float salesBonus = 3000;    
};       

int main() {  
     SalesRepresentative salesman1;
     float totalSalary = salesman1.employeeSalary + salesman1.salesBonus;

     cout << "\nA sales employee makes a salary of " << salesman1.employeeSalary 
          << "\nand a bonus of " << salesman1.salesBonus 
          << "\nfor a total salary of " << totalSalary;
       
    return 0;  
}  