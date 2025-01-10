#include <iostream>
#include <cctype>

int main(int argc, char *argv[])
{
    if (argc == 1)
        std::cout << "LOUAD AND UNBEARABLE FEEDBACK NOISE";
    else
    {
        for (int i = 1; argv[i]; i++)
        {
            std::string buffer = argv[i];
            for(int j = 0; argv[i][j]; j++)
                std::cout <<(char)toupper(argv[i][j]);
        }
    }
    std::cout << std::endl;
    return 0;
}
