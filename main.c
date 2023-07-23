#include <stdio.h>

// Function to check if the given year is a leap year
int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to get the day of the week for the first day of the month
int getDayOfWeek(int year, int month) {
    if (month < 3) {
        month += 12;
        year--;
    }

    int k = year % 100;
    int j = year / 100;

    int dayOfWeek = (1 + (13*(month + 1)) / 5 + k + k/4 + j/4 + 5*j) % 7;
    return dayOfWeek;
}

// Function to print the calendar for a given month and year
void printCalendar(int year, int month) {
    // Array to store the number of days in each month
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    // Adjust the number of days in February for leap years
    if (isLeapYear(year)) {
        daysInMonth[2] = 29;
    }

    // Get the day of the week for the first day of the month
    int dayOfWeek = getDayOfWeek(year, month);

    // Print the header
    printf("    Calendar - %d, %d\n", month, year);
    printf("Sun Mon Tue Wed Thu Fri Sat\n");

    // Print leading spaces
    for (int i = 0; i < dayOfWeek; i++) {
        printf("    ");
    }

    // Print days of the month
    for (int day = 1; day <= daysInMonth[month]; day++) {
        printf("%3d ", day);
        // Move to the next line after Saturday (6th day of the week)
        if ((day + dayOfWeek) % 7 == 0) {
            printf("\n");
        }
    }
    printf("\n");
}

int main() {
    int year, month;

    printf("Enter the year: ");
    scanf("%d", &year);

    printf("Enter the month (1-12): ");
    scanf("%d", &month);

    // Check for valid inputs
    if (month < 1 || month > 12) {
        printf("Invalid month input. Please enter a value between 1 and 12.\n");
        return 1;
    }

    // Print the calendar
    printCalendar(year, month);

    return 0;
}
