#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define BINARY_BASE "2"
#define OCTAL_BASE "8"
#define DECIM_BASE "10"
#define HEXAD_BASE "16"

#define EQUAL_STRINGS 0

#define HELP_PARAM "--help"
#define BINARY_PARAM "--b"
#define OCTAL_PARAM "--o"
#define DECIM_PARAM "--d"
#define HEXAD_PARAM "--h"
#define ALL_PARAM "--all"


typedef enum {NO_ERROR, MISSING_PARAM, WRONG_PARAM, PARAM_OVERFLOW, NUMBER_DIFF_BASE} te_error;


void run(int argc, char *argv[]);

te_error check_errors(int argc, char *argv[]);
te_error check_param(int argc, char *argv[]);
te_error check_base(char *number, char *base);
void print_errors(te_error err);

void help_menu();

void any_to_decimal(char *original_number, char *number_base);
void decimal_to_any(char *original_number, char *number_base);

int define_transformation_base(char original_base);
int transform_chars_to_number(char algarism);
char transform_numbers_to_char(int number);
void print_numbers(char *number_to_print, int base);


int main(int argc, char *argv[]) {
	run(argc, argv);
}


void run(int argc, char *argv[]) {
	te_error err = check_errors(argc, argv);

	if (err != NO_ERROR) {
		print_errors(err);
		return;
	}
	if (strcmp(argv[1], HELP_PARAM) == EQUAL_STRINGS) {
		help_menu();
		return;
	}

	char *number, *number_base; 

	strcpy(number, argv[1]);
	strcpy(number_base, argv[2]);
	for (int i = 4; i < argc; i++) {
		switch (argv[i][2]) {
			case 'b':
				if (strcmp(number_base, DECIM_BASE) == EQUAL_STRINGS)
					any_to_decimal(number, number_base);
				decimal_to_any(number, BINARY_BASE);
				break;
			case 'o':
				if (strcmp(number_base, DECIM_BASE) == EQUAL_STRINGS)
					any_to_decimal(number, number_base);
				decimal_to_any(number, BINARY_BASE);
				break;
			case 'd':
				if (strcmp(number_base, DECIM_BASE) == EQUAL_STRINGS)
					any_to_decimal(number, number_base);
				decimal_to_any(number, BINARY_BASE);
				break;
			case 'h':
				if (strcmp(number_base, DECIM_BASE) == EQUAL_STRINGS)
					any_to_decimal(number, number_base);
				decimal_to_any(number, BINARY_BASE);
				break;
			case 'a':
				if (strcmp(number_base, DECIM_BASE) == EQUAL_STRINGS)
					any_to_decimal(number, number_base);
				decimal_to_any(number, BINARY_BASE);
				break;
		}
	}
}

te_error check_errors(int argc, char *argv[]) {
	te_error err;
	if (argc < 4) {
		if (argc == 2) {
			if (strcmp(argv[1], HELP_PARAM) != EQUAL_STRINGS)
				err = WRONG_PARAM;
		} else 
			err = MISSING_PARAM;
	} else if (argc >= 4 && argc <= 6) {
		err = check_param(argc, argv);
		if (err == NO_ERROR)
			check_base(argv[1], argv[2]);
	} else if (argc > 6)
		err = PARAM_OVERFLOW;
	
	return err;
}

te_error check_param(int argc, char *argv[]) {
	int i;
	te_error err = NO_ERROR;

	for (i = 4; i < argc; i++) {
		if (strcmp(argv[i], BINARY_PARAM) != EQUAL_STRINGS) {
			err = WRONG_PARAM;
			break;
		} else if (strcmp(argv[i], OCTAL_PARAM) != EQUAL_STRINGS) {
			err = WRONG_PARAM;
			break;
		} else if (strcmp(argv[i], DECIM_PARAM) != EQUAL_STRINGS) {
			err = WRONG_PARAM;
			break;
		} else if (strcmp(argv[i], HEXAD_PARAM) != EQUAL_STRINGS) {
			err = WRONG_PARAM;
			break;
		} else if (strcmp(argv[i], ALL_PARAM) != EQUAL_STRINGS) {
			err = WRONG_PARAM;
			break;
		}
	}

	return err;
}

te_error check_base(char *number, char *base) {
	int err = NO_ERROR;
	int i, len = sizeof(number);

	switch (base[2]) {
		case 'b':	
			for (i = 0; i < len; i++) {
				if (number[i] > 1 || isalpha(number[i])){
					err == NUMBER_DIFF_BASE;
					break;
				}
			}
			break;
		case 'o':
			for (i = 0; i < len; i++) {
				if (number[i] > 7 || isalpha(number[i])){
					err == NUMBER_DIFF_BASE;
					break;
				}
			}
			break;
		case 'd':
			for (i = 0; i < len; i++) {
				if (isalpha(number[i])){
					err == NUMBER_DIFF_BASE;
					break;
				}
			}
			break;
		case 'h':
			for (i = 0; i < len; i++) {
				if (!isxdigit(number[i])){
					err == NUMBER_DIFF_BASE;
					break;
				}
			}
			break;
	}

	return err;
}

void print_errors(te_error err) {
	switch (err) {
		case MISSING_PARAM:   
			printf("============= MISSING  PARAMETERS =============   \n"
				   "     Try using \"--help\" to get help.            \n");
			break;
		case WRONG_PARAM:
			printf("============== WRONG  PARAMETERS ==============   \n"
				   "     Try using \"--help\" to get help.            \n");
			break;
		case PARAM_OVERFLOW:
			printf("============ OVERFLOW  OF  PARAMETERS =========== \n"
				   "        Try using \"--help\" to get help.         \n");
			break;
		case NUMBER_DIFF_BASE:
			printf("========= NUMBER  DIFFERENT  THE  BASE ========= \n"
				   "        Try using \"--help\" to get help.         \n");
			break;
	}
}

void any_to_decimal(char *original_number, char *number_base) {
	int base, max_power, algarism,
		new_number = 0;

	base = define_transformation_base(number_base[2]);
	max_power = strlen(original_number) - 1;

	for (int i = max_power, j = 0; i >= 0; i--, j++) {
		algarism = transform_chars_to_number(original_number[j]);
		algarism *= pow(base, i);
		new_number += algarism;
	}

	printf("%d (%d)   ", new_number, base);
}

void decimal_to_any(char *original_number, char *wanted_base) {
	int number_int_ver = atoi(original_number),
		base = define_transformation_base(wanted_base[2]),
		remainder, i;
	char new_number[1000000], algarism;
	
	for (i = 0; number_int_ver != 0; i++) {
		remainder = number_int_ver % base;
		number_int_ver /= 2;

		algarism = transform_numbers_to_char(remainder);
		new_number[i] = algarism;
	}
	new_number[i] = '\0';
	print_numbers(new_number, base);
}

int define_transformation_base(char original_base) {
	int base;

	switch (original_base) {
		case 'b':   base = BINARY_BASE;   break;
		case 'o':   base = OCTAL_BASE;    break;
		case 'h':   base = HEXAD_BASE;    break;
		case 'd':   base = DECIM_BASE;    break;
	}

	return base;
}

int transform_chars_to_number(char character) {
	int algarism;

	character = toupper(character);

	switch (character) {
		case 'A':   algarism = 10;   break;
		case 'B':   algarism = 11;   break;
		case 'C':   algarism = 12;   break;
		case 'D':   algarism = 13;   break;
		case 'E':   algarism = 14;   break;
		case 'F':   algarism = 15;   break;
		default:    algarism = atoi(&character);
	}

	return algarism;
}

char transform_numbers_to_char(int number) {
	char character;

	switch (number) {
	case 10:   character = 'A';    break;
	case 11:   character = 'B';    break;
	case 12:   character = 'C';    break;
	case 13:   character = 'D';    break;
	case 14:   character = 'E';    break;
	case 15:   character = 'F';    break;
	default:   character = number + '0';
	}

	return character;
}

void print_numbers(char *number_to_print, int base) {
	for (int i = strlen(number_to_print); i >= 0; i--)
		printf("%c", number_to_print[i]);
	printf(" (%d)   ");
}

void help_menu() {
	printf("Usage: ./basex [ORIGIN_NUMBER] [ORIGIN_BASE] [CONVERSION_BASE] \n");
	printf("Converts a number in differents bases. \n");
	printf("\n");

	printf("Avaible argumentes: \n");
	printf("--help          display this help menu. \n");
	printf("--b             converts to binary \n");
    printf("--d             converts to decimal \n");
    printf("--o             converts to octal \n");
    printf("--h             converts to hexadecimal \n");
    printf("--all           converts to all other bases \n");
}
