#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#define DT long long int
int main() 
{   
    std::vector<DT> v1 = {5, 2, 5, 7, 8}; 
    std::vector<DT> v2 = {4, 5, 6};  

                         // 52578
                         // 00456
                         // -----
        Expected output: // 53034   

   // Size management:
   int diff;
   if(v1.size() > v2.size())
   {  diff = v1.size() - v2.size();
      for(int i = 0; i < diff; ++i)
          v2.insert(v2.begin(),0);
   }          
   else
   {  diff = v2.size() - v1.size();
      for(int i = 0; i < diff; ++i)
          v1.insert(v1.begin(),0);
   }

   // Element-wise addition:
   std::transform(v1.begin( ), v1.end( ), v2.begin( ), v1.begin( ),std::plus<DT>( ));

   // Overflow management:
   for(int i = v1.size(); i > 0; --i) 
   { 
       if(i==1 && v1[1]>=10)
       {   v1[1]=v1[1]%10;
           v1.insert(v1.begin(),1);
       }     
       else if(i!=1 && v1[i-1]>=10)
       {  v1[i-1]=v1[i-1]%10;
          v1[i-2]=v1[i-2]+1;
       }
   }   

   // Display sum
   for(auto v:v1)
      std::cout<<v;
}
