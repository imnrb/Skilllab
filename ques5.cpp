#include <iostream>  
using namespace std;  
 class Info1 {  
   public:  
   float salary = 60000;   
 };  
   class Info2 : public Info1    //inheritance 
   {  
   public:  
   float bonus = 5000;    
   };       
int main(void) {  
     Info2 f1;  
     cout<<"Salary: "<<f1.salary<<endl;    
     cout<<"Bonus: "<<f1.bonus<<endl;    
    return 0;  
}  
