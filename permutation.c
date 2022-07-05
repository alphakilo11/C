// saves permutation variants to endergebnis variable

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int permutation(folge) {
    if (size(folge) > 1) {
        original = folge.copy()
        for i in range(len(folge)):
            ergebnis[level] = folge[i]
            del folge[i]
            level = level + 1
            permutation(folge)
            folge = original.copy()
            if i == len(original) - 1:
                level = level - 1
    } else {
        ergebnis[level] = folge[0]
        level = level - 1
        endergebnis.append(ergebnis)
    };
        
};  
folge = "abcdefghij"
folge = [i for i in folge]
ergebnis = [""] * len(folge)
endergebnis = []
level = 0
startzeit = timer()
permutation(folge)
print("Dauer:", timer() - startzeit)
print(len(endergebnis))