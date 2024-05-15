struct Student 
{
    char name[50];
    char srn[100];
    int sem;
    int isa1[6];
    int isa2[6];
    int esa[6];
    int total[6];
    char grade[6];
};

void student_info(struct Student *students, int numStudents);
void calc_grade(struct Student *students, int numStudents);
void savestudentdata(struct Student *students, int numStudents);
void displaystudentdata(struct Student *students,int numStudents,const char search[]);
void editdata(struct Student *students,int numStudents);
void printall();

