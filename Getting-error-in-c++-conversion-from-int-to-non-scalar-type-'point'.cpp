// link: https://stackoverflow.com/questions/61158523/getting-error-in-c-conversion-from-int-to-non-scalar-type-point/61158791#61158791

void display() { std::cout<<x<<" "<<y; }

friend void display(point p) { std::cout<<p.x<<" "<<p.y; }

int main()
{
   point p[2]{{1,2},{2,1}}; 

   // method 1:
   p[0].display(); // 1 2
   p[1].display(); // 2 1

   // method 2:
   display(p[0]); // 1 2
   display(p[1]); // 2 1
}
