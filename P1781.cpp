#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int n, id; // id 记录当上总统的人的号数
    string max = ""; // 赋初值，这个 max 不可以作为全局变量（会重名）
    // 如果一定要把 string max 放到全局变量去，应去掉 using namespce std;
    string in;
    cin >> n;
	for (int i = 1; i <= n; i++) {
        cin >> in;
        int inSize = in.size();
        int maxSize = max.size();
        if (inSize > maxSize || (inSize >= maxSize && in > max)) {
            max = in;
            id = i;
        }
    }
    cout << id << endl << max << endl;
    return 0;
}
