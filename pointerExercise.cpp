/*
Pointers Exercise
*/
#include <iostream>
using namespace std;

void update(int *ptr18)
{
    *ptr18 = (*ptr18) * 2;
}

void increment(int **p21)
{
    ++(**p21);
}

int main()
{
    // ex 1
    int first1 = 8;
    int second1 = 18;
    int *ptr1 = &second1;
    *ptr1 = 9;
    cout << first1 << " " << second1 << endl;

    // ex 2
    int first2 = 6;
    int *ptr2 = &first2;
    int *q2 = ptr2;
    (*q2)++;
    cout << first2 << endl;

    // ex 3
    int first3 = 8;
    int *ptr3 = &first3;
    cout << (*ptr3)++ << " ";
    cout << first3 << endl;

    // ex 4
    // int *ptr4 = 0;
    // int first4 = 110;
    // *ptr4 = first4; Segmentation Fault
    // cout << *ptr4 << endl;

    // ex 5
    int first5 = 8;
    int second5 = 11;
    int *third5 = &second5;
    first5 = *third5;
    *third5 = *third5 + 2;
    cout << first5 << " " << second5 << endl;

    // ex 6
    float first6 = 12.5;
    float second6 = 21.5;
    float *ptr6 = &first6;
    (*ptr6)++;
    *ptr6 = second6;
    cout << *ptr6 << " " << first6 << " " << second6 << endl;

    // ex 7
    int arr7[5];
    int *ptr7;
    cout << sizeof(arr7) << " " << sizeof(ptr7) << endl;

    // ex 8
    int arr8[] = {11, 21, 13, 14};
    cout << *(arr8) << " " << *(arr8 + 1) << endl;

    // ex 9
    int arr9[6] = {11, 12, 31};
    cout << arr9 << " " << &arr9 << endl;

    // ex 10
    int arr10[6] = {11, 21, 13};
    cout << (arr10 + 1) << endl;

    // ex 11
    int arr11[6] = {11, 21, 31};
    int *ptr11 = arr11;
    cout << ptr11[2] << endl;

    // ex 12
    int arr12[] = {11, 12, 13, 14, 15};
    cout << *(arr12) << " " << *(arr12 + 3) << endl;

    // ex 13
    int arr13[] = {11, 21, 31, 41};
    // int *ptr13 = arr13++;   #Error
    // cout<<*ptr13<<endl;

    // ex 14
    char ch14 = 'a';
    char *ptr14 = &ch14;
    ch14++;
    cout << *ptr14 << endl;

    // ex 15
    char arr15[] = "abcde";
    char *ptr15 = &arr15[0];
    cout << *ptr15 << endl;

    // ex 16
    char arr16[] = "abcde";
    char *ptr16 = &arr16[0];
    ptr16++;
    cout << *ptr16 << endl;

    // ex 17
    char str17[] = "stanzen";
    char *ptr17 = str17;
    cout << str17[0] << " " << ptr17[0] << endl;

    // ex 18
    int i18 = 10;
    update(&i18);
    cout << i18 << endl;

    // ex 19
    int first19 = 110;
    int *ptr19 = &first19;
    int **qtr19 = &ptr19;
    int second19 = (**qtr19)++ + 9;
    cout << first19 << " " << second19 << endl;

    // ex 20
    int first20 = 100;
    int *ptr20 = &first20;
    int **qtr20 = &ptr20;
    int second20 = ++(**qtr20);
    int *rtr20 = *qtr20;
    ++(*rtr20);
    cout << first20 << " " << second20 << endl;

    // ex 21
    int num21 = 110;
    int *ptr21 = &num21;
    increment(&ptr21);
    cout << num21 << endl;

    return 0;
}
