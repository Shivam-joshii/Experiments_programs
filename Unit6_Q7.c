//Union for Present Address
#include <stdio.h>
#include <string.h>

union Address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[20];
};

int main() {
    union Address addr;
    strcpy(addr.name, "Rahul"); // Example present address (fill as needed)
    printf("Present address (name): %s\n", addr.name);
    strcpy(addr.home_address, "123 Street, Home City");
    printf("Present address (home): %s\n", addr.home_address);
    strcpy(addr.hostel_address, "Room 101, Hostel A");
    printf("Present address (hostel): %s\n", addr.hostel_address);
    strcpy(addr.city, "Dehradun");
    printf("City: %s\n", addr.city);
    strcpy(addr.state, "Uttarakhand");
    printf("State: %s\n", addr.state);
    strcpy(addr.zip, "248001");
    printf("ZIP: %s\n", addr.zip);

    // Note: Only last assigned member is available; union overwrites memory.
    return 0;
}
