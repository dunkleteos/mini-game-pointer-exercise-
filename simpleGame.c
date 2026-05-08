#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void populate_array(int *array, int size) {
    for (int i = 0; i < size; i++) {
        array[i]= rand()%51+50;
    }
}

float average_array(int *array, int size) {
    float sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }
    return (sum / size);
}

// Tahmin kontrol fonksiyonu
int average_check(float average, float guess) {
    float diff =fabs(average - guess);

    if (diff == 0) {
        printf("WOW! You are correct, You won!\n");
        return 1;
    } else if (diff <= 10) {
        printf("HOT! Too close\n");
    } else {
        printf("COLD! Try again...\n");
    }
    return 0;
}

void display_array(int *array, int size) {
    printf("\nArray numbers: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main(void) {
    srand(time(NULL));
    int size;

    // ÖNEMLİ: Önce size değerini almalıyız!
    printf("How many numbers do you want to generate?: ");
    scanf("%d", &size);

    int *array = (int*) malloc(size * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation error!\n");
        return 1;
    }

    populate_array(array, size);
    float average = average_array(array, size);

    float guess;
    int win= 0;
    printf("\nTry to gues the avarage (max three attempt)!\n");

    for (int i = 1; i <= 3; i++) {
        printf("%d. guess: ", i);
        scanf("%f", &guess);

        if (average_check(average, guess)) {
            win = 1;
            break;
        }
    }

    if (!win) {
        printf("\nHakkin bitti! Maalesef bilemedin.");
    }

    printf("\nReal avarage: %.2f\n", average);
    display_array(array, size);

    free(array);
    return 0;
}