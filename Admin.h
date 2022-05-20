class Admin{

protected:

    char admin_ID[5];
    char admin_Name[25];

    Report * r1[4];

public :

    Admin();//constructor
    Admin(char ID[],const char name[],Order * o1 ,Payment *p1);

    void displayAdmin {

      r1[1] =newReport();
    }
~Admin();//destructor


}