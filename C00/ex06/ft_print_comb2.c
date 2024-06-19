
#include <unistd.h>
void    write_n(int n)
{
    char c;

    
    c = (n / 10) + 48;
    write (1, &c, 1);
    c = n % 10 + 48;
    write (1, &c, 1);
}

void    ft_print_comb2(void)
{
    int T[2];

    T[0]=0;
    while (T[0] < 100)
  {
    T[1]=T[0]+1;
    while (T[1] < 100)
    {
            write_n(T[0]);
            write(1, " ", 1);
            write_n(T[1]);
            if (T[0] == 98 && T[1] == 99)
            {

            }
            else
                write(1, ", ",2);
        T[1]++;
    }
    T[0]++;
  }
}


int     main(void)
{
   ft_print_comb2();
   return (0);
}
