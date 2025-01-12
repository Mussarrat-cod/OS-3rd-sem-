#include <stdio.h>
#include <conio.h>


int fr[3];

void display() {
    int i;
    //printf("\n");
    for (i = 0; i < 3; i++) {
        printf("%d\t", fr[i]);
    }
   // printf("\n");
}

int main() {
    int i, j, page[12] = {2, 3, 2, 1, 5, 2, 4, 5, 3, 2, 5, 2};
    int flag1 = 0, flag2 = 0, pf = 0, frsize = 3, top = 0;

    // Initialize frames to -1
    for (i = 0; i < frsize; i++) {
        fr[i] = -1;
    }

    // FIFO Page Replacement Algorithm
    for (j = 0; j < 12; j++) {
        flag1 = 0;
        flag2 = 0;

        // Check if the page is already in a frame
        for (i = 0; i < frsize; i++) {
            if (fr[i] == page[j]) {
                flag1 = 1;
                flag2 = 1;
                break;
            }
        }

        // If the page is not in a frame, find an empty frame
        if (flag1 == 0) {
            for (i = 0; i < frsize; i++) {
                if (fr[i] == -1) {
                    fr[i] = page[j];
                    flag2 = 1;
                    break;
                }
            }
        }

        // If there is no empty frame, replace the oldest frame
        if (flag2 == 0) {
            fr[top] = page[j];
            top++;
            pf++;
            if (top >= frsize) {
                top = 0;
            }
        }

        // Display the current frame content
        display();
    }

    printf("\nNumber of page faults: %d\n", pf + frsize);
   // getch();
    return 0;
}
