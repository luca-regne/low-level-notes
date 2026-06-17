#include <stdio.h>
#include <assert.h>

/* Finish initializing the flags */

const short FLAG_ON = 1 << 0; // 1  (0x01 -> 0000 0001)
const short FLAG_MOVEMENT = 1 << 1; // 2  (0x02 -> 0000 0010)
const short FLAG_TRANSPARENT = 1 << 2; // 4  (0x04 -> 0000 0100)
const short FLAG_ALIVE = 1 << 3; // 8 (0x08 -> 0000 1000)
const short FLAG_BROKEN = 1 << 4; // 16 (0x10 -> 0001 0000)
const short FLAG_EDIBLE = 1 << 5; // 32 (0x20 -> -> 0010 0000)

int main() {
    short attributes = 0; // 0x0 -> 0000 00000

    /* Set the attributes ON, TRANSPARENT, and BROKEN */
    // attributes ^= 1 << 0; // 0000 00000 XOR 0000 0001 -> 0000 00001
    // attributes ^= 1 << 2; // 0000 00001 XOR 0000 0100 -> 0000 01001
    // attributes ^= 1 << 4; // 0000 01001 XOR 0001 0000 -> 0000 01001

    attributes |= (FLAG_ON | FLAG_TRANSPARENT | FLAG_BROKEN);

    assert(attributes == (FLAG_ON | FLAG_TRANSPARENT | FLAG_BROKEN));

    /* Modify (set/clear/toggle) so the only attributes are ON and ALIVE */

    attributes &= ~(FLAG_TRANSPARENT | FLAG_BROKEN); //(FLAG_TRANSPARENT | FLAG_BROKEN);
    attributes |= FLAG_ALIVE;

    assert(attributes == (FLAG_ON | FLAG_ALIVE));

    // /* Check if the ALIVE flag is set */
    assert((attributes & FLAG_ALIVE));

    // /* Check if the BROKEN flag is not set */
    assert(!(attributes & FLAG_BROKEN));

    // /* Modify so only the EDIBLE attribute is set */
    attributes = FLAG_EDIBLE;
    assert(attributes == FLAG_EDIBLE);

    printf("Done!");
}