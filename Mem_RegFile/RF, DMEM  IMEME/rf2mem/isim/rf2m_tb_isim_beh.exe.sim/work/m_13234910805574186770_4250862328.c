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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/sundar/Desktop/comporg/a2/rf2mem/rf2mem_tb.v";
static const char *ng1 = "";
static const char *ng2 = " Passed: Expected=%08x and Output=%08x";
static const char *ng3 = " Failed: Expected=%08x but Output=%08x";
static int ng4[] = {1, 0};
static int ng5[] = {0, 0};
static unsigned int ng6[] = {0U, 0U};
static unsigned int ng7[] = {4294901795U, 0U};
static unsigned int ng8[] = {1U, 0U};
static unsigned int ng9[] = {4294902019U, 0U};
static unsigned int ng10[] = {2U, 0U};
static unsigned int ng11[] = {4294905891U, 0U};
static unsigned int ng12[] = {3U, 0U};
static unsigned int ng13[] = {4294906115U, 0U};
static unsigned int ng14[] = {15U, 0U};
static unsigned int ng15[] = {521080591U, 0U};
static unsigned int ng16[] = {10U, 0U};
static unsigned int ng17[] = {286331153U, 0U};
static unsigned int ng18[] = {8U, 0U};
static int ng19[] = {2, 0};
static unsigned int ng20[] = {1057951503U, 0U};
static int ng21[] = {3, 0};
static int ng22[] = {4, 0};
static unsigned int ng23[] = {285217024U, 0U};
static unsigned int ng24[] = {1056964608U, 0U};
static int ng25[] = {1023, 0};
static unsigned int ng26[] = {4294901760U, 0U};
static unsigned int ng27[] = {13U, 0U};
static unsigned int ng28[] = {65535U, 0U};
static const char *ng29 = "Failed%d out of %d - IMEM";
static const char *ng30 = "PASS %d - IMEM";
static const char *ng31 = "Failed%d out of %d - DMEM";
static const char *ng32 = "PASS %d - DMEM";
static const char *ng33 = "Failed%d out of %d - RF";
static const char *ng34 = "PASS %d - RF";



static int sp_imem_check(char *t1, char *t2)
{
    char t9[8];
    char t30[16];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(59, ng0);

LAB5:    xsi_set_current_line(60, ng0);
    t5 = (t1 + 6216);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 5416);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    xsi_set_current_line(61, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 0U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(62, ng0);

LAB7:    xsi_set_current_line(63, ng0);
    t4 = (t1 + 2936U);
    t5 = *((char **)t4);
    t4 = (t1 + 6376);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t9, 0, 8);
    t8 = (t5 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB11;

LAB8:    if (t20 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t9) = 1;

LAB11:    t24 = (t9 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(65, ng0);

LAB16:    xsi_set_current_line(66, ng0);
    t4 = xsi_vlog_time(t30, 1000.0000000000000, 1000.0000000000000);
    t5 = (t1 + 848);
    xsi_vlogfile_write(0, 0, 0, ng1, 2, t5, (char)118, t30, 64);
    t6 = (t1 + 6376);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t10 = (t1 + 2936U);
    t23 = *((char **)t10);
    t10 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng3, 3, t10, (char)118, t8, 32, (char)118, t23, 32);
    xsi_set_current_line(67, ng0);
    t4 = (t1 + 3976);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 3976);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);

LAB14:    xsi_set_current_line(70, ng0);
    t4 = (t1 + 3496);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 3496);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB4;

LAB10:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB11;

LAB12:    xsi_set_current_line(63, ng0);

LAB15:    xsi_set_current_line(64, ng0);
    t31 = xsi_vlog_time(t30, 1000.0000000000000, 1000.0000000000000);
    t32 = (t1 + 848);
    xsi_vlogfile_write(0, 0, 0, ng1, 2, t32, (char)118, t30, 64);
    t33 = (t1 + 6376);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t1 + 2936U);
    t37 = *((char **)t36);
    t36 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng2, 3, t36, (char)118, t35, 32, (char)118, t37, 32);
    goto LAB14;

}

static int sp_dmem_write(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(79, ng0);

LAB5:    xsi_set_current_line(80, ng0);
    t5 = (t2 + 88U);
    t6 = *((char **)t5);
    t7 = (t6 + 0U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(81, ng0);

LAB7:    xsi_set_current_line(82, ng0);
    t4 = (t1 + 6536);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 5576);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(83, ng0);
    t4 = (t1 + 6696);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 5736);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t4 = (t1 + 6856);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 5896);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 12);
    xsi_set_current_line(85, ng0);
    t4 = (t1 + 7016);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 6056);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB4;

}

static int sp_dmem_check(char *t1, char *t2)
{
    char t9[8];
    char t30[16];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1712);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(95, ng0);

LAB5:    xsi_set_current_line(96, ng0);
    t5 = (t1 + 7176);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 5576);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 4);
    xsi_set_current_line(97, ng0);
    t4 = (t1 + 7336);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 5736);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(98, ng0);
    t4 = (t1 + 7496);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 5896);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 12);
    xsi_set_current_line(99, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 0U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(100, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(101, ng0);

LAB8:    xsi_set_current_line(102, ng0);
    t4 = (t1 + 3096U);
    t5 = *((char **)t4);
    t4 = (t1 + 7656);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t9, 0, 8);
    t8 = (t5 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB12;

LAB9:    if (t20 != 0)
        goto LAB11;

LAB10:    *((unsigned int *)t9) = 1;

LAB12:    t24 = (t9 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(104, ng0);

LAB17:    xsi_set_current_line(105, ng0);
    t4 = xsi_vlog_time(t30, 1000.0000000000000, 1000.0000000000000);
    t5 = (t1 + 1712);
    xsi_vlogfile_write(0, 0, 0, ng1, 2, t5, (char)118, t30, 64);
    t6 = (t1 + 7656);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t10 = (t1 + 3096U);
    t23 = *((char **)t10);
    t10 = (t1 + 1712);
    xsi_vlogfile_write(1, 0, 0, ng3, 3, t10, (char)118, t8, 32, (char)118, t23, 32);
    xsi_set_current_line(106, ng0);
    t4 = (t1 + 4136);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 4136);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);

LAB15:    xsi_set_current_line(109, ng0);
    t4 = (t1 + 3656);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 3656);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB4;

LAB11:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB12;

LAB13:    xsi_set_current_line(102, ng0);

LAB16:    xsi_set_current_line(103, ng0);
    t31 = xsi_vlog_time(t30, 1000.0000000000000, 1000.0000000000000);
    t32 = (t1 + 1712);
    xsi_vlogfile_write(0, 0, 0, ng1, 2, t32, (char)118, t30, 64);
    t33 = (t1 + 7656);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t1 + 3096U);
    t37 = *((char **)t36);
    t36 = (t1 + 1712);
    xsi_vlogfile_write(1, 0, 0, ng2, 3, t36, (char)118, t35, 32, (char)118, t37, 32);
    goto LAB15;

}

static int sp_rf2mem_check(char *t1, char *t2)
{
    char t8[8];
    char t32[16];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2144);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(119, ng0);

LAB5:    xsi_set_current_line(120, ng0);
    t5 = ((char*)((ng4)));
    t6 = (t1 + 4776);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(121, ng0);
    t4 = (t1 + 7816);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(128, ng0);

LAB14:    xsi_set_current_line(129, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 4616);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(130, ng0);
    t4 = (t1 + 8136);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4936);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 5);
    xsi_set_current_line(131, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 0U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB15;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(122, ng0);

LAB13:    xsi_set_current_line(123, ng0);
    t30 = ((char*)((ng4)));
    t31 = (t1 + 4616);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    xsi_set_current_line(124, ng0);
    t4 = (t1 + 7976);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 5096);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 5);
    xsi_set_current_line(125, ng0);
    t4 = (t1 + 8296);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 5256);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);

LAB12:    goto LAB4;

LAB15:    xsi_set_current_line(132, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(133, ng0);

LAB17:    xsi_set_current_line(134, ng0);
    t4 = (t1 + 2776U);
    t5 = *((char **)t4);
    t4 = (t1 + 8456);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t9 = (t5 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB21;

LAB18:    if (t20 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t8) = 1;

LAB21:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(136, ng0);

LAB26:    xsi_set_current_line(137, ng0);
    t4 = xsi_vlog_time(t32, 1000.0000000000000, 1000.0000000000000);
    t5 = (t1 + 2144);
    xsi_vlogfile_write(0, 0, 0, ng1, 2, t5, (char)118, t32, 64);
    t6 = (t1 + 8456);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t1 + 2776U);
    t23 = *((char **)t10);
    t10 = (t1 + 2144);
    xsi_vlogfile_write(1, 0, 0, ng3, 3, t10, (char)118, t9, 32, (char)118, t23, 32);
    xsi_set_current_line(138, ng0);
    t4 = (t1 + 4296);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 4296);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);

LAB24:    xsi_set_current_line(141, ng0);
    t4 = (t1 + 3816);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 3816);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB12;

LAB20:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(134, ng0);

LAB25:    xsi_set_current_line(135, ng0);
    t30 = xsi_vlog_time(t32, 1000.0000000000000, 1000.0000000000000);
    t31 = (t1 + 2144);
    xsi_vlogfile_write(0, 0, 0, ng1, 2, t31, (char)118, t32, 64);
    t33 = (t1 + 8456);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t1 + 2776U);
    t37 = *((char **)t36);
    t36 = (t1 + 2144);
    xsi_vlogfile_write(1, 0, 0, ng2, 3, t36, (char)118, t35, 32, (char)118, t37, 32);
    goto LAB24;

}

static void Always_52_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 9368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 9176);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 4456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 4456);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Initial_146_1(char *t0)
{
    char t28[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;

LAB0:    t1 = (t0 + 9616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(146, ng0);

LAB4:    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4456);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 9424);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng7)));
    t4 = (t0 + 9424);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 6216);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 32);
    t8 = (t0 + 6376);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 32);

LAB8:    t9 = (t0 + 9520);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB10:    if (t17 != 0)
        goto LAB11;

LAB6:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB7:    t18 = (t0 + 9520);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 9424);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng8)));
    t3 = ((char*)((ng9)));
    t4 = (t0 + 9424);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 6216);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 32);
    t8 = (t0 + 6376);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 32);

LAB14:    t9 = (t0 + 9520);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB16:    if (t17 != 0)
        goto LAB17;

LAB12:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB13:    t18 = (t0 + 9520);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 9424);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng10)));
    t3 = ((char*)((ng11)));
    t4 = (t0 + 9424);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 6216);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 32);
    t8 = (t0 + 6376);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 32);

LAB20:    t9 = (t0 + 9520);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB22:    if (t17 != 0)
        goto LAB23;

LAB18:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB19:    t18 = (t0 + 9520);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 9424);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng12)));
    t3 = ((char*)((ng13)));
    t4 = (t0 + 9424);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 6216);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 32);
    t8 = (t0 + 6376);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 32);

LAB26:    t9 = (t0 + 9520);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB28:    if (t17 != 0)
        goto LAB29;

LAB24:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB25:    t18 = (t0 + 9520);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 9424);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng14)));
    t3 = ((char*)((ng4)));
    t4 = ((char*)((ng5)));
    t5 = ((char*)((ng15)));
    t6 = (t0 + 9424);
    t7 = (t0 + 1280);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 6536);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 4);
    t10 = (t0 + 6696);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 1);
    t11 = (t0 + 6856);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 12);
    t12 = (t0 + 7016);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 32);

LAB32:    t13 = (t0 + 9520);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t18 = (t16 + 272U);
    t19 = *((char **)t18);
    t20 = (t19 + 0U);
    t21 = *((char **)t20);
    t17 = ((int  (*)(char *, char *))t21)(t0, t14);

LAB34:    if (t17 != 0)
        goto LAB35;

LAB30:    t14 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t14);

LAB31:    t22 = (t0 + 9520);
    t23 = *((char **)t22);
    t22 = (t0 + 1280);
    t24 = (t0 + 9424);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 9424);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB9:;
LAB11:    t9 = (t0 + 9616U);
    *((char **)t9) = &&LAB8;
    goto LAB1;

LAB15:;
LAB17:    t9 = (t0 + 9616U);
    *((char **)t9) = &&LAB14;
    goto LAB1;

LAB21:;
LAB23:    t9 = (t0 + 9616U);
    *((char **)t9) = &&LAB20;
    goto LAB1;

LAB27:;
LAB29:    t9 = (t0 + 9616U);
    *((char **)t9) = &&LAB26;
    goto LAB1;

LAB33:;
LAB35:    t13 = (t0 + 9616U);
    *((char **)t13) = &&LAB32;
    goto LAB1;

LAB36:    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng5)));
    t4 = ((char*)((ng5)));
    t5 = ((char*)((ng15)));
    t6 = (t0 + 9424);
    t7 = (t0 + 1712);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 7176);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 4);
    t10 = (t0 + 7336);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 1);
    t11 = (t0 + 7496);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 12);
    t12 = (t0 + 7656);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 32);

LAB39:    t13 = (t0 + 9520);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t18 = (t16 + 272U);
    t19 = *((char **)t18);
    t20 = (t19 + 0U);
    t21 = *((char **)t20);
    t17 = ((int  (*)(char *, char *))t21)(t0, t14);

LAB41:    if (t17 != 0)
        goto LAB42;

LAB37:    t14 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t14);

LAB38:    t22 = (t0 + 9520);
    t23 = *((char **)t22);
    t22 = (t0 + 1712);
    t24 = (t0 + 9424);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(158, ng0);
    t2 = (t0 + 9424);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB40:;
LAB42:    t13 = (t0 + 9616U);
    *((char **)t13) = &&LAB39;
    goto LAB1;

LAB43:    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng16)));
    t3 = ((char*)((ng4)));
    t4 = ((char*)((ng4)));
    t5 = ((char*)((ng17)));
    t6 = (t0 + 9424);
    t7 = (t0 + 1280);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 6536);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 4);
    t10 = (t0 + 6696);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 1);
    t11 = (t0 + 6856);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 12);
    t12 = (t0 + 7016);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 32);

LAB46:    t13 = (t0 + 9520);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t18 = (t16 + 272U);
    t19 = *((char **)t18);
    t20 = (t19 + 0U);
    t21 = *((char **)t20);
    t17 = ((int  (*)(char *, char *))t21)(t0, t14);

LAB48:    if (t17 != 0)
        goto LAB49;

LAB44:    t14 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t14);

LAB45:    t22 = (t0 + 9520);
    t23 = *((char **)t22);
    t22 = (t0 + 1280);
    t24 = (t0 + 9424);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 9424);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB50;
    goto LAB1;

LAB47:;
LAB49:    t13 = (t0 + 9616U);
    *((char **)t13) = &&LAB46;
    goto LAB1;

LAB50:    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng18)));
    t3 = ((char*)((ng4)));
    t4 = ((char*)((ng19)));
    t5 = ((char*)((ng20)));
    t6 = (t0 + 9424);
    t7 = (t0 + 1280);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 6536);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 4);
    t10 = (t0 + 6696);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 1);
    t11 = (t0 + 6856);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 12);
    t12 = (t0 + 7016);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 32);

LAB53:    t13 = (t0 + 9520);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t18 = (t16 + 272U);
    t19 = *((char **)t18);
    t20 = (t19 + 0U);
    t21 = *((char **)t20);
    t17 = ((int  (*)(char *, char *))t21)(t0, t14);

LAB55:    if (t17 != 0)
        goto LAB56;

LAB51:    t14 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t14);

LAB52:    t22 = (t0 + 9520);
    t23 = *((char **)t22);
    t22 = (t0 + 1280);
    t24 = (t0 + 9424);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(163, ng0);
    t2 = (t0 + 9424);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB57;
    goto LAB1;

LAB54:;
LAB56:    t13 = (t0 + 9616U);
    *((char **)t13) = &&LAB53;
    goto LAB1;

LAB57:    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng8)));
    t3 = ((char*)((ng4)));
    t4 = ((char*)((ng21)));
    t5 = ((char*)((ng20)));
    t6 = (t0 + 9424);
    t7 = (t0 + 1280);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 6536);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 4);
    t10 = (t0 + 6696);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 1);
    t11 = (t0 + 6856);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 12);
    t12 = (t0 + 7016);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 32);

LAB60:    t13 = (t0 + 9520);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t18 = (t16 + 272U);
    t19 = *((char **)t18);
    t20 = (t19 + 0U);
    t21 = *((char **)t20);
    t17 = ((int  (*)(char *, char *))t21)(t0, t14);

LAB62:    if (t17 != 0)
        goto LAB63;

LAB58:    t14 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t14);

LAB59:    t22 = (t0 + 9520);
    t23 = *((char **)t22);
    t22 = (t0 + 1280);
    t24 = (t0 + 9424);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(165, ng0);
    t2 = (t0 + 9424);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB64;
    goto LAB1;

LAB61:;
LAB63:    t13 = (t0 + 9616U);
    *((char **)t13) = &&LAB60;
    goto LAB1;

LAB64:    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng14)));
    t3 = ((char*)((ng4)));
    t4 = ((char*)((ng22)));
    t5 = ((char*)((ng20)));
    t6 = (t0 + 9424);
    t7 = (t0 + 1280);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 6536);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 4);
    t10 = (t0 + 6696);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 1);
    t11 = (t0 + 6856);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 12);
    t12 = (t0 + 7016);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 32);

LAB67:    t13 = (t0 + 9520);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t18 = (t16 + 272U);
    t19 = *((char **)t18);
    t20 = (t19 + 0U);
    t21 = *((char **)t20);
    t17 = ((int  (*)(char *, char *))t21)(t0, t14);

LAB69:    if (t17 != 0)
        goto LAB70;

LAB65:    t14 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t14);

LAB66:    t22 = (t0 + 9520);
    t23 = *((char **)t22);
    t22 = (t0 + 1280);
    t24 = (t0 + 9424);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(167, ng0);
    t2 = (t0 + 9424);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB71;
    goto LAB1;

LAB68:;
LAB70:    t13 = (t0 + 9616U);
    *((char **)t13) = &&LAB67;
    goto LAB1;

LAB71:    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng5)));
    t4 = ((char*)((ng4)));
    t5 = ((char*)((ng23)));
    t6 = (t0 + 9424);
    t7 = (t0 + 1712);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 7176);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 4);
    t10 = (t0 + 7336);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 1);
    t11 = (t0 + 7496);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 12);
    t12 = (t0 + 7656);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 32);

LAB74:    t13 = (t0 + 9520);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t18 = (t16 + 272U);
    t19 = *((char **)t18);
    t20 = (t19 + 0U);
    t21 = *((char **)t20);
    t17 = ((int  (*)(char *, char *))t21)(t0, t14);

LAB76:    if (t17 != 0)
        goto LAB77;

LAB72:    t14 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t14);

LAB73:    t22 = (t0 + 9520);
    t23 = *((char **)t22);
    t22 = (t0 + 1712);
    t24 = (t0 + 9424);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(169, ng0);
    t2 = (t0 + 9424);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB78;
    goto LAB1;

LAB75:;
LAB77:    t13 = (t0 + 9616U);
    *((char **)t13) = &&LAB74;
    goto LAB1;

LAB78:    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng5)));
    t4 = ((char*)((ng19)));
    t5 = ((char*)((ng24)));
    t6 = (t0 + 9424);
    t7 = (t0 + 1712);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 7176);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 4);
    t10 = (t0 + 7336);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 1);
    t11 = (t0 + 7496);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 12);
    t12 = (t0 + 7656);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 32);

LAB81:    t13 = (t0 + 9520);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t18 = (t16 + 272U);
    t19 = *((char **)t18);
    t20 = (t19 + 0U);
    t21 = *((char **)t20);
    t17 = ((int  (*)(char *, char *))t21)(t0, t14);

LAB83:    if (t17 != 0)
        goto LAB84;

LAB79:    t14 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t14);

LAB80:    t22 = (t0 + 9520);
    t23 = *((char **)t22);
    t22 = (t0 + 1712);
    t24 = (t0 + 9424);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(171, ng0);
    t2 = (t0 + 9424);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB85;
    goto LAB1;

LAB82:;
LAB84:    t13 = (t0 + 9616U);
    *((char **)t13) = &&LAB81;
    goto LAB1;

LAB85:    xsi_set_current_line(172, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng5)));
    t4 = ((char*)((ng5)));
    t5 = ((char*)((ng15)));
    t6 = (t0 + 9424);
    t7 = (t0 + 1712);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 7176);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 4);
    t10 = (t0 + 7336);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 1);
    t11 = (t0 + 7496);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 12);
    t12 = (t0 + 7656);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 32);

LAB88:    t13 = (t0 + 9520);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t18 = (t16 + 272U);
    t19 = *((char **)t18);
    t20 = (t19 + 0U);
    t21 = *((char **)t20);
    t17 = ((int  (*)(char *, char *))t21)(t0, t14);

LAB90:    if (t17 != 0)
        goto LAB91;

LAB86:    t14 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t14);

LAB87:    t22 = (t0 + 9520);
    t23 = *((char **)t22);
    t22 = (t0 + 1712);
    t24 = (t0 + 9424);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(173, ng0);
    t2 = (t0 + 9424);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB92;
    goto LAB1;

LAB89:;
LAB91:    t13 = (t0 + 9616U);
    *((char **)t13) = &&LAB88;
    goto LAB1;

LAB92:    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng5)));
    t4 = ((char*)((ng21)));
    t5 = ((char*)((ng14)));
    t6 = (t0 + 9424);
    t7 = (t0 + 1712);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 7176);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 4);
    t10 = (t0 + 7336);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 1);
    t11 = (t0 + 7496);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 12);
    t12 = (t0 + 7656);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 32);

LAB95:    t13 = (t0 + 9520);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t18 = (t16 + 272U);
    t19 = *((char **)t18);
    t20 = (t19 + 0U);
    t21 = *((char **)t20);
    t17 = ((int  (*)(char *, char *))t21)(t0, t14);

LAB97:    if (t17 != 0)
        goto LAB98;

LAB93:    t14 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t14);

LAB94:    t22 = (t0 + 9520);
    t23 = *((char **)t22);
    t22 = (t0 + 1712);
    t24 = (t0 + 9424);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(175, ng0);
    t2 = (t0 + 9424);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB99;
    goto LAB1;

LAB96:;
LAB98:    t13 = (t0 + 9616U);
    *((char **)t13) = &&LAB95;
    goto LAB1;

LAB99:    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng5)));
    t4 = ((char*)((ng22)));
    t5 = ((char*)((ng20)));
    t6 = (t0 + 9424);
    t7 = (t0 + 1712);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 7176);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 4);
    t10 = (t0 + 7336);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 1);
    t11 = (t0 + 7496);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 12);
    t12 = (t0 + 7656);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 32);

LAB102:    t13 = (t0 + 9520);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t18 = (t16 + 272U);
    t19 = *((char **)t18);
    t20 = (t19 + 0U);
    t21 = *((char **)t20);
    t17 = ((int  (*)(char *, char *))t21)(t0, t14);

LAB104:    if (t17 != 0)
        goto LAB105;

LAB100:    t14 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t14);

LAB101:    t22 = (t0 + 9520);
    t23 = *((char **)t22);
    t22 = (t0 + 1712);
    t24 = (t0 + 9424);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(177, ng0);
    t2 = (t0 + 9424);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB106;
    goto LAB1;

LAB103:;
LAB105:    t13 = (t0 + 9616U);
    *((char **)t13) = &&LAB102;
    goto LAB1;

LAB106:    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng5)));
    t4 = ((char*)((ng25)));
    t5 = ((char*)((ng6)));
    t6 = (t0 + 9424);
    t7 = (t0 + 1712);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 7176);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 4);
    t10 = (t0 + 7336);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 1);
    t11 = (t0 + 7496);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 12);
    t12 = (t0 + 7656);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 32);

LAB109:    t13 = (t0 + 9520);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t18 = (t16 + 272U);
    t19 = *((char **)t18);
    t20 = (t19 + 0U);
    t21 = *((char **)t20);
    t17 = ((int  (*)(char *, char *))t21)(t0, t14);

LAB111:    if (t17 != 0)
        goto LAB112;

LAB107:    t14 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t14);

LAB108:    t22 = (t0 + 9520);
    t23 = *((char **)t22);
    t22 = (t0 + 1712);
    t24 = (t0 + 9424);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(179, ng0);
    t2 = (t0 + 9424);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB113;
    goto LAB1;

LAB110:;
LAB112:    t13 = (t0 + 9616U);
    *((char **)t13) = &&LAB109;
    goto LAB1;

LAB113:    xsi_set_current_line(180, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng5)));
    t4 = ((char*)((ng4)));
    t5 = ((char*)((ng23)));
    t6 = (t0 + 9424);
    t7 = (t0 + 1712);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 7176);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 4);
    t10 = (t0 + 7336);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 1);
    t11 = (t0 + 7496);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 12);
    t12 = (t0 + 7656);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 32);

LAB116:    t13 = (t0 + 9520);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t18 = (t16 + 272U);
    t19 = *((char **)t18);
    t20 = (t19 + 0U);
    t21 = *((char **)t20);
    t17 = ((int  (*)(char *, char *))t21)(t0, t14);

LAB118:    if (t17 != 0)
        goto LAB119;

LAB114:    t14 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t14);

LAB115:    t22 = (t0 + 9520);
    t23 = *((char **)t22);
    t22 = (t0 + 1712);
    t24 = (t0 + 9424);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(181, ng0);
    t2 = (t0 + 9424);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB120;
    goto LAB1;

LAB117:;
LAB119:    t13 = (t0 + 9616U);
    *((char **)t13) = &&LAB116;
    goto LAB1;

LAB120:    xsi_set_current_line(182, ng0);
    t2 = ((char*)((ng8)));
    t3 = ((char*)((ng16)));
    t4 = ((char*)((ng5)));
    t5 = ((char*)((ng26)));
    t6 = ((char*)((ng5)));
    t7 = (t0 + 9424);
    t8 = (t0 + 2144);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 7816);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 7976);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 5);
    t12 = (t0 + 8136);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 5);
    t13 = (t0 + 8296);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 32);
    t14 = (t0 + 8456);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 32);

LAB123:    t15 = (t0 + 9520);
    t16 = *((char **)t15);
    t18 = (t16 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t17 = ((int  (*)(char *, char *))t23)(t0, t16);

LAB125:    if (t17 != 0)
        goto LAB126;

LAB121:    t16 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t16);

LAB122:    t24 = (t0 + 9520);
    t25 = *((char **)t24);
    t24 = (t0 + 2144);
    t26 = (t0 + 9424);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    xsi_set_current_line(183, ng0);
    t2 = (t0 + 9424);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB127;
    goto LAB1;

LAB124:;
LAB126:    t15 = (t0 + 9616U);
    *((char **)t15) = &&LAB123;
    goto LAB1;

LAB127:    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng8)));
    t3 = ((char*)((ng27)));
    t4 = ((char*)((ng5)));
    t5 = ((char*)((ng28)));
    t6 = ((char*)((ng5)));
    t7 = (t0 + 9424);
    t8 = (t0 + 2144);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 7816);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 7976);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 5);
    t12 = (t0 + 8136);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 5);
    t13 = (t0 + 8296);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 32);
    t14 = (t0 + 8456);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 32);

LAB130:    t15 = (t0 + 9520);
    t16 = *((char **)t15);
    t18 = (t16 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t17 = ((int  (*)(char *, char *))t23)(t0, t16);

LAB132:    if (t17 != 0)
        goto LAB133;

LAB128:    t16 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t16);

LAB129:    t24 = (t0 + 9520);
    t25 = *((char **)t24);
    t24 = (t0 + 2144);
    t26 = (t0 + 9424);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    xsi_set_current_line(185, ng0);
    t2 = (t0 + 9424);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB134;
    goto LAB1;

LAB131:;
LAB133:    t15 = (t0 + 9616U);
    *((char **)t15) = &&LAB130;
    goto LAB1;

LAB134:    xsi_set_current_line(186, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng5)));
    t4 = ((char*)((ng16)));
    t5 = ((char*)((ng5)));
    t6 = ((char*)((ng26)));
    t7 = (t0 + 9424);
    t8 = (t0 + 2144);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 7816);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 7976);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 5);
    t12 = (t0 + 8136);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 5);
    t13 = (t0 + 8296);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 32);
    t14 = (t0 + 8456);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 32);

LAB137:    t15 = (t0 + 9520);
    t16 = *((char **)t15);
    t18 = (t16 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t17 = ((int  (*)(char *, char *))t23)(t0, t16);

LAB139:    if (t17 != 0)
        goto LAB140;

LAB135:    t16 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t16);

LAB136:    t24 = (t0 + 9520);
    t25 = *((char **)t24);
    t24 = (t0 + 2144);
    t26 = (t0 + 9424);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    xsi_set_current_line(187, ng0);
    t2 = (t0 + 9424);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB141;
    goto LAB1;

LAB138:;
LAB140:    t15 = (t0 + 9616U);
    *((char **)t15) = &&LAB137;
    goto LAB1;

LAB141:    xsi_set_current_line(188, ng0);
    t2 = (t0 + 3976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t28, 0, 8);
    xsi_vlog_signed_greater(t28, 32, t4, 32, t5, 32);
    t6 = (t28 + 4);
    t29 = *((unsigned int *)t6);
    t30 = (~(t29));
    t31 = *((unsigned int *)t28);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB142;

LAB143:    xsi_set_current_line(190, ng0);

LAB146:    xsi_set_current_line(191, ng0);
    t2 = (t0 + 3496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng30, 2, t0, (char)119, t4, 32);

LAB144:    xsi_set_current_line(194, ng0);
    t2 = (t0 + 4136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t28, 0, 8);
    xsi_vlog_signed_greater(t28, 32, t4, 32, t5, 32);
    t6 = (t28 + 4);
    t29 = *((unsigned int *)t6);
    t30 = (~(t29));
    t31 = *((unsigned int *)t28);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB147;

LAB148:    xsi_set_current_line(196, ng0);

LAB151:    xsi_set_current_line(197, ng0);
    t2 = (t0 + 3656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng32, 2, t0, (char)119, t4, 32);

LAB149:    xsi_set_current_line(200, ng0);
    t2 = (t0 + 4296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t28, 0, 8);
    xsi_vlog_signed_greater(t28, 32, t4, 32, t5, 32);
    t6 = (t28 + 4);
    t29 = *((unsigned int *)t6);
    t30 = (~(t29));
    t31 = *((unsigned int *)t28);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB152;

LAB153:    xsi_set_current_line(202, ng0);

LAB156:    xsi_set_current_line(203, ng0);
    t2 = (t0 + 3816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng34, 2, t0, (char)119, t4, 32);

LAB154:    xsi_set_current_line(206, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB142:    xsi_set_current_line(188, ng0);

LAB145:    xsi_set_current_line(189, ng0);
    t7 = (t0 + 3976);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 3496);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlogfile_write(1, 0, 0, ng29, 3, t0, (char)119, t9, 32, (char)119, t12, 32);
    goto LAB144;

LAB147:    xsi_set_current_line(194, ng0);

LAB150:    xsi_set_current_line(195, ng0);
    t7 = (t0 + 4136);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 3656);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlogfile_write(1, 0, 0, ng31, 3, t0, (char)119, t9, 32, (char)119, t12, 32);
    goto LAB149;

LAB152:    xsi_set_current_line(200, ng0);

LAB155:    xsi_set_current_line(201, ng0);
    t7 = (t0 + 4296);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 3816);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlogfile_write(1, 0, 0, ng33, 3, t0, (char)119, t9, 32, (char)119, t12, 32);
    goto LAB154;

}


extern void work_m_13234910805574186770_4250862328_init()
{
	static char *pe[] = {(void *)Always_52_0,(void *)Initial_146_1};
	static char *se[] = {(void *)sp_imem_check,(void *)sp_dmem_write,(void *)sp_dmem_check,(void *)sp_rf2mem_check};
	xsi_register_didat("work_m_13234910805574186770_4250862328", "isim/rf2m_tb_isim_beh.exe.sim/work/m_13234910805574186770_4250862328.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
