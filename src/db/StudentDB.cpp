#include "VirtualDB.cpp"

class StudentDB: public VirtualDB {
    public:
        StudentDB ();
        ~StudentDB (); 

        string getDbname ();
        string getDbpasswd ();
};

StudentDB::StudentDB () {}

StudentDB::~StudentDB () {
    cout<<"StudentDB release."<<endl;
}

string StudentDB::getDbname () {
    return "db_student";
}

string StudentDB::getDbpasswd () {
    return "passwd";
}

