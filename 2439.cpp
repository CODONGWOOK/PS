#include <iostream>
#include <string>
using namespace std;
#define fastio() ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int main()
{
  fastio();

  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
      cout << ' ';
    for (int j = 0; j < i + 1; j++)
      cout << '*';
    cout << '\n';
  }
}