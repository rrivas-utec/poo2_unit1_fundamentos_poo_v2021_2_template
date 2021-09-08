//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "calculate_pentagon.h"
using namespace std;

static void question_3_1(){
    int val;
    vector<int> vec;
    while(cin >> val)
        vec.push_back(val);

    for (auto item: vec)
        cout << calculate_pentagon(item) << endl;
}

TEST_CASE("Question #3_1") {
    execute_test("test_3_1.in", question_3_1);
}