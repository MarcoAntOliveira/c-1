#include<iostream>
#include<string>
#include<vector>

int main(){    
int count1 = 98;
int count2 = 65;
int cont = 1; 
 for(cont = 1 ; cont >= 26 ; cont++){
    if(cont%2==0){
       printf("%c", count1);
       count1+=2;
    }else if(cont%2!=0 || cont == 1){
        printf("%c", count2);
        count2+=2;
    }
 } 
return 0;
}