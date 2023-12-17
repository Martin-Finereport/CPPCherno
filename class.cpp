#include <iostream>
#include <string>

using namespace std;

#define LOG(x) cout << x << endl;

class Player // 类 --- 或者说类型
{
    // private by default
public:
    int x, y;
    double speed;

    void Move(int xa, int ya)
    {
        x += xa * speed;
        y += ya * speed;
    }

};

// struct vs class 
// C 中并没有 class 但是有struct
// 用struct还是class, 只是个人习惯上的区别, 没有准确对错
// struct的默认visbility是public, class是private


// 个人习惯
// class比较适合复杂的逻辑实现, 继承
// struct比较适合用来当作简单的数据处理, 数据结构

int main() {
    Player player; //实例化 --- 对象
    player.x = 2;
    player.y = 3;
    player.speed = 0.5;
    player.Move(1, -1);
}