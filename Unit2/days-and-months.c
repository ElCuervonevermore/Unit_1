#include <stdio.h>
#include "C:\Users\Kukul\Documents\UPY\Unit2\utils.h"
int main(){

    for (int m = 1; m <= 12; m = m + 1){ 
        printf("Mes %d\n",m);
        int tipo = m%2; 

        if (m == 2){
            
            
            printf("(");
            for (int d = 1; d <= 28; d++) printf("%d, ",d);
            printf(")\n\n");

        }else if(m <= 7)
            
            if (tipo==0){
            
               
                printf("(");
                for (int d = 1; d <= 30; d++) printf("%d, ",d);
                printf(")\n\n");

            }else if(tipo != 0){
            
                
                printf("(");
                for (int d = 1; d <= 31; d++) printf("%d, ",d);
                printf(")\n\n");

            }

        }else if(m > 7){

            if (tipo==0){
            
                
                printf("(");
                for (int d = 1; d <= 31; d++) printf("%d, ",d);
                printf(")\n\n");

            }else if(tipo != 0){
            
                
                printf("(");
                for (int d = 1; d <= 30; d++) printf("%d, ",d);
                printf(")\n\n");

            }
        }
        sleep(1);
    }
}