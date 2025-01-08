
/*
#include <stdio.h>
struct student {
    char firstName[50];
    int roll;
    float marks;
} s[5];

int main() {
    int i;
    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < 5; ++i) {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 5; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Marks: %.1f", s[i].marks);
        printf("\n");
    }
    return 0;
}
*/


/*
#include <stdio.h>

struct Distance {
   int feet;
   float inch;
} ;

int main() {

struct Distance  d1, d2, result;
   // take first distance input
   printf("Enter 1st distance\n");
   printf("Enter feet: ");
   scanf("%d", &d1.feet);
   printf("Enter inch: ");
   scanf("%f", &d1.inch);
 
   // take second distance input
   printf("\nEnter 2nd distance\n");
   printf("Enter feet: ");
   scanf("%d", &d2.feet);
   printf("Enter inch: ");
   scanf("%f", &d2.inch);
   
   // adding distances
   result.feet = d1.feet + d2.feet;
   result.inch = d1.inch + d2.inch;

   // convert inches to feet if greater than 12
   while (result.inch >= 12.0) {
      result.inch = result.inch - 12.0;
      ++result.feet;
   }
   printf("\nSum of distances = %d\'-%.1f\"", result.feet, result.inch);
   return 0;
}
*/








#include <stdio.h>
#include <stdbool.h>

#define MAX_CUSTOMERS 200

struct Customer {
    int accountNumber;
    char name[50];
    float balance;
};

// Function to print account number and name of customers with balance below Rs. 100
void printLowBalanceCustomers(struct Customer customers[], int numCustomers) {
    printf("Customers with balance below Rs. 100:\n");
    for (int i = 0; i < numCustomers; ++i) {
        if (customers[i].balance < 100) {
            printf("Account Number: %d, Name: %s\n", customers[i].accountNumber, customers[i].name);
        }
    }
}

// Function to handle withdrawal or deposit
void processTransaction(struct Customer* customer, float amount, int code) {
    if (code == 1) {
        // Deposit
        customer->balance += amount;
        printf("Deposit of Rs. %.2f successful. New balance: Rs. %.2f\n", amount, customer->balance);
    } else if (code == 0) {
        // Withdrawal
        if (amount <= customer->balance) {
            customer->balance -= amount;
            printf("Withdrawal of Rs. %.2f successful. New balance: Rs. %.2f\n", amount, customer->balance);
        } else {
            printf("The balance is insufficient for the specified withdrawal.\n");
        }
    } else {
        printf("Invalid transaction code. Use 1 for deposit, 0 for withdrawal.\n");
    }
}

int main() {
    struct Customer customers[MAX_CUSTOMERS] = {
        {1, "John Doe", 1500.50},
        {2, "Jane Smith", 75.20}, 
        
    }; // Add more customers as needed

    int numCustomers = 2;  // Adjust the number based on the actual number of customers

    // Example: Print customers with balance below Rs. 100
    printLowBalanceCustomers(customers, numCustomers);

    // Example: Process a withdrawal or deposit for a customer
    int customerIndex = 0;  // Index of the customer making the transaction
    float transactionAmount = 50.0;  // Amount for withdrawal or deposit
    int transactionCode = 0;  // 1 for deposit, 0 for withdrawal

    processTransaction(&customers[customerIndex], transactionAmount, transactionCode);

    return 0;
}

