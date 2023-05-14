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
//choose from these:  
//         //semester 1
// "BA003-Math-0",
// "BA101-Calculus-1",
// "BA113-Physics",
// "CS111-Introduction-to-Computers",
// "IS171-Introduction-to-Information-systems",
// "LH135-English-for-Specific-Purposes-I(ESP-I)",
// "NC172-Fundamentals-of-Business",
// //semester 2
// "BA102-Calculus-2",
// "CS143-Introduction-to-Problem-Solving-and-Programming",
// "EC134-Fundamentals-of-Electronics",
// "LH136-English-for-Specific-Purposes-II(ESP-II)",
// "NC133-Communication-Skills",
// //semester 3
// "BA201-Calculus-III",
// "BA203-Probability-and-Statistics",
// "BA216-Advanced-Physics",
// "CE216-Digital-Logic-Design",
// "CS202-Discrete-Structures",
// "CS243-Object-Oriented-Programming",
// //semester 4
// "Introduction-to-Networks",
// "CE243-Intro.-to-Computer-Architecture",
// "CS212-Data-Structures-and-Algorithms",
// "CS24-Advanced-Programming-Applications",
// "IS273-Database-Systems",
// "IT291-Professional-Training-in-Entrepreneurship",
// "SE291-Introduction-to-Software-Engineering",
// //semester 5
// "BA301-Advanced-Statistics",
// "BA304-Linear-Algebra",
// "CS311-Theory-of-Computation",
// "CS321-Systems-Programming",
// "CS333-Web-Programming",
// "CS352-Computer-Graphics",
// "IT321-Professional-Training-in-Programming-I(.Net-1)",
// //semester 6
// "CS301-Numerical-Methods",
// "CS305-System-Modeling-and-Simulation",
// "CS312-Computing-Algorithms",
// "CS322-Operating-Systems",
// "CS366Introduction-to-Artificial-Intelligence",
// //minor semester 6
// "IS467-Big-Data-Analytics",
// "IT371-Professional-Training-in-Databases-1",
// //semester 7
// "CS401-Project-1",
// "CS445-Structure-of-Programming-Languages",
// "CS481-Computers-&-Society",
// //minor semester 7
// "CS428-Cloud-Computing",
// "CS441-Compilers",
// "SE496-Software-Engineering-Process",
// "IT411-Professional-Training-in-Software-Testing-2",
// //semester 8
// "CS402-Project-2",
// "CS421-Computer-System-Security",
// "CS451-Human-Computer-Interaction",
// //minor semester 8
// "CS432-Network-Protocols-&-Programming",
// "CS460_Deep-Learning",
// "SE496-Software-Engineering-Process",
// "IT412-Professional-Training-in-Software-Testing-3"
int main()
{
    printf("Enter Your Regestiration Number: ");
    scanf("%d", &studentID);
    printf("Enter Your PIN: ");
    scanf("%d", &PIN);
    printf("Retrieved student information: %s\n", Get_GPA(studentID));
    return 0;
}