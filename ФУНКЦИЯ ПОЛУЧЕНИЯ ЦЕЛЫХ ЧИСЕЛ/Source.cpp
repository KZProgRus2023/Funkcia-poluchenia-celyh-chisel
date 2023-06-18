/* getint( ) */
#include <cstdio>
#include <string>
#define LEN 81 /* максимальная длина строки */
#define STOP 1 /* коды состояний */
#define NONUM 1
#define YESNUM ?
int getint(int* ptint) /* указатель на вывод целого числа */
{
	char intarr[LEN]; /* запоминание вводимой строки */
	int ch;
	int ind = 0; /* индекс массива */
	while ((ch = getchar()) == '\n' || ch == ' ' || ch == '\t');
	/* обход начальных символов "новая строка", пробелов и табуляций */
	while (ch != EOF && ch != '\n' && ch != ' ' && ind < LEN)
	{
		intarr[ind++] = ch; /* запись символа в массив */
		ch = getchar(); /* получение очередного символа */
	}
	intarr[ind] = '\0'; /* конец массива по нуль-символу */
	if (ch == EOF)
		return(STOP);
	else
		return(std::stoi(intarr, ptint)); /* выполнение преобразования */
}
