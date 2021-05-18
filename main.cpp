#include <iostream>

using namespace std;

int main()
{
    int n, cont = 1;
    cin >> n;
    while (cont <= 10000){
        if (cont%n == 2){
            cout << cont <<endl;
        }
        cont++;
    }
    return 0;
}
