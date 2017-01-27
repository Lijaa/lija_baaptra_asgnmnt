#include<stdio.h>
#include<conio.h>
int main()
{

char string [50];

   int c = 0, count[5] = {0};
   
int vowels = 0, i = 0;
clrscr();
   printf("Enter a string\n");
   gets(string);
 
   while (string[c] != '\0')
   {
 
      if (string[c] == 'a' ||string[c] == 'e'||string[c] == 'i' 
          string[c] == 'o' ||string[c] == 'u') 
         count[string[c]]++;
 
      c++;
   }
 
   for (c = 0; c < 5; c++)
   {
     
      if (count[c] != 0)
         printf("%c occurs %d times in the entered string.\n",c+'a',count[c]);
   }
 while(string [i] != ‘\0′)
{
if(string [i]=='A' || string [i]=='a' || string [i]=='E' || string [i]=='e' || string [i]=='I' || string [i]=='i' ||
string [i]=='O' || string [i]=='o' || string [i]=='U' || string [i]=='u')
vowels++;
i++;
}
printf(“\n\n\t THE TOTAL NUMBER OF VOWELS IS…: %d”, vowels);
return 0;
getch();
}
