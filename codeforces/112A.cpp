#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
using namespace std;
int main()
{
    string letters = "";
    string alpha = "";
   
    int c;
    int k;
    int res = 0;
 
    getline(cin, letters);
    getline(cin, alpha);
 
    c = letters.size();
    k = alpha.size();
 
    for (int i = 0; i < c; i++)
    {
        letters[i] = tolower(letters[i]);
    }
    for (int i = 0; i < k; i++)
    {
        alpha[i] = tolower(alpha[i]);
    }
 
    for (int i = 0; i < c; i++)
    {
        
            if (letters[i] < alpha[i])
            {
                res = -1;
 
                break;
            }
            if (letters[i] > alpha[i])
            {
                res = 1;
 
                break;
            }
        
    }
 
    cout << res;
    return 0;
}