// link: https://stackoverflow.com/questions/61050955/how-to-have-requirements-in-a-getline/61052580#61052580

std::string s;
getline(std::cin,s);

int count=0, spaces=0, alphabets=0;
for(int i = 0; i < std::strlen(s); i++)
{ 
  if(isalpha(s[i]))
     { count++; alphabets++;
     }
  else if(isspace(s[i]))
     { count++; spaces++;
     }
  else
     {
       std::cout<<"Invalid";
       break; 
     }
}
if(std::strlen(s)==count && spaces!=0 && alphabets!=0)
  // Valid (do what you want)
