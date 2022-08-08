#include "my_lib.h"
#include <config.hpp>
#include <cxxopts.hpp>
#include <fmt/format.h>
#include <iostream>
#include <spdlog/spdlog.h>
#include <string>


int main(int argc, char **argv)
{
    int igfd = 1;
    std::string s = print_Hello_World();
    spdlog::info(fmt::format("Welcome to {} Version {} \n", project_name, project_version));
    cxxopts::Options options(project_name.data());
    options.add_options("arguments")("h, help", "Print usage");
    auto results = options.parse(argc, argv);

    if (results.count("help"))
    {
        std::cout << options.help() << std::endl;
    }

    return 0;
}
