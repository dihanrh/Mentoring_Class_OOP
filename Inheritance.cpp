/*
Types of Inheritance in C++ : 
Single Inheritance
Multiple Inheritance
Multilevel Inheritance
Hierarchical Inheritance
Hybrid Inheritance
*/

#include<bits/stdc++.h>
using namespace std ; 

// Single Inheritance
class robot  {
   public  : 
   string name ; 
   string model ;

   void  set(string n , string m )
   {
      name = n ;
      model = m ; 
   }

 void display()
   {
      cout << " Name : "<< name << endl << "Model :" << model << endl ;
   }
   
} ; 

class R_sophia : public robot 
{
   public : 
   string talk ;

   
   void speak(string t )
   {
      talk = t;
      cout << talk << endl ;
   }
  
};

class Tom 
{
   public : 
   string leg ;
};

// Multiple Inheritance

class Nina : public robot , public Tom
{
   public : 
   string run ; 

  
  void runFast(string s )
   {
      run = s ;
      cout << "Nina can run : " << run << endl ;
   }

};



int main ()
{
   // Single Inheritance 
    R_sophia sophia ;
    sophia.set("Sophia" , "Sophia model")  ; 
    sophia.display() ; 

    // Multiple Inheritance 

    Nina N1 ;
    N1.leg = "Four" ;
    cout << N1.leg << endl ;

    N1.set("Nina" , "Cat Robot") ;
    N1.display() ;
    
    Nina N2 ;
    N2.runFast("Fast") ;


    


   return 0 ; 
}