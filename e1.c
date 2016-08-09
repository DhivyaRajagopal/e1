#include <stdio.h>
int main() {
char ch;
 printf("enter the char\n");
 scanf("%c",&ch);
 if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='o'||ch=='O'||ch=='i'||ch=='I'||ch=='u'||ch=='U')
 {
 printf("%c u r giving vowels",ch);
 }
 else
 {
 printf("%c u r giving consonants",ch);
 }
	return 0;
}
