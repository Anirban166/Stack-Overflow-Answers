// link: https://stackoverflow.com/questions/61120406/count-number-of-digits-in-an-array-c/61120941#61120941

#include <iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter Length of Elements = ";
  cin>>n;
  int arr[50];
  for(int i=0;i<n;i++)
  {
      cout<<"Enter Number = ";
      cin>>arr[i];
  }

  int counter[50];
  for(int i=0; i<n; i++)
    counter[i]=0;

    // Our counter variable, but counts will be transferred to count[] later on:
    int tempcount;

    for(int i=0; i<n; i++)
    {   // Each distinct element occurs once atleast so initialize to one:
        tempcount = 1;
        for(int j=i+1; j<n; j++)
        {
            // If dupe is found: 
            if(arr[i]==arr[j])
            {
                tempcount++;

                // Ensuring not to count frequency of same element again:
                counter[j] = 1;
            }
        }

        // If occurence of current element is not counted before:
        if(counter[i] != 1)
            counter[i] = tempcount;
    }

    for(int i=0; i<n; i++)
    {
        if(counter[i] != 0)
            printf("%d has appeared %d times.\n", arr[i], counter[i]);
    }
 return 0;
}
I used a variable tempcount to count occurence of each element and a zero-initialized array count to get the dupes checked (by setting it to 1 for a duplicate entry, and not counting it if it qualifies as 1) first. Then I transferred the counted occurence values to counter[] from tempcount at each outer loop iteration. (for all the unique elements)

sh
