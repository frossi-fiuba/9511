#pragma once


#include <cstddef>
#include <string>
#include <iostream>
#include <sstream>

// PRE: vector exists, size is the number of current elements of the vector
// POS: vector has augmented it's capacity in 1 and with a new int value at the back.
void append(const size_t& value, size_t*& vector, const size_t& size);

// PRE: size is the number of elements of the vector.
// POST: returns a string object with the elements as "idx1 - idx2 - idx3..."
std::string indexesToString(size_t*& vector, const size_t& size);

// PRE: occurences must be an empty pointer, if not, memory will be lost. n_occurences > 0. Strings are not nullptr.
// POST: returns the occurences idx on occurrences array and the amount on n_occurences.
void findOccurrences(const std::string& target_phrase, const std::string& look_up_phrase, size_t*& occurrences, size_t& n_occurrences);
