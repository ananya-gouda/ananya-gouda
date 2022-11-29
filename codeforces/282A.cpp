#include <iostream>
using namespace std;
int main()
{
    int x = 0, n;
    string temp = "";
    cin >> n;
 
    for(int i=0; i<n; i++)
    {
        cin>>temp;
    
        if (temp[1] == '+')
        {
            x++;
        }
 
        else if (temp[1] == '-')
        {
            --x;
        }
    }
 
cout << x << endl;
 
return 0;
}