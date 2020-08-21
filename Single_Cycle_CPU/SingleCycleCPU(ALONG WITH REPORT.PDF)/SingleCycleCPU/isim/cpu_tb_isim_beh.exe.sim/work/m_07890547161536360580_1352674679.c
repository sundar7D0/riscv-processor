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
static const char *ng0 = "/home/sundar/Desktop/comporg/a3.1/SingleCycleCPU/dmem.v";
static const char *ng1 = "dmem_ini.mem";
static unsigned int ng2[] = {4294967292U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static int ng7[] = {0, 0};
static int ng8[] = {1, 0};
static int ng9[] = {2, 0};
static int ng10[] = {3, 0};



static void Initial_9_0(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(9, ng0);
    t1 = (t0 + 2728);
    xsi_vlogfile_readmemh(ng1, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Cont_13_1(char *t0)
{
    char t4[8];
    char t37[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;

LAB0:    t1 = (t0 + 3888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    t5 = *((unsigned int *)t3);
    t6 = *((unsigned int *)t2);
    t7 = (t5 & t6);
    *((unsigned int *)t4) = t7;
    t8 = (t3 + 4);
    t9 = (t2 + 4);
    t10 = (t4 + 4);
    t11 = *((unsigned int *)t8);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t36 = ((char*)((ng3)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t4, 32, t36, 32);
    t38 = (t0 + 5608);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    memcpy(t42, t37, 8);
    xsi_driver_vfirst_trans(t38, 0, 31);
    t43 = (t0 + 5448);
    *((int *)t43) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t4) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t2 + 4);
    t20 = *((unsigned int *)t3);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (~(t22));
    t24 = *((unsigned int *)t2);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = (t21 & t23);
    t29 = (t25 & t27);
    t30 = (~(t28));
    t31 = (~(t29));
    t32 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t32 & t30);
    t33 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t33 & t31);
    t34 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t34 & t30);
    t35 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t35 & t31);
    goto LAB6;

}

static void Cont_14_2(char *t0)
{
    char t4[8];
    char t37[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;

LAB0:    t1 = (t0 + 4136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    t5 = *((unsigned int *)t3);
    t6 = *((unsigned int *)t2);
    t7 = (t5 & t6);
    *((unsigned int *)t4) = t7;
    t8 = (t3 + 4);
    t9 = (t2 + 4);
    t10 = (t4 + 4);
    t11 = *((unsigned int *)t8);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t36 = ((char*)((ng4)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t4, 32, t36, 32);
    t38 = (t0 + 5672);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    memcpy(t42, t37, 8);
    xsi_driver_vfirst_trans(t38, 0, 31);
    t43 = (t0 + 5464);
    *((int *)t43) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t4) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t2 + 4);
    t20 = *((unsigned int *)t3);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (~(t22));
    t24 = *((unsigned int *)t2);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = (t21 & t23);
    t29 = (t25 & t27);
    t30 = (~(t28));
    t31 = (~(t29));
    t32 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t32 & t30);
    t33 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t33 & t31);
    t34 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t34 & t30);
    t35 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t35 & t31);
    goto LAB6;

}

static void Cont_15_3(char *t0)
{
    char t4[8];
    char t37[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;

LAB0:    t1 = (t0 + 4384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    t5 = *((unsigned int *)t3);
    t6 = *((unsigned int *)t2);
    t7 = (t5 & t6);
    *((unsigned int *)t4) = t7;
    t8 = (t3 + 4);
    t9 = (t2 + 4);
    t10 = (t4 + 4);
    t11 = *((unsigned int *)t8);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t36 = ((char*)((ng5)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t4, 32, t36, 32);
    t38 = (t0 + 5736);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    memcpy(t42, t37, 8);
    xsi_driver_vfirst_trans(t38, 0, 31);
    t43 = (t0 + 5480);
    *((int *)t43) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t4) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t2 + 4);
    t20 = *((unsigned int *)t3);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (~(t22));
    t24 = *((unsigned int *)t2);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = (t21 & t23);
    t29 = (t25 & t27);
    t30 = (~(t28));
    t31 = (~(t29));
    t32 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t32 & t30);
    t33 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t33 & t31);
    t34 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t34 & t30);
    t35 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t35 & t31);
    goto LAB6;

}

static void Cont_16_4(char *t0)
{
    char t4[8];
    char t37[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;

LAB0:    t1 = (t0 + 4632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    t5 = *((unsigned int *)t3);
    t6 = *((unsigned int *)t2);
    t7 = (t5 & t6);
    *((unsigned int *)t4) = t7;
    t8 = (t3 + 4);
    t9 = (t2 + 4);
    t10 = (t4 + 4);
    t11 = *((unsigned int *)t8);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t36 = ((char*)((ng6)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t4, 32, t36, 32);
    t38 = (t0 + 5800);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    memcpy(t42, t37, 8);
    xsi_driver_vfirst_trans(t38, 0, 31);
    t43 = (t0 + 5496);
    *((int *)t43) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t4) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t2 + 4);
    t20 = *((unsigned int *)t3);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (~(t22));
    t24 = *((unsigned int *)t2);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = (t21 & t23);
    t29 = (t25 & t27);
    t30 = (~(t28));
    t31 = (~(t29));
    t32 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t32 & t30);
    t33 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t33 & t31);
    t34 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t34 & t30);
    t35 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t35 & t31);
    goto LAB6;

}

static void Cont_18_5(char *t0)
{
    char t3[8];
    char t6[8];
    char t17[8];
    char t28[8];
    char t39[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
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
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;

LAB0:    t1 = (t0 + 4880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 2728);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 2728);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2728);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 1848U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_array_select_value(t6, 8, t5, t9, t12, 2, 1, t14, 32, 2);
    t13 = (t0 + 2728);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    t18 = (t0 + 2728);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2728);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = (t0 + 2008U);
    t25 = *((char **)t24);
    xsi_vlog_generic_get_array_select_value(t17, 8, t16, t20, t23, 2, 1, t25, 32, 2);
    t24 = (t0 + 2728);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    t29 = (t0 + 2728);
    t30 = (t29 + 72U);
    t31 = *((char **)t30);
    t32 = (t0 + 2728);
    t33 = (t32 + 64U);
    t34 = *((char **)t33);
    t35 = (t0 + 2168U);
    t36 = *((char **)t35);
    xsi_vlog_generic_get_array_select_value(t28, 8, t27, t31, t34, 2, 1, t36, 32, 2);
    t35 = (t0 + 2728);
    t37 = (t35 + 56U);
    t38 = *((char **)t37);
    t40 = (t0 + 2728);
    t41 = (t40 + 72U);
    t42 = *((char **)t41);
    t43 = (t0 + 2728);
    t44 = (t43 + 64U);
    t45 = *((char **)t44);
    t46 = (t0 + 2328U);
    t47 = *((char **)t46);
    xsi_vlog_generic_get_array_select_value(t39, 8, t38, t42, t45, 2, 1, t47, 32, 2);
    xsi_vlogtype_concat(t3, 32, 32, 4U, t39, 8, t28, 8, t17, 8, t6, 8);
    t46 = (t0 + 5864);
    t48 = (t46 + 56U);
    t49 = *((char **)t48);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    memcpy(t51, t3, 8);
    xsi_driver_vfirst_trans(t46, 0, 31);
    t52 = (t0 + 5512);
    *((int *)t52) = 1;

LAB1:    return;
}

static void Always_20_6(char *t0)
{
    char t6[8];
    char t11[8];
    char t33[8];
    char t44[8];
    char t45[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    int t55;
    char *t56;
    unsigned int t57;
    int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    int t63;

LAB0:    t1 = (t0 + 5128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 5528);
    *((int *)t2) = 1;
    t3 = (t0 + 5160);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(20, ng0);

LAB5:    xsi_set_current_line(21, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t0 + 1488U);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng7)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t5, t8, 2, t9, 32, 1);
    t10 = ((char*)((ng8)));
    memset(t11, 0, 8);
    t12 = (t6 + 4);
    t13 = (t10 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB9;

LAB6:    if (t23 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t11) = 1;

LAB9:    t27 = (t11 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1488U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng8)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t3, t5, 2, t7, 32, 1);
    t8 = ((char*)((ng8)));
    memset(t11, 0, 8);
    t9 = (t6 + 4);
    t10 = (t8 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t10);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t10);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB18;

LAB15:    if (t23 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t11) = 1;

LAB18:    t13 = (t11 + 4);
    t28 = *((unsigned int *)t13);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB19;

LAB20:
LAB21:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1488U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng9)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t3, t5, 2, t7, 32, 1);
    t8 = ((char*)((ng8)));
    memset(t11, 0, 8);
    t9 = (t6 + 4);
    t10 = (t8 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t10);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t10);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB27;

LAB24:    if (t23 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t11) = 1;

LAB27:    t13 = (t11 + 4);
    t28 = *((unsigned int *)t13);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB28;

LAB29:
LAB30:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1488U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng10)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t3, t5, 2, t7, 32, 1);
    t8 = ((char*)((ng8)));
    memset(t11, 0, 8);
    t9 = (t6 + 4);
    t10 = (t8 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t10);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t10);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB36;

LAB33:    if (t23 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t11) = 1;

LAB36:    t13 = (t11 + 4);
    t28 = *((unsigned int *)t13);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB37;

LAB38:
LAB39:    goto LAB2;

LAB8:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(22, ng0);
    t34 = (t0 + 1368U);
    t35 = *((char **)t34);
    memset(t33, 0, 8);
    t34 = (t33 + 4);
    t36 = (t35 + 4);
    t37 = *((unsigned int *)t35);
    t38 = (t37 >> 0);
    *((unsigned int *)t33) = t38;
    t39 = *((unsigned int *)t36);
    t40 = (t39 >> 0);
    *((unsigned int *)t34) = t40;
    t41 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t41 & 255U);
    t42 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t42 & 255U);
    t43 = (t0 + 2728);
    t46 = (t0 + 2728);
    t47 = (t46 + 72U);
    t48 = *((char **)t47);
    t49 = (t0 + 2728);
    t50 = (t49 + 64U);
    t51 = *((char **)t50);
    t52 = (t0 + 1848U);
    t53 = *((char **)t52);
    xsi_vlog_generic_convert_array_indices(t44, t45, t48, t51, 2, 1, t53, 32, 2);
    t52 = (t44 + 4);
    t54 = *((unsigned int *)t52);
    t55 = (!(t54));
    t56 = (t45 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (!(t57));
    t59 = (t55 && t58);
    if (t59 == 1)
        goto LAB13;

LAB14:    goto LAB12;

LAB13:    t60 = *((unsigned int *)t44);
    t61 = *((unsigned int *)t45);
    t62 = (t60 - t61);
    t63 = (t62 + 1);
    xsi_vlogvar_assign_value(t43, t33, 0, *((unsigned int *)t45), t63);
    goto LAB14;

LAB17:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(24, ng0);
    t26 = (t0 + 1368U);
    t27 = *((char **)t26);
    memset(t33, 0, 8);
    t26 = (t33 + 4);
    t34 = (t27 + 4);
    t37 = *((unsigned int *)t27);
    t38 = (t37 >> 8);
    *((unsigned int *)t33) = t38;
    t39 = *((unsigned int *)t34);
    t40 = (t39 >> 8);
    *((unsigned int *)t26) = t40;
    t41 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t41 & 255U);
    t42 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t42 & 255U);
    t35 = (t0 + 2728);
    t36 = (t0 + 2728);
    t43 = (t36 + 72U);
    t46 = *((char **)t43);
    t47 = (t0 + 2728);
    t48 = (t47 + 64U);
    t49 = *((char **)t48);
    t50 = (t0 + 2008U);
    t51 = *((char **)t50);
    xsi_vlog_generic_convert_array_indices(t44, t45, t46, t49, 2, 1, t51, 32, 2);
    t50 = (t44 + 4);
    t54 = *((unsigned int *)t50);
    t55 = (!(t54));
    t52 = (t45 + 4);
    t57 = *((unsigned int *)t52);
    t58 = (!(t57));
    t59 = (t55 && t58);
    if (t59 == 1)
        goto LAB22;

LAB23:    goto LAB21;

LAB22:    t60 = *((unsigned int *)t44);
    t61 = *((unsigned int *)t45);
    t62 = (t60 - t61);
    t63 = (t62 + 1);
    xsi_vlogvar_assign_value(t35, t33, 0, *((unsigned int *)t45), t63);
    goto LAB23;

LAB26:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB27;

LAB28:    xsi_set_current_line(26, ng0);
    t26 = (t0 + 1368U);
    t27 = *((char **)t26);
    memset(t33, 0, 8);
    t26 = (t33 + 4);
    t34 = (t27 + 4);
    t37 = *((unsigned int *)t27);
    t38 = (t37 >> 16);
    *((unsigned int *)t33) = t38;
    t39 = *((unsigned int *)t34);
    t40 = (t39 >> 16);
    *((unsigned int *)t26) = t40;
    t41 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t41 & 255U);
    t42 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t42 & 255U);
    t35 = (t0 + 2728);
    t36 = (t0 + 2728);
    t43 = (t36 + 72U);
    t46 = *((char **)t43);
    t47 = (t0 + 2728);
    t48 = (t47 + 64U);
    t49 = *((char **)t48);
    t50 = (t0 + 2168U);
    t51 = *((char **)t50);
    xsi_vlog_generic_convert_array_indices(t44, t45, t46, t49, 2, 1, t51, 32, 2);
    t50 = (t44 + 4);
    t54 = *((unsigned int *)t50);
    t55 = (!(t54));
    t52 = (t45 + 4);
    t57 = *((unsigned int *)t52);
    t58 = (!(t57));
    t59 = (t55 && t58);
    if (t59 == 1)
        goto LAB31;

LAB32:    goto LAB30;

LAB31:    t60 = *((unsigned int *)t44);
    t61 = *((unsigned int *)t45);
    t62 = (t60 - t61);
    t63 = (t62 + 1);
    xsi_vlogvar_assign_value(t35, t33, 0, *((unsigned int *)t45), t63);
    goto LAB32;

LAB35:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(28, ng0);
    t26 = (t0 + 1368U);
    t27 = *((char **)t26);
    memset(t33, 0, 8);
    t26 = (t33 + 4);
    t34 = (t27 + 4);
    t37 = *((unsigned int *)t27);
    t38 = (t37 >> 24);
    *((unsigned int *)t33) = t38;
    t39 = *((unsigned int *)t34);
    t40 = (t39 >> 24);
    *((unsigned int *)t26) = t40;
    t41 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t41 & 255U);
    t42 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t42 & 255U);
    t35 = (t0 + 2728);
    t36 = (t0 + 2728);
    t43 = (t36 + 72U);
    t46 = *((char **)t43);
    t47 = (t0 + 2728);
    t48 = (t47 + 64U);
    t49 = *((char **)t48);
    t50 = (t0 + 2328U);
    t51 = *((char **)t50);
    xsi_vlog_generic_convert_array_indices(t44, t45, t46, t49, 2, 1, t51, 32, 2);
    t50 = (t44 + 4);
    t54 = *((unsigned int *)t50);
    t55 = (!(t54));
    t52 = (t45 + 4);
    t57 = *((unsigned int *)t52);
    t58 = (!(t57));
    t59 = (t55 && t58);
    if (t59 == 1)
        goto LAB40;

LAB41:    goto LAB39;

LAB40:    t60 = *((unsigned int *)t44);
    t61 = *((unsigned int *)t45);
    t62 = (t60 - t61);
    t63 = (t62 + 1);
    xsi_vlogvar_assign_value(t35, t33, 0, *((unsigned int *)t45), t63);
    goto LAB41;

}


extern void work_m_07890547161536360580_1352674679_init()
{
	static char *pe[] = {(void *)Initial_9_0,(void *)Cont_13_1,(void *)Cont_14_2,(void *)Cont_15_3,(void *)Cont_16_4,(void *)Cont_18_5,(void *)Always_20_6};
	xsi_register_didat("work_m_07890547161536360580_1352674679", "isim/cpu_tb_isim_beh.exe.sim/work/m_07890547161536360580_1352674679.didat");
	xsi_register_executes(pe);
}
