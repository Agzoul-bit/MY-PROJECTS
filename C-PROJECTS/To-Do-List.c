#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#define Sleep(x) sleep((x) / 1000)
#endif

int main() {
    char tasks[10][100]; // Tableau pour stocker les tâches
    bool is_done[10] = {false}; // État des tâches
    int choice, i, number_task = 0;

    while (1) {
        #ifdef _WIN32
        system("cls");
        #else
        system("clear");
        #endif

        printf("  ==== To-Do List ====  \n");
        printf("1. Add Task.\n");
        printf("2. Show Tasks.\n");
        printf("3. Mark Task as Done.\n");
        printf("4. Exit.\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n'); // Vider le buffer
            Sleep(1000);
            continue;
        }

        switch (choice) {
            case 1:
                if (number_task >= 10) {
                    printf("Task list is full!\n");
                    Sleep(1000);
                    break;
                }
                printf("Enter task: ");
                getchar(); // Absorber le '\n'
                fgets(tasks[number_task], 100, stdin);
                tasks[number_task][strcspn(tasks[number_task], "\n")] = '\0';
                printf("Task added!\n");
                number_task++;
                Sleep(1000);
                break;

            case 2:
                printf("\nTasks:\n");
                for (i = 0; i < number_task; i++) {
                    printf("%d. %s - %s\n", i + 1, tasks[i], is_done[i] ? "Done" : "Not Done");
                }
                getchar(); getchar(); // Pause
                break;

            case 3:
                printf("Enter task number to mark as done: ");
                if (scanf("%d", &i) == 1 && i > 0 && i <= number_task) {
                    is_done[i - 1] = true;
                    printf("Task %d marked as done!\n", i);
                } else {
                    printf("Invalid task number!\n");
                }
                Sleep(1000);
                break;

            case 4:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid input! Please enter a valid option (1-4).\n");
                Sleep(1000);
        }
    }
}
