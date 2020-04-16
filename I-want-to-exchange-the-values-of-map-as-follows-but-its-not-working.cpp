// link: https://stackoverflow.com/questions/61137010/i-want-to-exchange-the-values-of-map-as-follows-but-its-not-working/61137314#61137314

std::map<DT1, DT2> soldier;

// insert elements (key,value)

// create iterators over the associative map container with your required data types for <key,value> :

const std::map<DT1, DT2>::iterator i1 = soldier.find(key1);
const std::map<DT1,DT2>::iterator i2 = soldier.find(key2);

// you can use auto as well:
//  auto i1 = soldier.find(key1);
//  auto i2 = soldier.find(key2); 

if ((i1 != soldier.end()) && (i2 != soldier.end()))
   { std::swap(i1->second, i2->second);
   }

#include <iostream>
#include <iterator>
#include <map>
int main()
{
   std::map<int,std::string> soldier;
   soldier[1]="Soldier1";
   soldier[2]="Soldier2";

   const std::map<int ,std::string>::iterator i1 = soldier.find(1);
   const std::map<int ,std::string>::iterator i2 = soldier.find(2);

   if ((i1 != soldier.end()) && (i2 != soldier.end()))
   { std::swap(i1->second, i2->second);
   }

  std::map<int,std::string>::iterator it;
  for(it=soldier.begin(); it!=soldier.end(); ++it)
     std::cout<<it->first<<" "<<it->second<<"\n";

     // 1 Soldier2
     // 2 Soldier1

  return 0;
}
