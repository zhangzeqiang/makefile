#include <iostream>
#include <ctime>
#include <iostream>
#include <boost/asio.hpp>
#include <boost/bind.hpp>

using namespace std;
using namespace boost::asio;
using boost::asio::ip::tcp;

string make_daytime_string () {
    time_t now = time(0);
    return ctime(&now);
}

int main () {
    io_service io;
    tcp::acceptor acceptor (io, tcp::endpoint (tcp::v4 (), 3000));

    for (;;) {
        tcp::socket socket (io);
        acceptor.accept (socket);
        string message = make_daytime_string ();
        boost::system::error_code ignored_error;
        boost::asio::write(socket, boost::asio::buffer (message), ignored_error);
    }
    return 0;
}
