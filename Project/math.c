// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <math.h>

// #define MAX_FORMULAS 50
// #define MAX_CHAPTERS 20

// typedef struct {
//     char name[100];
//     char formula[200];
//     char explanation[300];
// } Formula;

// typedef struct {
//     char name[100];
//     Formula formulas[MAX_FORMULAS];
//     int formula_count;
// } Chapter;

// Chapter chapters[MAX_CHAPTERS];
// int chapter_count = 0;

// void initialize_database() {
//     // Class 11 Chapters
//     strcpy(chapters[chapter_count].name, "1. Sets and Functions");
//     strcpy(chapters[chapter_count].formulas[0].name, "Union of two sets");
//     strcpy(chapters[chapter_count].formulas[0].formula, "A ∪ B = {x | x ∈ A or x ∈ B}");
//     strcpy(chapters[chapter_count].formulas[0].explanation, "All elements that are in A or in B or in both");
//     chapters[chapter_count].formula_count = 1;
//     chapter_count++;

//     strcpy(chapters[chapter_count].name, "2. Trigonometry");
//     strcpy(chapters[chapter_count].formulas[0].name, "Pythagorean identity");
//     strcpy(chapters[chapter_count].formulas[0].formula, "sin²θ + cos²θ = 1");
//     strcpy(chapters[chapter_count].formulas[1].name, "Sine of sum");
//     strcpy(chapters[chapter_count].formulas[1].formula, "sin(A+B) = sinAcosB + cosAsinB");
//     chapters[chapter_count].formula_count = 2;
//     chapter_count++;

//     // Class 12 Chapters
//     strcpy(chapters[chapter_count].name, "3. Matrices");
//     strcpy(chapters[chapter_count].formulas[0].name, "Matrix multiplication");
//     strcpy(chapters[chapter_count].formulas[0].formula, "C[i][j] = Σ(A[i][k] * B[k][j])");
//     chapters[chapter_count].formula_count = 1;
//     chapter_count++;

//     strcpy(chapters[chapter_count].name, "4. Calculus");
//     strcpy(chapters[chapter_count].formulas[0].name, "Derivative of x^n");
//     strcpy(chapters[chapter_count].formulas[0].formula, "d/dx(x^n) = n*x^(n-1)");
//     strcpy(chapters[chapter_count].formulas[1].name, "Integration of x^n");
//     strcpy(chapters[chapter_count].formulas[1].formula, "∫x^n dx = x^(n+1)/(n+1) + C (n ≠ -1)");
//     chapters[chapter_count].formula_count = 2;
//     chapter_count++;
// }

// void display_chapters() {
//     printf("\nJEE Math Formula Book - Chapters:\n");
//     printf("Class 11:\n");
//     for (int i = 0; i < 2; i++) {
//         printf("%s\n", chapters[i].name);
//     }
//     printf("\nClass 12:\n");
//     for (int i = 2; i < chapter_count; i++) {
//         printf("%s\n", chapters[i].name);
//     }
// }

// void display_formulas(int chapter_index) {
//     printf("\nChapter: %s\n", chapters[chapter_index].name);
//     printf("Formulas available:\n");
//     for (int i = 0; i < chapters[chapter_index].formula_count; i++) {
//         printf("%d. %s\n", i+1, chapters[chapter_index].formulas[i].name);
//     }
// }

// void verify_formula(int chapter_index, int formula_index) {
//     printf("\nFormula: %s\n", chapters[chapter_index].formulas[formula_index].name);
//     printf("Expression: %s\n", chapters[chapter_index].formulas[formula_index].formula);
//     printf("Explanation: %s\n", chapters[chapter_index].formulas[formula_index].explanation);
    
//     // Simple verification examples
//     if (strcmp(chapters[chapter_index].formulas[formula_index].name, "Pythagorean identity") == 0) {
//         printf("\nVerification:\n");
//         double theta = M_PI/4; // 45 degrees
//         double result = pow(sin(theta), 2) + pow(cos(theta), 2);
//         printf("For θ=45°, sin²θ + cos²θ = %.2f + %.2f = %.2f ≈ 1\n", 
//                pow(sin(theta), 2), pow(cos(theta), 2), result);
//     }
//     else if (strcmp(chapters[chapter_index].formulas[formula_index].name, "Derivative of x^n") == 0) {
//         printf("\nVerification:\n");
//         double x = 2.0;
//         int n = 3;
//         double derivative = n * pow(x, n-1);
//         printf("For f(x)=x³, f'(2) = 3*2² = %.2f\n", derivative);
//     }
// }

// void apply_formula(int chapter_index, int formula_index) {
//     printf("\nApplying formula: %s\n", chapters[chapter_index].formulas[formula_index].name);
    
//     if (strcmp(chapters[chapter_index].formulas[formula_index].name, "Union of two sets") == 0) {
//         printf("Example: A = {1, 2, 3}, B = {3, 4, 5}\n");
//         printf("A ∪ B = {1, 2, 3, 4, 5}\n");
//     }
//     else if (strcmp(chapters[chapter_index].formulas[formula_index].name, "Sine of sum") == 0) {
//         // double A = M_PI/6; // 30 degrees
//         double B = M_PI/3; // 60 degrees
//         double result = sin(A+B);
//         printf("sin(30° + 60°) = sin(90°) = 1\n");
//         printf("Calculated value: %.2f\n", result);
//     }
//     else if (strcmp(chapters[chapter_index].formulas[formula_index].name, "Integration of x^n") == 0) {
//         double a = 1, b = 3;
//         int n = 2;
//         double integral = (pow(b, n+1) - pow(a, n+1))/(n+1);
//         printf("∫₁³ x² dx = (3³ - 1³)/3 = %.2f\n", integral);
//     }
// }

// int main() {
//     initialize_database();
//     int choice, chapter_choice, formula_choice;
    
//     printf("JEE Mathematics Formula Book\n");
//     printf("For Classes 11 & 12\n");
    
//     do {
//         printf("\nMain Menu:\n");
//         printf("1. View Chapters\n");
//         printf("2. View Formulas in a Chapter\n");
//         printf("3. Verify a Formula\n");
//         printf("4. Apply a Formula\n");
//         printf("5. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);
        
//         switch(choice) {
//             case 1:
//                 display_chapters();
//                 break;
                
//             case 2:
//                 display_chapters();
//                 printf("\nEnter chapter number to view formulas: ");
//                 scanf("%d", &chapter_choice);
//                 if (chapter_choice >= 1 && chapter_choice <= chapter_count) {
//                     display_formulas(chapter_choice - 1);
//                 } else {
//                     printf("Invalid chapter number!\n");
//                 }
//                 break;
                
//             case 3:
//                 display_chapters();
//                 printf("\nEnter chapter number: ");
//                 scanf("%d", &chapter_choice);
//                 if (chapter_choice >= 1 && chapter_choice <= chapter_count) {
//                     display_formulas(chapter_choice - 1);
//                     printf("\nEnter formula number to verify: ");
//                     scanf("%d", &formula_choice);
//                     if (formula_choice >= 1 && formula_choice <= chapters[chapter_choice-1].formula_count) {
//                         verify_formula(chapter_choice - 1, formula_choice - 1);
//                     } else {
//                         printf("Invalid formula number!\n");
//                     }
//                 } else {
//                     printf("Invalid chapter number!\n");
//                 }
//                 break;
                
//             case 4:
//                 display_chapters();
//                 printf("\nEnter chapter number: ");
//                 scanf("%d", &chapter_choice);
//                 if (chapter_choice >= 1 && chapter_choice <= chapter_count) {
//                     display_formulas(chapter_choice - 1);
//                     printf("\nEnter formula number to apply: ");
//                     scanf("%d", &formula_choice);
//                     if (formula_choice >= 1 && formula_choice <= chapters[chapter_choice-1].formula_count) {
//                         apply_formula(chapter_choice - 1, formula_choice - 1);
//                     } else {
//                         printf("Invalid formula number!\n");
//                     }
//                 } else {
//                     printf("Invalid chapter number!\n");
//                 }
//                 break;
                
//             case 5:
//                 printf("Exiting...\n");
//                 break;
                
//             default:
//                 printf("Invalid choice! Please try again.\n");
//         }
//     } while (choice != 5);
    
//     return 0;
// }