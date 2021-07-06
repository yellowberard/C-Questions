#include <iostream>
#include <stdio.h>
using namespace std;
int fact(long int num)
{
    long int i, pro;
    pro = 1;
    for (i = num; i > 0; i--)
    {
        pro = pro * i;
    }
    return pro;
}
int main()
{
    // Write C++ code here
    long int n, r, j, nfact, rfact, nrfact;
    cout << "Enter the number";
    cin >> n;
    // std::cout<<"Enter the second number";
    // std::cin>>r;
    //  nfact= fact(n);
    // rfact= fact(r);
    // nrfact= fact(n-r);
    for (int a = 0; a <= n; a++)
    {
        for (j = 0; j <= a; j++)
        {
            cout << fact(a) / (fact(j) * fact(a - j));
        }
        cout << "\n";
    }
    return 0;
}