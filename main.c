
#include <stdio.h>
#include "cc_common.h"
#include "cc_array.h"

int main() {
    // Create a new array
    CC_Array *ar;
    if (cc_array_new(&ar) != CC_OK) {

    }
// Add an element
    enum cc_stat status = cc_array_add(ar, (void *) "fodxcfvdo");
    if (status == CC_OK) {

    } else if (status == CC_ERR_ALLOC) {

    } else {

    }
// Retrieve a value
    char *foo;
    cc_array_get_at(ar, 0, (void**) &foo);
    printf("%s\n", foo); // Prints "foo"

// Remove a value
    char *removed;
    cc_array_remove_at(ar, 0, (void**) &removed);

    cc_array_destroy(ar);

    return 0;
}


