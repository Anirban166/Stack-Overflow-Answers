// link: https://stackoverflow.com/questions/61167552/compare-function-of-string-class-not-working-as-expected/61168659#61168659

asis of your code and it works fine:

#include <iostream>
#include <vector>

class Professor 
{   public:
    std::string name;
    std::string getName()
    { return name; }
};

int main() 
{ std::vector<Professor> professors;
  Professor a,b,c;
  a.name = "eerorika"; b.name = "S.S.Anne" ; c.name = "walnut";
  professors.push_back(a);
  professors.push_back(b);
  professors.push_back(c);
  int choice; 
  std::cin>>choice;
  switch(choice)
  {
    case 1:
    {  std::string profname;
       std::cin>>profname;
       if(professors.size()!=0)
       for(Professor i:professors)
         if(profname.compare(i.getName())==0)
           std::cout<<"Professor name = "<<i.getName()<<"\n";
        break;   
    }
    case 2:
    {  std::cout<<"Mystical";
       break;
    }
  }
  return 0;
}
