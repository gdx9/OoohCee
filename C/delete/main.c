#include <stdio.h>
#include <stdlib.h>


struct Month{
    char *name;
    char abr[4];
    int daysCnt;
    int monNum;
};

int monthLast(const int monNum)
{
    int days = 0;
    switch(monNum)
    {
        case 12: days += 31;
        case 11: days += 30;
        case 10: days += 31;
        case 9: days += 30;
        case 8: days += 31;
        case 7: days += 31;
        case 6: days += 30;
        case 5: days += 31;
        case 4: days += 30;
        case 3: days += 31;
        case 2: days += 28;
        case 1: days += 31; break;
        default:
            days = 0;
    }
    
    return days;
}

void newArrSum(int a1[], int a2[], int a3[],int size1,int size2,int size3)
{
    int min = (size1<size2) ? size1 : size2;
    for(int i=0; i<min; i++){
        a3[i] = a1[i]+a2[i];
    }
}

void show2DimArr(const int arr[][5], const int I, const int J)
{
    for(int i=0;i<I;i++)
    {
        for(int j=0; j<J;j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void makeItBigger2Dim(int arr[][5], const int I, const int J)
{
    for(int i=0;i<I;i++)
    {
        for(int j=0; j<J;j++)
        {
            arr[i][j] *= 2;
        }
    }
}

void chline(const char str[], int from, int to)
{
    while(from < to ){
        printf("%c", str[from]);
        from++;
    }
}

double inverseDouble(double a, double b)
{
    return -(( -a + (-b) )/2);
}

void larger_of(double *f, double *s)
{
    if(*f>*s)
        *s = *f;
    else
        *f=*s;
}

int showHowMany()
{
    static int cnt = 0;
    cnt++;
    return cnt;
}

int myCompare(const void* a, const void* b)
{
    int intA = *((int *) a) ;
    int intB = *((int *) b) ;
    if(intA == intB) return 0;
    else if(intA < intB) return -1;
    else return 1;
}

struct tnode{
    int cnt;
    struct tnode *left;
    struct tnode *right;
};
/*
int main(int argc, char** argv) {
    
//    const int MONTH_COUNT = 12;
//    struct Month *monthes = (struct Month*) malloc(MONTH_COUNT * sizeof(struct Month));
//    for(int i=0; i<MONTH_COUNT; i++)
//    {
//        monthes[i] = (struct Month) {"month","mon",30,i+1};
//    }
//    for(int i=0; i<MONTH_COUNT; i++)
//    {
//        printf("%d\n",monthLast(monthes[i].monNum));
//    }
//    free(monthes);

//    int a1[] = {1,2,3,4};
//    int a2[] = {1,3,3,3,5,6};
//    int aSum[4];
//    newArrSum(a1,a2,aSum, sizeof(a1)/sizeof(int),sizeof(a2)/sizeof(int),
//        sizeof(aSum)/sizeof(int));
//    for( int i=0; i<sizeof(aSum)/sizeof(int); i++){
//        printf("%d\n", aSum[i]);
//    }
    
//    const int I=3, J=5;
//    int arr[I][J];
//    for(int i=0;i<I;i++)
//    {
//        for(int j=0; j<J;j++)
//        {
//            arr[i][j] = i+j;
//        }
//    }
//    show2DimArr(arr, I, J);
//    makeItBigger2Dim(arr,I,J);
//    printf("\n\n");
//    show2DimArr(arr,I,J);
    
//    chline("helloooooooooooweweooo", 0,10);
    
//    printf("%f",inverseDouble(2.,-4.));
    
//    double a = 10;
//    double b = 40;
//    larger_of(&a,&b);
//    printf("%f",a);
    
//    for(int i=0; i<10000; i++)
//    {
//        showHowMany();
//    }
//    printf("%d", showHowMany());
    
//    srand(time(NULL));
//    const int ARR_CNT = 100;
//    int arr[ARR_CNT];
//    for(int i=0;i<ARR_CNT;i++)
//    {
//        arr[i] = rand()%10 + 1;
//    }
//    qsort(arr, ARR_CNT, sizeof(int), myCompare);
//    for(int i=0; i<ARR_CNT; i++){
//        printf("%d ", arr[i]);
//    }
    
//    srand(time(NULL));
//    int numCnt[10] = {0,0,0,0,0,0,0,0,0,0};
//    for(int i=0; i<1000; i++)
//    {
//        int num = rand()%10 + 1;
//        numCnt[--num]++;
//    }
//    for(int i=0; i<10; i++)
//    {
//        printf("%d : %d\n", i+1, numCnt[i]);
//    }
    
//    int n;
//    scanf("%d", &n);
//    printf("%c", n);
    
//    printf("write your age: ");
//    long n;
//    scanf("%d",&n);
//    long secInYear = 3.156 * pow(10, 7);
//    n *= secInYear;
//    printf("it's near %d sec",n);
    
//    double num;
//    char c;
//    scanf("%lf%c", &num, &c);
//    if('i' == c)
//        printf("%lf\" = %f cm", num, (num*2.54));
//    else
//        printf("%lf cm = %f\"", num, (num/2.54));
    
//    printf("input month number: ");
//    int mon;
//    scanf("%d", &mon);
//    switch(mon){
//        case 12:
//        case 1:
//        case 2: printf("winter"); break;
//        case 3:
//        case 4:
//        case 5: printf("spring"); break;
//        case 6:
//        case 7:
//        case 8: printf("summer"); break;
//        case 9: 
//        case 10:
//        case 11: printf("autumn"); break;
//    }
    
//    int m = 1;
//    int n = 400;
//    int sum = 0;
//    for( ; m<n; m++)
//    {
//        if(m%3 == 0 && m%7 == 0)
//        {
//            printf("num: %d\n", m);
//            sum +=m;
//        }
//    }
//    printf("%d", sum);
    
//    char ohh[20];
//    scanf("%s", &ohh);
//    //printf("%s", ohh);
//    int zero;
//    for(int i=0;i<20; i++)
//    {
//        if('\0' == ohh[i])
//        {
//            zero = i;
//            break;
//        }
//    }
//    for(int i=zero-1; i>0; i--)
//    {
//        ohh[i] = ohh[(zero-i-1)];
//    }
//    printf("%s",ohh);
    
//    double len = 10;
//    int i = 0;
//    while(i<=30)
//    {
//        len *= 1.1;
//        if(len >= 100)
//            printf("100 : %d\n",i);
//        i++;
//    }
//    printf("%lf", len);
    
//    int h=5;
//    int w=2;
//    
//    for(int i=0; i<h; i++)
//    {
//        for(int j=0; j<w; j++)
//            printf("=");
//        printf("\n");
//    }
    
//    int h=10;
//    int w=10;
//    for(int i=0; i<h; i++)
//    {
//        for(int j=0; j<w; j++)
//            if(j%2==0)
//                printf("=");
//            else
//                printf("-");
//        printf("\n");
//    }
    
//    printf("%d\n", sizeof(void*));
//    int c = (1>2) ? 3 : 2;
//    printf("%d", c);
    
//    struct tnode sp;
//    sp.cnt = 22;
//    struct tnode sp2;
//    sp2.cnt = 3000;
//    sp.left = &sp2;
//    printf("%d", sp.left->cnt);
    
    FILE *f = fopen("1.txt","w");
    fputc('r',f);
    
    return 0;
}
*/
