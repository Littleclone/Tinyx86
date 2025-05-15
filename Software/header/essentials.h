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
#ifndef ESSENTIALS_H
#define ESSENTIALS_H

#include <stdbool.h>

typedef unsigned char byte;
typedef char sbyte;

/**
 * @brief Determines if the given character is an alphabetic character (either uppercase or lowercase).
 *
 * @param character The character to check, represented as an unsigned char.
 * @return True if the character is alphabetic (A-Z or a-z), otherwise false.
 */
bool P_IsChar(const unsigned char character);

/**
 * Checks if the provided character is a digit (0-9).
 *
 * @param character The character to be checked.
 * @return true if the character is a digit, false otherwise.
 */
bool P_IsDigit(const unsigned char character);

/**
 * Checks if a given character is an uppercase letter.
 *
 * @param character The character to be checked.
 * @return Returns true if the character is an uppercase letter (A-Z), otherwise false.
 */
bool P_IsUpper(const unsigned char character);

/**
 * @brief Checks if a given character is a lowercase alphabetical letter.
 *
 * This function determines whether the specified character falls within
 * the range of lowercase ASCII letters ('a' to 'z').
 *
 * @param character The character to check, represented as an unsigned char.
 * @return Returns true if the character is a lowercase letter, false otherwise.
 */
bool P_IsLower(const unsigned char character);

/**
 * Converts all lowercase alphabetic characters in a string to uppercase.
 *
 * @param string A pointer to the null-terminated string that will be modified in-place.
 */
void P_ToUpper(unsigned char* string);

/**
 * Converts all uppercase characters in a given string to their lowercase equivalents.
 *
 * @param string The string to be transformed. Must be null-terminated. Modifies the string in place.
 */
void P_ToLower(unsigned char* string);

/**
 * @brief Calculates the length of the given string.
 *
 * This function computes the number of characters in the null-terminated string
 * pointed to by the input parameter.
 *
 * @param string A pointer to the null-terminated string whose length is to be calculated.
 *               The string must not be NULL.
 * @return The length of the string (number of characters before the null terminator).
 */
unsigned int P_StrLen(const unsigned char* string);

/**
 * Concatenates two null-terminated strings and returns the newly created string.
 * The resulting string will contain the contents of the first string followed by the contents of the second string.
 * Memory for the new string is dynamically allocated and must be freed by the caller.
 *
 * @param string The first null-terminated string.
 * @param stringToAdd The second null-terminated string to append to the first string.
 * @return A pointer to the newly created null-terminated string, or nullptr if memory allocation fails.
 */
unsigned char* P_StrAdd(const unsigned char* string, const unsigned char* stringToAdd);

/**
 * Creates a copy of the given null-terminated string.
 * Allocates memory for the new string and copies the content of the input string into it.
 * The caller is responsible for freeing the allocated memory.
 *
 * @param string A pointer to a null-terminated string to be copied.
 * @return A pointer to the newly allocated string containing the copied content,
 *         or NULL if the memory allocation fails.
 */
unsigned char* P_StrCpy(const unsigned char* string);


#endif //ESSENTIALS_H
