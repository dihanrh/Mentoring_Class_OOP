#include<bits/stdc++.h>
using namespace std ; 

class robot {

      public  : 

         string name  ; 

         string looks ;

         string talk ;

         int num_hand ; 

// Parameterized constructor
      robot (string n , string lok , string tk)
      {
         name =  n ;
         looks = lok ; 
         talk = tk ;
         cout << "Name : " << name << endl << "Looks : " << looks << endl << "Talk :" << talk << endl ;


      }


      // Constructor Overloding 

      robot (string n , string lok , string tk , int s)
      {
         name =  n ;
         looks = lok ; 
         talk = tk ;
         num_hand = s ;
         cout << "Name : " << name << endl << "Looks : " << looks << endl << "Talk :" << talk << endl << "Number of Hand : " << s << endl ;


      }

// note : You can also use display() to show data
     void display ()
     {
      cout << "Name :" << name << endl << "Looks : " << looks << endl << "Talk :" << talk << endl ;
         
     }




} ; 


int main ()
{
   robot sophia("Sopiha" , "Human" , "Hello!") ;

   robot tom("Tom" , "Cat robot" , "Meow meow!" , 0 ) ;

   



   return 0 ; 
}