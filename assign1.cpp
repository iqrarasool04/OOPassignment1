#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class School{
    private:
    string SchoolName;
    int TotalStudents;
    int TotalTeachers;
    int AverageStudentTeacherRatio;
    string SchoolType;
    string SchoolLocation;

    public:
    School(){
        SchoolName = "";
        TotalStudents = 0;
        TotalTeachers = 0;
        AverageStudentTeacherRatio = 0;
        SchoolType = "";
        SchoolLocation = "";
    }
    void set_values(string sn, int tstud, int tteach, string stype, string sloc){
        bool validInput = true; 
        SchoolName = sn;
        if (tstud>0 && tstud<=1000){
            TotalStudents = tstud;
        }
        else{
            cout<<"Invalid input for total students"<<endl;
        }
        if (tteach>0 && tteach<=100){
            TotalTeachers = tteach;
        }
        else{
            cout<<"Invalid input for total teachers"<<endl;
        }
        if (stype=="Public" || stype=="Private"){
            SchoolType = stype;
        }
        else{
            cout<<"Invalid input for school type"<<endl;
        }
        if (sloc=="City" || sloc=="Rural"){
            SchoolLocation = sloc;
        }
        else{
            cout<<"Invalid input for school location"<<endl;
        }
        if (TotalTeachers != 0) {
            AverageStudentTeacherRatio = TotalStudents / TotalTeachers;
        }
        else {
            cout << "Cannot calculate average ratio. No teachers available." << endl;
        }
    }
    string get_name(){
        return SchoolName;
    }
    int get_students(){
        return TotalStudents;
    }
    int get_teachers(){
        return TotalTeachers;
    }
    int get_ratio(){
        return AverageStudentTeacherRatio;
    }
    string get_type(){
        return SchoolType;
    }
    string get_location(){
        return SchoolLocation;
    }
    
    void PrintDetails() const{
        cout<<"School name is "<<SchoolName<<endl;
        cout<<"Total Students are "<<TotalStudents<<endl;
        cout<<"Total Teachers are "<<TotalTeachers<<endl;
        cout<<"Average Student-Teacher ratio is "<<AverageStudentTeacherRatio<<endl;
        cout<<"School Type is "<<SchoolType<<endl;
        cout<<"School Location is "<<SchoolLocation<<endl;
    }

    bool operator<(const School& other) const {
        return AverageStudentTeacherRatio < other.AverageStudentTeacherRatio;
    }

    static void sortByRatio(vector<School>& schools) {
        sort(schools.begin(), schools.end());
    }

    static void searchByName(const vector<School>& schools, const string& name) {
        cout << "Searching by School Name: " << name << endl;
        bool found = false;
        for (const auto& school : schools) {
            if (school.SchoolName == name) {
                school.PrintDetails();
                found = true;
            }
        }
        if (!found)
            cout << "School not found." << endl;
    }

    static void searchByLocation(const vector<School>& schools, const string& location) {
        cout << "Searching by School Location: " << location << endl;
        bool found = false;
        for (const auto& school : schools) {
            if (school.SchoolLocation == location) {
                school.PrintDetails();
                found = true;
            }
        }
        if (!found)
            cout << "School not found." << endl;
    }
};

int main(){
    School S1, S2, S3, S4, S5;
    // Object S1
    string sname1, type1, loc1;
    int tstudents1, tteachers1;
    cout<<"Enter school name: ";
    cin>>sname1;
    cout<<endl;
    cout<<"Enter total number of students: ";
    cin>>tstudents1;
    cout<<endl;
    cout<<"Enter total number of teachers: ";
    cin>>tteachers1;
    cout<<endl;
    cout<<"Enter type of school (Public/Private): ";
    cin>>type1;
    cout<<endl;
    cout<<"Enter location of school (City/ Rural): ";
    cin>>loc1;
    cout<<endl;
    S1.set_values(sname1, tstudents1, tteachers1, type1, loc1);
    S1.PrintDetails();
    cout<<endl;
    cout<<endl;

    // Object S2
    string sname2, type2, loc2;
    int tstudents2, tteachers2;
    cout<<"Enter school name: ";
    cin>>sname2;
    cout<<endl;
    cout<<"Enter total number of students: ";
    cin>>tstudents2;
    cout<<endl;
    cout<<"Enter total number of teachers: ";
    cin>>tteachers2;
    cout<<endl;
    cout<<"Enter type of school (Public/Private): ";
    cin>>type2;
    cout<<endl;
    cout<<"Enter location of school (City/ Rural): ";
    cin>>loc2;
    cout<<endl;
    S2.set_values(sname2, tstudents2, tteachers2, type2, loc2);
    S2.PrintDetails();
    cout<<endl;
    cout<<endl;

    // Object S3
    string sname3, type3, loc3;
    int tstudents3, tteachers3;
    cout<<"Enter school name: ";
    cin>>sname3;
    cout<<endl;
    cout<<"Enter total number of students: ";
    cin>>tstudents3;
    cout<<endl;
    cout<<"Enter total number of teachers: ";
    cin>>tteachers3;
    cout<<endl;
    cout<<"Enter type of school (Public/Private): ";
    cin>>type3;
    cout<<endl;
    cout<<"Enter location of school (City/ Rural): ";
    cin>>loc3;
    cout<<endl;
    S3.set_values(sname3, tstudents3, tteachers3, type3, loc3);
    S3.PrintDetails();
    cout<<endl;
    cout<<endl;

    // Object S4
    string sname4, type4, loc4;
    int tstudents4, tteachers4;
    cout<<"Enter school name: ";
    cin>>sname4;
    cout<<endl;
    cout<<"Enter total number of students: ";
    cin>>tstudents4;
    cout<<endl;
    cout<<"Enter total number of teachers: ";
    cin>>tteachers4;
    cout<<endl;
    cout<<"Enter type of school (Public/Private): ";
    cin>>type4;
    cout<<endl;
    cout<<"Enter location of school (City/ Rural): ";
    cin>>loc4;
    cout<<endl;
    S4.set_values(sname4, tstudents4, tteachers4, type4, loc4);
    S4.PrintDetails();
    cout<<endl;
    cout<<endl;

    // Object S5
    string sname5, type5, loc5;
    int tstudents5, tteachers5;
    cout<<"Enter school name: ";
    cin>>sname5;
    cout<<endl;
    cout<<"Enter total number of students: ";
    cin>>tstudents5;
    cout<<endl;
    cout<<"Enter total number of teachers: ";
    cin>>tteachers5;
    cout<<endl;
    cout<<"Enter type of school (Public/Private): ";
    cin>>type5;
    cout<<endl;
    cout<<"Enter location of school (City/ Rural): ";
    cin>>loc5;
    cout<<endl;
    S5.set_values(sname5, tstudents5, tteachers5, type5, loc5);
    S5.PrintDetails();
    cout<<endl;
    cout<<endl;

    vector<School> schools = {S1, S2, S3, S4, S5};
    School::sortByRatio(schools);

    cout << "--- Sorted Schools by Average Student-Teacher Ratio ---" << endl;
    for (const auto& school : schools) {
        school.PrintDetails();
        cout << endl;
    }

    string name, location;
    cout<<"Enter school name to search: ";
    cin>>name;
    cout<<endl;
    School::searchByName(schools, name);

    cout<<"Enter school location to search: ";
    cin>>location;
    cout<<endl;
    School::searchByLocation(schools, location);
}