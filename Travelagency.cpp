
#include<iostream>
#include<cstdio>
#include<fstream>
#include<sstream>
#include<string>
#include<cstdlib>
#include<conio.h>
#include<sal.h>
#include <tchar.h>
#include <sqlext.h>
#include <sqltypes.h>
#include <mysql.h>
#include<windows.h>

using namespace std;
 // global variable
 int qstate;
 MYSQL* conn;
 mysql_row row;
 MYSQL_RES* res;
 // global variable end


class db_response{
public:
static void connectionsFuncation(){

conn =mysql_inti(0);
    if(conn){

    }

}
};