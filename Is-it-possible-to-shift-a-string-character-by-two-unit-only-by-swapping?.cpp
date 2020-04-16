// link: https://stackoverflow.com/questions/61236815/is-it-possible-to-shift-a-string-character-by-two-unit-only-by-swapping/61237471#61237471

std::string s = "hacker";
std::rotate(s.begin(), s.begin()+(s.size()-2), s.end());
std::cout << s;

std::string s = "hacker";
std::reverse(s.begin(), s.begin()+(s.size()-2)); 
std::reverse(s.begin()+(s.size()-2), s.end()); 
std::reverse(s.begin(), s.end()); 
std::cout << s;
