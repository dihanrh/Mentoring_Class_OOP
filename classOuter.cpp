#include<bits/stdc++.h>
using namespace std ; 

class robot {

   string name ;
   int leg ; 
   int hand ;
   int eye ;


   public  : 


   
   void input(string  , int  , int  , int ) ;
   void speak () ;
   void walk() ;
   void see() ;
   void work () ; 
  


} ;

void robot :: input (string n ,int x , int y, int z )
{
   name = n ; 
   leg = x ;
   hand = y ;
   eye = z ;
} 

void robot :: speak()
{
   cout << "My name is " << name << endl ;
}
void robot :: walk ()
{
   cout <<"I can walk by " << leg << " legs" << endl ; 

}
void robot :: see ()
{
   cout  << "I can see by "<< eye <<  " eyes" << endl ;
}

void robot :: work ()
{
   cout << "I can work by " << hand << " hands" << endl ;
}


int main ()
{
  robot Sophia ; 
  Sophia.input("Sophia" , 2 , 2 , 2) ;

  Sophia.speak() ;
  Sophia.see() ;
  Sophia.walk() ;
  Sophia.work() ;

   return 0 ; 
}