#include <iostream>
#include <string>
using namespace std;

class VirtualDB {
    public: 
        string dbName;
        string dbPasswd;

        VirtualDB () {}
        ~VirtualDB () {}

        virtual string getDbname () = 0;
        virtual string getDbpasswd () = 0;
};

