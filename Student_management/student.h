#include <iostream>
#include <string>
#include <vector>

class Student
{
public:
    int id;
    std::string name;
    std::string dob;

public:
    Student(/* args */);
    Student(int _id, std::string _name, std::string _dob);
    ~Student();

    void display();
};

class StudentDB
{
public:
    std::vector<Student> list; // Vector chua student object
    unsigned int capacity;     // Dung luong toi da cua DB
    unsigned int size;         // Dung luong hien tai

public:
    StudentDB(/* args */);
    StudentDB(unsigned int _capacity); // Tao DB moi voi param la dung luong
    ~StudentDB();

    void displayDB();
    void addDB();
    void deleteDB();
    void menu();
};

/*******************************************/

StudentDB::StudentDB(/* args */)
{
}

void StudentDB::displayDB()
{
    std::cout << "Student Information: "
              << "\n"
              << "************************" << std::endl;
    for (int i = 0; i < size; i++)
    {
        Student temp = list[i];
        temp.display();
    }
}

void StudentDB::addDB()
{
    if (size == capacity)
    {
        std::cout << "Full capacit\n";
        return;
    }
    Student _student;
    std::cout << "Student ID: ";
    std::cin >> _student.id;

    std::cout << "Student name: ";
    std::cin.ignore(sizeof(std::streamsize) * 1000, '\n');
    std::getline(std::cin, _student.name);

    std::cout << "Student DOB: ";
    std::cin >> _student.dob;

    list.push_back(_student);
    size = list.size();
}

void StudentDB::deleteDB()
{
    int id;
    std::cout << "ID Student: ";
    std::cin >> id;
    std::cout << std::endl;

    for (int i = 0; i < size; i++)
    {
        if (list[i].id == id)
        {
            for (int j = i; j < size; j++)
            {
                list[j] = list[j + 1];
            }
        }
    }
    list.pop_back();
    size = list.size();
}

StudentDB::StudentDB(unsigned int _capacity) : capacity(_capacity), size(0)
{
}

StudentDB::~StudentDB()
{
}

/*******************************/

Student::Student(/* args */)
{
}

Student::Student(int _id, std::string _name, std::string _dob) : id(_id), name(_name), dob(_dob)
{
}
Student::~Student()
{
}

void Student::display()
{
    std::cout
        //<< "Student information: "
        //<< "\n"
        //<< "*********************************" << std::endl
        << "ID: " << id << std::endl
        << "Name: " << name << std::endl
        << "DoB: " << dob << std::endl
        << std::endl;
}

void StudentDB::menu()
{
    while (1)
    {
        std::cout << "\n"
                  << "************************************"
                  << "\n"
                  << "1. Prin all student" << std::endl
                  << "2. Add new student" << std::endl
                  << "3. Delete studennt" << std::endl
                  << "0. Exit" << std::endl;
        int inp;
        std::cout << "Your choice is: " << std::endl;
        std::cin >> inp;
        std::cout << "\n";

        switch (inp)
        {
        case 1:
            StudentDB::displayDB();
            break;
        case 2:
            StudentDB::addDB();
            break;
        case 3:
            StudentDB::deleteDB();
            break;
        case 0:
            return;
        default:
            std::cout << "\n";
            std::cout << "Please choise again!!"
                      << "\n"
                      << std::endl;
            break;
        }
    }
}
