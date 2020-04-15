// link: https://stackoverflow.com/questions/61151268/why-it-prints-unexpected-values/61151408#61151408

class calculator 
{
    public:
    int n1, n2;
    friend void setNumbers(calculator &v);
    friend void getNumbers(calculator &v);

};

void setNumbers(calculator &v) {
    cin >> v.n1 >> v.n2;
}

void getNumbers(calculator &v) {
    cout << v.n1 << ' ' << v.n2 << '\n';
}
