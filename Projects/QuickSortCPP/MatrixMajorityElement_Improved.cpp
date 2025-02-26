#include <iostream>
#include <map>
using namespace std;


int main() 
{
    int n, m;
    cin >> n >> m; // 输入矩阵大小
    int array[10000]; // 定义一维数组 /这里还可以使用动态分配或直接根据输入大小定义数组，int array[n * m];

    // 输入矩阵元素并存储到一维数组
    for (int i = 0; i < n * m; i++) {
        cin >> array[i];
    }

    map<int, int> frequency; // 记录每个数字的出现次数
    int threshold = (n * m) / 2; // 超过一半的阈值

    // 遍历一维数组，统计每个数字的出现次数
    for (int i = 0; i < n * m; i++) {
        int num = array[i];
        frequency[num]++; // 更新频率
        if (frequency[num] > threshold) 
        {
            cout << num << endl;
            break;
        }
    }

    return 0;
}