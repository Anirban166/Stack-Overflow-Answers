// link: https://stackoverflow.com/questions/61233990/while-loop-if-and-else/61234477#61234477

void CardSelect() 
{ // Your cout statements
}

int main() 
{
  while(1)
  {
    bool valid = false;
    CardSelect(); // call to your function
    int cardchoice;
    cin >> cardchoice;

    switch(cardchoice)
    {
      case 1:      
      cout << "You got hearts" << endl;
      valid = true;
      break;

      case 2:     
      cout << "You got diamonds" << endl;
      valid = true;
      break;

      case 3:    
      cout << "You got joker" << endl;
      valid = true;
      break;

      default:
      cout << "Invalid choice" << endl;
      cout << "Please ensure you type in the right numbers" << endl;
      break;
    } if(valid) break;
  }
}
