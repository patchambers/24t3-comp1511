// part5_roller_coaster
//
// This program was written by Pat Chambers (z5264081),
// on 16/9/24


#include <stdio.h>

#define MIN_HEIGHT 100
#define RIDE_ALONE_THRESHOLD 160

int main(void) {
    
    // 1. Scans in the users height.
    int height;
    scanf("%d", &height);

    // 2. If the height is 0 or less, 
    //    it should print an error message
    if (height <= 0) {
        printf("Error: invalid height!\n");
    } else if (height < MIN_HEIGHT) {
        // 3. If the height is below the minimum height (100), 
        //    it should print a message telling the user they are not tall enough to ride
        printf("SOrry! You are not tall enough to ride this rollercoaster :(\n");
    } else if (height < RIDE_ALONE_THRESHOLD) {
        // 4. If the height is above the minimum but below the ride alone threshold (160),
        //    it should print a message telling the user they can ride with an adult
        printf("You can ride, but only with a responsible adult\n");
    } else {
        // 5. If the height is equal to or above the ride alone threshold, 
        //    it should print a message telling the user they can ride.
        printf("Yay! You can ride this rollercoaster by yourself!\n");
    }
    return 0;
}
