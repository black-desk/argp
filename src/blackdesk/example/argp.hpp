#pragma once

namespace blackdesk::example
{

class CLI {
    public:
        CLI(int argc, char **argv);
        int run() noexcept;
};

}
