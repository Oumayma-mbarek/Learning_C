#include <stdio.h>

// Defining a structure to hold employee address details
struct EmpAddress {
    char *ename;        // Employee name (string pointer)
    char stname[20];    // Street name (array of characters)
    int pincode;        // Pincode (integer)
};

int main() {
    struct EmpAddress employee=  {"John Alter", "Court Street \n", 654134};
    struct EmpAddress *pt = &employee;
    // Printing employee details using pointer to structure
    printf("%s from %s \n",pt->ename,pt->stname);
    return 0;
}