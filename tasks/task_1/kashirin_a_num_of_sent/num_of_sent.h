// Copyright 2023 Kashirin Alexander

#ifndef TASKS_TASK1_KASHIRIN_A_NUM_OF_SENT_NUM_OF_SENT_H_
#define TASKS_TASK1_KASHIRIN_A_NUM_OF_SENT_NUM_OF_SENT_H_

#include <mpi.h>
#include <string>
#include <iostream>
#include <vector>

int numSeq(const std::vector<char> &str);
int numPar(const std::string &str);
void generateRandomString(const std::string& str, int size);




#endif  // TASKS_TASK1_KASHIRIN_A_NUM_OF_SENT_NUM_OF_SENT_H_
