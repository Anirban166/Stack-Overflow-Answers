// link: https://stackoverflow.com/questions/61211707/weird-function-declaration-and-lambdas-in-c/61211896#61211896

typedef void(*printHiFunction)(int);

  printHiFunction Print = Hi;
  Print(5);
  
void ForEach(const std::vector<int>& values, void(*functionPointer)(int))
{
   for (int value : values)
     functionPointer(value);
}
int main()
{
  std::vector<int> values = {1, 2, 3, 4, 5};
  ForEach(values, [](int value)
  { std::cout << value << " "; });
}
