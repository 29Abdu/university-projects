#include <stdio.h>

int main() {
    int h = 0, m = 0, s = 0;

    while (1) {
        printf("Time= %02d:%02d:%02d \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b", h, m, s);

        // Increment seconds
        s++;

        // Check if seconds reached 60
        if (s == 60) {
            s = 0;
            m++; // Increment minutes
        }

        // Check if minutes reached 60
        if (m == 60) {
            m = 0;
            h++; // Increment hours
        }

        // Check if hours reached 24
        if (h == 24) {
            h = 0; // Reset hours to 0 after reaching 24
        }

        sleep(1);
    }

    return 0;
}
