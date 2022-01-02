long long minTime(long long a[], long long b[], long long n)
    {
        long long i, even_A=0, odd_A=0, even_B=0, odd_B=0;

        for( i=0; i<n; i++ )
        {
            if(i % 2 == 0) {
                even_A += a[i];
                even_B += b[i];
            }
            else {
                odd_A += a[i];
                odd_B += b[i];
            }
        }
        
        long long Time1 = even_A + odd_B;
        long long Time2 = even_B + odd_A;

        return min(Time1, Time2);
    }

    /*

    Time Complexity: O(N)
    Space Complexity: O(1)

    */