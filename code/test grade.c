#include <stdio.h>
int main()
{
int i, j;
int total_marks[] = {6, 7, 4, 6, 9, 7, 6, 2, 4, 3, 4, 1};
int marks_count[11];
for(i = 0; i < 11; i++) {
marks_count[i] = 0;
}
for(i = 0; i < 12; i++) {
marks_count[total_marks[i]]++;#include <stdio.h>
int main()
{
int marks, i, count;
int total_marks[] = {86, 78, 94, 68, 92, 78, 64, 62, 72, 61, 72, 66, 65,
65, 80, 72, 62, 68, 81, 62, 56, 68, 58, 56, 82, 70, 74, 78, 76, 84, 88, 73,
62, 66, 76, 70, 67, 65, 77, 63};
for(marks = 50; marks <= 100; marks++) {
count = 0;
for(i = 0; i < 40; i++) {
if(total_marks[i] == marks) {
count++;
}
}
printf("Marks: %d Count: %d\n", marks, count);
}
for(j = 0; j <= 10; j++) {
printf("%d ", marks_count[j]);
}
printf("\n");
}
return 0;
}
