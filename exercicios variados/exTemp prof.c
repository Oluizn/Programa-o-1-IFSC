#include <stdio.h>

float converte_temp(float temp, int flag)
{
    float temp_aux;
    if(flag==0){
        temp_aux = temp * 1.8 + 32;
    }
    else{
        temp_aux = (temp - 32) / 1.8;
    }
    return temp_aux;
}

int main(){
    printf("%f", converte_temp(32, 1));
}