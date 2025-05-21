#include "stack.h"
#include <assert.h>

// An example test
void test_single_element() {
    clear();
    push(24);
    assert(pop() == 24);
    assert(empty());
}

// XXX You can find what each function does in stack.h

// TODO Write more tests below
// Since your tests depend on functions written by your row's other teams,
// you cannot run your tests until they are done!

// Remember to call your tests in main()
int main() {
    test_single_element();

    // Keep this call here so that you don't leak the nodes left over from
    // the last test
    clear();
}
