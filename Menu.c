#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void readfile(FILE *read_database) {
	char text[100];
	printf("\n|||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
	read_database = fopen("Cars.txt","r");
	while (fgets(text,100,read_database)) {
		printf("%s", text);
	}
	fclose(read_database);
	printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n");
}

/*void writetofile(FILE *writtento_database) {
	char text[100], licensenumber[4];
	bool exists;
	
	printf("\n");
	cardatabase = fopen("Cars.txt","r+");
	exists = false;
	
	printf("License Plate Number: ");
	scanf("%s", &licensenumber);
			
	if (!exists) {
		while (fgets(text,4,cardatabase)) {;
			if (text == licensenumber) {
				exists = true;
				break;
			} else
	} else {
		while (exists) {
			printf("The license plate number already exists on the database.")
			printf("Please enter a new one here: ");
			scanf("%d", &licensenumber);
			if (text != licenseumber)
				exists = false;
		}
	}
	
	fclose(cardatabase);
} */

int main(void) {
	
	int command;
	bool missingfileschecked = false;
	FILE *cardatabase, *colordatabase, *manufacturerdatabase;
	
	do {
	
		if (!missingfileschecked)
			cardatabase = fopen("Cars.txt", "r");
			colordatabase = fopen("BasicColors.txt", "r");
			manufacturerdatabase = fopen("Companies.txt", "r");
			if (cardatabase == NULL || colordatabase == NULL || manufacturerdatabase == NULL) {
				printf("One of the program's essential files seems to be missing, shutting down...\n");
				system("PAUSE");
				system("cls");
				return 1;
			}
			else {
				fclose(cardatabase);
				fclose(colordatabase);
				fclose(manufacturerdatabase);
				missingfileschecked = true;
			}
		
		printf("==============================\n");
		printf("==========BASIC MENU==========\n");
		printf("==============================\n");
		printf("[1] - SHOW ALL\n");
		printf("[2] - INSERT NEW ENTRY\n");
		printf("[3] - DELETE ENTRY\n");
		printf("[4] - UPDATE ENTRY\n");
		printf("[5] - SEARCH\n");
		printf("[6] - UPDATE DATABASE\n");
		printf("[0] - EXIT\n");
		printf("CHOOSE OPTION: ");
		scanf("%d", &command);
		
		switch(command) {
			case 0:
				break;
			case 1:
				readfile(cardatabase);
				break;
			case 2:
				//writetofile(cardatabase);
				break;
			case 3:
				//todo
				break;
			case 4:
				//todo
				break;
			case 5:
				//todo
				break;
			case 6:
				//todo
				break;
		}
		
		if (command != 0) {
			system("PAUSE");
			system("cls");
		}
	
	} while (command != 0);
	
	return 0;
}
