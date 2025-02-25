// //P1908 逆序对（出生）
// #include <stdio.h>
// int main()
// {
//     int n,a[10001]={0},count=0;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(a[i]>a[j])
//             {
//                 count++;            
//             }
//         }
//     }
//     printf("%d",count);
//     return
// }

//归并排列
#include <stdio.h>
long long merge(int arr[],int left,int mid,int right){
    int n1=mid-left+1,n2=right-mid;
    int L[1000005],R[1000005];
    for(int i=0;i<n1;i++)
        L[i]=arr[left+i];
    for(int j=0;j<n2;j++)
        R[j]=arr[mid+1+j];
    int i=0;
    int j=0;
    int k=left; //原数组arr的索引，放回数据到原数组
    long long inv_count=0;
    while(i<n1&&j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k]=L[i];
            i++;
        }
        else
        {
            arr[k]=R[j];
            j++;
            inv_count+=(n1-i);//移动了以及在新储存数组的位置，即逆序对数量增加 L 数组中剩余元素的个数
        }
        k++;
    }


    while(i<n1)// 将 L 数组中剩余的元素依次放入原数组 arr 中
    {      
        arr[k]=L[i];
        i++;
        k++;
    }

    while(j<n2)
    {
        arr[k]=R[j];
        j++;
        k++;
    }

    return inv_count;  //返回数值
}

long long mergesort(int arr[],int left,int right)
{
    long long inv_count=0;
    if(left<right)               //需要切割
    {
        int mid=left+(right-left)/2;
        inv_count+=mergesort(arr,left,mid);
        inv_count+=mergesort(arr,mid+1,right);
        inv_count+=merge(arr,left,mid,right);
    }
    return inv_count;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[1000005];  //开到五个0

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 调用 mergesort 函数统计逆序对数量，并将结果存储在 result 中
    long long result = mergesort(arr, 0, n - 1);
    printf("%lld\n", result);
    return 0;
}
