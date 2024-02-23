#include <iostream>

#define SPRING
//#define SUMMER
//#define AUTUMN
//#define WINTER

#ifdef SPRING
int main()
{
    std::cout << "SPRING" << std::endl;
}

#endif //SPRING

#ifdef SUMMER
int main()
{
    std::cout << "SUMMER" << std::endl;
}

#endif //SUMMER

#ifdef AUTUMN
int main()
{
    std::cout << "AUTUMN" << std::endl;
}

#endif //AUTUMN

#ifdef WINTER
int main()
{
    std::cout << "WINTER" << std::endl;
}

#endif //WINTER
