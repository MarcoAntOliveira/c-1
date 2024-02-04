#include <iostream>
#include <sqlite3.h>
#include <stdio.h>

using namespace std;
static int createDB(const char* s);
static int createTable(const char* s);

int main(){
    const char* dir = 'C:\\Users\\marco\\OneDrive\\Área de Trabalho\\Banco de Dados';
    sqlite3* DB;
    createDB(dir);
    createTable(dir);

    return 0;
}
static int createDB(const char* s)
{
    sqlite3* DB;
    int exit = 0;

    exit = sqlite3_open(s, &DB);
    sqlite3_close(DB);
    return 0;
}
