#include <iostream>
using namespace std;
int main()
{
    int a{10}, b{20}, c{30};

    int result = (a++, --b, c *= 2);
    cout << result;
    return 0;
}