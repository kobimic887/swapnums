#include <iostream>
int getLastDigit(int num)
{
    int l = 0;
    l = num % 10;
    return l;
}

int getDigitSum(int num)
{
    int sum = 0;
    sum += l;
    
    return sum;
}

void getRes(int* p_num)
{
    int sum = 0;
    

}
int main()
{
    int num = 0, orgNum = 0;
    printf("Please enter youir number: \n");
    scanf_s("%d", &num);
    orgNum = num;
    getRes(&num);

    printf(" Original number is %d -> %d", orgNum, num);

}
