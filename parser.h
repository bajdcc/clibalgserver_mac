#pragma once

#include <string>

namespace clib {

    enum parser_ret {
        P_OK,
        P_ERROR,
    };

    parser_ret parser(std::string input, std::string &output);

    parser_ret visualize(std::string input, std::string &output);
}