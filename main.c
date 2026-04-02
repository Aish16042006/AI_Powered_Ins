// ================= HEADER FILE: system.h =================
#ifndef SYSTEM_H
#define SYSTEM_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_USERS "users.txt"
#define FILE_POLICIES "policies.txt"
#define FILE_CLAIMS "claims.txt"

typedef struct {
    int userId;
    char name[50];
    char phone[15];
    char location[50];
} User;

typedef struct {
    int policyId;
    int userId;
    char type[30];
    float premium;
} Policy;

typedef struct {
    int claimId;
    int userId;
    int policyId;
    float amount;
    char status[20];
} Claim;

// Function declarations
void registerUser();
void showUsers();
void createPolicy();
void showPolicies();
float calculatePremium(char location[]);
void fileClaim();
void processClaims();

#endif

// ================= MAIN FILE: main.c =================
#include "system.h"

int main() {
    int choice;

    while(1) {
        printf("\n===== INSURANCE SYSTEM =====\n");
        printf("1. Register User\n");
        printf("2. View Users\n");
        printf("3. Create Policy\n");
        printf("4. View Policies\n");
        printf("5. File Claim\n");
        printf("6. Process Claims\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: registerUser(); break;
            case 2: showUsers(); break;
            case 3: createPolicy(); break;
            case 4: showPolicies(); break;
            case 5: fileClaim(); break;
            case 6: processClaims(); break;
            case 0: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
}

// ================= USER MODULE =================
void registerUser() {
    User u;
    FILE *fp = fopen(FILE_USERS, "a");

    printf("Enter User ID: ");
    scanf("%d", &u.userId);
    printf("Enter Name: ");
    scanf(" %[^"]", u.name);
    printf("Enter Phone: ");
    scanf("%s", u.phone);
    printf("Enter Location: ");
    scanf("%s", u.location);

    fwrite(&u, sizeof(User), 1, fp);
    fclose(fp);

    printf("User Registered Successfully!\n");
}

void showUsers() {
    User u;
    FILE *fp = fopen(FILE_USERS, "r");

    while(fread(&u, sizeof(User), 1, fp)) {
        printf("\nID: %d | Name: %s | Phone: %s | Location: %s\n",
               u.userId, u.name, u.phone, u.location);
    }

    fclose(fp);
}

// ================= POLICY MODULE =================
void createPolicy() {
    Policy p;
    FILE *fp = fopen(FILE_POLICIES, "a");

    printf("Enter Policy ID: ");
    scanf("%d", &p.policyId);
    printf("Enter User ID: ");
    scanf("%d", &p.userId);
    printf("Enter Policy Type: ");
    scanf("%s", p.type);

    char location[50];
    printf("Enter Location for Risk Calculation: ");
    scanf("%s", location);

    p.premium = calculatePremium(location);

    fwrite(&p, sizeof(Policy), 1, fp);
    fclose(fp);

    printf("Policy Created! Premium = %.2f\n", p.premium);
}

void showPolicies() {
    Policy p;
    FILE *fp = fopen(FILE_POLICIES, "r");

    while(fread(&p, sizeof(Policy), 1, fp)) {
        printf("\nPolicyID: %d | UserID: %d | Type: %s | Premium: %.2f\n",
               p.policyId, p.userId, p.type, p.premium);
    }

    fclose(fp);
}

// ================= PREMIUM LOGIC =================
float calculatePremium(char location[]) {
    float base = 100;

    if(strcmp(location, "highrisk") == 0)
        base += 50;
    else if(strcmp(location, "rainy") == 0)
        base += 30;
    else if(strcmp(location, "safe") == 0)
        base -= 20;

    return base;
}

// ================= CLAIM MODULE =================
void fileClaim() {
    Claim c;
    FILE *fp = fopen(FILE_CLAIMS, "a");

    printf("Enter Claim ID: ");
    scanf("%d", &c.claimId);
    printf("Enter User ID: ");
    scanf("%d", &c.userId);
    printf("Enter Policy ID: ");
    scanf("%d", &c.policyId);
    printf("Enter Claim Amount: ");
    scanf("%f", &c.amount);

    strcpy(c.status, "Pending");

    fwrite(&c, sizeof(Claim), 1, fp);
    fclose(fp);

    printf("Claim Filed Successfully!\n");
}

void processClaims() {
    Claim c;
    FILE *fp = fopen(FILE_CLAIMS, "r+");

    while(fread(&c, sizeof(Claim), 1, fp)) {
        if(strcmp(c.status, "Pending") == 0) {
            if(c.amount < 5000)
                strcpy(c.status, "Approved");
            else
                strcpy(c.status, "Rejected");

            fseek(fp, -sizeof(Claim), SEEK_CUR);
            fwrite(&c, sizeof(Claim), 1, fp);
        }
    }

    fclose(fp);
    printf("Claims Processe
