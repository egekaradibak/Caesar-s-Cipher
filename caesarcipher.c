/*
 * Program to implement caesar's cipher  
 *******************************************************************
 * Author         Dept.            Date           Notes
 *******************************************************************
 * Ege K.        Engineering      Feb182020     Initial verison
 * Ege K.        Engineering      Feb202020     fixed the space problem
 */
#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>

int main(int argc, char*argv[])

{
//error message if the number of argument doesn't match
if(argc!=2){
printf("Error: usage is caesarcipher <offset>\n");
return 1;
}
//declaring variables
char message[500], c;
int j;
int o;
//asking user for message and offset
scanf("%499[0-9a-zA-Z ]", message);
o = atoi(argv[1]);
//for loop it stops when there is no char left
for(j = 0; message[j] != 0; ++j){
 c = message[j];
if(c >= 'a' && c <= 'z'){ 
c = c + o;
 if(c > 'z'){
 c = c - 'z' + 'a' - 1;
 }
 message[j] = c;
 }
  else{
 message[j] = c;
}
}
printf(" %s\n", message);
 return 0;

}




