#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_ADDRESS_LENGTH 100

// Address structure
struct Address {
   
    char city[20];
    char state[20];
    char zip[20];
};s
struct Person {
    char name[20];
    int id;
    struct Address address;
};

int main() {
    struct Person person;
    printf("Enter person's details:\n");
    printf("Name: ");
    scanf("%s", person.name);

    printf("ID: ");
    scanf("%d", &person.id);

    printf("City: ");
    scanf("%s", person.address.city);

    printf("State: ");
    scanf("%s", person.address.state);

    printf("ZIP Code: ");
    scanf("%s", person.address.zip);

    // Display details
    printf("\nPerson's Details:\n");
    printf("Name: %s\n", person.name);
    printf("ID: %d\n", person.id);
    printf("Address:\n");

    printf("City: %s\n", person.address.city);
    printf("State: %s\n", person.address.state);
    printf("ZIP Code: %s\n", person.address.zip);
    return 0;
}
