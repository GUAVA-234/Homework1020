#include <stdio.h>
#include <math.h>

int main() {
    double principal = 5000.0;
    int years = 15;

    printf("Year  principal \n");

    for (double rate = 10.0; rate <= 12.0; rate += 0.5) {
        printf("In %.2f rete\n", rate);
        
        for (int year = 1; year <= years; year++) {
            double amount = principal * pow(1.0 + rate / 100, year);
            printf("%2d%13.2f\n", year, amount);
        }
        printf("\n");
    }

    return 0;
}
