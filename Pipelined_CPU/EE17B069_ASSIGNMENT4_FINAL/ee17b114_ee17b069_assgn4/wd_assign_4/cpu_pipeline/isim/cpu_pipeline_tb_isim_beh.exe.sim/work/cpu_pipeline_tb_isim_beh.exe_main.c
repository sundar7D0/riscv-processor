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
    work_m_11471646319054728091_4112152428_init();
    work_m_01274775794169955853_2896492143_init();
    work_m_01351289791521249785_2731210154_init();
    work_m_06980889434495912592_1780468739_init();
    work_m_11560834644322173909_2503317288_init();
    work_m_17943370961917286189_0838362812_init();
    work_m_12099449139276435547_2879187816_init();
    work_m_03666451839106268173_3987918962_init();
    work_m_04717181255015416740_1529130682_init();
    work_m_13015415495886260948_1046041709_init();
    work_m_10321577488055893815_0207779039_init();
    work_m_10552309862089797928_2045781758_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_10552309862089797928_2045781758");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
