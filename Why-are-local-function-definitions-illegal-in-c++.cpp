// Link : https://stackoverflow.com/questions/61290885/why-are-local-function-definitions-illegal-in-c/61290965#61290965

int main() 
{ 
  // Define within the scope of main()
  auto temp = [](int x)
  { std::cout<< x; 
  }
  temp(10); // call like a function
}

int main()
{
   class temp
   {  public:
      static void a()
      {  std::cout<< 10;
      }
   };
   temp::a();
}
