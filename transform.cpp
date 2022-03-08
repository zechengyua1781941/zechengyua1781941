#include<stdio.h>
#include <iostream>
#include<math.h>
int transform(int base,int num){
    int i = 0;
    int x=0;
    int remainde = 0;
    int quo=num;
  
            
    while(quo!=0){
        remainde = quo%base;
        quo = quo/2;
        x=(remainde * pow(10,i))+x;
        i++;
        
    
    }
    return x;
}
int main(){
    int base=2;
    int num=75;
  int result=transform(2,75);
  std::cout << "the result is "<<result << std::endl;
 
}
