#ifndef _KAKKURO_BOARD_HPP_
#define _KAKKURO_BOARD_HPP_

#include <vector>
#include <bitset>
/*
ボードサイズは可変
上辺、左辺に数字用の黒マスがあるので 0 ~ h の h+1 サイズにする
表示をどうするか　かなり横に長くなりそう  |rr/dd|  n  |* / *| みたいな
各空きマスは縦横それぞれどこかのマス群に属してる　それぞれの属してるグループへの参照が必要
コピーも考えるとポインタではなくインデックスがいいかも
*/

class Point {
public:
    int x;
    int y;
    Point() : x(0), y(0) {}
    Point(int _x, int _y) : x(_x), y(_y) {}
    Point(const Point& p) : x(p.x), y(p.y) {}
};

class SumInfo {
public:
    Point p;
    int block;
    std::bitset<9> flag;
};

class KakkuroBoard {
    int h;
    int w;
    std::vector<int> m_board;
    std::vector<std::vector<SumInfo>> row_sums;
    std::vector<std::vector<SumInfo>> col_sums;

public:
    KakkuroBoard() : h(0), w(0) {}
    KakkuroBoard(int height, int width)
        : h(height), w(width), m_board((h + 1) * (w + 1)), row_sums(h + 1), col_sums(w + 1) {}
};

#endif