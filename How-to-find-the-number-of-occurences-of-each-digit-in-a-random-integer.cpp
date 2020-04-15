// link: https://stackoverflow.com/questions/61037818/how-to-find-the-number-of-occurrences-of-each-digit-in-a-random-integer/61038468#61038468

// your rng-based digits in an array:
int a[9]={1,4,4,5,6,6,8,8,8};

// For checking unique/distinct digits first, and later on to hold the frequency as transferred by count:
int frequency[9]={-1,-1,-1,-1,-1,-1,-1,-1,-1};

    // Our counter variable, but counts will be transferred to frequency[] later on:
    int count;

    for(int i=0; i<9; i++)
    {   // Each distinct element occurs once atleast so initialize to one:
        count = 1;
        for(int j=i+1; j<9; j++)
        {
            // If dupe is found: 
            if(a[i]==a[j])
            {
                count++;

                // Ensuring not to count frequency of same element again:
                frequency[j] = 0;
            }
        }

        // If frequency of current element is not counted:
        if(frequency[i] != 0)
            frequency[i] = count;
    }

    for(int i=0; i<9; i++)
    {
        if(frequency[i] != 0)
            printf("%d appears %d times\n", a[i], frequency[i]);
    }
