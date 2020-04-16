// link: https://stackoverflow.com/questions/61225177/multiply-numbers-among-themselves/61225403#61225403

int x;
while (std::cin >> x && x>=100 && x <=999)
\\ Do what you want

int digitproduct(int x) 
{  int product = 1;
   while (x != 0)   
   {
        product *= (n % 10);
        x /= 10; 
    } 
    return product; 
} 

int x;
while (std::cin >> x && x>=100 && x <=999)
{   cout<< digitproduct(x);
    break;
}
