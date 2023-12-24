bool flag = false;

        for (int i = 1; i < n - 1; i++)
        {
            if (s[i] != '#' && s[i - 1] == '.' && s[i + 1] == '.')
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            cout << 2 << endl;
            break;
        }