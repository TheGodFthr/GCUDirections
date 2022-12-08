// Libraries 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

// leave function
int leave();

// GCU Buildings
void RoadRunner28();
void Humanities16();
void PrescottHall36();
void StudentAdvisingCenter18();
void StudentLife26();
void NaturalSciences6();
void Engineering1();
void Arena38();
void Technology57();
void StudentUnion29();

int main()
{
    // Main Menu where the user is redirected to a certain building based on their choice
    char line[80];
    int answer;
    printf("\nWelcome to \e[1;35mGCU\e[0m!\n---------------\n\nWhere are you on campus right now?\n\n1. RoadRunner-28\n2. Prescott Hall-36\n3. Humanities-16\n4. Student Advising Center-18\n5. Student Life Building-26\n6. Natural Sciences-6\n7. Engineering-1\n8. Arena-38\n9. Technology-57\n10. Student Union-29\n\n0. Exit Program\n\nInput Number: ");
    while (fgets(line, 80, stdin) != NULL)
    {
        if (sscanf(line, "%d", &answer) != 1 || (answer != 0 && answer != 1 && answer != 2 && answer != 3 && answer != 4 && answer != 5 && answer != 6 && answer != 7 && answer != 8 && answer != 9 && answer != 10))
        {
            // Error Handling
            printf("\nInvalid selection. Please selection an action to take.\n");
            printf("\n1. RoadRunner-28\n2. Prescott Hall-36\n3. Humanities-16\n4. Student Advising Center-18\n5. Student Life Building-26\n6. Natural Sciences-6\n7. Engineering-1\n8. Arena-8\n9. Technology-57\n10. Student Union-29\n\n0. Exit Program\n\nInput Number: ");
        }
        else if (answer == 1) // add string option
        {
            RoadRunner28();
        }
        else if (answer == 2)
        {
            PrescottHall36();
        }
        else if (answer == 3)
        {
            Humanities16();
        }
        else if (answer == 4)
        {
            StudentAdvisingCenter18();
        }
        else if (answer == 5)
        {
            StudentLife26();
        }
        else if (answer == 6)
        {
            NaturalSciences6();
        }
        else if (answer == 7)
        {
            Engineering1();
        }
        else if (answer == 8)
        {
            Arena38();
        }
        else if (answer == 9)
        {
            Technology57();
        }
        else if (answer == 10)
        {
            StudentUnion29();
        }
        else if (answer == 0)
        {
            leave();
        }
    }
}

int leave()
{
    // Exit Function for the user 
    system("clear");
    printf("\nThanks for stopping by!\n-Kylan Aguirre\n\n");
    exit(0);
}

void RoadRunner28()
{
    // RoadRunner Apartment Directions 
    char line[80];
    int answer;
    system("clear");
    printf("\nYou are at the \e[1;35mRoadRunner Apartments\e[0m\n");
    printf("\nWhere do you like to go?\n\n1. Prescott Hall-36\n2. Humanities-16\n3. Student Advising Center-18\n4. Student Life Building-26\n5. Natural Sciences-6\n6. Engineering-1\n7. Arena-38\n8. Technology-57\n9. Student Union-29\n\n0. Exit Program\n\nInput Number: ");
    while (fgets(line, 80, stdin) != NULL)
    {
        if (sscanf(line, "%d", &answer) != 1 || (answer != 0 && answer != 1 && answer != 2 && answer != 3 && answer != 4 && answer != 5 && answer != 6 && answer != 7 && answer != 8 && answer != 9))
        {
            // Error Handling
            printf("\nInvalid selection. Please selection an action to take.\n");
            printf("\n1. Prescott Hall-36\n2. Humanities-16\n3. Student Advising Center-18\n4. Student Life Building-26\n5. Natural Sciences-6\n6. Engineering-1\n7. Arena-38\n8. Technology-57\n9. Student Union-29\n\n0. Exit Program\n\nInput Number: ");
        }
        else if (answer == 1)
        {
            // RoadRunner Apartments -> Prescott Hall
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn left and walk 75 steps\nPrescott Hall will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            // Second Prompt asking user if they would like to go somewhere else from the new location or leave program
            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2) 
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    PrescottHall36();
                }
            }
        }
        else if (answer == 2)
        {
            // RoadRunner Apartments -> Humanities Building 
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 25 steps\n2. Turn right again and walk 100 steps\nThe Humanities Building will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    Humanities16();
                }
            }
        }
        else if (answer == 3)
        {
            // RoadRunner Apartments -> Student Advising Center
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 25 steps\n2. Turn right again and walk 100 steps\n3. Turn right again and walk 60 steps\nThe Student Advising Center will be on your left\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    StudentAdvisingCenter18();
                }
            }
        }
        else if (answer == 4)
        {
            // RoadRunner Apartments -> Student Life Building
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn left and walk 100 steps\n2. Turn left again onto Lopes Way and walk 100 steps\n3. Turn left again and walk 10 steps\nThe Student Life Building will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    StudentLife26();
                }
            }
        }
        else if (answer == 5)
        {
            // RoadRunner Apartments -> Natural Sciences Building
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 25 steps\n2. Turn right again and walk 100 steps\n3. Turn left and walk 25 steps\nThe Natural Sciences Building will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    NaturalSciences6();
                }
            }
        }
        else if (answer == 6)
        {
            // RoadRunner Apartments -> Engineering Building
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 25 steps\n2. Turn right again and walk 100 steps\n3. Turn left and walk 75 steps\nThe Engineering Building will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    Engineering1();
                }
            }
        }
        else if (answer == 7)
        {
            // RoadRunner Apartments -> Arena
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 125 steps\nThe Arena will be in front of you\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    Arena38();
                }
            }
        }
        else if (answer == 8)
        {
            // RoadRunner Apartments -> Technology Building
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 25 step\n2. Turn left and walk 150 steps\n3. Turn right and walk 100 steps\nThe Technology Building will be in front of you\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    Technology57();
                }
            }
        }
        else if (answer == 9)
        {
            // RoadRunner Apartments -> Student Union
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn left and walk 100 steps\n2. Turn left again onto Lopes Way and walk 100 steps\nThe Student Union will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    StudentUnion29();
                }
            }
        }
        else if (answer == 0)
        {
            leave();
        }
     }
}

void PrescottHall36()
{
    // Prescott Hall Directions 
    char line[80];
    int answer;
    system("clear");
    printf("\nYou are at the \e[1;35mPrescott Hall Dorms\e[0m\n");
    printf("\nWhere do you like to go?\n\n1. RoadRunner-28\n2. Humanities-16\n3. Student Advising Center-18\n4. Student Life Building-26\n5. Natural Sciences-6\n6. Engineering-1\n7. Arena-38\n8. Technology-57\n9. Student Union-29\n\n0. Exit Program\n\nInput Number: ");
    while (fgets(line, 80, stdin) != NULL)
    {
        if (sscanf(line, "%d", &answer) != 1 || (answer != 0 && answer != 1 && answer != 2 && answer != 3 && answer != 4 && answer != 5 && answer != 6 && answer != 7 && answer != 8 && answer != 9))
        {
            // Error Handling
            printf("\nInvalid selection. Please selection an action to take.\n");
            printf("\n1. RoadRunner-28\n2. Humanities-16\n3. Student Advising Center-18\n4. Student Life Building-26\n5. Natural Sciences-6\n6. Engineering-1\n7. Arena-38\n8. Technology-57\n9. Student Union-29\n\n0. Exit Program\n\nInput Number: ");
        }
        else if (answer == 1) 
        {
            // Prescott Hall -> RoadRunner Apartments 
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 75 steps\nRoadRunner Apartments will be on your left\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    RoadRunner28();
                }
            }
        }
        else if (answer == 2)
        {
            // Prescott Hall -> Humanities Building 
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 100 steps\n2. Turn right again and walk 100 steps\nThe Humanities Building will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    Humanities16();
                }
            }
        }
        else if (answer == 3)
        {
            // Prescott Hall -> Student Advising Center
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn left and walk 25 steps\n2. Turn left again onto Lopes Way and walk 100 steps\n3. Turn left again and walk 60 steps\nThe Student Advising Center will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    StudentAdvisingCenter18();
                }
            }
        }
        else if (answer == 4)
        {
            // Prescott Hall -> Student Life Building
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn left and walk 25 steps\n2. Turn left again onto Lopes Way and walk 100 steps\n3. Turn left again and walk 10 steps\nThe Student Life Building will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    StudentLife26();
                }
            }
        }
        else if (answer == 5)
        {
            // Prescott Hall -> Natural Sciences Building
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 100 steps\n2. Turn right again and walk 100 steps\n3. Turn left and walk 25 steps\nThe Natural Sciences Building will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    NaturalSciences6();
                }
            }
        }
        else if (answer == 6)
        {
            // Prescott Hall -> Engineering Building 
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 100 steps\n2. Turn right again and walk 100 steps\n3. Turn left and walk 75 steps\nThe Engineering Building will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    Engineering1();
                }
            }
        }
        else if (answer == 7)
        {
            // Prescott Hall -> Arena
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 200 steps\nThe Arena will be in front of you\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    Arena38();
                }
            }
        }
        else if (answer == 8)
        {
            // Prescott Hall -> Technology Building
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 100 step\n2. Turn left and walk 150 steps\n3. Turn right and walk 100 steps\nThe Technology Building will be in front of you\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    Technology57();
                }
            }
        }
        else if (answer == 9)
        {
            // Prescott Hall -> Student Union
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn left and walk 25 steps\n2. Turn left again onto Lopes Way and walk 100 steps\nThe Student Union will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    StudentUnion29();
                }
            }
        }
        else if (answer == 0)
        {
            leave();
        }
    }
}

void Humanities16()
{
    // Humanities Building Directions
    char line[80];
    int answer;
    system("clear");
    printf("\nYou are at the \e[1;35mHumanities Building\e[0m\n");
    printf("\nWhere do you like to go?\n\n1. RoadRunner-28\n2. Prescott Hall-36\n3. Student Advising Center-18\n4. Student Life Building-26\n5. Natural Sciences-6\n6. Engineering-1\n7. Arena-38\n8. Technology-57\n9. Student Union-29\n\n0. Exit Program\n\nInput Number: ");
    while (fgets(line, 80, stdin) != NULL)
    {
        if (sscanf(line, "%d", &answer) != 1 || (answer != 0 && answer != 1 && answer != 2 && answer != 3 && answer != 4 && answer != 5 && answer != 6 && answer != 7 && answer != 8 && answer != 9))
        {
            // Error Handling
            printf("Invalid selection. Please selection an action to take.\n");
            printf("\n1. RoadRunner-28\n2. Prescott Hall-36\n3. Student Advising Center-18\n4. Student Life Building-26\n5. Natural Sciences-6\n\n6. Engineering-1\n7. Arena-38\n8. Technology-57\n9. Student Union-29\n\n0. Exit Program\n\nInput Number: ");
        }
        else if (answer == 1) 
        {
            // Humanities Building -> RoadRunner Apartments
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn left and walk 10 steps\n2. Turn left again and walk 100 steps\n3. Turn left again and walk 25 steps\nRoadRunner Apartments will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    RoadRunner28();
                }
            }
        }
        else if (answer == 2)
        {
            // Humanities Building -> Prescott Hall
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn left and walk 10 steps\n2. Turn left again and walk 100 steps\n3. Turn left again and walk 100 steps\nPrescott Hall will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    PrescottHall36();
                }
            }
        }
        else if (answer == 3)
        {
            // Humanities Building -> Student Advising Center
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 50 steps\nThe Student Advising Center will be on your left\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    StudentAdvisingCenter18();
                }
            }
        }
        else if (answer == 4)
        {
            // Humanities Building -> Student Life Building
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 100 steps\nThe Student Life Building will be on your left\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    StudentLife26();
                }
            }
        }
        else if (answer == 5)
        {
            // Humanities Building -> Natural Sciences Building
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn left and walk 35 steps\nThe Natural Sciences Building will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    NaturalSciences6();
                }
            }
        }
        else if (answer == 6)
        {
            // Humanities Building -> Engineering Building
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn left and walk 85 steps\nThe Engineering Building will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    Engineering1();
                }
            }
        }
        else if (answer == 7)
        {
            // Humanities Building -> Arena
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn left and walk 10 steps\n2. Turn left again and walk 100 steps\n3. Turn right and walk 100 steps\nThe Arena will be in front of you\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    Arena38();
                }
            }
        }
        else if (answer == 8)
        {
            // Humanities Building -> Technology Building
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn left and walk 10 steps\n2. Turn left again and walk 250 steps\n3. Turn right and walk 100 steps\nThe Technology Building will be in front of you\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    Technology57();
                }
            }
        }
        else if (answer == 9)
        {
            // Humanities Building -> Student Union
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 110 steps\nThe Student Union will be in front of you\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    StudentUnion29();
                }
            }
        }
        else if (answer == 0)
        {
            leave();
        }
    }
 }

void StudentAdvisingCenter18()
{
    // Student Advising Center Directions
    char line[80];
    int answer;
    system("clear");
    printf("\nYou are at the \e[1;35mStudent Advising Center\e[0m\n");
    printf("\nWhere do you like to go?\n\n1. RoadRunner-28\n2. Prescott Hall-36\n3. Humanities-16\n4. Student Life Building-26\n5. Natural Sciences-6\n6. Engineering-1\n7. Arena-3\n8. Technology-57\n9. Student Union-29\n\n0. Exit Program\n\nInput Number: ");
    while (fgets(line, 80, stdin) != NULL)
    {
        if (sscanf(line, "%d", &answer) != 1 || (answer != 0 && answer != 1 && answer != 2 && answer != 3 && answer != 4 && answer != 5 && answer != 6 && answer != 7 && answer != 8 && answer != 9))
        {
            // Error Handling
            printf("Invalid selection. Please selection an action to take.\n");
            printf("\n1. RoadRunner-28\n2. Prescott Hall-36\n3. Humanities-16\n4. Student Life Building-26\n5. Natural Sciences-6\n6. Engineering-1\n7. Arena-38\n8. Technology-57\n9. Student Union-29\n\n0. Exit Program\n\nInput Number: ");
        }
        else if (answer == 1)
        {
            // Student Advising Center -> RoadRunner Apartments 
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn left and walk 60 steps\n2. Turn left again and walk 100 steps\n3. Turn left again and walk 25 steps\nRoadRunner Apartments will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    RoadRunner28();
                }
            }
        }
        else if (answer == 2)
        {
            // Student Advising Center -> Prescott Hall
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 60 steps\n2. Turn right again onto Lopes Way and walk 100 steps\n3. Turn right again and walk 25 steps\nPrescott Hall will be on your left\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    PrescottHall36();
                }
            }
        }
        else if (answer == 3)
        {
            // Student Advising Center -> Humanities Building 
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn left and walk 50 steps\nThe Humanities Building will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    Humanities16();
                }
            }
        }
        else if (answer == 4)
        {
            // Student Advising Center -> Student Life Building
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 50 steps\nThe Student Life Building will be on your left\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    StudentLife26();
                }
            }
        }
        else if (answer == 5)
        {
            // Student Advising Center -> Natural Sciences Building
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn left and walk 85 steps\nThe Natural Sciences Building will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    StudentLife26();
                }
            }
        }
        else if (answer == 6)
        {
            // Student Advising Center -> Engineering Building
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn left and walk 135 steps\nThe Engineering Building will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    Engineering1();
                }
            }
        }
        else if (answer == 7)
        {
            // Student Advising Center -> Arena
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn left and walk 60 steps\n2. Turn left again and walk 100 steps\n3. Turn right and walk 100 steps\nThe Arena will be in front of you\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    Arena38();
                }
            }
        }  
        else if (answer == 8)
        {
            // Student Advising Center -> Technology Building
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn left and walk 60 steps\n2. Turn left again and walk 250 steps\n3. Turn right and walk 100 steps\nThe Technology Building will be in front of you\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    Technology57();
                }
            }
        }
        else if (answer == 9)
        {
            // Student Advising Center -> Student Union
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 60 steps\nThe Student Union will be in front of you\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    StudentUnion29();
                }
            }
        }
        else if (answer == 0)
        {
            leave();
        }
    }
}

void StudentLife26()
{
    // Student Life Building Directions
    char line[80];
    int answer;
    system("clear");
    printf("\nYou are at the \e[1;35mStudent Life Building\e[0m\n");
    printf("\nWhere do you like to go?\n\n1. RoadRunner-28\n2. Prescott Hall-36\n3. Humanities-16\n4. Student Advising Center-18\n5. Natural Sciences-6\n6. Engineering-1\n7. Arena-38\n8. Technology-57\n9. Student Union-29\n\n0. Exit Program\n\nInput Number: ");
    while (fgets(line, 80, stdin) != NULL)
    {
        if (sscanf(line, "%d", &answer) != 1 || (answer != 0 && answer != 1 && answer != 2 && answer != 3 && answer != 4 && answer != 5 && answer != 6 && answer != 7 && answer != 8 && answer != 9))
        {
            // Error Handling
            printf("Invalid selection. Please selection an action to take.\n");
            printf("\n1. RoadRunner-28\n2. Prescott Hall-36\n3. Humanities-16\n4. Student Advising Center-18\n5. Natural Sciences-6\n6. Engineering-1\n7. Arena-38\n8. Technology-57\n9. Student Union-29\n\n0. Exit Program\n\nInput Number: ");
        }
        else if (answer == 1)
        {
            // Student Life Building -> RoadRunner Apartments 
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 10 steps\n2. Turn right again onto Lopes Way and walk 100 steps\n3. Turn right again and walk 100 steps\nRoadRunner Apartments will be on your left\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    RoadRunner28();
                }
            }
        }
        else if (answer == 2)
        {
            // Student Life Building -> Prescott Hall
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 10 steps\n2. Turn right again onto Lopes Way and walk 100 steps\n3. Turn right again and walk 25 steps\nPrescott Hall will be on your left\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    PrescottHall36();
                }
            }
        }
        else if (answer == 3)
        {
            // Student Life Building -> Humanities Building
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn left and walk 100 steps\nThe Humanities Building will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    Humanities16();
                }
            }
        }
        else if (answer == 4)
        {
            // Student Life Building -> Student Advising Center 
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn left and walk 50 steps\nThe Student Advising Center will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    StudentAdvisingCenter18();
                }
            }
        }
        else if (answer == 5)
        {
            // Student Life Building -> Natural Sciences Building 
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn left and walk 135 steps\nThe Natural Sciences Building will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    NaturalSciences6();
                }
            }
        }
        else if (answer == 6)
        {
            // Student Life Building -> Engineering Building
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn left and walk 185 steps\nThe Engineering Building will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    Engineering1();
                }
            }
        }
        else if (answer == 7)
        {
            // Student Life Building -> Arena
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn left and walk 110 steps\n2. Turn left again and walk 100 steps\n3. Turn right and walk 100 steps\nThe Arena will be in front of you\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    Arena38();
                }
            }
        }
        else if (answer == 8)
        {
            // Student Life Building -> Technology Building
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn left and walk 110 steps\n2. Turn left again and walk 250 steps\n3. Turn right and walk 100 steps\nThe Technology Building will be in front of you\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    Technology57();
                }
            }
        }
        else if (answer == 9)
        {
            // Student Life Building -> Student Union
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 10 steps\nThe Student Union will be in front of you\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    StudentUnion29();
                }
            }
        }
        else if (answer == 0)
        {
            leave();
        }
    }
}

void NaturalSciences6()
{
    // Natural Sciences Building Directions 
    char line[80];
    int answer;
    system("clear");
    printf("\nYou are at the \e[1;35mNatural Sciences Building\e[0m\n");
    printf("\nWhere do you like to go?\n\n1. RoadRunner-28\n2. Prescott Hall-36\n3. Humanities-16\n4. Student Advising Center-18\n5. Student Life Building-26\n6. Engineering-1\n7. Arena-38\n8. Technology-57\n9. Student Union-29\n\n0. Exit Program\n\nInput Number: ");
    while (fgets(line, 80, stdin) != NULL)
    {
        if (sscanf(line, "%d", &answer) != 1 || (answer != 0 && answer != 1 && answer != 2 && answer != 3 && answer != 4 && answer != 5 && answer != 6 && answer != 7 && answer != 8 && answer != 9))
        {
            // Error Handling
            printf("Invalid selection. Please selection an action to take.\n");
            printf("\n1. RoadRunner-28\n2. Prescott Hall-36\n3. Humanities-16\n4. Student Advising Center-18\n5. Student Life Building-26\n6. Engineering-1\n7. Arena-38\n8. Technology-57\n9. Student Union-29\n\n0. Exit Program\n\nInput Number: ");
        }
        else if (answer == 1)
        {
            // Natural Sciences Building -> RoadRunner Apartments
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 25 steps\n2. Turn right again and walk 100 steps\n3. Turn left and walk 25 steps\nRoadRunner Apartments will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    RoadRunner28();
                }
            }
        }
        else if (answer == 2)
        {
            // Natural Sciences Building -> Prescott Hall
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 25 steps\n2. Turn right again and walk 100 steps\n3. Turn left and walk 100 steps\nPrescott Hall will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    PrescottHall36();
                }
            }
        }
        else if (answer == 3)
        {
            // Natural Sciences Building -> Humanities Building
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 35 steps\nThe Humanities Building will be on your left\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    Humanities16();
                }
            }
        }
        else if (answer == 4)
        {
            // Natural Sciences Building -> Student Advising Center
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 85 steps\nThe Student Advising Center will be on your left\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    StudentAdvisingCenter18();
                }
            }
        }
        else if (answer == 5)
        {
            // Natural Sciences Building -> Student Life Building
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 135 steps\nThe Student Life Building will be on your left\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    StudentLife26();
                }
            }
        }
        else if (answer == 6)
        {
            // Natural Sciences Building -> Engineering Building
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn left and walk 50 steps\nThe Engineering Building will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    Engineering1();
                }
            }
        }
        else if (answer == 7)
        {
            // Natural Sciences Building -> Arena
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn left and walk 75 steps\n2. Turn left again and walk 100 steps\nThe Arena will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    Arena38();
                }
            }
        }
        else if (answer == 8)
        {
            // Natural Sciences Building -> Technology Building
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn left and walk 75 steps\n2. Turn left again and walk 250 steps\nThe Technology Building will be in front of you\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    Technology57();
                }
            }
        }
        else if (answer == 9)
        {
            // Natural Sciences Building -> Student Union
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 145 steps\nThe Student Union will be in front of you\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    StudentUnion29();
                }
            }
        }
        else if (answer == 0)
        {
            leave();
        }
    }
}

void Engineering1()
{
    // Engineering Building Directions 
    char line[80];
    int answer;
    system("clear");
    printf("\nYou are at the \e[1;35mEngineering Building\e[0m\n");
    printf("\nWhere do you like to go?\n\n1. RoadRunner-28\n2. Prescott Hall-36\n3. Humanities-16\n4. Student Advising Center-18\n5. Student Life Building-26\n6. Natural Sciences-6\n7. Arena-38\n8. Technology-57\n9. Student Union-29\n\n0. Exit Program\n\nInput Number: ");
    while (fgets(line, 80, stdin) != NULL)
    {
        if (sscanf(line, "%d", &answer) != 1 || (answer != 0 && answer != 1 && answer != 2 && answer != 3 && answer != 4 && answer != 5 && answer != 6 && answer != 7 && answer != 8 && answer != 9))
        {
            // Error Handling
            printf("Invalid selection. Please selection an action to take.\n");
            printf("\n1. RoadRunner-28\n2. Prescott Hall-36\n3. Humanities-16\n4. Student Advising Center-18\n5. Student Life Building-26\n6. Natural Sciences-6\n7. Arena-38\n8. Technology-57\n9. Student Union-29\n\n0. Exit Program\n\nInput Number: ");
        }
        else if (answer == 1)
        {
            // Engineering Building -> RoadRunner Apartments
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 75 steps\n2. Turn right again and walk 100 steps\n3. Turn left and walk 25 steps\nRoadRunner Apartments will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    RoadRunner28();
                }
            }
        }
        else if (answer == 2)
        {
            // Engineering Building -> Prescott Hall
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 75 steps\n2. Turn right again and walk 100 steps\n3. Turn left and walk 100 steps\nPrescott Hall will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    PrescottHall36();
                }
            }
        }
        else if (answer == 3)
        {
            // Engineering Building -> Humanities Building
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 85 steps\nThe Humanities Building will be on your left\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    Humanities16();
                }
            }
        }
        else if (answer == 4)
        {
            // Engineering Building -> Student Advising Center
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 135 steps\nThe Student Advising Center will be on your left\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    StudentAdvisingCenter18();
                }
            }
        }
        else if (answer == 5)
        {
            // Engineering Building -> Student Life Building
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 185 steps\nThe Student Life Building will be on your left\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    StudentLife26();
                }
            }
        }
        else if (answer == 6)
        {
            // Engineering Building -> Natural Sciences Building
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 50 steps\nThe Natural Sciences Building will be on your left\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    NaturalSciences6();
                }
            }
        }
        else if (answer == 7)
        {
            // Engineering Building -> Arena
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn left and walk 25 steps\n2. Turn left again and walk 100 steps\nThe Arena will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    Arena38();
                }
            }
        }
        else if (answer == 8)
        {
            // Engineering Building -> Technology Building
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn left and walk 25 steps\n2. Turn left again and walk 250 steps\nThe Technology Building will be in front of you\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    Technology57();
                }
            }
        }
        else if (answer == 9)
        {
            // Engineering Building -> Student Union
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 195 steps\nThe Student Union will be in front of you\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    StudentUnion29();
                }
            }
        }
        else if (answer == 0)
        {
            leave();
        }
    }
}

void Arena38()
{
    // Arena Directions 
    char line[80];
    int answer;
    system("clear");
    printf("\nYou are at the \e[1;35mArena\e[0m\n");
    printf("\nWhere do you like to go?\n\n1. RoadRunner-28\n2. Prescott Hall-36\n3. Humanities-16\n4. Student Advising Center-18\n5. Student Life Building-26\n6. Natural Sciences-6\n7. Engineering-1\n8. Technology-57\n9. Student Union-29\n\n0. Exit Program\n\nInput Number: ");
    while (fgets(line, 80, stdin) != NULL)
    {
        if (sscanf(line, "%d", &answer) != 1 || (answer != 0 && answer != 1 && answer != 2 && answer != 3 && answer != 4 && answer != 5 && answer != 6 && answer != 7 && answer != 8 && answer != 9))
        {
            // Error Handling
            printf("Invalid selection. Please selection an action to take.\n");
            printf("\n1. RoadRunner-28\n2. Prescott Hall-36\n3. Humanities-16\n4. Student Advising Center-18\n5. Student Life Building-26\n6. Natural Sciences-6\n7. Engineering-1\n8. Technology-57\n9. Student Union-29\n\n0. Exit Program\n\nInput Number: ");
        }
        else if (answer == 1) 
        {
            // Arena -> RoadRunner Apartments 
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn around and walk 125 steps\nRoadRunner Apartments will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    RoadRunner28();
                }
            }
        }
        else if (answer == 2)
        {
            // Arena -> Prescott Hall
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn around and walk 200 steps\nPrescott Hall will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    PrescottHall36();
                }
            }
        }
        else if (answer == 3)
        {
            // Arena -> Humanities Building
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn around and walk 100 steps\n2. Turn left and walk 100 steps\n3. Turn right and walk 10 steps\nThe Humanities Building will be on your left\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    Humanities16();
                }
            }
        }
        else if (answer == 4)
        {
            // Arena -> Student Advising Center 
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn around and walk 100 steps\n2. Turn left and walk 100 steps\n3. Turn right and walk 60 steps\nThe Student Advising Center will be on your left\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    StudentAdvisingCenter18();
                }
            }
        }
        else if (answer == 5)
        {
            // Arena -> Student Life Building
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn around and walk 100 steps\n2. Turn left and walk 100 steps\n3. Turn right and walk 110 steps\nThe Student Life Building will be on your left\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    StudentLife26();
                }
            }
        }
        else if (answer == 6)
        {
            // Arena -> Natural Sciences Building
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 100 steps\n2. Turn right again and walk 75 steps\nThe Natural Sciences Building will be on your left\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    NaturalSciences6();
                }
            }
        }
        else if (answer == 7)
        {
            // Arena -> Engineering Building
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 100 steps\n2. Turn right again and walk 25 steps\nThe Engineering Building will be on your left\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    Engineering1();
                }
            }
        }
        else if (answer == 8)
        {
            // Arena -> Technology Building
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn left and walk 150 steps\nThe Technology Building will be in front of you\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    Technology57();
                }
            }
        }
        else if (answer == 9)
        {
            // Arena -> Student Union
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn around and walk 100 steps\n2. Turn left and walk 100 steps\n3. Turn right and walk 120 steps\nThe Student Union will be in front of you\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    StudentUnion29();
                }
            }
        }
        else if (answer == 0)
        {
            leave();
        }
    }
}

void Technology57()
{
    // Technology Building Directions 
    char line[80];
    int answer;
    system("clear");
    printf("\nYou are at the \e[1;35mTechnology Building\e[0m\n");
    printf("\nWhere do you like to go?\n\n1. RoadRunner-28\n2. Prescott Hall-36\n3. Humanities-16\n4. Student Advising Center-18\n5. Student Life Building-26\n6. Natural Sciences-6\n7. Engineering-1\n8. Arena-38\n9. Student Union-29\n\n0. Exit Program\n\nInput Number: ");
    while (fgets(line, 80, stdin) != NULL)
    {
        if (sscanf(line, "%d", &answer) != 1 || (answer != 0 && answer != 1 && answer != 2 && answer != 3 && answer != 4 && answer != 5 && answer != 6 && answer != 7 && answer != 8 && answer != 9))
        {
            // Error Handling
            printf("Invalid selection. Please selection an action to take.\n");
            printf("\n1. RoadRunner-28\n2. Prescott Hall-36\n3. Humanities-16\n4. Student Advising Center-18\n5. Student Life Building-26\n6. Natural Sciences-6\n7. Engineering-1\n8. Arena-38\n9. Student Union-29\n\n0. Exit Program\n\nInput Number: ");
        }
        else if (answer == 1)
        {
            // Technology Building -> RoadRunner Apartments 
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn around and walk 100 steps\n2. Turn left and walk 150 step\n3. Turn right and walk 25 steps\nRoadRunner Apartments will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    RoadRunner28();
                }
            }
        }
        else if (answer == 2)
        {
            // Technology Building -> Prescott Hall
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn around and walk 100 steps\n2. Turn left and walk 150 step\n3. Turn right and walk 100 steps\nPrescott Hall will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    PrescottHall36();
                }
            }
        }
        else if (answer == 3)
        {
            // Technology Building -> Humanities Building
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn around and walk 100 steps\n2. Turn left and walk 250 steps\n3. Turn right and walk 10 steps\nThe Humanities Building will be on your left\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    Humanities16();
                }
            }
        }
        else if (answer == 4)
        {
            // Technology Building -> Student Advising Center 
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn around and walk 100 steps\n2. Turn left and walk 250 steps\n3. Turn right and walk 60 steps\nThe Student Advising Center will be on your left\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    StudentAdvisingCenter18();
                }
            }
        }
        else if (answer == 5)
        {
            // Technology Building -> Student Life Building 
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn around and walk 100 steps\n2. Turn left and walk 250 steps\n3. Turn right and walk 110 steps\nThe Student Life Building will be on your left\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    StudentLife26();
                }
            }
        }
        else if (answer == 6)
        {
            // Technology Building -> Natural Sciences Building
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 250 steps\n2. Turn right again and walk 75 steps\nThe Natural Sciences Building will be on your left\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    NaturalSciences6();
                }
            }
        }
        else if (answer == 7)
        {
            // Technology Building -> Engineering Building 
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 250 steps\n2. Turn right again and walk 25 steps\nThe Engineering Building will be on your left\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    Engineering1();
                }
            }
        }
        else if (answer == 8)
        {
            // Technology Building -> Arena 
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right and walk 150 steps\nThe Arena will be your left\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    Arena38();
                }
            }
        }
        else if (answer == 9)
        {
            // Technology Building -> Student Union
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn around and walk 100 steps\n2. Turn left and walk 250 steps\n3. Turn right and walk 120 steps\nThe Student Union will be in front of you\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    StudentUnion29();
                }
            }
        }
        else if (answer == 0)
        {
            leave();
        }
    }
}

void StudentUnion29() 
{
    // Student Union Directions 
    char line[80];
    int answer;
    system("clear");
    printf("\nYou are at the \e[1;35mStudent Union\e[0m\n");
    printf("\nWhere do you like to go?\n\n1. RoadRunner-28\n2. Prescott Hall-36\n3. Humanities-16\n4. Student Advising Center-18\n5. Student Life Building\n6. Natural Sciences-6\n7. Engineering-1\n8. Arena-38\n9. Technology-57\n\n0. Exit Program\n\nInput Number: ");
    while (fgets(line, 80, stdin) != NULL)
    {
        if (sscanf(line, "%d", &answer) != 1 || (answer != 0 && answer != 1 && answer != 2 && answer != 3 && answer != 4 && answer != 5 && answer != 6 && answer != 7 && answer != 8 && answer != 9))
        {
            // Error Handling
            printf("Invalid selection. Please selection an action to take.\n");
            printf("\n1. RoadRunner-28\n2. Prescott Hall-36\n3. Humanities-16\n4. Student Advising Center-18\n5. Student Life Building\n6. Natural Sciences-6\n7. Engineering-1\n8. Arena-38\n9. Technology-57\n\n0. Exit Program\n\nInput Number: ");
        }
        else if (answer == 1)
        {
            // Student Union -> RoadRunner Apartments
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right onto Lopes Way and walk 100 steps\n2. Turn right again and walk 100 steps\nRoadRunner Apartments will be on your left\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    RoadRunner28();
                }
            }
        }
        else if (answer == 2)
        {
            // Student Union -> Prescott Hall
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn right onto Lopes Way and walk 100 steps\n2. Turn right again and walk 25 steps\nPrescott Hall will be on your left\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    PrescottHall36();
                }
            }
        }
        else if (answer == 3)
        {
            // Student Union -> Humanities Building
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn around and walk 110 steps\nThe Humanities Building will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    Humanities16();
                }
            }
        }
        else if (answer == 4)
        {
            // Student Union -> Student Advising Center
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn around and walk 60 steps\nThe Student Advising Center will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    StudentAdvisingCenter18();
                }
            }
        }
        else if (answer == 5)
        {
            // Student Union -> Student Life Building
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn around and walk 10 steps\nThe Student Life Building will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    StudentLife26();
                }
            }
        }
        else if (answer == 6)
        {
            // Student Union -> Natural Sciences Building 
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn around and walk 145 steps\nThe Natural Sciences Building will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    NaturalSciences6();
                }
            }
        }
        else if (answer == 7)
        {
            // Student Union -> Engineering Building 
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn around and walk 195 steps\nThe Engineering Building will be on your right\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    Engineering1();
                }
            }
        }
        else if (answer == 8)
        {
            // Student Union -> Arena 
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn around and walk 120 steps\n2. Turn left and walk 100 steps\n3. Turn right and walk 100 steps\nThe Arena will be in front of you\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    Arena38();
                }
            }
        }
        else if (answer == 9)
        {
            // Student Union -> Technology Building
            char line2[80];
            int prompt;
            system("clear");
            printf("\n--------------------------------------------");
            printf("\n1. Turn around and walk 120 steps\n2. Turn left and walk 250 steps\n3. Turn right and walk 100 steps\nThe Technology Building will be in front of you\n");
            printf("--------------------------------------------\n");
            printf("\nAre you at your final destination?\n\n1. Yes\n2. No\n\nInput Number: ");

            while (fgets(line2, 80, stdin) != NULL)
            {
                if (sscanf(line2, "%d", &prompt) != 1 || prompt != 1 && prompt != 2)
                {
                    printf("\nInvalid selection. Please selection an action to take.\n");
                    printf("\n1. Yes\n2. No\n\nInput Number: ");
                }
                else if (prompt == 1)
                {
                    leave();
                }
                else if (prompt == 2)
                {
                    Technology57();
                }
            }
        }
        else if (answer == 0)
        {
            leave();
        }
    }
}

