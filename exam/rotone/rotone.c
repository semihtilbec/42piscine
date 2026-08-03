/*Her harfi alfabede 1 adım sonrasına kaydır. Harf olmayan karakterlere dokunma*/

#include <unistd.h>
int main(int argc, char **argv)
{
    int i;
    char c;
    
    i = 0;
    if (argc == 2)
    {
        
        while(argv[1][i])
        {
            c = argv[1][i];

            if (c >= 'a' && c <= 'y')
                c += 1;
            else if (c == 'z')
                c = 'a';
            else if (c >= 'A' && c <= 'Y')
                c += 1;
            else if (c == 'Z')
                c = 'A';
            
            write(1, &c, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
