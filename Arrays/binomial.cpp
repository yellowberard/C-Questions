#include <iostream>
#include <stdio.h>
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
    std::cout << "Enter the number";
    std::cin >> n;
    std::cout << "Enter the second number";
    std::cin >> r;
    nfact = fact(n);
    rfact = fact(r);
    nrfact = fact(n - r);
    j = nfact / (nrfact * rfact);
    std::cout << j;

    return 0;
}