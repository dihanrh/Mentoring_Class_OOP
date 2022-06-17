//Sum of GP series 
// a =  first element 
// r  = common ratio 
// n = number of element
//2 4 8 16 ...
//sum = (a * (1 - pow(r, n ))) / (1- r);
//  tn = a * (pow(r, n - 1)); 

#include <bits/stdc++.h>
using namespace std ;

void  Gpsum (int  a , int  r , int  n)
{
  int sum = 0 ;
      for ( int i  = 0  ; i < n ; i ++)
      {
         sum += a ;
         a *= r ;
      }

      cout << sum ;
   
}


int main ()
{

  int  a, r ; 
  int n ;  
  cin >> a >> r >> n ; 

   Gpsum(a , r , n ) ;



   return 0 ;
}
