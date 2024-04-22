#include "blackdesk/example/argp.hpp"

int main(int argc, char **argv) noexcept
{
        blackdesk::example::CLI cli(argc, argv);
        return cli.run();
}
