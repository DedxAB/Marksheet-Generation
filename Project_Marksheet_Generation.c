#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void userDetails();
void userSubject();
void obtainMark();
void percentageMark();
void markSheet();
int backPapers();
void backPapersSub();
void gradeAdvjava();
void gradeSyscomp();
void gradeNumeric();
void gradeManage();
void gradeLabadvj();
void gradeLabsys();
//void gradeLabmang();
void gradeLabnumer();
char *psResult();
void gpaMark();
char fName[20], roll[20], nO[20], fatherName[20], reg[20];
char arr[4];
int advj, sysComp, numeriC, manGt, obtained, backPaper = 0, advjLab, sysCompLab, numericalLab, /* For gpa calculation */ numericMethLab, advjpLab, sysTLab, advjprog, compdesgn, managment, numericalmethod; //manGLab;
char tGrade, adGrade, sysGrade, numGrade, manGrade, advjLabGrade, syscomLabGrade, /* mangLabGrade,*/ numericLabGrade;
float percentage, gpa;

int main()
{

    int k7 = 0;
    system("cls");
    userDetails();
    userSubject();
    obtainMark();
    percentageMark();
    gradeAdvjava();
    gradeSyscomp();
    gradeNumeric();
    gradeManage();
    gradeLabadvj();
    gradeLabsys();
    //gradeLabmang();
    gradeLabnumer();
    psResult(arr);
    gpaMark();
    markSheet();
    backPapers();
    backPapersSub();
    printf("\n");
    while (k7 < 106)
    {
        printf("-");
        k7++;
    }
    return 0;
}
// ************************* Students Details **************************
void userDetails()
{
    printf("Your name:\n");
    gets(fName);
    printf("Father's Name:\n");
    gets(fatherName);
    printf("Roll and No: \n");
    gets(roll);
    printf("Registration No : \n");
    gets(reg);
}
//*************************** Subject Marks **************************
void userSubject()
{
    printf("***Now enter your Subject's marks carefully***\n");

stage1:
    printf("Advance Java marks(<=100): \n");
    scanf("%d", &advj);
    if (advj > 100)
    {
        printf("Enter original marks\n\n");
        goto stage1;
    }
stage2:
    printf("Advance Java Lab marks(<=100): \n");
    scanf("%d", &advjLab);
    if (advjLab > 100)
    {
        printf("Enter original marks\n\n");
        goto stage2;
    }
stage3:
    printf("Systemprog & Compiler design marks(<=100): \n");
    scanf("%d", &sysComp);
    if (sysComp > 100)
    {
        printf("Enter original marks\n\n");
        goto stage2;
    }
stage4:
    printf("Systemprog & Compiler design Lab marks(<=50): \n");
    scanf("%d", &sysCompLab);
    if (sysCompLab > 50)
    {
        printf("Enter original marks\n\n");
        goto stage4;
    }
stage5:
    printf("Numerical Methods marks(<=100): \n");
    scanf("%d", &numeriC);
    if (numeriC > 100)
    {
        printf("Enter original marks\n\n");
        goto stage3;
    }
stage6:
    printf("Numerical Methods Lab marks(<=50): \n");
    scanf("%d", &numericalLab);
    if (numericalLab > 50)
    {
        printf("Enter original marks\n\n");
        goto stage6;
    }
stage7:
    printf("Management marks(<=100): \n");
    scanf("%d", &manGt);
    if (manGt > 100)
    {
        printf("Enter original marks\n\n");
        goto stage7;
    }
}

void obtainMark()
{
    obtained = advj + sysComp + numeriC + manGt + advjLab + sysCompLab + /*manGLab +*/ numericalLab;
}

void percentageMark()
{
    percentage = (float)obtained / 6;
}

//*************** Subject Grade **************

void gradeAdvjava()
{

    if (advj >= 91)
    {
        adGrade = 'O';
        advjprog = (3 * 10);
    }
    else if (advj >= 81)
    {
        adGrade = 'E';
        advjprog = (3 * 9);
    }
    else if (advj >= 71)
    {
        adGrade = 'A';
        advjprog = (3 * 8);
    }
    else if (advj >= 61)
    {
        adGrade = 'B';
        advjprog = (3 * 7);
    }
    else if (advj >= 51)
    {
        adGrade = 'C';
        advjprog = (3 * 6);
    }
    else if (advj >= 40)
    {
        adGrade = 'D';
        advjprog = (3 * 5);
    }
    else
    {
        adGrade = 'F';
        advjprog = 0;
    }
}
void gradeSyscomp()
{

    if (sysComp >= 91)
    {
        sysGrade = 'O';
        compdesgn = (3 * 10);
    }
    else if (sysComp >= 81)
    {
        sysGrade = 'E';
        compdesgn = (3 * 9);
    }
    else if (sysComp >= 71)
    {
        sysGrade = 'A';
        compdesgn = (3 * 8);
    }
    else if (sysComp >= 61)
    {
        sysGrade = 'B';
        compdesgn = (3 * 7);
    }
    else if (sysComp >= 51)
    {
        sysGrade = 'C';
        compdesgn = (3 * 6);
    }
    else if (sysComp >= 40)
    {
        sysGrade = 'D';
        compdesgn = (3 * 5);
    }
    else
    {
        sysGrade = 'F';
        compdesgn = 0;
    }
}
void gradeNumeric()
{

    if (numeriC >= 91)
    {
        numGrade = 'O';
        numericalmethod = (3 * 10);
    }
    else if (numeriC >= 81)
    {
        numGrade = 'E';
        numericalmethod = (3 * 9);
    }
    else if (numeriC >= 71)
    {
        numGrade = 'A';
        numericalmethod = (3 * 8);
    }
    else if (numeriC >= 61)
    {
        numGrade = 'B';
        numericalmethod = (3 * 7);
    }
    else if (numeriC >= 51)
    {
        numGrade = 'C';
        numericalmethod = (3 * 6);
    }
    else if (numeriC >= 40)
    {
        numGrade = 'D';
        numericalmethod = (3 * 5);
    }
    else
    {
        numGrade = 'F';
        numericalmethod = 0;
    }
}
void gradeManage()
{

    if (manGt >= 91)
    {
        manGrade = 'O';
        managment = (3 * 10);
    }
    else if (manGt >= 81)
    {
        manGrade = 'E';
        managment = (3 * 9);
    }
    else if (manGt >= 71)
    {
        manGrade = 'A';
        managment = (3 * 8);
    }
    else if (manGt >= 61)
    {
        manGrade = 'B';
        managment = (3 * 7);
    }
    else if (manGt >= 51)
    {
        manGrade = 'C';
        managment = (3 * 6);
    }
    else if (manGt >= 40)
    {
        manGrade = 'D';
        managment = (3 * 5);
    }
    else
    {
        manGrade = 'F';
        managment = 0;
    }
}

//********************* Lab Grade ************************

void gradeLabadvj()
{
    if (advjLab >= 91)
    {
        advjLabGrade = 'O';
        advjpLab = (2 * 10);
    }
    else if (advjLab >= 81)
    {
        advjLabGrade = 'E';
        advjpLab = (2 * 9);
    }
    else if (advjLab >= 71)
    {
        advjLabGrade = 'A';
        advjpLab = (2 * 8);
    }
    else if (advjLab >= 61)
    {
        advjLabGrade = 'B';
        advjpLab = (2 * 7);
    }
    else if (advjLab >= 51)
    {
        advjLabGrade = 'C';
        advjpLab = (2 * 6);
    }
    else if (advjLab >= 40)
    {
        advjLabGrade = 'D';
        advjpLab = (2 * 5);
    }
    else
    {
        advjLabGrade = 'F';
        advjpLab = 0;
    }
}

void gradeLabsys()
{
    if (sysCompLab >= 45)
    {
        syscomLabGrade = 'O';
        sysTLab = (1 * 10);
    }
    else if (sysCompLab >= 40)
    {
        syscomLabGrade = 'E';
        sysTLab = (1 * 9);
    }
    else if (sysCompLab >= 35)
    {
        syscomLabGrade = 'A';
        sysTLab = (1 * 8);
    }
    else if (sysCompLab >= 30)
    {
        syscomLabGrade = 'B';
        sysTLab = (1 * 7);
    }
    else if (sysCompLab >= 25)
    {
        syscomLabGrade = 'C';
        sysTLab = (1 * 6);
    }
    else if (sysCompLab >= 20)
    {
        syscomLabGrade = 'D';
        sysTLab = (1 * 5);
    }
    else
    {
        syscomLabGrade = 'F';
        sysTLab = 0;
    }
}
// void gradeLabmang()
// {
//     if (manGLab >= 45)
//         mangLabGrade = 'O';
//     else if (manGLab >= 40)
//         mangLabGrade = 'E';
//     else if (manGLab >= 35)
//         mangLabGrade = 'A';
//     else if (manGLab >= 30)
//         mangLabGrade = 'B';
//     else if (manGLab >= 25)
//         mangLabGrade = 'C';
//     else if (manGLab >= 20)
//         mangLabGrade = 'D';
//     else
//         mangLabGrade = 'F';
// }
void gradeLabnumer()
{
    if (numericalLab >= 45)
    {
        numericLabGrade = 'O';
        numericMethLab = (2 * 10);
    }
    else if (numericalLab >= 40)
    {
        numericLabGrade = 'E';
        numericMethLab = (2 * 9);
    }
    else if (numericalLab >= 35)
    {
        numericLabGrade = 'A';
        numericMethLab = (2 * 8);
    }
    else if (numericalLab >= 30)
    {
        numericLabGrade = 'B';
        numericMethLab = (2 * 7);
    }
    else if (numericalLab >= 25)
    {
        numericLabGrade = 'C';
        numericMethLab = (2 * 6);
    }
    else if (numericalLab >= 20)
    {
        numericLabGrade = 'D';
        numericMethLab = (2 * 5);
    }
    else
    {
        numericLabGrade = 'F';
        numericMethLab = 0;
    }
}

//******************** BackPaper **********************

int backPapers()
{

    if (advj < 40)
    {
        backPaper++;
    }
    if (sysComp < 40)
    {
        backPaper++;
    }
    if (numeriC < 40)
    {
        backPaper++;
    }
    if (manGt < 40)
    {
        backPaper++;
    }
    return backPaper;
    //printf("You have %d BackPaper", backPaper);
}

// **************************************

void backPapersSub()
{

    if (advj < 40)
    {
        printf("\n| *Advance Java\t\t\t\t\t\t\t\t\t\t\t\t |");
    }
    if (sysComp < 40)
    {
        printf("\n| *Compiler Design\t\t\t\t\t\t\t\t\t\t\t |");
    }
    if (numeriC < 40)
    {
        printf("\n| *Numerical Method\t\t\t\t\t\t\t\t\t\t\t |");
    }
    if (manGt < 40)
    {
        printf("\n| *Management\t\t\t\t\t\t\t\t\t\t\t\t |");
    }
    if ((advj > 39) && (sysComp > 39) && (numeriC > 39) && (manGt > 39))
    {
        printf("\n| \tNIL\t\t\t\t\t\t\t\t\t\t\t\t |");
    }
}

//**************** GPA calculate ******************

void gpaMark()
{
    gpa = (float)(numericMethLab + advjpLab + sysTLab + advjprog + compdesgn + managment + numericalmethod) / 17;
}

//************************* Result *******************************

char *psResult(char *arr)
{
    if ((advj < 40) || (sysComp < 40) || (manGt < 40) || (numeriC < 40))
    {
        return arr = "Back";
    }
    else
    {
        return arr = "Pass";
    }
}

//****************************** Marksheet **************************************

void markSheet()
{
    int i = 0, i1 = 0, j = 0, k = 0, k1 = 0, k5 = 0, k6 = 0, k3 = 0;
    while (i < 106)
    {
        printf("-");
        i++;
    }
    printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t |");
    printf("\n| \t\t\t SIXTH SEMESTER OF COMPUTER SCIENCE AND TECHNOLOGY, 2021 \t\t\t |");
    printf("\n|\t\t\t\t\t\t\t\t\t\t\t\t\t |\n");
    while (i1 < 106)
    {
        printf("-");
        i1++;
    }
    printf("\n| CANDIDATE NAME : %s \t \t", fName);
    printf("\n| FATHER'S NAME : %s \t \t", fatherName);
    printf("\n| COLLEGE NAME : CONTAI POLYTECHNIC \t \t ");
    printf("\n| ROLL NO. : %s\t\t REGISTRATION NO. :  %s \n", roll, reg);
    while (j < 106)
    {
        printf("-");
        j++;
    }
    printf("\n|\t     SUBJECTS \t\t\t |  FULL MARKS  | CREDITS |  MARK OBTAINED  |   GRADE OBTAINED   |\n");
    while (k < 106)
    {
        printf("-");
        k++;
    }
    printf("\n| Advance Java programming \t\t |\t100\t|    3    |\t   %d\t    |\t\t%c\t |", advj, adGrade);
    printf("\n| System Programming and Compiler design |\t100\t|    3    |\t   %d\t    |\t\t%c\t |", sysComp, sysGrade);
    printf("\n| Management\t\t\t\t |\t100\t|    3    |\t   %d\t    |\t\t%c\t |", manGt, manGrade);
    printf("\n| Numerical Methods \t\t\t |\t100\t|    3    |\t   %d\t    |\t\t%c\t |\n", numeriC, numGrade);
    while (k1 < 106)
    {
        printf("-");
        k1++;
    }

    //*************** Lab marks *****************

    printf("\n| Advance Java prog. Lab \t\t |\t100\t|    2    |\t   %d\t    |\t\t%c\t |", advjLab, advjLabGrade);
    printf("\n| System Prog. & Compiler design Lab \t |\t50\t|    1    |\t   %d\t    |\t\t%c\t |", sysCompLab, syscomLabGrade);
    //printf("\n| Management Lab\t\t\t |\t50\t|    3    |\t   %d\t    |\t\t%c\t |", manGLab, mangLabGrade);
    printf("\n| Numerical Methods Lab\t\t\t |\t50\t|    2    |\t   %d\t    |\t\t%c\t |\n", numericalLab, numericLabGrade);
    while (k3 < 106)
    {
        printf("-");
        k3++;
    }
    printf("\n|\t     Total \t\t\t |\t600\t|    -    |\t   %d\t    |\t\t-\t |\n", obtained);
    while (k5 < 106)
    {
        printf("-");
        k5++;
    }

    // *************** Backpapers and Other result ****************

    printf("\n| \t BACK PAPER(S) \t\t\t |      GRADE POINT AVG\t  |    PERCENTAGE OF MARKS    |\t RESULT\t |\n");
    printf("| \t\t%d\t\t\t |\t     %0.1f \t  |\t\t%0.1f  \t      |\t  %s\t |\n", backPapers(), gpa, percentage, psResult(arr));
    while (k6 < 106)
    {
        printf("-");
        k6++;
    }

    // *************** How many backpaper and others *********************

    printf("\n| BACK PAPER(S) :\t\t\t\t\t\t\t\t\t\t\t |");
}
