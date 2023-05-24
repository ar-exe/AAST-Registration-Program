#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdint.h>
#define o printf
#define s scanf
#define MAX_INFO_SIZE 255
char line[255];
char d[] = ","; // delimeter
int studentID, PIN;
void Student_Count(){
        FILE *fpointer = fopen("Students.txt", "r");
    int lineCount = 0;
    int ch;
    while ((ch = fgetc(fpointer)) != EOF)
    {
        if (ch == '\n')
        {
            lineCount++;
        }
    }
    printf("%d students\n", lineCount-1);
    fclose(fpointer);
}

char *Student_info(int id){
    int currentLine = 1;

    int wanted_Student = id;

    FILE *fpointer = fopen("G:\\PS Project\\AAST-Registration-Program-1\\Students.txt", "r");
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
        printf("Error opening file PERIOD.\n");
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
float Get_GPA(int id)
{
    FILE *fpointer = fopen("Students.txt", "r");
    if (fpointer == NULL)
    {
        printf("Error opening file.\n");
        return -1.0; // Return a special value to indicate an error
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
            return atof(GPA); // Convert GPA string to float
        }
    }

    fclose(fpointer);
    return -1.0; // Student not found or error occurred
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
    FILE *fpointer = fopen("G:\\PS Project\\AAST-Registration-Program-1\\Students.txt", "r");
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
        printf("Error opening file STATUS.\n");
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
    Student_Count();
    int PASS, studentID, k = 0, choice, c, x;
    int current_semester;
// assigning current semester variable.
    char *period = Get_Period(studentID);
    int Current_semester;
    if (period != NULL) {
        int semester = atoi(period);
        Current_semester = semester + 1;
    } 
    printf("\t\tWelcome to AAST Registration Program\n");
    printf("1-Student\t\t2-Admin\n");
    scanf("%d",&c);
    if(c==1){
        printf("1-Old Student\t\t2-New student\n");
        s("%d",&x);
    }
    switch (x)
    {
        case 1:
        o("Enter your Regisration Number: \n");
        l:s("%d", &studentID);
        o("Enter your pin: \n");
        m:s("%d", &PASS);
        system("cls");
        FILE *fptr;
        fptr = fopen("Students.txt", "r");
        if (Get_PIN(studentID) == NULL)
        {
            o("Registration Number and Pin Code dose not matched.\nPlease type them correctly.\nPlease try to enter pin again");
            goto m;
        }
        printf("Registration Number: %d", studentID);
        printf("\nName: %s", Get_Name(studentID));
        printf("\nCollege: %s", Get_College(studentID));
        printf("\nDepartment: %s", Get_Department(studentID));
        printf("\nPeriod: %s", Get_Period(studentID));
        printf("\nTotal Achivement: %s", Get_Credits(studentID));
        printf("\nGPA: %f", Get_GPA(studentID));
        printf("\nFF: %s", Get_FF(studentID));
        printf("\n\n");
        printf("1-Register\t\t2-View Courses\t\t3-View Registered Courses\t\t4-View Transcript\n");
        n:s("%d", &choice);
int com;

switch (choice)
{
    case 1: // Register
        system("cls");
        printf("%f\n", Get_GPA(studentID));
        if (Get_GPA(studentID) >= 2)
{


            printf("You are allowed to register 7 Courses Maximum\n");
            char *period = Get_Period(studentID);
            if (period != NULL)
            {
                int semester = atoi(period);
                current_semester = semester + 1;
                printf("Current semester: %d\n", current_semester);
            }

           if (current_semester == 2) // Second semester
            {
                com = strcmp(Get_Status_of(studentID, "BA101-Calculus-1"), "Passed");
                printf("%d\n", com);
                if (com == 1)
                    printf("1-BA102-Calculus-2\n");
                
                com = strcmp(Get_Status_of(studentID, "CS111-Introduction-to-Computers"), "Passed");
                if (com == 1)
                    printf("2-CS143-Introduction to problem solving and programming\n");
                
                com = strcmp(Get_Status_of(studentID, "BA113-Physics"), "Passed");
                if (com == 1)
                    printf("3-EC134-Fundamentals of Electronics\n");
                
                com = strcmp(Get_Status_of(studentID,"LH135-English-for-Specific-Purposes-I(ESP-I)"), "Passed");
                if (com == 1)
                    printf("4-LH136-English for Specific Purposes II(ESP II)\n5-NC133-Communication Skills\n");
            }
            else if (current_semester == 3) // Third semester
            {
             com = strcmp(Get_Status_of(studentID, "BA102-Calculus-2"), "Passed");
             if (com == 1)
             printf("1-BA102-Calculus-3\n2-BA203-Probability-and-Statistics\n");

             com = strcmp(Get_Status_of(studentID, "BA113-Physics"), "Passed");
             if (com == 1)
            printf("3-BA216-Advanced-Physics\n");

             com = strcmp(Get_Status_of(studentID, "CS111-Introduction-to-Computers"), "Passed");
            if (com == 1)
            printf("4-CE216-Digital-Logic-Design\n5-CS202-Discrete-Structures\n");

            com = strcmp(Get_Status_of(studentID, "CS143-Introduction-to-Problem-Solving-and-Programming"), "Passed");
            if (com == 1)
            printf("6-CS243-Object-Oriented-Programming\n");
            }
            else if (current_semester == 4) // Fourth semester
            {
             com = strcmp(Get_Status_of(studentID, "CS143-Introduction-to-Problem-Solving-and-Programming"), "Passed");
            if (com == 1)
            printf("1-Introduction-to-Networks\n2-Database-Systems\n");

            com = strcmp(Get_Status_of(studentID, "CE216-Digital-Logic-Design"), "Passed");
            if (com == 1)
            printf("3-CE243-Intro.-to-Computer-Architecture\n");

            com = strcmp(Get_Status_of(studentID, "CS243-Object-Oriented-Programming"), "Passed");
            if (com == 1)
            printf("4-CS212-Data-Structures-and-Algorithms\n5-CS24-Advanced-Programming-Applications\n");

            com = strcmp(Get_Status_of(studentID, "CS243-Object-Oriented-Programming"), "Passed");
            int com2 = strcmp(Get_Status_of(studentID, "IS171-Introduction-to-Information-systems"), "Passed");
            if (com == 1 && com2 == 1)
            printf("6-SE291-Introduction-to-Software-Engineering\n");

            printf("7-IT291-Professional-Training-in-Entrepreneurship\n");
             }
            else if (current_semester == 5) // fifth semester
            {
             com = strcmp(Get_Status_of(studentID, "BA203-Probability-and-Statistics"), "Passed");
            if (com == 1)
             printf("1-BA301-Advanced-Statistics\n");

            com = strcmp(Get_Status_of(studentID, "BA102-Calculus-2"), "Passed");
            if (com == 1)
            printf("2-BA304-Linear-Algebra\n");

            com = strcmp(Get_Status_of(studentID, "CS202-Discrete-Structures"), "Passed");
            if (com == 1)
            printf("3-CS311-Theory-of-Computation\n");

            com = strcmp(Get_Status_of(studentID, "CS243-Object-Oriented-Programming"), "Passed");
            int com2 = strcmp(Get_Status_of(studentID, "CE243-Intro.-to-Computer-Architecture"), "Passed");
            if (com == 1 && com2 == 1)
            printf("4-CS321-Systems-Programming\n");

            com = strcmp(Get_Status_of(studentID, "IS273-Database-Systems"), "Passed");
            if (com == 1)
            printf("5-CS333-Web-Programming\n");

            com = strcmp(Get_Status_of(studentID, "CS212-Data-Structures-and-Algorithms"), "Passed");
            if (com == 1)
            printf("6-CS352-Computer-Graphics\n");

            printf("7-IT321-Professional-Training-in-Programming-I-(.Net-1)\n");
            }
            else if (current_semester == 6) //sixth semester
            {
                 com = strcmp(Get_Status_of(studentID, "BA304-Linear-Algebra"), "Passed");
            int com2 = strcmp(Get_Status_of(studentID, "CS143-Introduction-to-Problem-Solving-and-Programming"), "Passed");
            if (com == 1 && com2 == 1)
                printf("1-CS301-Numerical-Methods\n");

            com = strcmp(Get_Status_of(studentID, "BA203-Probability-and-Statistics"), "Passed");
             com2 = strcmp(Get_Status_of(studentID, "CS243-Object-Oriented-Programming"), "Passed");
            if (com == 1 && com2 == 1)
            printf("2-CS305-System-Modeling-and-Simulation\n");

            com = strcmp(Get_Status_of(studentID, "CS212-Data-Structures-and-Algorithms"), "Passed");
            if (com == 1)
            printf("3-CS312-Computing-Algorithms\n");

            com = strcmp(Get_Status_of(studentID, "CS212-Data-Structures-and-Algorithms"), "Passed");
            com2 = strcmp(Get_Status_of(studentID, "CS243-Object-Oriented-Programming"), "Passed");
            if (com == 1 && com2 == 1)
             printf("4-CS322-Operating-Systems\n");

            com = strcmp(Get_Status_of(studentID, "CS212-Data-Structures-and-Algorithms"), "Passed");
            com2 = strcmp(Get_Status_of(studentID, "CS202-Discrete-Structures"), "Passed");
            if (com == 1 && com2 == 1)
            printf("5-CS366-Introduction-to-Artificial-Intelligence\n");
            }

             fclose(fptr);
                break;
            }


        
        







else{
            printf("You are allowed to register 4 Courses Maximum\n");
            char *period = Get_Period(studentID);
            if (period != NULL)
            {
                int semester = atoi(period);
                current_semester = semester + 1;
                printf("Current semester: %d\n", current_semester);
            }
                       if (current_semester == 2) // Second semester
            {
                com = strcmp(Get_Status_of(studentID, "BA101-Calculus-1"), "Passed");
                printf("%d\n", com);
                if (com == 1)
                    printf("1-BA102-Calculus-2\n");
                
                com = strcmp(Get_Status_of(studentID, "CS111-Introduction-to-Computers"), "Passed");
                if (com == 1)
                    printf("2-CS143-Introduction to problem solving and programming\n");
                
                com = strcmp(Get_Status_of(studentID, "BA113-Physics"), "Passed");
                if (com == 1)
                    printf("3-EC134-Fundamentals of Electronics\n");
                
                com = strcmp(Get_Status_of(studentID,"LH135-English-for-Specific-Purposes-I(ESP-I)"), "Passed");
                if (com == 1)
                    printf("4-LH136-English for Specific Purposes II(ESP II)\n5-NC133-Communication Skills\n");
            }
            else if (current_semester == 3) // Third semester
            {
             com = strcmp(Get_Status_of(studentID, "BA102-Calculus-2"), "Passed");
             if (com == 1)
             printf("1-BA102-Calculus-3\n2-BA203-Probability-and-Statistics\n");

             com = strcmp(Get_Status_of(studentID, "BA113-Physics"), "Passed");
             if (com == 1)
            printf("3-BA216-Advanced-Physics\n");

             com = strcmp(Get_Status_of(studentID, "CS111-Introduction-to-Computers"), "Passed");
            if (com == 1)
            printf("4-CE216-Digital-Logic-Design\n5-CS202-Discrete-Structures\n");

            com = strcmp(Get_Status_of(studentID, "CS143-Introduction-to-Problem-Solving-and-Programming"), "Passed");
            if (com == 1)
            printf("6-CS243-Object-Oriented-Programming\n");
            }
            else if (current_semester == 4) // Fourth semester
            {
             com = strcmp(Get_Status_of(studentID, "CS143-Introduction-to-Problem-Solving-and-Programming"), "Passed");
            if (com == 1)
            printf("1-Introduction-to-Networks\n2-Database-Systems\n");

            com = strcmp(Get_Status_of(studentID, "CE216-Digital-Logic-Design"), "Passed");
            if (com == 1)
            printf("3-CE243-Intro.-to-Computer-Architecture\n");

            com = strcmp(Get_Status_of(studentID, "CS243-Object-Oriented-Programming"), "Passed");
            if (com == 1)
            printf("4-CS212-Data-Structures-and-Algorithms\n5-CS24-Advanced-Programming-Applications\n");

            com = strcmp(Get_Status_of(studentID, "CS243-Object-Oriented-Programming"), "Passed");
            int com2 = strcmp(Get_Status_of(studentID, "IS171-Introduction-to-Information-systems"), "Passed");
            if (com == 1 && com2 == 1)
            printf("6-SE291-Introduction-to-Software-Engineering\n");

            printf("7-IT291-Professional-Training-in-Entrepreneurship\n");
             }
            else if (current_semester == 5) // fifth semester
            {
             com = strcmp(Get_Status_of(studentID, "BA203-Probability-and-Statistics"), "Passed");
            if (com == 1)
             printf("1-BA301-Advanced-Statistics\n");

            com = strcmp(Get_Status_of(studentID, "BA102-Calculus-2"), "Passed");
            if (com == 1)
            printf("2-BA304-Linear-Algebra\n");

            com = strcmp(Get_Status_of(studentID, "CS202-Discrete-Structures"), "Passed");
            if (com == 1)
            printf("3-CS311-Theory-of-Computation\n");

            com = strcmp(Get_Status_of(studentID, "CS243-Object-Oriented-Programming"), "Passed");
            int com2 = strcmp(Get_Status_of(studentID, "CE243-Intro.-to-Computer-Architecture"), "Passed");
            if (com == 1 && com2 == 1)
            printf("4-CS321-Systems-Programming\n");

            com = strcmp(Get_Status_of(studentID, "IS273-Database-Systems"), "Passed");
            if (com == 1)
            printf("5-CS333-Web-Programming\n");

            com = strcmp(Get_Status_of(studentID, "CS212-Data-Structures-and-Algorithms"), "Passed");
            if (com == 1)
            printf("6-CS352-Computer-Graphics\n");

            printf("7-IT321-Professional-Training-in-Programming-I-(.Net-1)\n");
            }
            else if (current_semester == 6) //sixth semester
            {
                 com = strcmp(Get_Status_of(studentID, "BA304-Linear-Algebra"), "Passed");
            int com2 = strcmp(Get_Status_of(studentID, "CS143-Introduction-to-Problem-Solving-and-Programming"), "Passed");
            if (com == 1 && com2 == 1)
                printf("1-CS301-Numerical-Methods\n");

            com = strcmp(Get_Status_of(studentID, "BA203-Probability-and-Statistics"), "Passed");
             com2 = strcmp(Get_Status_of(studentID, "CS243-Object-Oriented-Programming"), "Passed");
            if (com == 1 && com2 == 1)
            printf("2-CS305-System-Modeling-and-Simulation\n");

            com = strcmp(Get_Status_of(studentID, "CS212-Data-Structures-and-Algorithms"), "Passed");
            if (com == 1)
            printf("3-CS312-Computing-Algorithms\n");

            com = strcmp(Get_Status_of(studentID, "CS212-Data-Structures-and-Algorithms"), "Passed");
            com2 = strcmp(Get_Status_of(studentID, "CS243-Object-Oriented-Programming"), "Passed");
            if (com == 1 && com2 == 1)
             printf("4-CS322-Operating-Systems\n");

            com = strcmp(Get_Status_of(studentID, "CS212-Data-Structures-and-Algorithms"), "Passed");
            com2 = strcmp(Get_Status_of(studentID, "CS202-Discrete-Structures"), "Passed");
            if (com == 1 && com2 == 1)
            printf("5-CS366-Introduction-to-Artificial-Intelligence\n");
            }

             fclose(fptr);
                break;
            }

}
// switch (Current_semester) {char *period = Get_Period(studentID);
// int Current_semester;
    
    
    
    // printf("Enter Your Regestiration Number: ");
    // scanf("%d", &studentID);
    // printf("Enter Your PIN: ");
    // scanf("%d", &PIN);
    // printf("Retrieved student information: %s\n", Get_GPA(studentID));
    // printf("Enter Your Regestiration Number: ");
    // scanf("%d", &studentID);
    // printf("Enter Your PIN: ");
    // scanf("%d", &PIN);
    // printf("Enter Your Regestiration Number: ");
    // scanf("%d", &studentID);
    // printf("Enter Your PIN: ");
    // scanf("%d", &PIN);
    // printf("Retrieved student information: %s\n", Get_GPA(studentID));
    // printf("Enter Your Regestiration Number: ");
    // scanf("%d", &studentID);
    // printf("Enter Your PIN: ");
    // scanf("%d", &PIN);
    // printf("%s", Get_PIN(studentID));
    // printf("%s",Get_Status_of(studentID,"BA102-Calculus-2"));

    // int pinD = atoi(Get_PIN(studentID));// atoi turns the retrieved pin(pointer) into pin(integer) to be able to do a comparison inside if condition.
    // char *info = Student_info(studentID);
    // printf("Retrieved student information: %s\n", info);
    // if (PIN==pinD)
    // {
    //     printf("VALID\n");
    //     printf("Retrieved student information: %s\n", info);
    //     /* code */
    // }

// if (period != NULL) {
//     int semester = atoi(period);
//     Current_semester = semester + 1;
//     printf("Current semester: %d\n", Current_semester);
// } 
//     case 3:
// printf("%s\n",Get_Status_of(studentID,"BA101-Calculus-1"));
//     int com = strcmp(Get_Status_of(studentID,"BA101-Calculus-1"), "Passed");
//         printf("%d\n",com);
//         if (com == 1){
//             printf("1-BA102-Calculus-3\n2-BA203-Probability and Statistics\n");}
//         if (strcmp(Get_Status_of(studentID,"BA113-Physics"), "Passed") == 0)
//             printf("3-BA216-Advanced Physics\n");
//         if (strcmp(Get_Status_of(studentID,"CS111-Introduction-to-Computers"), "Passed") == 0)
//             printf("4-CE216-Digital Logic Design\n5-CS202-Discrete Structures\n");
//         if (strcmp(Get_Status_of(studentID,"CS143-Introduction to problem solving and programming"), "Passed") == 0)
//             printf("6-CS243-Object Oriented Programming\n");
        // break;
    



    

 
    }
    return 0;
}


//choiceose from these:  
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
// "IT412-Professional-Training-in-Software-Testing-3"}



//    int Current_semester = atoi(Get_Period(studentID)) + 1;
//     switch (Current_semester)
//     {
    // case 2:
    //     if (Get_Status_of(studentID, "BA101-Calculus-1") == "Passed")
    //         printf("1-BA102-Calculus-2\n)");
    //     if (Get_Status_of(studentID, "CS111-Introduction-to-Computers") == "Passed")
    //         printf("2-CS143-Introduction to problem solving and programming\n");
    //     if (Get_Status_of(studentID, "BA113-Physics") == "Passed")
    //         printf("3-EC134-Fundamentals of Electronics\n");
    //     if (Get_Status_of(studentID, "LH135-English for Specific Purposes I (ESP I)") == "Passed")
    //         printf("4-LH136-English for Specific Purposes II(ESP II)\n5-NC133-Communication Skills\n");
    //     break;
//     case 3:
// if (strcmp(Get_Status_of(studentID, "BA101-Calculus-1"), "Passed") == 0)
//             printf("1-BA102-Calculus-3\n2-BA203-Probability and Statistics");
//         if (strcmp(Get_Status_of(studentID, "BA113-Physics"), "Passed") == 0)
//             printf("3-BA216-Advanced Physics\n");
//         if (strcmp(Get_Status_of(studentID, "CS111-Introduction-to-Computers"),"Passed")== 0)
//             printf("4-CE216-Digital Logic Design\n5-CS202-Discrete Structures\n");
//         if (strcmp(Get_Status_of(studentID, "CS143-Introduction to problem solving and programming"),"Passed") == 0)
//             printf("6-CS243-Object Oriented Programming\n");
//         break;
    // case 4:
    //     if (Get_Status_of(studentID, "CS143-Introduction to problem solving and programming") == "Passed")
    //         printf("1-Introduction to Networks\n2-Database Systems\n");
    //     if (Get_Status_of(studentID, "CE216-Digital Logic Design")== "Passed")
    //         printf("3-CE243-Intro. to Computer Architecture\n");
    //     if (Get_Status_of(studentID, "CS243-Object Oriented Programming") == "Passed")
    //         printf("4-CS212-Data Structures and Algorithms\n5-CS24-Advanced Programming Applications\n");
    //     if (Get_Status_of(studentID, "CS243-Object Oriented Programming") == "Passed" && Get_Status_of(studentID, "IS171-Introduction to Information systems") == "Passed")
    //         printf("6-SE291-Introduction to Software Engineering\n");
    //     printf("7-IT291-Professional Training in Entrepreneurship\n");
    //     break;
    // case 5:
    //     if (Get_Status_of(studentID, "BA203-Probability and Statistics") == "Passed")
    //         printf("1-BA301-Advanced Statistics\n");
    //     if (Get_Status_of(studentID, "BA102-Calculus 2") == "Passed")
    //         printf("2-BA304-Linear Algebra\n");
    //     if (Get_Status_of(studentID, "CS202-Discrete Structures") == "Passed")
    //         printf("3-CS311-Theory of Computation\n");
    //     if (Get_Status_of(studentID, "CS243-Object Oriented Programming") == "Passed" && Get_Status_of(studentID, "CE243-Intro. to Computer Architecture") == "Passed")
    //         printf("4-CS321-Systems Programming\n");
    //     if (Get_Status_of(studentID, "IS273-Database Systems") == "Passed")
    //         printf("5-CS333-Web Programming\n");
    //     if (Get_Status_of(studentID, "CS212-Data Structures and Algorithms") == "Passed")
    //         printf("6-CS352-Computer Graphics\n");
    //     printf("7-IT321	Professional Training in Programming I (.Net 1)\n");
    //     break;
    // case 6:
    //     if (Get_Status_of(studentID, "BA304-Linear Algebra") == "Passed" && Get_Status_of(studentID, "CS143-Introduction to Problem Solving and Programming") == "Passed")
    //         printf("1-CS301-Numerical Methods\n");
    //     if (Get_Status_of(studentID, "BA203-Probability and Statistics") == "Passed" && Get_Status_of(studentID, "CS243-Object Oriented Programming") == "Passed")
    //         printf("2-CS305-System Modeling and Simulation\n");
    //     if (Get_Status_of(studentID, "CS212-Data Structures and Algorithms") == "Passed")
    //         printf("3-CS312-Computing Algorithms\n");
    //     if (Get_Status_of(studentID, "CS212-Data Structures and Algorithms") == "Passed" && Get_Status_of(studentID, "CS243-Object Oriented Programming") == "Passed")
    //         printf("4-CS322-Operating Systems\n");
    //     if (Get_Status_of(studentID, "CS212-Data Structures and Algorithms") == "Passed" && Get_Status_of(studentID, "CS202-Discrete Structures") == "Passed")
    //         printf("5-CS366-Introduction to Artificial Intelligence\n");
    //     break;
    // case 7:
    // break;
    // case 8:
    // break;
    //     }
    // }