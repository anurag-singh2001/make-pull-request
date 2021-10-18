#include <iostream>

int main()
{
    int r, c, i, j, k, digits;
    std::cin >> r >> c;
    int pos[c];
    for (i = 0; i < c; i++)
    {
        if (i / (r - 1) % 2 == 0)
        {
            pos[i] = i % (r - 1);
        }
        else 
        {
            pos[i] = r - 1 - (i % (r - 1));
        }
    }
  
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (pos[j] == i) 
            {
                std::cout << (j + 1);
            }
            else
            {
                for (k = j + 1; k != 0; k /= 10) 
                {
                    std::cout << " ";
                }
            }
            std::cout << " ";
        }
        std::cout << "\n";
    }
} 
