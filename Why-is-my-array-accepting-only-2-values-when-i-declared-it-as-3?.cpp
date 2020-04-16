// link: https://stackoverflow.com/questions/61243326/why-is-my-array-accepting-only-2-values-when-i-declared-it-as-3/61244191#61244191

#include <iostream>
#include <vector>
int main() 
{
    int amount;
    std::cout<< "How many books are you donating? ";
    std::cin>> amount;
    std::vector<std::string> donation;
    std::string title;
    std::cout<< "Enter the titles: \n";
    for (int i=0; i<amount; i+=1)
    {
        std::cin>> title;
        donation.push_back(title);
    }
    std::cout<< "You donated these: \n";
    for(auto x:donation)
       std::cout<< x << "\n";
}
