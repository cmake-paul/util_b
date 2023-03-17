#include <common/gen_greet.h>

#include <iostream>

void greet_world() {
    std::cout << "This is util_a, echoing you the following greeting:\n"
              << "'" << generate_greeting() << "'\n";
}
