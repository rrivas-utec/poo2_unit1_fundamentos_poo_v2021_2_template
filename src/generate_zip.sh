#!/usr/bin/env bash

project_name='poo2_unit1_fundamentos_poo_v2021_2'
source_code='
        calculate_pentagon.h calculate_pentagon.cpp
        number.h number.cpp
        quick_sort.h quick_sort.cpp
        search_odds.h search_odds.cpp
  '
rm -f ${project_name}.zip
zip -r -S ${project_name} ${source_code}