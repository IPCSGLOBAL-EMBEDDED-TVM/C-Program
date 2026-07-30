#include <stdio.h>

enum Temperature { FREEZING = -10, COLD = 0, MILD = 15, WARM = 25, HOT = 35 };

const char* describeTemperature(int temp) {
    if (temp <= FREEZING) return "Freezing";
    if (temp <= COLD) return "Cold";
    if (temp <= MILD) return "Mild";
    if (temp <= WARM) return "Warm";
    return "Hot";
}

int main() {
    int currentTemp;
    printf("Enter current temperature (Celsius): ");
    scanf("%d", &currentTemp);

    printf("Temperature description: %s\n", describeTemperature(currentTemp));

    printf("\nEnum reference values:\n");
    printf("FREEZING = %d\n", FREEZING);
    printf("COLD     = %d\n", COLD);
    printf("MILD     = %d\n", MILD);
    printf("WARM     = %d\n", WARM);
    printf("HOT      = %d\n", HOT);

    return 0;
}
