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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Sina HZ/Vending_machine/Main.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static int ng4[] = {2, 0};
static int ng5[] = {3, 0};
static int ng6[] = {4, 0};
static int ng7[] = {5, 0};
static int ng8[] = {6, 0};
static int ng9[] = {7, 0};
static const char *ng10 = "stuff.txt";
static unsigned int ng11[] = {1U, 0U};
static unsigned int ng12[] = {2U, 0U};
static unsigned int ng13[] = {3U, 0U};
static const char *ng14 = "-------------------------------------------------------------------";
static const char *ng15 = "type 0 has %d supply and %d is the price";
static const char *ng16 = "type 1 has %d supply and %d is the price";
static const char *ng17 = "type 2 has %d supply and %d is the price";
static const char *ng18 = "type 3 has %d supply and %d is the price";
static const char *ng19 = "type 4 has %d supply and %d is the price";
static const char *ng20 = "type 5 has %d supply and %d is the price";
static const char *ng21 = "type 6 has %d supply and %d is the price";
static const char *ng22 = "type 7 has %d supply and %d is the price";
static const char *ng23 = "machine money is %d";



static void Initial_27_0(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    int t14;
    char *t15;
    unsigned int t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    int t21;
    int t22;

LAB0:    xsi_set_current_line(27, ng0);

LAB2:    xsi_set_current_line(28, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4968);
    t5 = (t0 + 4968);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4968);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB3;

LAB4:    xsi_set_current_line(29, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4968);
    t5 = (t0 + 4968);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4968);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB5;

LAB6:    xsi_set_current_line(30, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4968);
    t5 = (t0 + 4968);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4968);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(31, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4968);
    t5 = (t0 + 4968);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4968);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(32, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4968);
    t5 = (t0 + 4968);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4968);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(33, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4968);
    t5 = (t0 + 4968);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4968);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(34, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4968);
    t5 = (t0 + 4968);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4968);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng8)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(35, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4968);
    t5 = (t0 + 4968);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4968);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng9)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(37, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5448);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 9);
    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5608);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 7);

LAB1:    return;
LAB3:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB4;

LAB5:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB6;

LAB7:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB8;

LAB9:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB10;

LAB11:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB12;

LAB13:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB14;

LAB15:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB16;

LAB17:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB18;

}

static void Initial_56_1(char *t0)
{
    char t4[8];
    char t12[8];
    char t22[8];
    char t23[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    int t33;
    char *t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    int t40;
    int t41;

LAB0:    xsi_set_current_line(56, ng0);

LAB2:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 4968);
    xsi_vlogfile_readmemb(ng10, 0, t1, 0, 0, 0, 0);
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 4968);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t0 + 4968);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4968);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t4, 11, t3, t7, t10, 2, 1, t11, 32, 1);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 4);
    *((unsigned int *)t12) = t16;
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 4);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t19 & 15U);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 15U);
    t21 = (t0 + 5128);
    t24 = (t0 + 5128);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t27 = (t0 + 5128);
    t28 = (t27 + 64U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t22, t23, t26, t29, 2, 1, t30, 32, 1);
    t31 = (t22 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t23 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (!(t35));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB3;

LAB4:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 4968);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t0 + 4968);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4968);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t4, 11, t3, t7, t10, 2, 1, t11, 32, 1);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 0);
    *((unsigned int *)t12) = t16;
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 0);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t19 & 15U);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 15U);
    t21 = (t0 + 5288);
    t24 = (t0 + 5288);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t27 = (t0 + 5288);
    t28 = (t27 + 64U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t22, t23, t26, t29, 2, 1, t30, 32, 1);
    t31 = (t22 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t23 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (!(t35));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB5;

LAB6:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 4968);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t0 + 4968);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4968);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t4, 11, t3, t7, t10, 2, 1, t11, 32, 1);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 4);
    *((unsigned int *)t12) = t16;
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 4);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t19 & 15U);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 15U);
    t21 = (t0 + 5128);
    t24 = (t0 + 5128);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t27 = (t0 + 5128);
    t28 = (t27 + 64U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t22, t23, t26, t29, 2, 1, t30, 32, 1);
    t31 = (t22 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t23 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (!(t35));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 4968);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t0 + 4968);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4968);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t4, 11, t3, t7, t10, 2, 1, t11, 32, 1);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 0);
    *((unsigned int *)t12) = t16;
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 0);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t19 & 15U);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 15U);
    t21 = (t0 + 5288);
    t24 = (t0 + 5288);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t27 = (t0 + 5288);
    t28 = (t27 + 64U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t22, t23, t26, t29, 2, 1, t30, 32, 1);
    t31 = (t22 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t23 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (!(t35));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 4968);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t0 + 4968);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4968);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t4, 11, t3, t7, t10, 2, 1, t11, 32, 1);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 4);
    *((unsigned int *)t12) = t16;
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 4);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t19 & 15U);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 15U);
    t21 = (t0 + 5128);
    t24 = (t0 + 5128);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t27 = (t0 + 5128);
    t28 = (t27 + 64U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t22, t23, t26, t29, 2, 1, t30, 32, 1);
    t31 = (t22 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t23 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (!(t35));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 4968);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t0 + 4968);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4968);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t4, 11, t3, t7, t10, 2, 1, t11, 32, 1);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 0);
    *((unsigned int *)t12) = t16;
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 0);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t19 & 15U);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 15U);
    t21 = (t0 + 5288);
    t24 = (t0 + 5288);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t27 = (t0 + 5288);
    t28 = (t27 + 64U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t22, t23, t26, t29, 2, 1, t30, 32, 1);
    t31 = (t22 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t23 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (!(t35));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 4968);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t0 + 4968);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4968);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t4, 11, t3, t7, t10, 2, 1, t11, 32, 1);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 4);
    *((unsigned int *)t12) = t16;
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 4);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t19 & 15U);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 15U);
    t21 = (t0 + 5128);
    t24 = (t0 + 5128);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t27 = (t0 + 5128);
    t28 = (t27 + 64U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t22, t23, t26, t29, 2, 1, t30, 32, 1);
    t31 = (t22 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t23 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (!(t35));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 4968);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t0 + 4968);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4968);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t4, 11, t3, t7, t10, 2, 1, t11, 32, 1);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 0);
    *((unsigned int *)t12) = t16;
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 0);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t19 & 15U);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 15U);
    t21 = (t0 + 5288);
    t24 = (t0 + 5288);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t27 = (t0 + 5288);
    t28 = (t27 + 64U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t22, t23, t26, t29, 2, 1, t30, 32, 1);
    t31 = (t22 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t23 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (!(t35));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 4968);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t0 + 4968);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4968);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t4, 11, t3, t7, t10, 2, 1, t11, 32, 1);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 4);
    *((unsigned int *)t12) = t16;
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 4);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t19 & 15U);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 15U);
    t21 = (t0 + 5128);
    t24 = (t0 + 5128);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t27 = (t0 + 5128);
    t28 = (t27 + 64U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t22, t23, t26, t29, 2, 1, t30, 32, 1);
    t31 = (t22 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t23 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (!(t35));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 4968);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t0 + 4968);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4968);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t4, 11, t3, t7, t10, 2, 1, t11, 32, 1);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 0);
    *((unsigned int *)t12) = t16;
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 0);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t19 & 15U);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 15U);
    t21 = (t0 + 5288);
    t24 = (t0 + 5288);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t27 = (t0 + 5288);
    t28 = (t27 + 64U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t22, t23, t26, t29, 2, 1, t30, 32, 1);
    t31 = (t22 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t23 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (!(t35));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 4968);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t0 + 4968);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4968);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t4, 11, t3, t7, t10, 2, 1, t11, 32, 1);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 4);
    *((unsigned int *)t12) = t16;
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 4);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t19 & 15U);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 15U);
    t21 = (t0 + 5128);
    t24 = (t0 + 5128);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t27 = (t0 + 5128);
    t28 = (t27 + 64U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t22, t23, t26, t29, 2, 1, t30, 32, 1);
    t31 = (t22 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t23 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (!(t35));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 4968);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t0 + 4968);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4968);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t4, 11, t3, t7, t10, 2, 1, t11, 32, 1);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 0);
    *((unsigned int *)t12) = t16;
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 0);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t19 & 15U);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 15U);
    t21 = (t0 + 5288);
    t24 = (t0 + 5288);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t27 = (t0 + 5288);
    t28 = (t27 + 64U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t22, t23, t26, t29, 2, 1, t30, 32, 1);
    t31 = (t22 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t23 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (!(t35));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB25;

LAB26:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 4968);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t0 + 4968);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4968);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t4, 11, t3, t7, t10, 2, 1, t11, 32, 1);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 4);
    *((unsigned int *)t12) = t16;
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 4);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t19 & 15U);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 15U);
    t21 = (t0 + 5128);
    t24 = (t0 + 5128);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t27 = (t0 + 5128);
    t28 = (t27 + 64U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng8)));
    xsi_vlog_generic_convert_array_indices(t22, t23, t26, t29, 2, 1, t30, 32, 1);
    t31 = (t22 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t23 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (!(t35));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB27;

LAB28:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 4968);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t0 + 4968);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4968);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t4, 11, t3, t7, t10, 2, 1, t11, 32, 1);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 0);
    *((unsigned int *)t12) = t16;
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 0);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t19 & 15U);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 15U);
    t21 = (t0 + 5288);
    t24 = (t0 + 5288);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t27 = (t0 + 5288);
    t28 = (t27 + 64U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng8)));
    xsi_vlog_generic_convert_array_indices(t22, t23, t26, t29, 2, 1, t30, 32, 1);
    t31 = (t22 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t23 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (!(t35));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 4968);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t0 + 4968);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4968);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng9)));
    xsi_vlog_generic_get_array_select_value(t4, 11, t3, t7, t10, 2, 1, t11, 32, 1);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 4);
    *((unsigned int *)t12) = t16;
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 4);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t19 & 15U);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 15U);
    t21 = (t0 + 5128);
    t24 = (t0 + 5128);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t27 = (t0 + 5128);
    t28 = (t27 + 64U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng9)));
    xsi_vlog_generic_convert_array_indices(t22, t23, t26, t29, 2, 1, t30, 32, 1);
    t31 = (t22 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t23 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (!(t35));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 4968);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t0 + 4968);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4968);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng9)));
    xsi_vlog_generic_get_array_select_value(t4, 11, t3, t7, t10, 2, 1, t11, 32, 1);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 0);
    *((unsigned int *)t12) = t16;
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 0);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t19 & 15U);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 15U);
    t21 = (t0 + 5288);
    t24 = (t0 + 5288);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t27 = (t0 + 5288);
    t28 = (t27 + 64U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng9)));
    xsi_vlog_generic_convert_array_indices(t22, t23, t26, t29, 2, 1, t30, 32, 1);
    t31 = (t22 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t23 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (!(t35));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB33;

LAB34:
LAB1:    return;
LAB3:    t38 = *((unsigned int *)t22);
    t39 = *((unsigned int *)t23);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t21, t12, 0, *((unsigned int *)t23), t41);
    goto LAB4;

LAB5:    t38 = *((unsigned int *)t22);
    t39 = *((unsigned int *)t23);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t21, t12, 0, *((unsigned int *)t23), t41);
    goto LAB6;

LAB7:    t38 = *((unsigned int *)t22);
    t39 = *((unsigned int *)t23);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t21, t12, 0, *((unsigned int *)t23), t41);
    goto LAB8;

LAB9:    t38 = *((unsigned int *)t22);
    t39 = *((unsigned int *)t23);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t21, t12, 0, *((unsigned int *)t23), t41);
    goto LAB10;

LAB11:    t38 = *((unsigned int *)t22);
    t39 = *((unsigned int *)t23);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t21, t12, 0, *((unsigned int *)t23), t41);
    goto LAB12;

LAB13:    t38 = *((unsigned int *)t22);
    t39 = *((unsigned int *)t23);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t21, t12, 0, *((unsigned int *)t23), t41);
    goto LAB14;

LAB15:    t38 = *((unsigned int *)t22);
    t39 = *((unsigned int *)t23);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t21, t12, 0, *((unsigned int *)t23), t41);
    goto LAB16;

LAB17:    t38 = *((unsigned int *)t22);
    t39 = *((unsigned int *)t23);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t21, t12, 0, *((unsigned int *)t23), t41);
    goto LAB18;

LAB19:    t38 = *((unsigned int *)t22);
    t39 = *((unsigned int *)t23);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t21, t12, 0, *((unsigned int *)t23), t41);
    goto LAB20;

LAB21:    t38 = *((unsigned int *)t22);
    t39 = *((unsigned int *)t23);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t21, t12, 0, *((unsigned int *)t23), t41);
    goto LAB22;

LAB23:    t38 = *((unsigned int *)t22);
    t39 = *((unsigned int *)t23);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t21, t12, 0, *((unsigned int *)t23), t41);
    goto LAB24;

LAB25:    t38 = *((unsigned int *)t22);
    t39 = *((unsigned int *)t23);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t21, t12, 0, *((unsigned int *)t23), t41);
    goto LAB26;

LAB27:    t38 = *((unsigned int *)t22);
    t39 = *((unsigned int *)t23);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t21, t12, 0, *((unsigned int *)t23), t41);
    goto LAB28;

LAB29:    t38 = *((unsigned int *)t22);
    t39 = *((unsigned int *)t23);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t21, t12, 0, *((unsigned int *)t23), t41);
    goto LAB30;

LAB31:    t38 = *((unsigned int *)t22);
    t39 = *((unsigned int *)t23);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t21, t12, 0, *((unsigned int *)t23), t41);
    goto LAB32;

LAB33:    t38 = *((unsigned int *)t22);
    t39 = *((unsigned int *)t23);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t21, t12, 0, *((unsigned int *)t23), t41);
    goto LAB34;

}

static void Always_87_2(char *t0)
{
    char t7[8];
    char t31[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
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
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    int t42;
    char *t43;
    unsigned int t44;
    int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    int t49;
    int t50;

LAB0:    t1 = (t0 + 7024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 8584);
    *((int *)t2) = 1;
    t3 = (t0 + 7056);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(87, ng0);

LAB5:    xsi_set_current_line(88, ng0);
    t4 = (t0 + 6832);
    xsi_process_wait(t4, 2000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(89, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    t5 = ((char*)((ng11)));
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t9 = (t5 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB10;

LAB7:    if (t19 != 0)
        goto LAB9;

LAB8:    *((unsigned int *)t7) = 1;

LAB10:    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng12)));
    memset(t7, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t5);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB20;

LAB17:    if (t19 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t7) = 1;

LAB20:    t8 = (t7 + 4);
    t24 = *((unsigned int *)t8);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng13)));
    memset(t7, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t5);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB29;

LAB26:    if (t19 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t7) = 1;

LAB29:    t8 = (t7 + 4);
    t24 = *((unsigned int *)t8);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t5);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB37;

LAB34:    if (t19 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t7) = 1;

LAB37:    t8 = (t7 + 4);
    t24 = *((unsigned int *)t8);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB38;

LAB39:
LAB40:
LAB32:
LAB23:
LAB13:    goto LAB2;

LAB9:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB10;

LAB11:    xsi_set_current_line(89, ng0);

LAB14:    xsi_set_current_line(90, ng0);
    t29 = (t0 + 3608U);
    t30 = *((char **)t29);
    t29 = (t0 + 5128);
    t33 = (t0 + 5128);
    t34 = (t33 + 72U);
    t35 = *((char **)t34);
    t36 = (t0 + 5128);
    t37 = (t36 + 64U);
    t38 = *((char **)t37);
    t39 = (t0 + 1528U);
    t40 = *((char **)t39);
    xsi_vlog_generic_convert_array_indices(t31, t32, t35, t38, 2, 1, t40, 3, 2);
    t39 = (t31 + 4);
    t41 = *((unsigned int *)t39);
    t42 = (!(t41));
    t43 = (t32 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (!(t44));
    t46 = (t42 && t45);
    if (t46 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 3448U);
    t3 = *((char **)t2);
    t2 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 9, 0LL);
    goto LAB13;

LAB15:    t47 = *((unsigned int *)t31);
    t48 = *((unsigned int *)t32);
    t49 = (t47 - t48);
    t50 = (t49 + 1);
    xsi_vlogvar_wait_assign_value(t29, t30, 0, *((unsigned int *)t32), t50, 0LL);
    goto LAB16;

LAB19:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(94, ng0);
    t9 = (t0 + 3928U);
    t22 = *((char **)t9);
    t9 = (t0 + 5128);
    t23 = (t0 + 5128);
    t29 = (t23 + 72U);
    t30 = *((char **)t29);
    t33 = (t0 + 5128);
    t34 = (t33 + 64U);
    t35 = *((char **)t34);
    t36 = (t0 + 1528U);
    t37 = *((char **)t36);
    xsi_vlog_generic_convert_array_indices(t31, t32, t30, t35, 2, 1, t37, 3, 2);
    t36 = (t31 + 4);
    t41 = *((unsigned int *)t36);
    t42 = (!(t41));
    t38 = (t32 + 4);
    t44 = *((unsigned int *)t38);
    t45 = (!(t44));
    t46 = (t42 && t45);
    if (t46 == 1)
        goto LAB24;

LAB25:    goto LAB23;

LAB24:    t47 = *((unsigned int *)t31);
    t48 = *((unsigned int *)t32);
    t49 = (t47 - t48);
    t50 = (t49 + 1);
    xsi_vlogvar_wait_assign_value(t9, t22, 0, *((unsigned int *)t32), t50, 0LL);
    goto LAB25;

LAB28:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(95, ng0);

LAB33:    xsi_set_current_line(96, ng0);
    t9 = ((char*)((ng1)));
    t22 = (t0 + 5448);
    xsi_vlogvar_assign_value(t22, t9, 0, 0, 9);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 4088U);
    t3 = *((char **)t2);
    t2 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 7, 0LL);
    goto LAB32;

LAB36:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB37;

LAB38:    xsi_set_current_line(100, ng0);
    t9 = (t0 + 5448);
    t22 = (t9 + 56U);
    t23 = *((char **)t22);
    t29 = (t0 + 5448);
    xsi_vlogvar_assign_value(t29, t23, 0, 0, 9);
    goto LAB40;

}

static void Always_104_3(char *t0)
{
    char t5[8];
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    t1 = (t0 + 7272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 8600);
    *((int *)t2) = 1;
    t3 = (t0 + 7304);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(104, ng0);

LAB5:    xsi_set_current_line(105, ng0);
    xsi_vlogfile_write(1, 0, 0, ng14, 1, t0);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 5128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 5128);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 5128);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t5, 4, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 5288);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 5288);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 5288);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t16, 4, t15, t19, t22, 2, 1, t23, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng15, 3, t0, (char)118, t5, 4, (char)118, t16, 4);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 5128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 5128);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 5128);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t5, 4, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 5288);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 5288);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 5288);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t16, 4, t15, t19, t22, 2, 1, t23, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng16, 3, t0, (char)118, t5, 4, (char)118, t16, 4);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 5128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 5128);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 5128);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t5, 4, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 5288);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 5288);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 5288);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t16, 4, t15, t19, t22, 2, 1, t23, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng17, 3, t0, (char)118, t5, 4, (char)118, t16, 4);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 5128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 5128);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 5128);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t5, 4, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 5288);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 5288);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 5288);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t16, 4, t15, t19, t22, 2, 1, t23, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng18, 3, t0, (char)118, t5, 4, (char)118, t16, 4);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 5128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 5128);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 5128);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t5, 4, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 5288);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 5288);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 5288);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t16, 4, t15, t19, t22, 2, 1, t23, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng19, 3, t0, (char)118, t5, 4, (char)118, t16, 4);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 5128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 5128);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 5128);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t5, 4, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 5288);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 5288);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 5288);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t16, 4, t15, t19, t22, 2, 1, t23, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng20, 3, t0, (char)118, t5, 4, (char)118, t16, 4);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 5128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 5128);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 5128);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t5, 4, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 5288);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 5288);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 5288);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t16, 4, t15, t19, t22, 2, 1, t23, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng21, 3, t0, (char)118, t5, 4, (char)118, t16, 4);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 5128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 5128);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 5128);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng9)));
    xsi_vlog_generic_get_array_select_value(t5, 4, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 5288);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 5288);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 5288);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng9)));
    xsi_vlog_generic_get_array_select_value(t16, 4, t15, t19, t22, 2, 1, t23, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng22, 3, t0, (char)118, t5, 4, (char)118, t16, 4);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 5448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng23, 2, t0, (char)118, t4, 9);
    xsi_set_current_line(115, ng0);
    xsi_vlogfile_write(1, 0, 0, ng14, 1, t0);
    goto LAB2;

}

static void Cont_166_4(char *t0)
{
    char t5[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
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
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;

LAB0:    t1 = (t0 + 7520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(166, ng0);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    t2 = (t0 + 2968U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 | t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t32 = (t0 + 3128U);
    t33 = *((char **)t32);
    t35 = *((unsigned int *)t5);
    t36 = *((unsigned int *)t33);
    t37 = (t35 | t36);
    *((unsigned int *)t34) = t37;
    t32 = (t5 + 4);
    t38 = (t33 + 4);
    t39 = (t34 + 4);
    t40 = *((unsigned int *)t32);
    t41 = *((unsigned int *)t38);
    t42 = (t40 | t41);
    *((unsigned int *)t39) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB7;

LAB8:
LAB9:    t61 = (t0 + 8744);
    t62 = (t61 + 56U);
    t63 = *((char **)t62);
    t64 = (t63 + 56U);
    t65 = *((char **)t64);
    memset(t65, 0, 8);
    t66 = 1U;
    t67 = t66;
    t68 = (t34 + 4);
    t69 = *((unsigned int *)t34);
    t66 = (t66 & t69);
    t70 = *((unsigned int *)t68);
    t67 = (t67 & t70);
    t71 = (t65 + 4);
    t72 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t72 | t66);
    t73 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t73 | t67);
    xsi_driver_vfirst_trans(t61, 0, 0);
    t74 = (t0 + 8616);
    *((int *)t74) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t21);
    t24 = *((unsigned int *)t19);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (~(t23));
    t29 = (~(t27));
    t30 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t30 & t28);
    t31 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t31 & t29);
    goto LAB6;

LAB7:    t45 = *((unsigned int *)t34);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t34) = (t45 | t46);
    t47 = (t5 + 4);
    t48 = (t33 + 4);
    t49 = *((unsigned int *)t47);
    t50 = (~(t49));
    t51 = *((unsigned int *)t5);
    t52 = (t51 & t50);
    t53 = *((unsigned int *)t48);
    t54 = (~(t53));
    t55 = *((unsigned int *)t33);
    t56 = (t55 & t54);
    t57 = (~(t52));
    t58 = (~(t56));
    t59 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t59 & t57);
    t60 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t60 & t58);
    goto LAB9;

}

static void implSig1_execute(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 7768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 5288);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 5288);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 5288);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1528U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 4, t4, t8, t11, 2, 1, t13, 3, 2);
    t12 = (t0 + 8808);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t17, 0, 8);
    t18 = 15U;
    t19 = t18;
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t5);
    t18 = (t18 & t21);
    t22 = *((unsigned int *)t20);
    t19 = (t19 & t22);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 | t18);
    t25 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t25 | t19);
    xsi_driver_vfirst_trans(t12, 0, 3);
    t26 = (t0 + 8632);
    *((int *)t26) = 1;

LAB1:    return;
}

static void implSig2_execute(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 8016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 5128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 5128);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 5128);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1528U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 4, t4, t8, t11, 2, 1, t13, 3, 2);
    t12 = (t0 + 8872);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t17, 0, 8);
    t18 = 15U;
    t19 = t18;
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t5);
    t18 = (t18 & t21);
    t22 = *((unsigned int *)t20);
    t19 = (t19 & t22);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 | t18);
    t25 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t25 | t19);
    xsi_driver_vfirst_trans(t12, 0, 3);
    t26 = (t0 + 8648);
    *((int *)t26) = 1;

LAB1:    return;
}

static void implSig3_execute(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 8264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 5128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 5128);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 5128);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1528U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 4, t4, t8, t11, 2, 1, t13, 3, 2);
    t12 = (t0 + 8936);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t17, 0, 8);
    t18 = 15U;
    t19 = t18;
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t5);
    t18 = (t18 & t21);
    t22 = *((unsigned int *)t20);
    t19 = (t19 & t22);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 | t18);
    t25 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t25 | t19);
    xsi_driver_vfirst_trans(t12, 0, 3);
    t26 = (t0 + 8664);
    *((int *)t26) = 1;

LAB1:    return;
}


extern void work_m_00000000000337660709_2973510161_init()
{
	static char *pe[] = {(void *)Initial_27_0,(void *)Initial_56_1,(void *)Always_87_2,(void *)Always_104_3,(void *)Cont_166_4,(void *)implSig1_execute,(void *)implSig2_execute,(void *)implSig3_execute};
	xsi_register_didat("work_m_00000000000337660709_2973510161", "isim/Last_TestBench_isim_beh.exe.sim/work/m_00000000000337660709_2973510161.didat");
	xsi_register_executes(pe);
}
