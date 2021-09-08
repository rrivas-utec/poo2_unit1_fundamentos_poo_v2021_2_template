//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "search_odds.h"
using namespace std;

static void question_2_1(){
    vector<number_t> vec;
    number_t value;
    while (cin >> value)
        vec.push_back(value);
    auto result = search_odds(vec);
    cout << result.front() << endl;
}

static void question_2_2(){
    auto r = search_odds({ });
    if (!r.empty())
        cout << r.front() << endl;
    else
        cout << "empty\n";
}

TEST_CASE("Question #2_1") {
    execute_test("test_2_1.in", question_2_1);
}

TEST_CASE("Question #2_2") {
    execute_test("test_2_2.in", question_2_2);
}