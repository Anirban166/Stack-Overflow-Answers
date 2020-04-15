// link: https://stackoverflow.com/questions/61158081/how-to-make-the-computation-faster/61160077#61160077

#include <iostream>
#include <cmath>
#define ll long long 
int main() 
{ 
    ll int n; 
    std::cin>>n;

   // Start from 1: (add case for 0 if input is not >0)
   // you can also start from any other square or define a range.
    ll int first = 1; 

   // Square it:
    ll int first_square = first * first; 

   // Find next square:
    ll int next = (first_square * 2) + 1; 

   // Initialize variable to collect your required sum:
    ll int sum = 0;
    ll int square = first_square;

    while ((square >= 0 && square <= n)) 
    {  
        sum += (square *floor(n/square));

        // Add the perfect square: 
        square += next; 

        // Next odd number to be added:
        next += 2;      
    }     
    std::cout<<sum;  
    return 0; 
} 
