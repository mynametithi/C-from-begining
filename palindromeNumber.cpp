//palindrome number check:
#include<stdio.h>
int main(){
int num,rev=0,rem,orig;
printf("Enter an integer number:");
scanf("%d",&num);
orig=num;
while(num!=0){
    rem=num%10;
    rev=rev*10+rem;
    num=num/10;
}
if(orig==rev){
    printf("%d is a palindrome number:",orig);
}
else{
    printf("%d is not a palindrom number",orig);
}
return 0;
}