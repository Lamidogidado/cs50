#include<stdio.h>
#include<cs50.h>

int main(void)

{
int start,end, years =0;
do 
{
    start = get_int("start size: ");

} while(start<9);
 
do 
{
end = get_int("end size: ");
} while(end<start);

while (start<end)
{
    start = start +(start/3) - (start/4);
    years++;
}

printf("years: %i\n", years);

}