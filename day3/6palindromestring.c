 #include <stdio.h>
 #include <string.h>
 int palindrome(char str[],int start,int end) 
 {
 if(start>=end)
 return 1;
 if(str[start]!=str[end])
 return 0;
 return palindrome(str,start+1,end-1);
 }
 int main() 
 {
 char str[100];
 printf("Enter a string: ");
 scanf("%s",str);
 if (palindrome(str,0,strlen(str)-1)) 
 {
 printf("The string is a palindrome.\n");
 }
 else 
 {
 printf("The string is not a palindrome.\n");
 }
 return 0;
 }