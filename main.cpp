#include "iostream"
#include "string.h"
#include <sqlite3.h>
#include "bugE.h"

class Initializer_DB
{
private:
    sqlite3 *db;
    char *errorMessage;
    int connected;

public:
    Initializer_DB()
    {
        std::cout << "[*] - Setting up the database" << std::endl;
        connected = sqlite3_open("bug-tracker.db", &db);
        connected == 1 ? std::cout << "[*] - Connected to database" << std::endl : std::cout << "[*] - Error while connecting" << std::endl;
    }

    ~Initializer_DB()
    {
        sqlite3_close(db);
    }
};


int main() {
    std::cout << " Initializer program" << std::endl;
    Initializer_DB idb;
    if(initiatize_application()) {
        std::cout << "Reached!!" << std::endl;
    }
    return 0;
}