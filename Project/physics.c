#include <stdio.h>
#include <math.h>

#define G 6.67430e-11 // Gravitational constant

void displayMenu() {
    printf("\n======= Physics Calculator =======\n");
    printf("1. Force (F = m * a)\n");
    printf("2. Kinetic Energy (KE = 0.5 * m * v^2)\n");
    printf("3. Potential Energy (PE = m * g * h)\n");
    printf("4. Momentum (p = m * v)\n");
    printf("5. Work Done (W = F * d)\n");
    printf("6. Power (P = W / t)\n");
    printf("7. Pressure (P = F / A)\n");
    printf("8. Density (ρ = m / V)\n");
    printf("9. Ohm's Law (V = I * R)\n");
    printf("10. Acceleration (a = (v - u) / t)\n");
    printf("11. Velocity (v = u + a * t)\n");
    printf("12. Distance (s = u*t + 0.5*a*t^2)\n");
    printf("13. Gravitational Force (F = G * m1 * m2 / r^2)\n");
    printf("14. Exit\n");
    printf("==================================\n");
}

int main() {
    int choice;
    double m, a, v, u, t, g, h, F, d, W, A, p, V, I, R, s, r, m1, m2, result;

    do {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\n--- Force (F = m * a) ---\n");
                printf("Enter mass (m in kg): ");
                scanf("%lf", &m);
                printf("Enter acceleration (a in m/s^2): ");
                scanf("%lf", &a);
                result = m * a;
                printf("Force = %.2lf N\n", result);
                break;

            case 2:
                printf("\n--- Kinetic Energy (KE = 0.5 * m * v^2) ---\n");
                printf("Enter mass (m in kg): ");
                scanf("%lf", &m);
                printf("Enter velocity (v in m/s): ");
                scanf("%lf", &v);
                result = 0.5 * m * v * v;
                printf("Kinetic Energy = %.2lf J\n", result);
                break;

            case 3:
                printf("\n--- Potential Energy (PE = m * g * h) ---\n");
                printf("Enter mass (m in kg): ");
                scanf("%lf", &m);
                printf("Enter height (h in meters): ");
                scanf("%lf", &h);
                g = 9.8;
                result = m * g * h;
                printf("Potential Energy = %.2lf J\n", result);
                break;

            case 4:
                printf("\n--- Momentum (p = m * v) ---\n");
                printf("Enter mass (m in kg): ");
                scanf("%lf", &m);
                printf("Enter velocity (v in m/s): ");
                scanf("%lf", &v);
                result = m * v;
                printf("Momentum = %.2lf kg m/s\n", result);
                break;

            case 5:
                printf("\n--- Work Done (W = F * d) ---\n");
                printf("Enter force (F in N): ");
                scanf("%lf", &F);
                printf("Enter distance (d in meters): ");
                scanf("%lf", &d);
                result = F * d;
                printf("Work Done = %.2lf J\n", result);
                break;

            case 6:
                printf("\n--- Power (P = W / t) ---\n");
                printf("Enter work done (W in J): ");
                scanf("%lf", &W);
                printf("Enter time (t in seconds): ");
                scanf("%lf", &t);
                result = W / t;
                printf("Power = %.2lf Watts\n", result);
                break;

            case 7:
                printf("\n--- Pressure (P = F / A) ---\n");
                printf("Enter force (F in N): ");
                scanf("%lf", &F);
                printf("Enter area (A in m^2): ");
                scanf("%lf", &A);
                result = F / A;
                printf("Pressure = %.2lf Pa\n", result);
                break;

            case 8:
                printf("\n--- Density (ρ = m / V) ---\n");
                printf("Enter mass (m in kg): ");
                scanf("%lf", &m);
                printf("Enter volume (V in m^3): ");
                scanf("%lf", &V);
                result = m / V;
                printf("Density = %.2lf kg/m^3\n", result);
                break;

            case 9:
                printf("\n--- Ohm's Law (V = I * R) ---\n");
                printf("Enter current (I in A): ");
                scanf("%lf", &I);
                printf("Enter resistance (R in Ohms): ");
                scanf("%lf", &R);
                result = I * R;
                printf("Voltage = %.2lf Volts\n", result);
                break;

            case 10:
                printf("\n--- Acceleration (a = (v - u) / t) ---\n");
                printf("Enter final velocity (v in m/s): ");
                scanf("%lf", &v);
                printf("Enter initial velocity (u in m/s): ");
                scanf("%lf", &u);
                printf("Enter time (t in s): ");
                scanf("%lf", &t);
                result = (v - u) / t;
                printf("Acceleration = %.2lf m/s^2\n", result);
                break;

            case 11:
                printf("\n--- Final Velocity (v = u + a * t) ---\n");
                printf("Enter initial velocity (u in m/s): ");
                scanf("%lf", &u);
                printf("Enter acceleration (a in m/s^2): ");
                scanf("%lf", &a);
                printf("Enter time (t in s): ");
                scanf("%lf", &t);
                result = u + a * t;
                printf("Final Velocity = %.2lf m/s\n", result);
                break;

            case 12:
                printf("\n--- Distance (s = u*t + 0.5*a*t^2) ---\n");
                printf("Enter initial velocity (u in m/s): ");
                scanf("%lf", &u);
                printf("Enter acceleration (a in m/s^2): ");
                scanf("%lf", &a);
                printf("Enter time (t in s): ");
                scanf("%lf", &t);
                result = u * t + 0.5 * a * t * t;
                printf("Distance = %.2lf meters\n", result);
                break;

            case 13:
                printf("\n--- Gravitational Force (F = G * m1 * m2 / r^2) ---\n");
                printf("Enter mass 1 (m1 in kg): ");
                scanf("%lf", &m1);
                printf("Enter mass 2 (m2 in kg): ");
                scanf("%lf", &m2);
                printf("Enter distance between objects (r in meters): ");
                scanf("%lf", &r);
                result = G * m1 * m2 / (r * r);
                printf("Gravitational Force = %.2e N\n", result);
                break;

            case 14:
                printf("\nExiting program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 14);

    return 0;
}
