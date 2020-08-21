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
static const char *ng0 = "/home/pruthvirg/Desktop/sem_fire/comp_org/wd_assign_4/cpu_pipeline/reg_indata_generator.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {24, 0};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};
static int ng8[] = {16, 0};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {7U, 0U};
static unsigned int ng11[] = {8U, 0U};
static unsigned int ng12[] = {9U, 0U};
static unsigned int ng13[] = {10U, 0U};
static unsigned int ng14[] = {11U, 0U};
static unsigned int ng15[] = {12U, 0U};
static unsigned int ng16[] = {14U, 0U};
static unsigned int ng17[] = {5U, 0U};
static int ng18[] = {1, 0};
static int ng19[] = {4, 0};



static void Initial_35_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(35, ng0);

LAB2:    xsi_set_current_line(36, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_38_1(char *t0)
{
    char t9[8];
    char t10[8];
    char t22[8];
    char t27[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;

LAB0:    t1 = (t0 + 4048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 4864);
    *((int *)t2) = 1;
    t3 = (t0 + 4080);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 2888);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 7, t7, 7);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 7, t2, 7);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 7, t2, 7);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 7, t2, 7);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 7, t2, 7);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 7, t2, 7);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 7, t2, 7);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 7, t2, 7);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 7, t2, 7);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 7, t2, 7);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 7, t2, 7);
    if (t8 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 7, t2, 7);
    if (t8 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng16)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 7, t2, 7);
    if (t8 == 1)
        goto LAB31;

LAB32:
LAB34:
LAB33:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB35:    goto LAB2;

LAB7:    xsi_set_current_line(41, ng0);
    t11 = (t0 + 2728);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memset(t10, 0, 8);
    t14 = (t10 + 4);
    t15 = (t13 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (t16 >> 0);
    *((unsigned int *)t10) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 0);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t20 & 255U);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t21 & 255U);
    t23 = ((char*)((ng3)));
    t24 = (t0 + 2728);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t27, 0, 8);
    t28 = (t27 + 4);
    t29 = (t26 + 4);
    t30 = *((unsigned int *)t26);
    t31 = (t30 >> 31);
    t32 = (t31 & 1);
    *((unsigned int *)t27) = t32;
    t33 = *((unsigned int *)t29);
    t34 = (t33 >> 31);
    t35 = (t34 & 1);
    *((unsigned int *)t28) = t35;
    xsi_vlog_mul_concat(t22, 24, 1, t23, 1U, t27, 1);
    xsi_vlogtype_concat(t9, 32, 32, 2U, t22, 24, t10, 8);
    t36 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t36, t9, 0, 0, 32, 0LL);
    goto LAB35;

LAB9:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t10, 0, 8);
    t7 = (t10 + 4);
    t11 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (t16 >> 8);
    *((unsigned int *)t10) = t17;
    t18 = *((unsigned int *)t11);
    t19 = (t18 >> 8);
    *((unsigned int *)t7) = t19;
    t20 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t20 & 255U);
    t21 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t21 & 255U);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 2728);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t27, 0, 8);
    t23 = (t27 + 4);
    t24 = (t15 + 4);
    t30 = *((unsigned int *)t15);
    t31 = (t30 >> 31);
    t32 = (t31 & 1);
    *((unsigned int *)t27) = t32;
    t33 = *((unsigned int *)t24);
    t34 = (t33 >> 31);
    t35 = (t34 & 1);
    *((unsigned int *)t23) = t35;
    xsi_vlog_mul_concat(t22, 24, 1, t12, 1U, t27, 1);
    xsi_vlogtype_concat(t9, 32, 32, 2U, t22, 24, t10, 8);
    t25 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t25, t9, 0, 0, 32, 0LL);
    goto LAB35;

LAB11:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t10, 0, 8);
    t7 = (t10 + 4);
    t11 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (t16 >> 16);
    *((unsigned int *)t10) = t17;
    t18 = *((unsigned int *)t11);
    t19 = (t18 >> 16);
    *((unsigned int *)t7) = t19;
    t20 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t20 & 255U);
    t21 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t21 & 255U);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 2728);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t27, 0, 8);
    t23 = (t27 + 4);
    t24 = (t15 + 4);
    t30 = *((unsigned int *)t15);
    t31 = (t30 >> 31);
    t32 = (t31 & 1);
    *((unsigned int *)t27) = t32;
    t33 = *((unsigned int *)t24);
    t34 = (t33 >> 31);
    t35 = (t34 & 1);
    *((unsigned int *)t23) = t35;
    xsi_vlog_mul_concat(t22, 24, 1, t12, 1U, t27, 1);
    xsi_vlogtype_concat(t9, 32, 32, 2U, t22, 24, t10, 8);
    t25 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t25, t9, 0, 0, 32, 0LL);
    goto LAB35;

LAB13:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t10, 0, 8);
    t7 = (t10 + 4);
    t11 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (t16 >> 24);
    *((unsigned int *)t10) = t17;
    t18 = *((unsigned int *)t11);
    t19 = (t18 >> 24);
    *((unsigned int *)t7) = t19;
    t20 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t20 & 255U);
    t21 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t21 & 255U);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 2728);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t27, 0, 8);
    t23 = (t27 + 4);
    t24 = (t15 + 4);
    t30 = *((unsigned int *)t15);
    t31 = (t30 >> 31);
    t32 = (t31 & 1);
    *((unsigned int *)t27) = t32;
    t33 = *((unsigned int *)t24);
    t34 = (t33 >> 31);
    t35 = (t34 & 1);
    *((unsigned int *)t23) = t35;
    xsi_vlog_mul_concat(t22, 24, 1, t12, 1U, t27, 1);
    xsi_vlogtype_concat(t9, 32, 32, 2U, t22, 24, t10, 8);
    t25 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t25, t9, 0, 0, 32, 0LL);
    goto LAB35;

LAB15:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t10, 0, 8);
    t7 = (t10 + 4);
    t11 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (t16 >> 0);
    *((unsigned int *)t10) = t17;
    t18 = *((unsigned int *)t11);
    t19 = (t18 >> 0);
    *((unsigned int *)t7) = t19;
    t20 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t20 & 65535U);
    t21 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t21 & 65535U);
    t12 = ((char*)((ng8)));
    t13 = (t0 + 2728);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t27, 0, 8);
    t23 = (t27 + 4);
    t24 = (t15 + 4);
    t30 = *((unsigned int *)t15);
    t31 = (t30 >> 31);
    t32 = (t31 & 1);
    *((unsigned int *)t27) = t32;
    t33 = *((unsigned int *)t24);
    t34 = (t33 >> 31);
    t35 = (t34 & 1);
    *((unsigned int *)t23) = t35;
    xsi_vlog_mul_concat(t22, 16, 1, t12, 1U, t27, 1);
    xsi_vlogtype_concat(t9, 32, 32, 2U, t22, 16, t10, 16);
    t25 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t25, t9, 0, 0, 32, 0LL);
    goto LAB35;

LAB17:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t10, 0, 8);
    t7 = (t10 + 4);
    t11 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (t16 >> 16);
    *((unsigned int *)t10) = t17;
    t18 = *((unsigned int *)t11);
    t19 = (t18 >> 16);
    *((unsigned int *)t7) = t19;
    t20 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t20 & 65535U);
    t21 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t21 & 65535U);
    t12 = ((char*)((ng8)));
    t13 = (t0 + 2728);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t27, 0, 8);
    t23 = (t27 + 4);
    t24 = (t15 + 4);
    t30 = *((unsigned int *)t15);
    t31 = (t30 >> 31);
    t32 = (t31 & 1);
    *((unsigned int *)t27) = t32;
    t33 = *((unsigned int *)t24);
    t34 = (t33 >> 31);
    t35 = (t34 & 1);
    *((unsigned int *)t23) = t35;
    xsi_vlog_mul_concat(t22, 16, 1, t12, 1U, t27, 1);
    xsi_vlogtype_concat(t9, 32, 32, 2U, t22, 16, t10, 16);
    t25 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t25, t9, 0, 0, 32, 0LL);
    goto LAB35;

LAB19:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 32, 0LL);
    goto LAB35;

LAB21:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t10, 0, 8);
    t7 = (t10 + 4);
    t11 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (t16 >> 0);
    *((unsigned int *)t10) = t17;
    t18 = *((unsigned int *)t11);
    t19 = (t18 >> 0);
    *((unsigned int *)t7) = t19;
    t20 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t20 & 255U);
    t21 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t21 & 255U);
    t12 = ((char*)((ng2)));
    xsi_vlogtype_concat(t9, 32, 32, 2U, t12, 24, t10, 8);
    t13 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t13, t9, 0, 0, 32, 0LL);
    goto LAB35;

LAB23:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t10, 0, 8);
    t7 = (t10 + 4);
    t11 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (t16 >> 8);
    *((unsigned int *)t10) = t17;
    t18 = *((unsigned int *)t11);
    t19 = (t18 >> 8);
    *((unsigned int *)t7) = t19;
    t20 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t20 & 255U);
    t21 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t21 & 255U);
    t12 = ((char*)((ng2)));
    xsi_vlogtype_concat(t9, 32, 32, 2U, t12, 24, t10, 8);
    t13 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t13, t9, 0, 0, 32, 0LL);
    goto LAB35;

LAB25:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t10, 0, 8);
    t7 = (t10 + 4);
    t11 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (t16 >> 16);
    *((unsigned int *)t10) = t17;
    t18 = *((unsigned int *)t11);
    t19 = (t18 >> 16);
    *((unsigned int *)t7) = t19;
    t20 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t20 & 255U);
    t21 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t21 & 255U);
    t12 = ((char*)((ng2)));
    xsi_vlogtype_concat(t9, 32, 32, 2U, t12, 24, t10, 8);
    t13 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t13, t9, 0, 0, 32, 0LL);
    goto LAB35;

LAB27:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t10, 0, 8);
    t7 = (t10 + 4);
    t11 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (t16 >> 24);
    *((unsigned int *)t10) = t17;
    t18 = *((unsigned int *)t11);
    t19 = (t18 >> 24);
    *((unsigned int *)t7) = t19;
    t20 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t20 & 255U);
    t21 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t21 & 255U);
    t12 = ((char*)((ng2)));
    xsi_vlogtype_concat(t9, 32, 32, 2U, t12, 24, t10, 8);
    t13 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t13, t9, 0, 0, 32, 0LL);
    goto LAB35;

LAB29:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t10, 0, 8);
    t7 = (t10 + 4);
    t11 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (t16 >> 0);
    *((unsigned int *)t10) = t17;
    t18 = *((unsigned int *)t11);
    t19 = (t18 >> 0);
    *((unsigned int *)t7) = t19;
    t20 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t20 & 65535U);
    t21 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t21 & 65535U);
    t12 = ((char*)((ng2)));
    xsi_vlogtype_concat(t9, 32, 32, 2U, t12, 16, t10, 16);
    t13 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t13, t9, 0, 0, 32, 0LL);
    goto LAB35;

LAB31:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t10, 0, 8);
    t7 = (t10 + 4);
    t11 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (t16 >> 16);
    *((unsigned int *)t10) = t17;
    t18 = *((unsigned int *)t11);
    t19 = (t18 >> 16);
    *((unsigned int *)t7) = t19;
    t20 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t20 & 65535U);
    t21 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t21 & 65535U);
    t12 = ((char*)((ng2)));
    xsi_vlogtype_concat(t9, 32, 32, 2U, t12, 16, t10, 16);
    t13 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t13, t9, 0, 0, 32, 0LL);
    goto LAB35;

}

static void Always_58_2(char *t0)
{
    char t7[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 4296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 4880);
    *((int *)t2) = 1;
    t3 = (t0 + 4328);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(59, ng0);

LAB5:    xsi_set_current_line(60, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);

LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(61, ng0);
    t9 = (t0 + 1688U);
    t10 = *((char **)t9);
    memset(t8, 0, 8);
    t9 = (t8 + 4);
    t11 = (t10 + 4);
    t12 = *((unsigned int *)t10);
    t13 = (t12 >> 0);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 0);
    *((unsigned int *)t9) = t15;
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 3U);
    t17 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t17 & 3U);
    t18 = ((char*)((ng2)));
    xsi_vlogtype_concat(t7, 7, 7, 2U, t18, 5, t8, 2);
    t19 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t19, t7, 0, 0, 7, 0LL);
    goto LAB19;

LAB9:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t3 = (t8 + 4);
    t9 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t9);
    t15 = (t14 >> 0);
    *((unsigned int *)t3) = t15;
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 3U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 3U);
    t10 = ((char*)((ng4)));
    xsi_vlogtype_concat(t7, 7, 7, 2U, t10, 5, t8, 2);
    t11 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t11, t7, 0, 0, 7, 0LL);
    goto LAB19;

LAB11:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t3 = (t8 + 4);
    t9 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t9);
    t15 = (t14 >> 0);
    *((unsigned int *)t3) = t15;
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 3U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 3U);
    t10 = ((char*)((ng5)));
    xsi_vlogtype_concat(t7, 7, 7, 2U, t10, 5, t8, 2);
    t11 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t11, t7, 0, 0, 7, 0LL);
    goto LAB19;

LAB13:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t3 = (t8 + 4);
    t9 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t9);
    t15 = (t14 >> 0);
    *((unsigned int *)t3) = t15;
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 3U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 3U);
    t10 = ((char*)((ng6)));
    xsi_vlogtype_concat(t7, 7, 7, 2U, t10, 5, t8, 2);
    t11 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t11, t7, 0, 0, 7, 0LL);
    goto LAB19;

LAB15:    xsi_set_current_line(65, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB19;

}

static void Always_71_3(char *t0)
{
    char t6[8];
    char t30[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
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
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t31;

LAB0:    t1 = (t0 + 4544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 4896);
    *((int *)t2) = 1;
    t3 = (t0 + 4576);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(72, ng0);

LAB5:    xsi_set_current_line(73, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng18)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng18)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB16;

LAB13:    if (t18 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t6) = 1;

LAB16:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng18)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB23;

LAB20:    if (t18 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t6) = 1;

LAB23:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng18)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB30;

LAB27:    if (t18 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t6) = 1;

LAB30:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);

LAB33:
LAB26:
LAB19:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(73, ng0);
    t28 = (t0 + 1848U);
    t29 = *((char **)t28);
    t28 = (t0 + 1688U);
    t31 = *((char **)t28);
    memset(t32, 0, 8);
    xsi_vlog_unsigned_add(t32, 32, t29, 32, t31, 32);
    t28 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t28, t32, 0, 0, 32, 0LL);
    goto LAB12;

LAB15:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(74, ng0);
    t21 = (t0 + 1848U);
    t22 = *((char **)t21);
    t21 = ((char*)((ng19)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 32, t22, 32, t21, 32);
    t28 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t28, t30, 0, 0, 32, 0LL);
    goto LAB19;

LAB22:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(75, ng0);
    t21 = (t0 + 1848U);
    t22 = *((char **)t21);
    t21 = ((char*)((ng19)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 32, t22, 32, t21, 32);
    t28 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t28, t30, 0, 0, 32, 0LL);
    goto LAB26;

LAB29:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(76, ng0);
    t21 = (t0 + 1528U);
    t22 = *((char **)t21);
    t21 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t21, t22, 0, 0, 32, 0LL);
    goto LAB33;

}


extern void work_m_12099449139276435547_2879187816_init()
{
	static char *pe[] = {(void *)Initial_35_0,(void *)Always_38_1,(void *)Always_58_2,(void *)Always_71_3};
	xsi_register_didat("work_m_12099449139276435547_2879187816", "isim/cpu_pipeline_tb_isim_beh.exe.sim/work/m_12099449139276435547_2879187816.didat");
	xsi_register_executes(pe);
}
