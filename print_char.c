#include "main.h"
#include <unistd.h>
/**
 * print_char - Imprime un caractère passé via va_list
 * @list: liste d'arguments contenant l'entier représentant le caractère
 *
 * Description: Récupère un int (le caractère) depuis la liste d'arguments
 *              et l'écrit sur la sortie standard.
 *
 * Return: Nombre d'octets écrits (1), ou -1 en cas d'erreur
 */
int print_char(va_list list)
{
	char c = va_arg(list, int);

	return (write(1, &c, 1));
}
