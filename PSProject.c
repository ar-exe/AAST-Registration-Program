#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define o printf
#define s scanf
#define MAX_INFO_SIZE 255
char line[255];
char d[] = ","; // delimeter
int studentID, PIN;
char *Student_info(int id){
    int currentLine;

    int wanted_Student = id;

    FILE *fpointer = fopen("Students.txt", "r");
    fgets(line, 255, fpointer);
    // divide line into tokens by delimiter
    char *ID = strtok(line, d);
    // using static memory allocation instead of dynamic

    // note that using a static variable means that subsequent calls to Student_info() will overwrite the contents of info, so use caution when relying on this approach.
    static char info[MAX_INFO_SIZE];

    while (fgets(line, 255, fpointer))
    {
        int studentID = atoi(ID);
        if (studentID == id)
        {
            strncpy(info, line, MAX_INFO_SIZE - 1);
            info[MAX_INFO_SIZE - 1] = '\0';
            fclose(fpointer);
            return info;
        }
        currentLine++;
    }

    fclose(fpointer);
    return NULL; // Student not found
}
char *Get_Name(int id)
{
    FILE *fpointer = fopen("Students.txt", "r");
    if (fpointer == NULL)
    {
        printf("Error opening file.\n");
        return NULL; // Return NULL to indicate an error
    }

    char line[255];
    char d[] = ",";
    while (fgets(line, 255, fpointer))
    {
        char *ID = strtok(line, d);
        int pID = atoi(ID);
        if (id == pID)
        {
            char *Name = strtok(NULL, d);
            fclose(fpointer);
            return Name;
        }
    }

    fclose(fpointer);
    return NULL; // Student not found
}
char *Get_College(int id)
{
    FILE *fpointer = fopen("Students.txt", "r");
    if (fpointer == NULL)
    {
        printf("Error opening file.\n");
        return NULL; // Return NULL to indicate an error
    }

    char line[255];
    char d[] = ",";
    while (fgets(line, 255, fpointer))
    {
        char *ID = strtok(line, d);
        int pID = atoi(ID);
        if (id == pID)
        {
            char *Name = strtok(NULL, d);
            char *College = strtok(NULL, d);
            fclose(fpointer);
            return College;
        }
    }

    fclose(fpointer);
    return NULL; // Student not found
}
char *Get_Period(int id)
{
    FILE *fpointer = fopen("Students.txt", "r");
    if (fpointer == NULL)
    {
        printf("Error opening file.\n");
        return NULL; // Return NULL to indicate an error
    }

    char line[255];
    char d[] = ",";
    while (fgets(line, 255, fpointer))
    {
        char *ID = strtok(line, d);
        int pID = atoi(ID);
        if (id == pID)
        {
            char *Name = strtok(NULL, d);
            char *College = strtok(NULL, d);
            char *Period = strtok(NULL, d);
            fclose(fpointer);
            return Period;
        }
    }

    fclose(fpointer);
    return NULL; // Student not found
}
char *Get_Department(int id)
{
    FILE *fpointer = fopen("Students.txt", "r");
    if (fpointer == NULL)
    {
        printf("Error opening file.\n");
        return NULL; // Return NULL to indicate an error
    }

    char line[255];
    char d[] = ",";
    while (fgets(line, 255, fpointer))
    {
        char *ID = strtok(line, d);
        int pID = atoi(ID);
        if (id == pID)
        {
            char *Name = strtok(NULL, d);
            char *College = strtok(NULL, d);
            char *Period = strtok(NULL, d);
            char *Department = strtok(NULL, d);
            fclose(fpointer);
            return Department;
        }
    }

    fclose(fpointer);
    return NULL; // Student not found
}
char *Get_Credits(int id)
{
    FILE *fpointer = fopen("Students.txt", "r");
    if (fpointer == NULL)
    {
        printf("Error opening file.\n");
        return NULL; // Return NULL to indicate an error
    }

    char line[255];
    char d[] = ",";
    while (fgets(line, 255, fpointer))
    {
        char *ID = strtok(line, d);
        int pID = atoi(ID);
        if (id == pID)
        {
            char *Name = strtok(NULL, d);
            char *College = strtok(NULL, d);
            char *Period = strtok(NULL, d);
            char *Department = strtok(NULL, d);
            char *Credits = strtok(NULL, d);
            fclose(fpointer);
            return Credits;
        }
    }

    fclose(fpointer);
    return NULL; // Student not found
}
char *Get_GPA(int id)
{
    FILE *fpointer = fopen("Students.txt", "r");
    if (fpointer == NULL)
    {
        printf("Error opening file.\n");
        return NULL; // Return NULL to indicate an error
    }

    char line[255];
    char d[] = ",";
    while (fgets(line, 255, fpointer))
    {
        char *ID = strtok(line, d);
        int pID = atoi(ID);
        if (id == pID)
        {
            char *Name = strtok(NULL, d);
            char *College = strtok(NULL, d);
            char *Period = strtok(NULL, d);
            char *Department = strtok(NULL, d);
            char *Credits = strtok(NULL, d);
            char *GPA = strtok(NULL, d);
            fclose(fpointer);
            return GPA;
        }
    }

    fclose(fpointer);
    return NULL; // Student not found
}
char *Get_FF(int id)
{
    FILE *fpointer = fopen("Students.txt", "r");
    if (fpointer == NULL)
    {
        printf("Error opening file.\n");
        return NULL; // Return NULL to indicate an error
    }

    char line[255];
    char d[] = ",";
    while (fgets(line, 255, fpointer))
    {
        char *ID = strtok(line, d);
        int pID = atoi(ID);
        if (id == pID)
        {
            char *Name = strtok(NULL, d);
            char *College = strtok(NULL, d);
            char *Period = strtok(NULL, d);
            char *Department = strtok(NULL, d);
            char *Credits = strtok(NULL, d);
            char *GPA = strtok(NULL, d);
            char *FF = strtok(NULL, d);
            fclose(fpointer);
            return FF;
        }
    }

    fclose(fpointer);
    return NULL; // Student not found
}
char *Get_PIN(int id)
{
    FILE *fpointer = fopen("Students.txt", "r");
    if (fpointer == NULL)
    {
        printf("Error opening file.\n");
        return NULL; // Return NULL to indicate an error
    }

    char line[255];
    char d[] = ",";
    while (fgets(line, 255, fpointer))
    {
        char *ID = strtok(line, d);
        int pID = atoi(ID);
        if (id == pID)
        {
            char *Name = strtok(NULL, d);
            char *College = strtok(NULL, d);
            char *Period = strtok(NULL, d);
            char *Department = strtok(NULL, d);
            char *GPA = strtok(NULL, d);
            char *Credits = strtok(NULL, d);
            char *FF = strtok(NULL, d);
            char *pin = strtok(NULL, d);
            fclose(fpointer);
            return pin;
        }
    }

    fclose(fpointer);
    return NULL; // Student not found
}
char* Get_Status_of(int id, char* course) {
    // Construct the file path using the course name
    char filePath[255];
    snprintf(filePath, sizeof(filePath), "G:\\PS Project\\AAST-Registration-Program-1\\CS Courses\\%s.txt", course);

    FILE* fpointer = fopen(filePath, "r");
    if (fpointer == NULL) {
        printf("Error opening file.\n");
        return NULL; // Return NULL to indicate an error
    }

    char line[255];
    char d[] = ",";
    while (fgets(line, 255, fpointer)) {
        char* ID = strtok(line, d);
        int pID = atoi(ID);
        if (id == pID) {
            char* Name = strtok(NULL, d);
            char* Result = strtok(NULL, d);
            char* Status = strtok(NULL, d);
            fclose(fpointer);
            return Status;
        }
    }

    fclose(fpointer);
    return NULL; // Student not found
}
int main()
{
    printf("Enter Your Regestiration Number: ");
    scanf("%d", &studentID);
    printf("Enter Your PIN: ");
    scanf("%d", &PIN);
    printf("Retrieved student information: %s\n", Get_GPA(studentID));
    return 0;
}