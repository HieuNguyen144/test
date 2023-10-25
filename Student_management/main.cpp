#include "./student.h"

int main()
{
    Student std1;
    Student std2 = Student(20203690, "Duy", "09/12/2002");

    StudentDB database = StudentDB(100);
    database.menu();
    

    //std::cout<<database.size;

    return 0;
}