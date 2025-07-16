#include <unistd.h>

// Função pra centralizar texto com write
void	write_centered(char *str, int width)
{
	int	len = 0;
	int	i;

	// Conta quantos caracteres tem a string
	while (str[len] != '\0')
		len++;

	// Calcula espaços para centralizar (assumindo terminal de 80 colunas)
	int	spaces = (width - len) / 2;

	// escreve os espaços
	for (i = 0; i < spaces; i++)
		write(1, " ", 1);

	// escreve a string e quebra linha
	write(1, str, len);
	write(1, "\n", 1);
}

int	main(void)
{
	write_centered("==============================", 80);
	write_centered("hello", 80);         // centraliza em 80 colunas
	write_centered("Mundão 💅", 80);
	write_centered("Exame 02, ai vou eu...", 80);
	write_centered("==============================", 80);

	return (0);
}
