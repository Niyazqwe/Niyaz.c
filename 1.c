#include <stdio.h>
#include <string.h>
int mainO {
char alphabet[] =
"abcdefghijklmnopqrstuvwxyz";
char letter = 'I'; // Буква,
которую нужно найти
int index = -1;
for (int i = 0; i < strlen (alphabet);
i++) {
if (alphabet[i] == letter) {
index = i + 1; l| +1, так как
позиции в алфавите с 1, а индексы с 0
break; // Выходим из цикла
после нахождения буквы
3
if (index != -1) {
printf ("Буква "%с' находится на позиции %d в алфавите|n",
letter, index);
} else {
printf ("Буква '%с' не найденав алфавите\n", letter);
｝
return 0;
}
