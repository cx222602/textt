#include<iostream>
#include<vector>
using namespace std;
int main(){
//第一行输入(然后打印)n，第二行输入(然后打印)n个数
    int n;
    cin>>n;
    //创建一个可以存储n个的数组
    vector<int> numbers(n);
    for(int i=0;i<n;i++){
        cin>>numbers[i];
    }
    cout<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<numbers[i]<<" ";
    }
    cout<<endl;





    return 0;
}