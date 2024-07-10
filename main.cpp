#include "AboutDog.h"

int main() {
    AboutDog("Spike", DOG_BROWN | DOG_SMART | DOG_HAIRY);
    AboutDog("Ryan", DOG_HAIRY | DOG_BROWN | DOG_SMART );
    AboutDog("Sparkyyyy", DOG_BROWN | DOG_SMART);
    AboutDog("Goku", DOG_HAIRY);
    AboutDog("Bron", DOG_BROWN | DOG_HAIRY);
    AboutDog("Bron", 0);
    return 0;
}
