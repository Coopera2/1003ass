#include <stdio.h>
#include<conio.h>
#include <string.h>

 int
main () 
{
  
  //initialising variables for rotation
int k = 0, rotationkey = 0, c = 0;
  
char message[100];
  
int n = 0;
  
 //variables for Substitution
char cs[27], ct[30];
  
int i = 0, j = 0, index;
  

printf ("Enter a message:");
//input of the message for Encryption / Decryption  
gets (message);
  
printf ("Please choose an option: \n");
  
printf ("1: Encryption using Rotation cypher \n");
  
printf ("2: Decryption using Rotation cypher \n");
  
printf ("3: Encryption using Substitution cypher \n");
  
printf ("4: Decryption using Substitution cypher \n");
  
scanf (" %d", &n);
  
//menu and getchar() to eat the enter key when selecting options
getchar();
  {
      //switch statement which contains the options
switch (n)
    
    {
    
 
 
 
case 1:
      
      
printf ("Option 1 selected: Encryption using Rotation cypher \n");
      
printf ("Enter rotation cypher key:\n");
      //input of the rotation cipher key
scanf (" %d", &rotationkey);
      

      

for (k = 0; message[k] != '\0'; ++k)
	{
	  
 
c = message[k];
	  //assigning message a variable for ease of use
 
if (c >= 'a' && c <= 'z')
	    {
	      
 
c = (c + rotationkey);
//encryption for lowercase	      
 
if (c > 'z')
		{
		  
c = (c - 'z' + 'a' - 1);
		
}
	      
 
message[k] = c;
	    
}
	  //encryption for uppercase
	  else if (c >= 'A' && c <= 'Z')
	    {
	      
 
c = (c + rotationkey);
	      
 
if (c > 'Z')
		{
		  
 
c = (c - 'Z' + 'A' - 1);
		
 
}
	      
message[k] = c;
	    
}
	
 
}
      
 //output of Encrypted message
printf ("Encrypted message is: %s \n", message);
      
 
break;
    
case 2:
      
 
printf ("Option 2 selected: Decryption using Rotation cypher \n");
      
 
 
printf ("Enter rotation cypher key:\n");
      
scanf (" %d", &rotationkey);
      //key
 
for (k = 0; message[k] != '\0'; ++k)
	{
	  
 
c = message[k];
	  
 
if (c >= 'a' && c <= 'z')
	    {
	      
 
c = (c - rotationkey);
	      
 
if (c < 'a')
		{
		  
c = (c + 'z' - 'a' + 1);
		
}
	      
 
message[k] = c;
	    
}
	  
	  else if (c >= 'A' && c <= 'Z')
	    {
	      
 
c = (c - rotationkey);
	      
 
if (c < 'A')
		{
		  
 
c = (c + 'Z' - 'A' + 1);
		
 
}
	      
message[k] = c;
	    
}
	
 
}
      
 
printf ("Decrypted message is: %s \n", message);
      
 
break;
    
case 3:
      
 
printf ("Option 3 selected: Encryption using Substitution cypher\n");
      
 
printf ("Enter Substitution cipher key for each letter: \n");
      
 
 
 
for (i = 0; i < 26; i++)
	
	{
	  
printf ("%c : ", i + 97);
	  
cs[i] = getch ();
	  
printf ("%c , ", cs[i]);
	
}
      
 
for (i = 0; i < strlen (message); i++)
	
	{
	  
index = message[i] - 97;
	  
ct[i] = cs[index];
	
}
      
 
printf ("\n\nCipher Text is : ");
      
 
for (i = 0; i < strlen (message); i++)
	
	{
	  
printf ("%c", ct[i]);
	
}
      
getch ();
      
 
break;
    
case 4:
      
 
printf ("Option 4 selected: Decryption using Substitution cypher\n");
      
 
printf ("Enter Substitution cipher key for each letter:\n");
      
fflush (stdin);
      
for (i = 0; i < 26; i++)
	
	{
	  
printf ("%c-", i + 97);
	  
cs[i] = getch ();
	  
printf ("%c , ", cs[i]);
	
}
      
 
for (i = 0; i < strlen (message); i++)
	
	{
	  
index = message[i] + 97;
	  
ct[i] = cs[index];
	
}
      
 
printf ("\n\nCipher Text is : ");
      
 
for (i = 0; i < strlen (message); i++)
	
	{
	  
printf ("%c", ct[i]);
	
}
      
getch ();
      
 
break;
    
default:
      
 
printf
	(" %c is not a valid option, please enter an integer between 1 and 4",
	 n);
    
}
    }
 
return 0;

}


