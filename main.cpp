#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

void genering_word() {
int word = 0;
char ch;
int k = 1;
srand(time(NULL));
FILE *tf, *pr;
tf = fopen("Infinitive.txt", "r");
pr = fopen("werbs.txt", "w");
int num_word = rand()%118;
while((ch = fgetc(tf)) != EOF) {
if(ch == ' ') {
word++;
}
if(k == num_word) {
if(word == 0) {
fputc(ch, pr);
}
if(word == 1) {
fputc(ch, pr);
}
if(word == 2) {
fputc(ch, pr);
}
}
if(ch == '\n') {
k++;
word = 0;
}
}
fclose(tf);
fclose(pr);
}

void output_inf_word() {
char ch;
int word = 0;
FILE *pr;
pr = fopen("werbs.txt", "r");
cout « "Infinitive: ";
while((ch = fgetc(pr)) != EOF) {
if(ch == ' ')
word++;
if(word == 0)
cout « ch;
}
cout « endl;
fclose(pr);
}

void output_sim_word() {
char ch;
int word = 0;
FILE *pr;
pr = fopen("werbs.txt", "r");
cout « "Infinitive: ";
while((ch = fgetc(pr)) != EOF) {
if(ch == ' ')
word++;
if(word == 1)
cout « ch;
}
cout « endl;
fclose(pr);
} 
