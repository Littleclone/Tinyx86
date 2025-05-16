//
// Created by Hannah on 15.05.2025.
//
/*
 * MIT License
 * Copyright (c) 2025 Littleclone
 * Permission is granted to use, copy, modify, and distribute this software,
 * provided that the copyright notice and this permission notice are included.
 * The software is provided "as is", without warranty of any kind.
 */
#include "../header/essentials.h"
#include <stdio.h>
#include <stdlib.h>

// Chars / Strings

bool P_IsChar(const unsigned char character) {
    return (character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z');
}
bool P_IsDigit(const unsigned char character) {
    return character >= '0' && character <= '9';
}
bool P_IsUpper(const unsigned char character) {
    return character >= 'A' && character <= 'Z';
}
bool P_IsLower(const unsigned char character) {
    return character >= 'a' && character <= 'z';
}
void P_ToUpper(unsigned char* string) {
    while (*string != '\0') {
        if (P_IsLower(*string)) {
            *string -= 32;
        }
        ++string;
    }
}
void P_ToLower(unsigned char* string) {
    while (*string != '\0') {
        if (P_IsUpper(*string)) {
            *string += 32;
        }
        ++string;
    }
}
unsigned int P_StrLen(const unsigned char* string) {
    unsigned int counter = 0;
    while (*string != '\0') {
        ++counter;
        ++string;
    }
    return counter;
}
unsigned char* P_StrAdd(const unsigned char* string, const unsigned char* stringToAdd) {
    const unsigned int stringLenght = P_StrLen(string);
    const unsigned int stringToAddLenght = P_StrLen(stringToAdd);
    unsigned char* const newString = malloc(stringLenght + stringToAddLenght + 1);
    if (newString == NULL) {
        return NULL;
    }
    unsigned char* tempStringPtr = newString;
    while (*string != '\0') {
        *tempStringPtr = *string;
        ++tempStringPtr;
        ++string;
    }
    while (*stringToAdd != '\0') {
        *tempStringPtr = *stringToAdd;
        ++tempStringPtr;
        ++stringToAdd;
    }
    *tempStringPtr = '\0';
    return newString;
}
unsigned char* P_StrCpy(const unsigned char* string) {
    const unsigned int stringLenght = P_StrLen(string);
    unsigned char* const newString = malloc(stringLenght + 1);
    if (newString == NULL) {
        return NULL;
    }
    unsigned char* tempString = newString;
    while (*string != '\0') {
        *tempString = *string;
        ++tempString;
        ++string;
    }
    return newString;
}
bool P_StrCmp(const unsigned char* string1, const unsigned char* string2) {
    while (1) {
        if (*string1 == '\0' && *string2 == '\0') {
            return true;
        }
        if (*string1 == *string2) {
            ++string1;
            ++string2;
        }
        else {
            return false;
        }
    }
}