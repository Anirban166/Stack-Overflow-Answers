// link: https://stackoverflow.com/questions/61021803/how-to-traverse-a-char-among-the-vector-elements/61023455#61023455

#include <iostream> 
#include <vector> 

int main() 
{  std::vector<std::string> s;
   s.push_back("Stack");
   s.push_back("Overflow");
   char c; 
   std::cin>>c;
   for(std::string& e:s)
   {
      if(e.find(c))
      { std::cout<<"found"; 
        break; 
      }
   }
  return 0;
}
