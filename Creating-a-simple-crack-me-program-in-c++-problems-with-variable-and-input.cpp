// link: https://stackoverflow.com/questions/61168586/creating-a-simple-crackme-program-in-c-problems-with-variable-and-input/61168859#61168859

#include <iostream>
using namespace std;

class checker{
public:
    int number;
    void processing(int x)
    {
        if (x==10)
            cout << "Well done!";
        else 
            cout << "Keep trying!";
    }
};
int main()
{
    checker cracking;
    cout << "Please enter in the correct number \n";
    int n;
    cin >> n;
    cracking.processing(n);
    return 0;
}
