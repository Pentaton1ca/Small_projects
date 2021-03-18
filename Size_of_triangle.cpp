#include <iostream>
#include <iomanip>
unsigned factorial(unsigned n);
unsigned binomial(unsigned n, unsigned k);

int main() {
    unsigned size;
    std::cout << "Please enter the size of the triangle (a positive number is required): ";
    std::cin >> size;

    for(int i=1; i<=size; i++)
    {
        for(int j=0; j<=i; j++)
        {
            std::cout << std::setw(4) << binomial(i,j);
        }
        std::cout << std::endl;
    }

    return 0;
}


unsigned binomial(unsigned n, unsigned k) {
    unsigned ret;
    ret = factorial(n)/(factorial(k)*factorial(n-k));
    return ret;
}


unsigned factorial(unsigned n) {
    unsigned ret = 1;
    for(int i=0; i<n; i++)
    {
        ret *= (i+1);
    }
    return ret;
}

