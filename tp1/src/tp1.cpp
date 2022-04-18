#include <iostream>
#include <vector>
#include "utils.hpp"

int main (int argc, char* argv[]) {
    // the call must be done with 2 arguments
    if (argc != 3) {
        std::cout << "ERROR: two arguments are expected, please run the program again as: \'./tp1 \"[TARGET PHRASE]\" \"[LOOK UP PHRASE]\"\'" << std::endl;
        return 1;
    }

    // create string variables for input phrases
    std::string target_phrase{argv[1]};
    std::string look_up_phrase{argv[2]};

    // search for every occurrence of the target phrase
    size_t n_occurrences;
    size_t* occurrences;
    std::cout << "Searching for phrase: \'" << target_phrase << "\' in text...\n" << std::endl;
    findOccurrences(argv[1], argv[2], occurrences, n_occurrences);

    // output result on stdout
    if (n_occurrences) {
        std::cout << "Founded " << n_occurrences << " match(es) on index(es):" << std::endl;
        std::cout << indexesToString(occurrences, n_occurrences) << std::endl;
    }
    else {
        std::cout << "No match was founded." << std::endl;
    }

    // free memory reserved
    delete[] occurrences;
    return 0;
}
