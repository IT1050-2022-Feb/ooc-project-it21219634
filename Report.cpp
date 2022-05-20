#include"Report.h"

#include"Admin.h"

#include<iostream>
#include <cstring>

Report :: Report(){

  strcpy_s(report_ID,"");
  strcpy_s(Details,"");
}
int Report:: getgenerateReport() {
  
   return Details[75];
}

Report::~Report() {
  
    cout << "Report id :" << "Deleted " << endl;
    reportID << "Deleted " << endl;
  
};
