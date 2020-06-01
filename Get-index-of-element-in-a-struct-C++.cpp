// link: https://stackoverflow.com/questions/61814770/get-index-of-element-in-a-struct-c/61815173#61815173

#include <iostream>

struct Person
{
    std::string name;
};

int main()
{
  Person person[3]; 
  person[0].name = "Karl"; 
  person[1].name = "John";
  person[2].name = "Felix";

  auto findIndex = [=](std::string m)
  { for(int i = 0; i < 3; i++) 
    { if(m == person[i].name)
      return i;
    }
    return -1;    
  };

  std::cout << findIndex("Felix");
  std::cout << "\n";
  std::cout << findIndex("Blaze"); 
}

2
-1
