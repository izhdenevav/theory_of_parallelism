#include<iostream>
#include<vector>
#include<memory>
#include<cmath>

#ifndef TYPE
#define TYPE double
#endif

#define N 1e7
#define PI 3.14159265358979

#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)

template<typename Type>
void sin_sum()
{
    // std::unique_ptr<std::vector<int>> numbers_mem = std::make_unique<std::vector<int>>();
    std::vector<Type> numbers;

    Type current_value = 0;
    Type sin = 0;
    Type current_sum = 0;
    
    for (int i = 1; i <= N; i++) {
        current_value = ((2 * PI) / N) * i;
        sin = std::sin(current_value);
        numbers.push_back(sin);
        current_sum += sin;
    }

    std::cout << "Сумма значений синусов при " << TOSTRING(TYPE) << " : " << current_sum << std::endl;}

int main() {
    sin_sum<TYPE>();
    return 0;
}