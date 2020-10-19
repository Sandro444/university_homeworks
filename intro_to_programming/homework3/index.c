#include <stdio.h>

int main(){
    float amauntOfGas;
    printf("ramdeni litri sawvavi sheidzinet?");
    scanf("%f", &amauntOfGas);
    if(amauntOfGas > 20){
        printf("tqven gekutvnit 3 procentiani fasdakleba da unda gadaixadot %.2f lari", (2.43 * amauntOfGas)*0.97);
    } else if(amauntOfGas > 15){
        printf("tqven gekutvnit 2 procentiani fasdakleba da unda gadaixadot %.2f lari", (2.43 * amauntOfGas)*0.98);
    } else if(amauntOfGas > 10){
        printf("tqven gekutvnit 1 procentiani fasdakleba da unda gadaixadot %.2f lari", (2.43 * amauntOfGas)*0.99);
    } else{
        printf("vgoneb tqven ar gekutvnit fasdakleba");
    }
    return 0;
}
