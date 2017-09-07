//
// Created by Admin on 9/5/2017.
//
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

float divi(int a, int b);
int plus(int a, int b){
    return a+b;
}
int minus(int a, int b){
    return a-b;
}
int mutil(int a, int b){
    return a*b;
}
float divi(int a, int b){
    return (float)a/b;
}
char num1(){
    printf("Nhap so thu nhat:\n");
}
char num2(){
    printf("Nhap so thu hai: \n");
}
char num3(){
    printf("Ket qua: ");
}
main(){
    int a;
    int b;
    int luachon;
    while(true) {
        printf("1. Cong Hai so\n");
        printf("2. Tru Hai so\n");
        printf("3. Nhan Hai so\n");
        printf("4. Chia 2 so\n");
        printf("5. Thoat\n");
        printf(" Vui long nhap lua chon: \n");
        scanf("%c",&luachon);
        if (isdigit(luachon)){
            if(luachon=='5') {
                break;
            }
            else{
                switch (luachon) {
                    case '1':
                        printf("Ban da lua chon Cong hai so: \n");
                        num1();
                        scanf("%i",&a);
                        num2();
                        scanf("%i",&b);
                        num3();
                        printf("%i\n",plus(a,b));
                        break;
                    case '2':
                        printf("Ban da lua chon Tru hai so:\n");
                        num1();
                        scanf("%i",&a);
                        num2();
                        scanf("%i",&b);
                        num3();
                        printf("%i\n",minus(a,b));
                        break;
                    case '3':
                        printf("Ban da lua chon Nhan hai so: \n");
                        num1();
                        scanf("%i",&a);
                        num2();
                        scanf("%i",&b);
                        num3();
                        printf("%i\n",mutil(a,b));
                        break;
                    case '4':
                        printf("Ban da lua chon Chia hai so: \n");
                        num1();
                        scanf("%i",&a);
                        num2();
                        scanf("%i",&b);
                        num3();
                        printf("%.2f\n",divi(a,b));
                        break;
                    default:
                        if (luachon > '0' || luachon <'6') {
                            printf(" Vui long nhap dung so tu 1 den 5\n");
                        }
                }
            }
        } else{
            printf("Vui long nhap dung so!!! \n");
        }
    }
    printf("Dong chuong trinh");

}

//    }


