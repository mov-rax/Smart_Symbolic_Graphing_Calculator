#ifndef LV_DEMO_GRAPHING
#define LV_DEMO_GRAPHING

// #ifdef __cplusplus
// extern "C" {
// #endif

#include "../../../lv_drv_conf.h"
#include "../../../lvgl/lvgl.h"
#if ENABLE_GIAC == 1
#include <giac/config.h>
#include <giac/gen.h>
#include <giac/giac.h>
#endif
// #include "../../lv_demo.h"

// #ifdef __cplusplus
// }
// #endif

#if ENABLE_GIAC == 1
#define CREATE_GRAPH(context) create_graph(context)
#define DEFINE_GRAPH void create_graph(giac::context& ctx)
#else
#define CREATE_GRAPH(context) create_graph()
#define DEFINE_GRAPH void create_graph(void)
#endif


DEFINE_GRAPH;



#endif