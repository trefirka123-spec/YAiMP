#include <stdio.h> 
#include <math.h> 

int main() { 
    float z, sum_z, count_z;

    for (float x = 0.2; x <= 1; x += 0.5){
        for (float y = 1; y <= 3; y += 1.2){
            if ((x * x + y * y) < 2.0){
                z = pow((1 - sin(pow(x, 2) + pow(y, 3))), 2);
            } else{
                z = pow(pow(x, 2) * y + 8.0, 0.5);
            }
            printf("x = %f, y = %f, Z = %f\n", x, y, z);
            if (z >= 0.5){
                sum_z += z;
                count_z += 1.0;
            }
        }
    }
    printf("Среднее арифметическое всех значений функции = %f\n", sum_z/count_z);
    return 0;   
}