/*
Escreva um programa que encontre o menor inteiro positivo n que satisfa�a as seguintes condi��es:
n/3 = i inteiros e resto 2, para um i qualquer;
Use um la�o que mantenha se repetindo at� que as condi��es acima sejam verdadeiras (isto �,
enquanto pelo menos uma delas n�o for satisfeita, a repeti��o deve continuar).
*/
#include <iostream>

using namespace std;

int main(){
    int i, n = 0;
    cin >> i;

    while(true){
        if((n / 3 == i)&&(n % 3 == 2)){
            break;
        }
        n++;
    }

    cout << n;

    return 0;
}
