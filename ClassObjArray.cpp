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
   void do_task(string) ; 

//function definition inside the class
   void speak(string t )
   {
      cout << t << endl ;
   }
   
   

} ;


// function definition outside the class
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
void robot :: do_task(string s) 
{
	
	cout <<"I can " << s << endl ;
}

int main ()
{
  
  // Array of Objects
  robot Nemo[5] ;
   string s ;
   for ( int i = 0 ; i < 5 ; i ++)
   {
   	
   	 getline( cin , s ) ;
   	 Nemo[i].do_task(s) ;
   }
  
   
  



   return 0 ; 
}