#include <iostream>
#include <math.h>

float est_sqrt(const float number);
float good_sqrt(const float number);
int twotothe(const int number);
std::string stringConcat(const std::string a, const std::string b);

float est_sqrt (const float number)
{
    long i;
    float x2, y;
    const float threehalves = 1.5f;

    x2 = number * 0.5f;
    y = number;
    i = * ( long * ) &y;
    i = 0x5f3759df - ( i >> 1 );
    y = * ( float * ) &i;
    y = y * (threehalves - x2 * y * y);
    y = y * (threehalves - x2 * y * y); // additional accuracy

    y = 1.f / y;
    if (y < 0) y *= -1;

    return y;
}

float good_sqrt(const float number){
    return sqrtf(number);
}

int twotothe (const int number)
{
    return (1 << number);
}

std::string stringConcat (const std::string a, const std::string b)
{
    std::string output = a + b;
    return output;
}

// int main(){
//     // these will just do some basic testing to make sure sensibe values are returned.
//     std::cout << est_sqrt(16.0f) << '\n' << est_sqrt(105.79215376) << '\n';
//     std::cout << good_sqrt(16.0f) << '\n' << good_sqrt(105.79215376) << '\n';

//     std::cout << est_sqrt(0.f) << '\n' << est_sqrt(-25.0f) << '\n';
//     std::cout << good_sqrt(0.f) << '\n' << good_sqrt(-25.0f) << '\n';

//     std::cout << twotothe(7) << '\n';

//     std::string a_str = "Hello, ";
//     std::string b_str = "World!";
//     std::string c_str = stringConcat(a_str, b_str);
//     std::cout << c_str << '\n';
//     return 0;
// }