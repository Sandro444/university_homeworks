#include <stdio.h>
int main(){
    int number;
    printf("shemoitanet mteli ricxvi \n");
    scanf("%d", &number);
    int copyOfNumber = number;
    int gasayofi = 10;
    int tanrigi = 0;
    //ვიგებთ რამდენი თანრიგი აქვს რიცხვს
    while(number >= 1){
        number /= gasayofi;
        tanrigi += 1;
    }
    int base = 1;
    int index = 0;
    //pow() ფუნქცია არასწორად მუშაობდა და ამიტომ ჩემით ავიყვანე ხარისხებში
    while(index < (tanrigi-1)){
        base *= 10;
        index += 1;
    }
    printf("%d =", copyOfNumber);
    //ვიღებთ ნაშთს და ვაკლებთ ამჟამინდელ რიცხვს
    while(index > 0){
        int nashti = copyOfNumber % base;
        base /= 10;
        index -= 1;
        printf(" %d +", copyOfNumber - nashti);
        copyOfNumber = copyOfNumber - (copyOfNumber - nashti);
    }
    //ერთეულოვანი თანრიგის რიცხვი 
    printf(" %d",copyOfNumber);
    return 0;
}
