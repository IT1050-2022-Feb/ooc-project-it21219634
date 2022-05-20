#include"Admin.h"

#include"Order.h"
#include"Payment.h"
#include"Report.h"

#include<iostream>
#include <cstring>

using namespace std;

Admin::Admin() {
     strcpy_s(admin_ID, "");
     strcpy_s(admin_Name, "");
}

Admin::Admin(char ID[], const char name[], Order * o1, Payment*p1) {
  
      strcpy_s(admin_ID, ID);
      strcpy_s(admin_Name, name);
}

void Admin:: displayAdmin() {
        r1[1] = new Report();
}

Admin::~Admin(){
  
        cout << "Admin id :" << admin_ID << endl;
};
