#include "utils.hpp"

void findOccurrences(const std::string& target_phrase, const std::string& look_up_phrase, size_t*& occurrences, size_t& n_occurrences) {
    // make sure output values are initialize on zero.
    n_occurrences = 0;
    occurrences = nullptr;

    // If theres no way we found and occurancy, end.
    if (look_up_phrase.length() < target_phrase.length()) {
        return;
    }

    // loop vars
    size_t tt_idx = 0; // the amount of character matches of the current analysis
    size_t candidate_start; // the idx of the start of the analyzed phrase
    bool char_match; // current character comparisson
    size_t lu_idx = 0; // current look-up-phrase index being compared.

    while (lu_idx < look_up_phrase.length()) {
        // is the curent look-up-phrase char equal to target_phrase char?
        char_match = std::tolower(look_up_phrase.at(lu_idx)) == std::tolower(target_phrase.at(tt_idx));

        // if we don't have a match yet
        if(!tt_idx) {
            if (char_match) {
                candidate_start = lu_idx;
                tt_idx++;
            }

            lu_idx++;
        }
        // if we are analysing a current match
        else {
            if (char_match) {
                // match is completed!
                if (tt_idx == target_phrase.length()-1) {
                    append(candidate_start, occurrences, n_occurrences);
                    n_occurrences += 1;
                    tt_idx = 0;
                }
                // continue analyzing this phrase
                else {
                    tt_idx++;
                }
                lu_idx++;
            }
            else {
                // move to next phrase and compare with current lu_idx
                tt_idx = 0;
            }
        }

    }
}

void append(const size_t& value, size_t*& vector, const size_t& size) {
    // new memory reservation (with 1 extra space)
    size_t* new_vector = new size_t[size + 1];

    // copy old_elements to new vector
    if (vector != nullptr) {
        for (size_t i = 0; i < size; i++) {
            new_vector[i] = vector[i];
        }

        // delete old vector
        delete[] vector;
    }

    // append new value to new_vector
    new_vector[size] = value;

    // now vector will point to the new range of memory.
    vector = new_vector;
}

std::string indexesToString(size_t*& vector, const size_t& size) {
    std::stringstream indexes;

    indexes << "\'";
    indexes << vector[0];
    indexes << "\'";

    for (size_t i = 1; i < size; i++) {
        indexes << " - ";
        indexes << "\'";
        indexes << vector[i];
        indexes << "\'";
    }

    return indexes.str();
}
