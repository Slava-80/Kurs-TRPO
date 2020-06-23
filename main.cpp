#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

void genering_word() {
char ch, sl_one[100], sl_two[100], sl_three[100];
int k = 1, p = 0, word = 0, r = 0, s = 0;
srand(time(NULL));
FILE *tf;
tf = fopen("Infinitive.txt", "r");
int num_word = rand()%118;
while((ch = fgetc(tf)) != EOF) {
if(ch == ' ')
word++;
if(k == num_word) {
if(word == 0) {
sl_one[p] = ch;
p++;
}
if(word == 1) {
sl_two[r] = ch;
r++;
}
if(word == 2) {
sl_three[s] = ch;
s++;
}
}
if(ch == '\n') {
k++;
}
}
fclose(tf);
}
