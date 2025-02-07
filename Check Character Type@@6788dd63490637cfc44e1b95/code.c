#include <stdio.h>
int main (){
    char a;
    scanf("%c",&a);
    if((a>='a' && z>='z')-('a','e','i','o','u')) printf("Consonant");
    else if(a=='a' && a=='i' &&a=='o'&&a=='u'&&a=='e')printf("Vowel");
    else if(a>='0'&&z>='9') printf("Digit");
    else printf("Special Character");
}