#include <stdio.h>

int main() {
    // List of subjects
char subjects[60][100] = {
//semester 1
"BA003-Math-0",
"BA101-Calculus-1",
"BA113-Physics",
"CS111-Introduction-to-Computers",
"IS171-Introduction-to-Information-systems",
"LH135-English-for-Specific-Purposes-I(ESP-I)",
"NC172-Fundamentals-of-Business",
//semester 2
"BA102-Calculus-2",
"CS143-Introduction-to-Problem-Solving-and-Programming",
"EC134-Fundamentals-of-Electronics",
"LH136-English-for-Specific-Purposes-II(ESP-II)",
"NC133-Communication-Skills",
//semester 3
"BA201-Calculus-III",
"BA203-Probability-and-Statistics",
"BA216-Advanced-Physics",
"CE216-Digital-Logic-Design",
"CS202-Discrete-Structures",
"CS243-Object-Oriented-Programming",
//semester 4
"Introduction-to-Networks",
"CE243-Intro.-to-Computer-Architecture",
"CS212-Data-Structures-and-Algorithms",
"CS24-Advanced-Programming-Applications",
"IS273-Database-Systems",
"IT291-Professional-Training-in-Entrepreneurship",
"SE291-Introduction-to-Software-Engineering",
//semester 5
"BA301-Advanced-Statistics",
"BA304-Linear-Algebra",
"CS311-Theory-of-Computation",
"CS321-Systems-Programming",
"CS333-Web-Programming",
"CS352-Computer-Graphics",
"IT321-Professional-Training-in-Programming-I(.Net-1)",
//semester 6
"CS301-Numerical-Methods",
"CS305-System-Modeling-and-Simulation",
"CS312-Computing-Algorithms",
"CS322-Operating-Systems",
"CS366Introduction-to-Artificial-Intelligence",
//minor semester 6
"IS467-Big-Data-Analytics",
"IT371-Professional-Training-in-Databases-1",
//semester 7
"CS401-Project-1",
"CS445-Structure-of-Programming-Languages",
"CS481-Computers-&-Society",
//minor semester 7
"CS428-Cloud-Computing",
"CS441-Compilers",
"SE496-Software-Engineering-Process",
"IT411-Professional-Training-in-Software-Testing-2",
//semester 8
"CS402-Project-2",
"CS421-Computer-System-Security",
"CS451-Human-Computer-Interaction",
//minor semester 8
"CS432-Network-Protocols-&-Programming",
"CS460_Deep-Learning",
"SE496-Software-Engineering-Process",
"IT412-Professional-Training-in-Software-Testing-3"
    };
    // Iterate over each subject
    for (int i = 0; i < 50; i++) {
        // Create a file for the subject
        char filename[100];
        sprintf(filename, "%s.txt", subjects[i]);

        // Open the file in write mode
        FILE* file = fopen(filename, "w");
        if (file == NULL) {
            printf("Error opening file: %s\n", filename);
            return 1;
        }

        // Write student information to ");
        fprintf(file, "191443285,Mohammed Ali Khalaf,81,Passed\n");
        fprintf(file, "201598913,Abdulrahman Youssef Hamid,95,Passed\n");
        fprintf(file, "211780019,Fatima Mahmoud Abdeljawad, 47, Failed\n");
        fprintf(file, "221302874,Khalid Ahmed Hussein, 71, Passed\n");
        fprintf(file, "231149542,Hussein Abdulrahman Mohammed, 35, Failed\n");
        fprintf(file, "201362894,Reema Saleh Salem, 90, Passed\n");
        fprintf(file, "221471108,Abdullah Ali Mohammed, 83, Passed\n");
        fprintf(file, "192672421,Norhan Mohammed Khalil, 66, Passed\n");
        fprintf(file, "221843790,Sara Mahmoud Saleh, 77, Passed\n");
        fprintf(file, "201962209,Yasser Mahmoud Ali, 43, Failed\n");
        fprintf(file, "232052506,Mohammed Mustafa Sadik, 92, Passed\n");
        fprintf(file, "222321042,Fatima Ahmed Ali, 27, Failed\n");
        fprintf(file, "201951639,Salman Mohammed Hussein, 79, Passed\n");
        fprintf(file, "201800484,Leila Ali Abdeljawad, 68, Passed\n");
        fprintf(file, "202193630,Omar Ali Al-Jabri, 19, Failed\n");
        /* ... add more student information for the subject ... */

        // Close the file
        fclose(file);
    }

    return 0;
}