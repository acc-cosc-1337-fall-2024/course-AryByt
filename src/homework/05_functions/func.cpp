//add include statements

//add function code here
#include "func.h"
#include <string>

double get_gc_content(const std::string &dna)
{
    int count_GC = 0;
    for (char nucleotide : dna)
    {
        if (nucleotide == 'G' || nucleotide == 'C')
        {
            count_GC++;
        }
    }
    return static_cast<double>(count_GC) / dna.length();
}

std::string get_dna_complement(const std::string& dna) {
    std::string complement = dna;
    int n = complement.length();
    for (int i = 0; i < n / 2; ++i) {
        char temp = complement[i];
        complement[i] = complement[n - i - 1];
        complement[n - i - 1] = temp;
    }
    for (char& nucleotide : complement) {
        switch (nucleotide) {
            case 'A':
                nucleotide = 'T';
                break;
            case 'T':
                nucleotide = 'A';
                break;
            case 'C':
                nucleotide = 'G';
                break;
            case 'G':
                nucleotide = 'C';
                break;
            default:
                break;
        }
    }
    return complement;
}
