#ifndef LV_CALCULATOR_H
#define LV_CALCULATOR_H

#include<giac/giac.h>
#include <iostream>
#include "../../lv_demo.h"

namespace lv_demo_calculator{
	void fetchAndSolve();
	void createTextArea();
	void textArea_cb(lv_event_t* e);
}

#endif