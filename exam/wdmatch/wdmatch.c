#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;

    if (argc == 3)
    {
        i = 0;
        j = 0;

        while (argv[1][i] && argv[2][j])
        {
            if (argv[1][i] == argv[2][j])
            {
                i++;
            }
            j++;
        }
        if (argv[1][i] == '\0')
            write(1, argv[1], i);
    }
    write(1, "\n", 1);
}

/* İki tane string alıp, birinci string'deki tüm harflerin 
ikinci string'in içinde sırasıyla bulunup bulunmadığını kontrol eder.*/
