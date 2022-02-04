#include<stdio.h>
struct student
{
    int sem;
    char name[30];
    int id;
    int number_of_course;
    char course_list[10][30];
    int credit[10];

};
main()
{
    FILE *fp1;
    fp1 = fopen("aa.txt","r");
    int num_student,student,i,j;
    int per_credit_fee;
    int per_exam_fee;
    int total_credit_fee;
    int total_exam_fee;
    int total_fee=0;
    int sum=0;
    int sum1=0;
    //printf("Welcome to PUC CSE department\n");
    //printf("Number of student: ");
    //scanf("%d",&num_student);

    fscanf(fp1,"%d\n",&num_student);

    struct student std[num_student];
    for (i=0; i<num_student; i++)
    {
        //printf("Enter semester: ");
        //scanf("%d",&std[i].sem);
        fscanf(fp1,"%d\n",&std[i].sem);
        //printf("Enter Name: ");
        //scanf("%s",&std[i].name);
        fscanf(fp1,"%s\n",&std[i].name);
        //printf("Enter id: ");
        //scanf("%d",&std[i].id);
        fscanf(fp1,"%d\n",&std[i].id);
        //printf("Enter number of course: ");
        //scanf("%d",&std[i].number_of_course);
        fscanf(fp1,"%d\n",&std[i].number_of_course);
        for (j=0; j<std[i].number_of_course; j++)
        {
            //printf("Course Name: ");
            //scanf("%s",&std[i].course_list[j]);
            fscanf(fp1,"%s\n",&std[i].course_list[j]);
            //printf("Course Credit: ");
            //scanf("%d",&std[i].credit[j]);
            fscanf(fp1,"%d\n",&std[i].credit[j]);
        }
    }
    //printf("enter per credit fee=");
    //scanf("%d",&per_credit_fee);
    fscanf(fp1,"%d\n",&per_credit_fee);    //printf("enter per exam fee=");
    //scanf("%d",&per_exam_fee);
    fscanf(fp1,"%d\n",&per_exam_fee);    //printf("\n");

    FILE *fp2;
    fp2 = fopen("bb.txt","w");

    for (i=0; i<num_student; i++)
    {
        fprintf(fp2,"Semester: %d\n",std[i].sem);        //printf("Semester: %d\n",std[i].sem);
        fprintf(fp2,"Student Name: %s\n",std[i].name);
        //printf("Student Name: %s\n",std[i].name);        fprintf(fp2,"Student id: %d\n",std[i].id);        //printf("Student id: %d\n",std[i].id);
        fprintf(fp2,"Course Number: %d\n",std[i].number_of_course);        //printf("Course Number: %d\n",std[i].number_of_course);
        for (j=0; j<std[i].number_of_course; j++)
        {
            fprintf(fp2,"Course Name: %s\n",std[i].course_list[j]);            //printf("Course Name: %s\n",std[i].course_list[j]);
            fprintf(fp2,"Course Credit: %d\n",std[i].credit[j]);            //printf("Course Credit: %d\n",std[i].credit[j]);
                int total_credit_fee=per_credit_fee*std[i].credit[j];
                sum=sum+total_credit_fee;
                int total_exam_fee=per_exam_fee;
                sum1=sum1+total_exam_fee;
                fprintf(fp2,"Credit fee: %d\n",total_credit_fee);                //printf("Credit fee: %d\n",total_credit_fee);
                fprintf(fp2,"Exam fee: %d\n\n",total_exam_fee);                //printf("Exam fee: %d\n\n",total_exam_fee);
        }
                int total_fee=sum+sum1;
                fprintf(fp2,"Total credit fee: %d\n",sum);
                //printf("Total credit fee: %d\n",sum);
                fprintf(fp2,"Total exam fee: %d\n",sum1);
                //printf("Total exam fee: %d\n",sum1);
                fprintf(fp2,"Total Given fee: %d\n",total_fee);
                //printf("Total Given fee: %d\n",total_fee);
    }
    return(0);
}


