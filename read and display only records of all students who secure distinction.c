#include 
int main()
{
    char n[10];
    int c, e, ne, m;
    float p;
    FILE *fptr;
    fptr = fopen("student.txt","r");
    while(fscanf(fptr, "%s %d %d %d %d", n, &c, &e, &ne, &m) != EOF)
    {      
       p = (e+ne+m)/3;
       if (p>=80)
       {
        printf("%s %d  %d  %d  %d", n, c, e, ne, m);
       }
    }
    fclose(fptr);
    return 0;
}
