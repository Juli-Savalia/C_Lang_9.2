#include <stdio.h>
#include <string.h>

int main()
{
    char password[7];
    char username[20];
 
    printf("Enter your username :- ");
    gets(username);
    printf("Enter your password :- ");
    gets(password);
 
    if(strcmp(username,"julisavalia@gmail.com")==0)
    {
        if(strcmp(password,"abcd1234")==0)
        {
            printf("Login Successfull");
        }
        else
        {
             printf("wrong password");
        }
    }
    else
    {
   		 printf("login invaild");
	}
}



