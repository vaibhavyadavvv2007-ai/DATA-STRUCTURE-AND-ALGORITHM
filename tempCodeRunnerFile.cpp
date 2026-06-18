int n = 6;
    for (int i = 2; i <n; i++)
    {
        if (n % i == 0 && (i != 2 || i != 3 || i != 5))
        {
           cout<<"false";
            return 0;
        }
        cout<<"true";
        return 0;
    }