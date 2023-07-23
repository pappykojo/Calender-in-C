# Calendar in C

This is a simple C program that displays a basic calendar for a given month and year. It uses the Zeller's Congruence algorithm to determine the day of the week for the first day of the month and then prints the calendar accordingly.

## How to Use

1. Clone or download the C file (`calendar.c`) to your local machine.

2. Open a terminal or command prompt and navigate to the directory where the `calendar.c` file is located.

3. Compile the C code using a C compiler (e.g., GCC):

   ```
   gcc calendar.c -o calendar
   ```

4. Run the compiled executable:

   ```
   ./calendar
   ```

5. The program will prompt you to enter the year and month for which you want to display the calendar.

6. Enter the year (e.g., 2023) and the month (e.g., 7 for July).

7. The program will then print the calendar for the specified month and year.

## Example Output

```
Enter the year: 2023
Enter the month (1-12): 7
    Calendar - 7, 2023
Sun Mon Tue Wed Thu Fri Sat
                   1   2 
  3   4   5   6   7   8   9 
 10  11  12  13  14  15  16 
 17  18  19  20  21  22  23 
 24  25  26  27  28  29  30 
 31 
```

## Note

- The program accounts for leap years when calculating the number of days in February.

- The Zeller's Congruence algorithm is used to determine the day of the week for the first day of the month. It provides the day as an integer (0 for Saturday, 1 for Sunday, etc.).

- The program only displays a basic calendar with the day of the week headings (Sun, Mon, Tue, etc.) and the days of the month. It does not include additional features like event reminders, user interfaces, or graphical representation.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
