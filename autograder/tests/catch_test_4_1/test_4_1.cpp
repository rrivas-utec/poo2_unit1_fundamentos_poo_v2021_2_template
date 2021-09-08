//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "quick_sort.h"
using namespace std;

static void question_4_1(){
    string f_in;
    string f_out;
    cin >> f_in;
    cin >> f_out;

    quicksort_t qs;
    qs << f_in;
    qs >> f_out;
    ifstream file(f_out);

    number_t value;
    while (file >> value) {
        cout << value << " ";
    }
}

static void question_4_2(){
    quicksort_t qs = { 10, 4, 1, 3, 7, 8, -4, -3, 100, 2, 9};
    cout << qs << endl;
}

TEST_CASE("Question #4_1") {
    execute_test("test_4_1.in", question_4_1);
}


TEST_CASE("Question #4_2") {
    execute_test("test_4_2.in", question_4_2);
}
