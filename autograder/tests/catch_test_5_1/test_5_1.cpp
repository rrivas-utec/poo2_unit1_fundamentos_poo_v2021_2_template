//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "composite_figure.h"
using namespace std;

static void question_5_1(){
    composite_figure_t cf;
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        char figure;
        char operation;
        char side;
        double x, y, w, h, r;
        cin >> figure >> operation >> x >> y;
        switch(figure) {
            case 'T':
                cin >> w >> h >> side;
                if (operation == 'A')
                    cf.add<triangle_t>(x, y, w, h,
                                       side == 'L'? side::left: side::right);
                else
                    cf.extract<triangle_t>(x, y, w, h,
                                           side == 'L'? side::left: side::right);
                break;
            case 'R':
                cin >> w >> h;
                if (operation == 'A')
                    cf.add<triangle_t>(x, y, w, h);
                else
                    cf.extract<triangle_t>(x, y, w, h);
                break;
            case 'C':
                cin >> r;
                if (operation == 'A')
                    cf.add<circle_t>(x, y, r);
                else
                    cf.extract<circle_t>(x, y, r);
                break;
            default:
                break;
        }
    }
    auto centroid = cf.get_centroid();
    cout << centroid.x << " " << centroid.y << endl;
}

TEST_CASE("Question #5_1") {
    execute_test("test_5_1.in", question_5_1);
}