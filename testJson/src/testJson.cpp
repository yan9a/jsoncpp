
/////////////////////////////////////////////////////////////////////////////
// Name:         test1.cpp
// Description:  Test program for jsoncpp 
// Author:       Yan Naing Aye
// Date:         2020 October 29
// Reference:    http://cool-emerald.blogspot.com/2020/02/working-with-json-in-c.html
/////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>
#include <sstream>
#include <json/json.h>
using namespace std;
int main() {
    string document(("{\"Serial\" : {\"Baud\":9600, \"Parity\":\"Even\"}}"));
    stringstream ss;
    ss.str(document);
    Json::CharReaderBuilder reader;
    Json::Value obj;
    string errs;
    if(Json::parseFromStream(reader,ss,&obj,&errs)){
        cout << "Serial: baudrate = " << obj["Serial"]["Baud"].asUInt();
        cout << " parity = " << obj["Serial"]["Parity"].asString()<<endl;
    }    
    return 0;
}
