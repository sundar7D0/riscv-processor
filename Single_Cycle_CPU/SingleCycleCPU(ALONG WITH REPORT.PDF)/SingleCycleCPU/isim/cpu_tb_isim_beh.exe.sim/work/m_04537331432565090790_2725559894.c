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
static const char *ng0 = "/home/sundar/Desktop/comporg/a3.1/SingleCycleCPU/alu.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {8U, 0U};
static unsigned int ng11[] = {9U, 0U};
static unsigned int ng12[] = {10U, 0U};
static unsigned int ng13[] = {11U, 0U};
static unsigned int ng14[] = {12U, 0U};
static unsigned int ng15[] = {13U, 0U};
static unsigned int ng16[] = {14U, 0U};
static unsigned int ng17[] = {15U, 0U};
static unsigned int ng18[] = {16U, 0U};
static unsigned int ng19[] = {17U, 0U};
static unsigned int ng20[] = {18U, 0U};



static void Always_13_0(char *t0)
{
    char t14[8];
    char t15[8];
    char t16[8];
    char t17[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;

LAB0:    t1 = (t0 + 3160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 3480);
    *((int *)t2) = 1;
    t3 = (t0 + 3192);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(13, ng0);

LAB5:    xsi_set_current_line(14, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(17, ng0);

LAB9:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);

LAB10:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t13 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t13 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t13 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t13 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t13 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t13 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng10)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t13 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng11)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t13 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng12)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t13 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng13)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t13 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng14)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t13 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng15)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t13 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng16)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t13 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng17)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t13 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng18)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t13 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng19)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t13 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng20)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t13 == 1)
        goto LAB47;

LAB48:
LAB50:
LAB49:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 32, 0LL);

LAB51:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(15, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2088);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    goto LAB8;

LAB11:    xsi_set_current_line(19, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t11 = *((char **)t4);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t5, 32, t11, 32);
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t14, 0, 0, 32);
    goto LAB51;

LAB13:    xsi_set_current_line(20, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t11 = *((char **)t4);
    memset(t18, 0, 8);
    xsi_vlog_signed_greater(t18, 32, t5, 32, t11, 32);
    memset(t15, 0, 8);
    t4 = (t18 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t18);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t4) != 0)
        goto LAB54;

LAB55:    t19 = (t15 + 4);
    t20 = *((unsigned int *)t15);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB56;

LAB57:    t24 = *((unsigned int *)t15);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t19) > 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t15) > 0)
        goto LAB62;

LAB63:    memcpy(t14, t28, 8);

LAB64:    t29 = (t0 + 2088);
    xsi_vlogvar_assign_value(t29, t14, 0, 0, 32);
    goto LAB51;

LAB15:    xsi_set_current_line(21, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t11 = *((char **)t4);
    memset(t16, 0, 8);
    t4 = (t5 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB66;

LAB65:    t12 = (t11 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB66;

LAB69:    if (*((unsigned int *)t5) > *((unsigned int *)t11))
        goto LAB67;

LAB68:    memset(t15, 0, 8);
    t23 = (t16 + 4);
    t6 = *((unsigned int *)t23);
    t7 = (~(t6));
    t8 = *((unsigned int *)t16);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t23) != 0)
        goto LAB72;

LAB73:    t29 = (t15 + 4);
    t20 = *((unsigned int *)t15);
    t21 = *((unsigned int *)t29);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB74;

LAB75:    t24 = *((unsigned int *)t15);
    t25 = (~(t24));
    t26 = *((unsigned int *)t29);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t29) > 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t15) > 0)
        goto LAB80;

LAB81:    memcpy(t14, t31, 8);

LAB82:    t32 = (t0 + 2088);
    xsi_vlogvar_assign_value(t32, t14, 0, 0, 32);
    goto LAB51;

LAB17:    xsi_set_current_line(22, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t11 = *((char **)t4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    *((unsigned int *)t14) = t8;
    t4 = (t5 + 4);
    t12 = (t11 + 4);
    t19 = (t14 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t12);
    t20 = (t9 | t10);
    *((unsigned int *)t19) = t20;
    t21 = *((unsigned int *)t19);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB83;

LAB84:
LAB85:    t23 = (t0 + 2088);
    xsi_vlogvar_assign_value(t23, t14, 0, 0, 32);
    goto LAB51;

LAB19:    xsi_set_current_line(23, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t11 = *((char **)t4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 | t7);
    *((unsigned int *)t14) = t8;
    t4 = (t5 + 4);
    t12 = (t11 + 4);
    t19 = (t14 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t12);
    t20 = (t9 | t10);
    *((unsigned int *)t19) = t20;
    t21 = *((unsigned int *)t19);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB86;

LAB87:
LAB88:    t29 = (t0 + 2088);
    xsi_vlogvar_assign_value(t29, t14, 0, 0, 32);
    goto LAB51;

LAB21:    xsi_set_current_line(24, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t11 = *((char **)t4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 & t7);
    *((unsigned int *)t14) = t8;
    t4 = (t5 + 4);
    t12 = (t11 + 4);
    t19 = (t14 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t12);
    t20 = (t9 | t10);
    *((unsigned int *)t19) = t20;
    t21 = *((unsigned int *)t19);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB89;

LAB90:
LAB91:    t29 = (t0 + 2088);
    xsi_vlogvar_assign_value(t29, t14, 0, 0, 32);
    goto LAB51;

LAB23:    xsi_set_current_line(25, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1528U);
    t11 = *((char **)t4);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_lshift(t14, 32, t5, 32, t11, 5);
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t14, 0, 0, 32);
    goto LAB51;

LAB25:    xsi_set_current_line(26, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1528U);
    t11 = *((char **)t4);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_rshift(t14, 32, t5, 32, t11, 5);
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t14, 0, 0, 32);
    goto LAB51;

LAB27:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1528U);
    t11 = *((char **)t4);
    memset(t16, 0, 8);
    xsi_vlog_signed_arith_rshift(t16, 32, t5, 32, t11, 32);
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t16, 0, 0, 32);
    goto LAB51;

LAB29:    xsi_set_current_line(28, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t11 = *((char **)t4);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t5, 32, t11, 32);
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t14, 0, 0, 32);
    goto LAB51;

LAB31:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t11 = *((char **)t4);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t5, 32, t11, 32);
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t14, 0, 0, 32);
    goto LAB51;

LAB33:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t11 = *((char **)t4);
    memset(t16, 0, 8);
    t4 = (t16 + 4);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 0);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 31U);
    t20 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t20 & 31U);
    memset(t17, 0, 8);
    xsi_vlog_signed_lshift(t17, 32, t5, 32, t16, 32);
    t19 = (t0 + 2088);
    xsi_vlogvar_assign_value(t19, t17, 0, 0, 32);
    goto LAB51;

LAB35:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t11 = *((char **)t4);
    memset(t18, 0, 8);
    xsi_vlog_signed_greater(t18, 32, t5, 32, t11, 32);
    memset(t15, 0, 8);
    t4 = (t18 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t18);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t4) != 0)
        goto LAB94;

LAB95:    t19 = (t15 + 4);
    t20 = *((unsigned int *)t15);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB96;

LAB97:    t24 = *((unsigned int *)t15);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t19) > 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t15) > 0)
        goto LAB102;

LAB103:    memcpy(t14, t28, 8);

LAB104:    t29 = (t0 + 2088);
    xsi_vlogvar_assign_value(t29, t14, 0, 0, 32);
    goto LAB51;

LAB37:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t11 = *((char **)t4);
    memset(t16, 0, 8);
    t4 = (t5 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB106;

LAB105:    t12 = (t11 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB106;

LAB109:    if (*((unsigned int *)t5) > *((unsigned int *)t11))
        goto LAB107;

LAB108:    memset(t15, 0, 8);
    t23 = (t16 + 4);
    t6 = *((unsigned int *)t23);
    t7 = (~(t6));
    t8 = *((unsigned int *)t16);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t23) != 0)
        goto LAB112;

LAB113:    t29 = (t15 + 4);
    t20 = *((unsigned int *)t15);
    t21 = *((unsigned int *)t29);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB114;

LAB115:    t24 = *((unsigned int *)t15);
    t25 = (~(t24));
    t26 = *((unsigned int *)t29);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB116;

LAB117:    if (*((unsigned int *)t29) > 0)
        goto LAB118;

LAB119:    if (*((unsigned int *)t15) > 0)
        goto LAB120;

LAB121:    memcpy(t14, t31, 8);

LAB122:    t32 = (t0 + 2088);
    xsi_vlogvar_assign_value(t32, t14, 0, 0, 32);
    goto LAB51;

LAB39:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t11 = *((char **)t4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    *((unsigned int *)t14) = t8;
    t4 = (t5 + 4);
    t12 = (t11 + 4);
    t19 = (t14 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t12);
    t20 = (t9 | t10);
    *((unsigned int *)t19) = t20;
    t21 = *((unsigned int *)t19);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB123;

LAB124:
LAB125:    t23 = (t0 + 2088);
    xsi_vlogvar_assign_value(t23, t14, 0, 0, 32);
    goto LAB51;

LAB41:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t11 = *((char **)t4);
    memset(t16, 0, 8);
    t4 = (t16 + 4);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 0);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 31U);
    t20 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t20 & 31U);
    memset(t17, 0, 8);
    xsi_vlog_signed_rshift(t17, 32, t5, 32, t16, 32);
    t19 = (t0 + 2088);
    xsi_vlogvar_assign_value(t19, t17, 0, 0, 32);
    goto LAB51;

LAB43:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t11 = *((char **)t4);
    memset(t16, 0, 8);
    t4 = (t16 + 4);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 0);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 31U);
    t20 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t20 & 31U);
    memset(t17, 0, 8);
    xsi_vlog_signed_arith_rshift(t17, 32, t5, 32, t16, 32);
    t19 = (t0 + 2088);
    xsi_vlogvar_assign_value(t19, t17, 0, 0, 32);
    goto LAB51;

LAB45:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t11 = *((char **)t4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 | t7);
    *((unsigned int *)t14) = t8;
    t4 = (t5 + 4);
    t12 = (t11 + 4);
    t19 = (t14 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t12);
    t20 = (t9 | t10);
    *((unsigned int *)t19) = t20;
    t21 = *((unsigned int *)t19);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB126;

LAB127:
LAB128:    t29 = (t0 + 2088);
    xsi_vlogvar_assign_value(t29, t14, 0, 0, 32);
    goto LAB51;

LAB47:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t11 = *((char **)t4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 & t7);
    *((unsigned int *)t14) = t8;
    t4 = (t5 + 4);
    t12 = (t11 + 4);
    t19 = (t14 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t12);
    t20 = (t9 | t10);
    *((unsigned int *)t19) = t20;
    t21 = *((unsigned int *)t19);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB129;

LAB130:
LAB131:    t29 = (t0 + 2088);
    xsi_vlogvar_assign_value(t29, t14, 0, 0, 32);
    goto LAB51;

LAB52:    *((unsigned int *)t15) = 1;
    goto LAB55;

LAB54:    t12 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB55;

LAB56:    t23 = ((char*)((ng3)));
    goto LAB57;

LAB58:    t28 = ((char*)((ng2)));
    goto LAB59;

LAB60:    xsi_vlog_unsigned_bit_combine(t14, 32, t23, 32, t28, 32);
    goto LAB64;

LAB62:    memcpy(t14, t23, 8);
    goto LAB64;

LAB66:    t19 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB68;

LAB67:    *((unsigned int *)t16) = 1;
    goto LAB68;

LAB70:    *((unsigned int *)t15) = 1;
    goto LAB73;

LAB72:    t28 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB73;

LAB74:    t30 = ((char*)((ng3)));
    goto LAB75;

LAB76:    t31 = ((char*)((ng2)));
    goto LAB77;

LAB78:    xsi_vlog_unsigned_bit_combine(t14, 32, t30, 32, t31, 32);
    goto LAB82;

LAB80:    memcpy(t14, t30, 8);
    goto LAB82;

LAB83:    t24 = *((unsigned int *)t14);
    t25 = *((unsigned int *)t19);
    *((unsigned int *)t14) = (t24 | t25);
    goto LAB85;

LAB86:    t24 = *((unsigned int *)t14);
    t25 = *((unsigned int *)t19);
    *((unsigned int *)t14) = (t24 | t25);
    t23 = (t5 + 4);
    t28 = (t11 + 4);
    t26 = *((unsigned int *)t23);
    t27 = (~(t26));
    t33 = *((unsigned int *)t5);
    t34 = (t33 & t27);
    t35 = *((unsigned int *)t28);
    t36 = (~(t35));
    t37 = *((unsigned int *)t11);
    t38 = (t37 & t36);
    t39 = (~(t34));
    t40 = (~(t38));
    t41 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t41 & t39);
    t42 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t42 & t40);
    goto LAB88;

LAB89:    t24 = *((unsigned int *)t14);
    t25 = *((unsigned int *)t19);
    *((unsigned int *)t14) = (t24 | t25);
    t23 = (t5 + 4);
    t28 = (t11 + 4);
    t26 = *((unsigned int *)t5);
    t27 = (~(t26));
    t33 = *((unsigned int *)t23);
    t35 = (~(t33));
    t36 = *((unsigned int *)t11);
    t37 = (~(t36));
    t39 = *((unsigned int *)t28);
    t40 = (~(t39));
    t34 = (t27 & t35);
    t38 = (t37 & t40);
    t41 = (~(t34));
    t42 = (~(t38));
    t43 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t43 & t41);
    t44 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t44 & t42);
    t45 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t45 & t41);
    t46 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t46 & t42);
    goto LAB91;

LAB92:    *((unsigned int *)t15) = 1;
    goto LAB95;

LAB94:    t12 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB95;

LAB96:    t23 = ((char*)((ng3)));
    goto LAB97;

LAB98:    t28 = ((char*)((ng2)));
    goto LAB99;

LAB100:    xsi_vlog_unsigned_bit_combine(t14, 32, t23, 32, t28, 32);
    goto LAB104;

LAB102:    memcpy(t14, t23, 8);
    goto LAB104;

LAB106:    t19 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB108;

LAB107:    *((unsigned int *)t16) = 1;
    goto LAB108;

LAB110:    *((unsigned int *)t15) = 1;
    goto LAB113;

LAB112:    t28 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB113;

LAB114:    t30 = ((char*)((ng3)));
    goto LAB115;

LAB116:    t31 = ((char*)((ng2)));
    goto LAB117;

LAB118:    xsi_vlog_unsigned_bit_combine(t14, 32, t30, 32, t31, 32);
    goto LAB122;

LAB120:    memcpy(t14, t30, 8);
    goto LAB122;

LAB123:    t24 = *((unsigned int *)t14);
    t25 = *((unsigned int *)t19);
    *((unsigned int *)t14) = (t24 | t25);
    goto LAB125;

LAB126:    t24 = *((unsigned int *)t14);
    t25 = *((unsigned int *)t19);
    *((unsigned int *)t14) = (t24 | t25);
    t23 = (t5 + 4);
    t28 = (t11 + 4);
    t26 = *((unsigned int *)t23);
    t27 = (~(t26));
    t33 = *((unsigned int *)t5);
    t34 = (t33 & t27);
    t35 = *((unsigned int *)t28);
    t36 = (~(t35));
    t37 = *((unsigned int *)t11);
    t38 = (t37 & t36);
    t39 = (~(t34));
    t40 = (~(t38));
    t41 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t41 & t39);
    t42 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t42 & t40);
    goto LAB128;

LAB129:    t24 = *((unsigned int *)t14);
    t25 = *((unsigned int *)t19);
    *((unsigned int *)t14) = (t24 | t25);
    t23 = (t5 + 4);
    t28 = (t11 + 4);
    t26 = *((unsigned int *)t5);
    t27 = (~(t26));
    t33 = *((unsigned int *)t23);
    t35 = (~(t33));
    t36 = *((unsigned int *)t11);
    t37 = (~(t36));
    t39 = *((unsigned int *)t28);
    t40 = (~(t39));
    t34 = (t27 & t35);
    t38 = (t37 & t40);
    t41 = (~(t34));
    t42 = (~(t38));
    t43 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t43 & t41);
    t44 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t44 & t42);
    t45 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t45 & t41);
    t46 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t46 & t42);
    goto LAB131;

}


extern void work_m_04537331432565090790_2725559894_init()
{
	static char *pe[] = {(void *)Always_13_0};
	xsi_register_didat("work_m_04537331432565090790_2725559894", "isim/cpu_tb_isim_beh.exe.sim/work/m_04537331432565090790_2725559894.didat");
	xsi_register_executes(pe);
}
