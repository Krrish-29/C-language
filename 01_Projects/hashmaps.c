#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 100

typedef struct Entry {
char key[100];
int value;
struct Entry* next;
} Entry;

Entry* hashTable[TABLE_SIZE];

// Hash function to calculate the index
unsigned int hash(char* key) {
unsigned int hashValue = 0;
for (int i = 0; key[i] != '\0'; i++) {
hashValue = hashValue * 37 + key[i];
}
return hashValue % TABLE_SIZE;
}

// Function to insert a key-value pair into the HashMap
void insert(char* key, int value) {
unsigned int index = hash(key);
Entry* newEntry = (Entry*)malloc(sizeof(Entry));
strcpy(newEntry->key, key);
newEntry->value = value;
newEntry->next = hashTable[index];
hashTable[index] = newEntry;
}

// Function to get the value of a key in the HashMap
int get(char* key) {
unsigned int index = hash(key);
Entry* entry = hashTable[index];
while (entry != NULL) {
if (strcmp(entry->key, key) == 0) {
return entry->value;
}
entry = entry->next;
}
return -1; // Key not found
}

// Function to print the HashMap
void printMap() {
for (int i = 0; i < TABLE_SIZE; i++) {
Entry* entry = hashTable[i];
while (entry != NULL) {
printf("%s: %d\n", entry->key, entry->value);
entry = entry->next;
}
}
}

int main() {
insert("Geeks", 5);
insert("GFG", 3);
insert("GeeksforGeeks", 7);
printf("Value of complete Map:\n");
printMap();
printf("\nValue of GFG: %d\n", get("GFG"));
return 0;
}