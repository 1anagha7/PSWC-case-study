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

void inputStudents(struct Student *students, int numStudents);
void displayData(struct Student students[], int numStudents, const char *srn, const char *name);


