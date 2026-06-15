// Process Sched Representation for no. 3

#pragma once

#include "Process.h"
#include <vector>
#include <memory>
#include <iostream>

class FCFS_scheduler
{
private:
	std::vector<std::unique_ptr<Process>> processList;
	std
public:
	void addProcess(std::unique_ptr<Process> process) {
		processList.push_back(std::move(process));
	}

	void traverseProcessList() {
		for (int i = 0; i < processList.size(); i++) {
		}
	}
};




