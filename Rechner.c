#include <stdio.h>
#include <windows.h>

int main() {

    int Exit = 0;
    char Operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double Ergebnis = 0.0;

    while(1){
        printf("Rechnung eingeben (+ - * /):\n");
        scanf("%lf %c %lf", &num1, &Operator, &num2);

        switch(Operator){
            case '+':
                Ergebnis = num1 + num2;
                break;
            case '-':
                Ergebnis = num1 - num2;
                break;
            case '*':
                Ergebnis = num1 * num2;
                break;
            case '/':
                if(num2 == 0){
                    printf("Man kann nicht durch 0 dividieren!\n");
                }
                else{
                    Ergebnis = num1 / num2;
                }
                break;
            default:
                printf("Keine Valide auswahl!\n");
        }

        printf("Ergebnis: %.4lf", Ergebnis);

        printf("\n\nNoch eine Rechnung? (0 - ja, 1 - nein): ");
        scanf("%d", &Exit);

        if(Exit == 1){
            break;
        }
        else if(Exit = 1){
            system("cls");
        }
    }    
    return 0;
}