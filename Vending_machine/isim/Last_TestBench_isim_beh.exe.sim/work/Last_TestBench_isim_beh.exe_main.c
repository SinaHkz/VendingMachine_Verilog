/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001192968236_3465029763_init();
    work_m_00000000000578198637_2524960892_init();
    work_m_00000000000859444194_3428040967_init();
    work_m_00000000003949893333_1411027795_init();
    work_m_00000000002037298518_3821099505_init();
    work_m_00000000000337660709_2973510161_init();
    work_m_00000000001303607236_3175063503_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001303607236_3175063503");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
