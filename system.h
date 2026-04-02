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

void registerUser();
void showUsers();
void createPolicy();
void showPolicies();
float calculatePremium(char location[]);
void fileClaim();
void processClaims();

#endif
