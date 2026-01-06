#include "protein_translation.h"
#include <iostream>

namespace protein_translation {

    std::vector<std::string> proteins(std::string str)
    {
        // if (str.length() < 2) return "ERR";

        std::vector<std::string> result{};

        for (size_t i = 0, increment = 3; i <= str.length() - 3; i += increment) {
            std::string protein = str.substr(i, 3);
            std::cerr << "Checking: " << protein << std::endl;
            if (protein == "AUG") {
                result.emplace_back("Methionine");
            }
            if (protein == "UUU" || protein == "UUC" ) {
                result.emplace_back("Phenylalanine");
            }
            if (protein == "UUA" || protein == "UUG" ) {
                result.emplace_back("Leucine");
            }
            if (protein == "" || protein == "" ) {
                result.emplace_back("");
            }
            if (protein == "UCU" || protein == "UCC" || protein == "UCA" || protein == "UCG" ) {
                result.emplace_back("Serine");
            }
            if (protein == "UAU" || protein == "UAC" ) {
                result.emplace_back("Tyrosine");
            }
            if (protein == "UGU" || protein == "UGC" ) {
                result.emplace_back("Cysteine");
            }
            if (protein == "UGG") {
                result.emplace_back("Tryptophan");
            }
            if (protein == "UAA" || protein == "UAG" || protein == "UGA" ) {
                return result;
            }
        }
    return result;
    }

} // namespace protein_translation

int main()
{
    // std::cout << protein_translation::proteins("AUGUUUUUC") << '\n';
    // std::cout << protein_translation::proteins("UUU") << '\n';
    // std::cout << protein_translation::proteins("UUC") << '\n';

    for (std::string str : protein_translation::proteins("AUGUUUUUC")){
        std::cout << str << std::endl;
    }
    return 0;
}
