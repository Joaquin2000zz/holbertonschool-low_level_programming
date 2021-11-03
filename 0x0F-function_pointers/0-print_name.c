/**
 * print_name - print name
 * @name: name of the person
 * @f: pointer to a function
 * Return: the name.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
	else
		return;
}
