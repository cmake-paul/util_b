#include "greet.h"

#include <common/gen_greet.h>

#include <algorithm>
#include <iostream>

void greet_world_reversed() {
    auto greet = generate_greeting();
    std::reverse(greet.begin(), greet.end());

    std::cout << "This is util_b, echoing you the following reversed greeting:\n"
              << "'" << greet << "'\n";
}
