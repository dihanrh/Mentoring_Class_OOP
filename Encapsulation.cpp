#include<bits/stdc++.h>
using namespace std ; 

class robot {
//Encapsulation
      private : 
         string name ;
      public  : 

      // set name 

      void  set_name( string n )
      {
         name = n ;
      }

      // get name 
      string get_name ()
      {
         return name ;
      }


        
} ; 


int main ()
{

   robot sophia ; 
   sophia.set_name("Sophia") ;
   cout << sophia.get_name() << endl ;

      // note : You can not assign(=) value here bcz the "name" is a private here.
    // Example : 
    //sophia.name = "Sophia" ;
   // cout << sophia.name ; 
   // it will show an error 
   
   return 0 ; 
}