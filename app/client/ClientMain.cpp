#include <iostream>
#include "ui/CUIClient.hpp"

using namespace cli;

int main () {
    shared_ptr<CUIClient> client(new CUIClient());
    client->start();
    return 0;
}
