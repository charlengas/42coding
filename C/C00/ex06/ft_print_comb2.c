// Contenido de ft_print_comb2.c

#include <unistd.h> // Para la función write

// Declaración del prototipo si vas a llamar a ft_putchar y print_number
// antes de definirlas, o simplemente defínelas antes de ft_print_comb2.
// (En este caso, están definidas antes, así que no es estrictamente necesario
// el prototipo aquí, pero es buena práctica si estuvieran en otro orden o archivo).
void ft_putchar(char c);
void print_number(int n);

void ft_putchar(char c) // Función auxiliar para escribir un carácter
{
    write(1, &c, 1);
}

void print_number(int n) // Función para imprimir un número de dos dígitos (00-99)
{
    if (n < 0 || n > 99)
        return;
    ft_putchar((n / 10) + '0'); // Imprime la decena
    ft_putchar((n % 10) + '0'); // Imprime la unidad
}

void ft_print_comb2(void)
{
    int a;
    int b;
    int first_combination;

    a = 0;
    first_combination = 1;

    while (a <= 98)
    {
        b = a + 1;
        while (b <= 99)
        {
            if (!first_combination)
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
            print_number(a);
            ft_putchar(' ');
            print_number(b);
            first_combination = 0;
            b++;
        }
        a++;
    }
}
