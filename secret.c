#include<stdio.h>
#include<cs50.h>

bool check_phrase(string);


int main(void)
{ 
    string phrase = get_string("what's the secret phrase? ");

    bool correct =  check_phrase(phrase)
    {
        if (correct = true)
        {
            return pasword;
        }
    }
}

bool check_phrase(string phrase)
{
    if(strcmp(phrase, pasword) == 0)
     {
        return true;
     }
     return false;
}