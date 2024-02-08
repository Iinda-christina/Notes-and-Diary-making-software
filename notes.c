#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NOTES 100
#define MAX_ENTRIES 100
struct DiaryEntry {
char date[20];
char content[500];
};
struct DiaryEntry entries[MAX_ENTRIES];
int numEntries = 0;
void addEntry() {
if (numEntries >= MAX_ENTRIES) {
printf("Maximum number of entries reached.\n");
return;
}
printf("Enter date (DD/MM/YYYY): ");
scanf("%s", entries[numEntries].date);
printf("Enter content: ");
scanf(" %[^\n]s", entries[numEntries].content);
numEntries++;
printf("Entry added successfully.\n");
}
void displayEntries() {
if (numEntries == 0) {
printf("No entries found.\n");
return;
}
printf("********** DIARY ENTRIES **********\n");

10
for (int i = 0; i < numEntries; i++) {
printf("\nDate: %s\n", entries[i].date);
printf("Content: %s\n", entries[i].content);
}
printf("\nTotal Entries: %d\n", numEntries);
}
struct Note {
char title[50];
char content[500];
};
struct Note notes[MAX_NOTES];
int numNotes = 0;
void addNote() {
if (numNotes >= MAX_NOTES) {
printf("Maximum number of notes reached.\n");
return;
}
printf("Enter title: ");
scanf("%s", notes[numNotes].title);
printf("Enter content: ");
scanf(" %[^\n]s", notes[numNotes].content);
numNotes++;
printf("Note added successfully.\n");
}
void displayNotes() {
if (numNotes == 0) {
printf("No notes found.\n");
return;
}
printf("********** NOTES **********\n");
for (int i = 0; i < numNotes; i++) {
printf("\nTitle: %s\n", notes[i].title);

11
printf("Content: %s\n", notes[i].content);
}
printf("\nTotal Notes: %d\n", numNotes);
}
int snote() {
int choice;
while (1) {
printf("_____NOTES_____");
printf("\n****** MENU ******\n");
printf("1. Add Note\n");
printf("2. Display Notes\n");
printf("3. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
addNote();
break;
case 2:
displayNotes();
break;
case 3:
printf("Exiting program.\n");
exit(0);
default:
printf("Invalid choice. Please try again.\n");
}
}
return 0;
}
int sdiary() {
int choice;
while (1) {
printf("_____DIARY_____");
printf("\n****** MENU ******\n");
printf("1. Add Entry\n");

12
printf("2. Display Entries\n");
printf("3. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
addEntry();
break;
case 2:
displayEntries();
break;
case 3:
printf("Exiting program.\n");
exit(0);
default:
printf("Invalid choice. Please try again.\n");
}
}
return 0;
}
int main()
{
printf("*****WELCOME*****\n");
printf("1.Diary\n2.Note\n");
printf("Enter your choice: ");
int c;
scanf("%d",&c);
switch (c) {
case 1:
sdiary();
break;
case 2:
snote();
break;
default:
printf("Invalid choice. Please try again.\n");
}
return 0;
}
