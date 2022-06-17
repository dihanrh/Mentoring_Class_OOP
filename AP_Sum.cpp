// Sum in an AP series 
// a =  first element 
// d  = common difference 
// n = number of element

// sum = (n*(2*a+(n-1)*d)) / 2

#include <bits/stdc++.h>
using namespace std ;

void  APsum (float a , float d , int  n)
{
   float sum = 0;

   for (int i = 0 ; i < n ; i ++)
   {
      sum += a ;
      a += d ; 
   }

   cout << sum << endl ;
}


int main ()
{

  float a, d ; 
  int n ;  
  cin >> a >> d >> n ; 

   APsum(a , d , n ) ;



   return 0 ;
}
