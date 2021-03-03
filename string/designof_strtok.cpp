#include <bits/stdc++.h>

using namespace std;

char *mystrtok(char *str, char delim)
{
    //! string and single char as delimenator
    static char *input = NULL;
    //! static pointer to manage state of string
    if (str != NULL)
    {
        //! first call
        input = str;
    }
    //! corner case

    if (input == NULL)
    {
        return NULL;
    }

    //! start ext tokens
    //? dynamic array
    char *output = new char[strlen(input) + 1];
    int i = 0;
    for (; input[i] != '\0'; i++)
    {
        if (input[i] != delim)
        {
            output[i] = input[i];
        }
        else
        {
            output[i] = '\0';
            input = input + i + 1;
            return output;
        }
    }

    // cornor case

    output[i] = '\0';
    input = NULL;
    return output;
}

int main()
{

    char s[100] = "Today is Rainy day";

    char *ptr = mystrtok(s, ' ');
    cout << ptr << endl;

    while (ptr != NULL)
    {
        ptr = mystrtok(NULL, ' ');
        cout << ptr << endl;
    }

    return 0;
}