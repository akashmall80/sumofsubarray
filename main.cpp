//Print sum of subarray and find largest(using brute force)
//array is {1,2,3,4,5}
//1=1
//1,2=3
//1,2,3=6
//1,2,3,4=10
//1,2,3,4,5=15  //this is the largest sum of subarray
//2=2
//2,3=5
//2,3,4=9
//2,3,4,5=14
//3=3
//3,4=7
//3,4,5=12
//4=4
//4,5=9
//5=5
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int max=0;
    //if i use int sum=0 here
    //then it will give
    //1=1, 1+1=2, 2+2=4, 4+1=5, 5+2=7, 7+3=10, 10+1=11, 11+2=13, 13+3=16, 16+4=20 and so on but that it not i want
    // i want 1,3,6,10,15 and so on
    int n=sizeof(arr)/sizeof(int);
    for(int i=0; i<n; i++)
    {
        //if i will use int sum=0
        //1=1
        //1=1+1=2
        //2=2+1=4
        //1=4+1=5
        //2=5+2=7
        //3=7+3=10
        //1=10+1=11
        //2=11+2=13
        //3=13+3=16
        //4=16+4=20
        //1=20+1=21
        //2=21+2=23
        //3=23+3=26
        //4=26+4=30
        //5=30+5=35
        //then sum=0
        //2=2
        //2=2+2=4
        //3=4+3=7
        //2=7+2=9
        //3=9+3=12
        //4=12+4=16
        //2=16+2=18
        //3=18+3=21
        //4=21+4=25
        //5=25+5=30
        //then sum=0
        //and so on
        for(int j=i; j<n; j++)
        {
            int sum=0;
            //here
            //1
            //1
            //3
            //1
            //3
            //6
            //1
            //3
            //6
            //10
            //and so on it is giving the sum of all the subarray
            for(int k=i; k<=j; k++)
            {
                sum=sum+arr[k];
                cout<<arr[k]<<"="<<sum<<endl;
               if(max<sum)
            {
                max=sum;
            }

            }

            cout<<endl;
        }
    }
      cout<<max;

    return 0;
}
