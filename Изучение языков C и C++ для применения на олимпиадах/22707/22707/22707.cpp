
#include <iostream>

int sum() {
    int n = 0;
    scanf("%d", &n);
    if (n > 0) return n + sum();
    else {
        return 0;
    }
}

int main()
{
    std::cout << sum();
}
