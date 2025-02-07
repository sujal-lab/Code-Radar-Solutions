#include <stdio.h>
int main (){
    char a;
    scanf("%c",&a);
    if((a=='a'&&'A') ||( a=='i'&&'I') ||(a=='o'&&'O')||(a=='u'&&'U')||(a=='e'&&'E'))printf("Vowel");
    else if((a>='a' && a>='z')||(a>='A'&&a<='Z')) printf("Consonant");
    else if(a>='0'&&a<='9') printf("Digit");
    else printf("Special Character\n");
}