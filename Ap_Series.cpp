// AP series 
// a =  first element 
// d  = common difference 
// n = number of element
//1+2+3+4+5

#include <bits/stdc++.h>
using namespace std ;

void  APsr (float a , float d , int  n)
{
  

   for (int i = 0 ; i < n ; i++)
   {
     cout << a ; 
     a += d ;
     if ( i+1 != n )
     {
      cout <<"+" ;
     }
   

   }

   
}


int main ()
{

  float a, d ; 
  int n ;  
  cin >> a >> d >> n ; 

   APsr(a , d , n ) ;



   return 0 ;
}
