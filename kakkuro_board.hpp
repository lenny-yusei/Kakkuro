#ifndef _KAKKURO_BOARD_HPP_
#define _KAKKURO_BOARD_HPP_

#include <vector>

/*
ボードサイズは可変
上辺、左辺に数字用の黒マスがあるので 0 ~ h の h+1 サイズにする
表示をどうするか　かなり横に長くなりそう  |rr/dd|  n  |* / *| みたいな
各空きマスは縦横それぞれどこかのマス群に属してる　それぞれの属してるグループへの参照が必要
コピーも考えるとポインタではなく各行列の中の群ベクトルのインデックス
*/

class Point {
public:
    int x;
    int y;
    Point() : x(0), y(0) {}
    Point(const int _x, const int _y) : x(_x), y(_y) {}
    Point(const Point& p) : x(p.x), y(p.y) {}
};



#endif