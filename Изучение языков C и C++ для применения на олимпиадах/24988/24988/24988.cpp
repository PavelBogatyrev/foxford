#include <iostream>

template <typename T>
void double_vector(vector<T>& a)
{
    int size = a.size();
    for (int i = size - 1; i >= 0; --i) {
        a.push_back(a[i]);
    }
};

int main()
{
    std::cout << "Hello World!\n";
}
