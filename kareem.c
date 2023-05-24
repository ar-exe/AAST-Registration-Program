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
char *Student_info(int id)
{
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
            int *Period = strtok(NULL, d);
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
char *Get_Status_of(int id, char *course)
{
    // Construct the file path using the course name
    char filePath[255];
    snprintf(filePath, sizeof(filePath), "G:\\PS Project\\AAST-Registration-Program-1\\CS Courses\\%s.txt", course);

    FILE *fpointer = fopen(filePath, "r");
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
            char *Result = strtok(NULL, d);
            char *Status = strtok(NULL, d);
            fclose(fpointer);
            return Status;
        }
    }

    fclose(fpointer);
    return NULL; // Student not found
}
// void *Modify_GPA(int id, float new_gpa){
//     FILE *fpointer = fopen("Students.txt", "r");
//     FILE *fpointer2 = fopen("Students2.txt", "w");
//     if (fpointer == NULL)
//     {
//         printf("Error opening file.\n");
//         return NULL; // Return NULL to indicate an error
//     }

//     char line[255];
//     char d[] = ",";
//     while (fgets(line, 255, fpointer))
//     {
//         char *ID = strtok(line, d);
//         int pID = atoi(ID);
//         if (id == pID)
//         {
//             fprintf(fpointer2, "%d,%s,%s,%s,%s,%s,%s,%s\n", id, Get_Name(id), Get_College(id), Get_Period(id), Get_Department(id), Get_Credits(id), new_gpa, Get_FF(id));
//         }
//         else
//         {
//             fprintf(fpointer2, "%s", line);
//         }
//     }

//     fclose(fpointer);
//     fclose(fpointer2);
//     remove("Students.txt");
//     rename("Students2.txt", "Students.txt");
// }
// void Modify_GPA(int id, float new_gpa){

//     FILE *fpointer = fopen("Students.txt", "w");
//     if (fpointer == NULL)
//     {
//         printf("Error opening file.\n");
//         return NULL; // Return NULL to indicate an error
//     }

//     char line[255];
//     char d[] = ",";

//     while (fgets(line, 255, fpointer))
//     {
//         char *ID = strtok(line, d);
//         int pID = atoi(ID);
//         if (id == pID)
//         {
//             char *Name = strtok(NULL, d);
//             char *College = strtok(NULL, d);
//             char *Period = strtok(NULL, d);
//             char *Department = strtok(NULL, d);
//             char *Credits = strtok(NULL, d);
//             char *GPA = strtok(NULL, d);
//             gpa = new_gpa;
//             fclose(fpointer);
//             return GPA;
//         }
//     }

//     fclose(fpointer);
//     return NULL; // Student not found
// }
int main()
{
    int PASS, Student_ID, k = 0, cho, c, x;
    int current_semester;
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
        l:s("%d", &Student_ID);
        o("Enter your pin: \n");
        m:s("%d", &PASS);
        FILE *fptr;
        fptr = fopen("Students.txt", "r");
        if (Get_PIN(Student_ID) == NULL)
        {
            o("Registration Number and Pin Code dose not matched.\nPlease type them correctly.\nPlease try to enter pin again");
            goto m;
        }
        printf("Registration Number: %d\nName: %s\nSponser: personal\n", Student_ID, Get_Name(Student_ID));
        // study not completed
        printf("College: %s\nDepartment: %s\nstudy: \n", Get_College(Student_ID), Get_Department(Student_ID));
        printf("Period: %s\nTotal Avivement: %s\nGPA: %s\nFF: %s\n", Get_Period(Student_ID), Get_Credits(Student_ID), Get_GPA(Student_ID), Get_FF(Student_ID));
        printf("1-Online Registration\n2-Print Transcript\n3-Exit\n");
        n: s("%d", &cho);
        switch (cho)
        {
            case 1:
            // int current_semester;
            // char *period = Get_Period(studentID);
            // if (period != NULL)
            // {
            //     int semester = atoi(period);
            //     current_semester = semester + 1;
            //     printf("Current semester: %d\n", current_semester);
            // }
            // current_semester = Get_Period(Student_ID)+1;
            printf("%s",current_semester);
            // if (current_semester==2)
            // {
            //     if (strcmp(Get_Status_of(Student_ID, "BA101-Calculus-1"), "Passed"))
            //         printf("1-BA102-Calculus-2\n)");
            //     if (strcmp(Get_Status_of(Student_ID, "CS111-Introduction-to-Computers"), "Passed"))
            //         printf("2-CS143-Introduction to problem solving and programming\n");
            //     if (strcmp(Get_Status_of(Student_ID, "BA113-Physics"), "Passed"))
            //         printf("3-EC134-Fundamentals of Electronics\n");
            //     if (strcmp(Get_Status_of(Student_ID, "LH135-English for Specific Purposes I (ESP I)"), "Passed"))
            //         printf("4-LH136-English for Specific Purposes II(ESP II)\n5-NC133-Communication Skills\n");
            // }
        }
        //     else if (current_semester == 3)
        //     {
        //         if (strcmp(Get_Status_of(Student_ID, "BA101-Calculus-2"), "Passed"))
        //             printf("1-BA102-Calculus-3\n2-BA203-Probability and Statistics");
        //         if (strcmp(Get_Status_of(Student_ID, "BA113-Physics"), "Passed"))
        //             printf("3-BA216-Advanced Physics\n");
        //         if (strcmp(Get_Status_of(Student_ID, "CS111-Introduction-to-Computers"), "Passed"))
        //             printf("4-CE216-Digital Logic Design\n5-CS202-Discrete Structures\n");
        //         if (strcmp(Get_Status_of(Student_ID, "CS143-Introduction to problem solving and programming"), "Passed"))
        //             printf("6-CS243-Object Oriented Programming\n");
        //     }
        //     else if (current_semester == 4)
        //     {
        //         if (strcmp(Get_Status_of(Student_ID, "CS143-Introduction to problem solving and programming"), "Passed"))
        //             printf("1-Introduction to Networks\n2-Database Systems\n");
        //         if (strcmp(Get_Status_of(Student_ID, "CE216-Digital Logic Design"), "Passed"))
        //             printf("3-CE243-Intro. to Computer Architecture\n");
        //         if (strcmp(Get_Status_of(Student_ID, "CS243-Object Oriented Programming"), "Passed"))
        //             printf("4-CS212-Data Structures and Algorithms\n5-CS24-Advanced Programming Applications\n");
        //         if (strcmp(Get_Status_of(Student_ID, "CS243-Object Oriented Programming"), "Passed") && strcmp(Get_Status_of(Student_ID, "IS171-Introduction to Information systems"), "Passed"))
        //             printf("6-SE291-Introduction to Software Engineering\n");
        //         printf("7-IT291-Professional Training in Entrepreneurship\n");
        //     }
        //     else if (current_semester == 5)
        //     {
        //         if (strcmp(Get_Status_of(Student_ID, "BA203-Probability and Statistics"), "Passed"))
        //             printf("1-BA301-Advanced Statistics\n");
        //         if (strcmp(Get_Status_of(Student_ID, "BA102-Calculus 2"), "Passed"))
        //             printf("2-BA304-Linear Algebra\n");
        //         if (strcmp(Get_Status_of(Student_ID, "CS202-Discrete Structures"), "Passed"))
        //             printf("3-CS311-Theory of Computation\n");
        //         if (strcmp(Get_Status_of(Student_ID, "CS243-Object Oriented Programming"), "Passed") && strcmp(Get_Status_of(Student_ID, "CE243-Intro. to Computer Architecture"), "Passed"))
        //             printf("4-CS321-Systems Programming\n");
        //         if (strcmp(Get_Status_of(Student_ID, "IS273-Database Systems"), "Passed"))
        //             printf("5-CS333-Web Programming\n");
        //         if (strcmp(Get_Status_of(Student_ID, "CS212-Data Structures and Algorithms"), "Passed"))
        //             printf("6-CS352-Computer Graphics\n");
        //         printf("7-IT321	Professional Training in Programming I (.Net 1)\n");
        //     }
        //     else if (current_semester == 6)
        //     {
        //         if (strcmp(Get_Status_of(Student_ID, "BA304-Linear Algebra"), "Passed") && strcmp(Get_Status_of(Student_ID, "CS143-Introduction to Problem Solving and Programming"), "Passed"))
        //             printf("1-CS301-Numerical Methods\n");
        //         if (strcmp(Get_Status_of(Student_ID, "BA203-Probability and Statistics"), "Passed") && strcmp(Get_Status_of(Student_ID, "CS243-Object Oriented Programming"), "Passed"))
        //             printf("2-CS305-System Modeling and Simulation\n");
        //         if (strcmp(Get_Status_of(Student_ID, "CS212-Data Structures and Algorithms"), "Passed"))
        //             printf("3-CS312-Computing Algorithms\n");
        //         if (strcmp(Get_Status_of(Student_ID, "CS212-Data Structures and Algorithms"), "Passed") && strcmp(Get_Status_of(Student_ID, "CS243-Object Oriented Programming"), "Passed"))
        //             printf("4-CS322-Operating Systems\n");
        //         if (strcmp(Get_Status_of(Student_ID, "CS212-Data Structures and Algorithms"), "Passed") && strcmp(Get_Status_of(Student_ID, "CS202-Discrete Structures"), "Passed"))
        //             printf("5-CS366-Introduction to Artificial Intelligence\n");
        //     }
        //     fclose(fptr);
        //     }
        //     break;
        // }
}
    // float final_gpa,gpa;
    // int Student_ID, k = 0, PASSPIN,period;
    // o("Enter your Regisration Number: \nEnter you pin \nNote: Pin contain at least 6 number or sympol or character\n");
    //     l:s("%d", &Student_ID);
    //     m:s("%d", &PASS);
    //     FILE *fptr;
    //     fptr = fopen("Students.txt", "r");
    //     if ((Student_ID) == NULL)
    //     {
    //         o("This id Invalid please try again\n");
    //         goto l;
    //     }
    //     if (Get_PIN(Student_ID) == NULL)
    //     {
    //         o("Registration Number and Pin Code dose not matched.\nPlease type them correctly.\nPlease try to enter pin again");
    //         goto m;
    //     }
    //     gpa = Get_GPA(Student_ID);
    //     o("Your current GPA is: %d\n", gpa);
    //     period=Get_Period(Student_ID);
    //     switch (period){
    //         case 2:
    //         if (Get_Status_of(Student_ID, "BA101-Calculus-1") == "Passed")
    //         printf("1-BA102-Calculus-2\n)");
    //         if (Get_Status_of(Student_ID, "CS111-Introduction-to-Computers") == "Passed")
    //         printf("2-CS143-Introduction to problem solving and programming\n");
    //         if (Get_Status_of(Student_ID, "BA113-Physics") == "Passed")
    //         printf("3-EC134-Fundamentals of Electronics\n");
    //         if (Get_Status_of(Student_ID, "LH135-English for Specific Purposes I (ESP I)") == "Passed")
    //         printf("4-LH136-English for Specific Purposes II(ESP II)\n5-NC133-Communication Skills\n");
    //         break;
        //}


    // printf("Enter Your Regestiration Number: ");
    // scanf("%d", &studentID);
    // printf("Enter Your PIN: ");
    // scanf("%d", &PIN);
    // printf("Retrieved student information: %s\n", Get_GPA(studentID));
    // return 0;

        // int Student_ID, k = 0;
        // int PASS;
//     o("Enter your Regisration Number: \nEnter you pin \nNote: Pin contain at least 6 number or sympol or character\n");
//     l:s("%d", &Student_ID);
//     m:s("%d", &PASS);
//         FILE *fptr;
//         fptr = fopen("Students.txt", "r");
//         if ((Student_ID) == NULL)
//         {
//             o("This id Invalid please try again\n");
//             goto l;
//         }
//         if (Get_PIN(Student_ID) == NULL)
//         {
//             o("Registration Number and Pin Code dose not matched.\nPlease type them correctly.\nPlease try to enter pin again");
//             goto m;
//         }
//         int Current_semester = Get_Period(Student_ID);
//         if(current_semester==2){
//             if (strcmp(Get_Status_of(Student_ID, "BA101-Calculus-1"), "Passed"))
//                 printf("1-BA102-Calculus-2\n)");
//             if (strcmp(Get_Status_of(Student_ID, "CS111-Introduction-to-Computers"), "Passed"))
//                 printf("2-CS143-Introduction to problem solving and programming\n");
//             if (strcmp(Get_Status_of(Student_ID, "BA113-Physics"), "Passed"))
//                 printf("3-EC134-Fundamentals of Electronics\n");
//             if (strcmp(Get_Status_of(Student_ID, "LH135-English for Specific Purposes I (ESP I)"), "Passed"))
//                 printf("4-LH136-English for Specific Purposes II(ESP II)\n5-NC133-Communication Skills\n");}
//         else if(current_semester==3){
//             if (strcmp(Get_Status_of(Student_ID, "BA101-Calculus-2"), "Passed"))
//                 printf("1-BA102-Calculus-3\n2-BA203-Probability and Statistics");
//             if (strcmp(Get_Status_of(Student_ID, "BA113-Physics"),"Passed"))
//                 printf("3-BA216-Advanced Physics\n");
//             if (strcmp(Get_Status_of(Student_ID, "CS111-Introduction-to-Computers"), "Passed"))
//                 printf("4-CE216-Digital Logic Design\n5-CS202-Discrete Structures\n");
//             if (strcmp(Get_Status_of(Student_ID, "CS143-Introduction to problem solving and programming"), "Passed"))
//                 printf("6-CS243-Object Oriented Programming\n");
//         }else if (current_semester == 4){
//                     if (strcmp(Get_Status_of(Student_ID, "CS143-Introduction to problem solving and programming"), "Passed"))
//                         printf("1-Introduction to Networks\n2-Database Systems\n");
//                     if (strcmp(Get_Status_of(Student_ID, "CE216-Digital Logic Design"), "Passed"))
//                         printf("3-CE243-Intro. to Computer Architecture\n");
//                     if (strcmp(Get_Status_of(Student_ID, "CS243-Object Oriented Programming"),"Passed"))
//                         printf("4-CS212-Data Structures and Algorithms\n5-CS24-Advanced Programming Applications\n");
//                     if (strcmp(Get_Status_of(Student_ID, "CS243-Object Oriented Programming"),"Passed") && strcmp(Get_Status_of(Student_ID, "IS171-Introduction to Information systems"), "Passed"))
//                         printf("6-SE291-Introduction to Software Engineering\n");
//                     printf("7-IT291-Professional Training in Entrepreneurship\n");
//         }else if (current_semester == 5){
//                     if (strcmp(Get_Status_of(Student_ID, "BA203-Probability and Statistics"), "Passed"))
//                         printf("1-BA301-Advanced Statistics\n");
//                     if (strcmp(Get_Status_of(Student_ID, "BA102-Calculus 2"), "Passed"))
//                         printf("2-BA304-Linear Algebra\n");
//                     if (strcmp(Get_Status_of(Student_ID, "CS202-Discrete Structures"), "Passed"))
//                         printf("3-CS311-Theory of Computation\n");
//                     if (strcmp(Get_Status_of(Student_ID, "CS243-Object Oriented Programming"), "Passed") && strcmp(Get_Status_of(Student_ID, "CE243-Intro. to Computer Architecture"), "Passed"))
//                         printf("4-CS321-Systems Programming\n");
//                     if (strcmp(Get_Status_of(Student_ID, "IS273-Database Systems"),"Passed"))
//                         printf("5-CS333-Web Programming\n");
//                     if (strcmp(Get_Status_of(Student_ID, "CS212-Data Structures and Algorithms"),"Passed"))
//                         printf("6-CS352-Computer Graphics\n");
//                     printf("7-IT321	Professional Training in Programming I (.Net 1)\n");
//         }else if (current_semester == 6){
//                     if (strcmp(Get_Status_of(Student_ID, "BA304-Linear Algebra"), "Passed") && strcmp(Get_Status_of(Student_ID, "CS143-Introduction to Problem Solving and Programming"),"Passed"))
//                         printf("1-CS301-Numerical Methods\n");
//                     if (strcmp(Get_Status_of(Student_ID, "BA203-Probability and Statistics"), "Passed") && strcmp(Get_Status_of(Student_ID, "CS243-Object Oriented Programming"), "Passed"))
//                         printf("2-CS305-System Modeling and Simulation\n");
//                     if (strcmp(Get_Status_of(Student_ID, "CS212-Data Structures and Algorithms"),"Passed"))
//                         printf("3-CS312-Computing Algorithms\n");
//                     if (strcmp(Get_Status_of(Student_ID, "CS212-Data Structures and Algorithms"),"Passed") && strcmp(Get_Status_of(Student_ID, "CS243-Object Oriented Programming"),"Passed"))
//                         printf("4-CS322-Operating Systems\n");
//                     if (strcmp(Get_Status_of(Student_ID, "CS212-Data Structures and Algorithms"),"Passed") && strcmp(Get_Status_of(Student_ID, "CS202-Discrete Structures"),"Passed"))
//                         printf("5-CS366-Introduction to Artificial Intelligence\n");
//             }
//             fclose(fptr);
//         {
}
