// https://cs50.harvard.edu/x/2020/psets/1/mario/more

#include <stdio.h>
#include <string.h>
void shape(int n);

char right[32] = "#";
char left[32] = "#";

int main(void)
{
int input;
  
printf("Height: ");
scanf("%i", &input);
printf("\nInput:%d\n",input);
if(input >= 1)
{
 
    shape(input);
 
}else
{
    printf("Invalid Input\n");
}
}

void shape(int n)
{
   
  int rightcount = n;
  int leftcount = n;
  int leftspace = 0;



  
for (int i = 1; i <= n; i++)
{

//left
for (int i = leftspace; i < n; i++)
{
  printf(" ");
}
leftspace++;

for (int i = leftcount; i < n; i++)
{
  printf("#");
}

printf("%s  ",left);

leftcount--;









// // right
for (int i = rightcount; i < n; i++)
{
  printf("#");
}
rightcount--;
printf("%s",right);
printf("\n");


 }


}