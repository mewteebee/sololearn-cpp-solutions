#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <cmath>

using namespace std;

void verNumber(int arr[], int len, int num){

   if((arr[0] == arr[len-1]) && (arr[1] == arr[len-2]))
    {
        cout<<num<<" is a palindrome"<<endl;

    }else
    {
        cout<<num<<" is NOT a palindrome"<<endl;
    }

}

void isPalindome(int num, int len){
   
   int arrNum[len];
   for (int i = 0; i < len ; i++)
   {
       arrNum[i] = (int) floor(num/pow(10,(len-(i+1)))) % 10;
       
   }
    
   verNumber(arrNum,len,num);  
   
}

int main(){

    char data[5];
    cin>>data;

    int len = strlen(data);
    int num = atoi(data); 


    isPalindome(num,len);

    return 0;
}