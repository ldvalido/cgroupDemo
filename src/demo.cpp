#include <iostream>
#include <new>
#include <cstdlib>
int main()
{
    int i = 0;
    char *ptr = NULL;
    while (i < 50)
    {
        if ((ptr = (char *)malloc(1048576)) == NULL)
        { ///1MB allocated
            std::cout << "Allocation fails at " << i << "MB\n";
            return 0;
        }
        std::cout << "Allocated " << i + 1 << "MB\n";
        i++;
    }
    std::cout << "Finished allocation";
    std::cout << "";
    return 0;
}