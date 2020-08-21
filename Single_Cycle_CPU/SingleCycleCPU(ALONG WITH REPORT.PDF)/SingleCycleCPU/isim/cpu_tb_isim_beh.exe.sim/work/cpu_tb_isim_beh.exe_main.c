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
    work_m_07609763700626613184_2347679131_init();
    work_m_04537331432565090790_2725559894_init();
    work_m_15162001221542386364_1200043877_init();
    work_m_07890547161536360580_1352674679_init();
    work_m_01351289791521249785_2731210154_init();
    work_m_13499197875876814993_1912994691_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_13499197875876814993_1912994691");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
