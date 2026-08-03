#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int start;

    if (argc == 2)
    {
        i = 0;
        while(argv[1][i])
            i++;
        i--;

        while(i >= 0 && (argv[1][i] == ' ' || argv[1][i] == '\t'))
            i--;
        start = i;
        while (start >= 0 && argv[1][start] != ' ' && argv[1][start] != '\t')
            start--;

        start++;

        while (start <= i)
        {
            write(1, &argv[1][start], 1);
            start++;
        }
    }
    write(1, "\n", 1);
}