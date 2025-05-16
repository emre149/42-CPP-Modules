#include <iostream>

int main(int ac, char **av)
{
    int i;

    i = 1;
    if (ac > 1)
    {
        while (av[i][1])
        {
            av[i][1] = std::toupper(av[i][1]);
            i++;
        }
    }
}