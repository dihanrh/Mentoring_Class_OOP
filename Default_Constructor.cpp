#include<bits/stdc++.h>
using namespace std ; 

class robot {

      public  : 

         string name  ; 

         string looks ;

         string talk ;

         int num_hand ; 

// Default Constructor
      robot ()
      {
         name =  "Sophia" ;
         looks = "Looks like human" ;
      }

     void display ()
     {
      cout << "Name : " << name <<  endl << "Looks : " << looks << endl ;
     }




} ; 


int main ()
{
   robot sophia ;
   cout << sophia.name  << endl ; 
   cout << sophia.looks  << endl ;
   

    //  Explicit Default constructor
    sophia.display() ; 




   return 0 ; 
}