#include <unistd.h>
void ft_repeat(int argc, char **argv)
{
    int i;
    int value;
    char *str;

    str = argv[1];
    i = 0;
    if (argc == 2)
    {
        while(str[i])
        {
            if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            {
                if (str[i] >= 'a' && str[i] <= 'z')
                {
                    value = str[i] - 96;
                }
                else if (str[i] >= 'A' && str[i] <= 'Z')
                {
                    value = str[i] - 64;
                }

                while (value > 0)
                {
                    write(1, &str[i], 1);
                    value -= 1;
                }
            }
            else
                write(1, &str[i], 1);
            i++;
        }
        write(1, "\n", 1);
    }
    else
    {
        write(1, "\n", 1);
        return;
    }
}

int main(int argc, char **argv)
{
    ft_repeat(argc, argv);
    return (0);
}