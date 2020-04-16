// link: https://stackoverflow.com/questions/61231115/while-operator-overloading-can-i-not-return-by-reference/61231637#61231637

Cents& operator-(const Cents& c1, const Cents &c2);

Cents& operator-(const Cents& c1, const Cents& c2) 
{ 
    c1.m_cents -= c2.m_cents;
    return c1; 
} 
