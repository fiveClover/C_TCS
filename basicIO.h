//
// Created by Kartik on 3/22/2018.
//
#pragma once

#include <ctype.h>
#include <stdio.h>
#include <mem.h>

void cI();

void inputString(char prompt[], char address[], int maximumLength);

void inputInteger(char prompt[], int *address);

void trimNewLine(char string[]);

void cI() {
    fflush(stdin);
}

void inputString(char prompt[], char address[], int maximumLength) {
    fputs(prompt, stdout);
    cI();
    fgets(address, maximumLength, stdin);
    trimNewLine(address);
}


void trimNewLine(char string[]) {
    if (string[strlen(string) - 1] = '\n')
        string[strlen(string) - 1] = '\0';
}

void inputInteger(char *prompt, int *address) {
    //todo implement later
    char flag='n';
}
