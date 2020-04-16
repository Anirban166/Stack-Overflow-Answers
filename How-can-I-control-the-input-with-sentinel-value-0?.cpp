// link: https://stackoverflow.com/questions/61152615/how-can-i-control-the-input-with-sentinel-value-0/61153013#61153013

int main()
{
  int num;
  do { cin>>num;
       if(n==0 || !cin) // or !cin.good()
         break;
       reverse(num);
     } while(!num=0)
     return 0;
}
