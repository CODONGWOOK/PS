#include <iostream>
using namespace std;
#define fastio() ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int main()
{
    fastio();
    
    int a, b;

    while (1)
    {
        cin >> a >> b;
     
        if (a == 0 && b == 0)
            break;
        cout << a + b << '\n';
    }
}