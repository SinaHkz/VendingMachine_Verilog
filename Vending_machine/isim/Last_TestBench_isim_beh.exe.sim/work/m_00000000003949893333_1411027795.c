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
static const char *ng0 = "C:/Users/Sina HZ/Vending_machine/display.v";
static unsigned int ng1[] = {10U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {126U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {6U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {109U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {121U, 0U};
static unsigned int ng10[] = {4U, 0U};
static unsigned int ng11[] = {51U, 0U};
static unsigned int ng12[] = {5U, 0U};
static unsigned int ng13[] = {91U, 0U};
static unsigned int ng14[] = {95U, 0U};
static unsigned int ng15[] = {7U, 0U};
static unsigned int ng16[] = {112U, 0U};
static unsigned int ng17[] = {8U, 0U};
static unsigned int ng18[] = {127U, 0U};
static unsigned int ng19[] = {9U, 0U};
static unsigned int ng20[] = {123U, 0U};



static void Always_23_0(char *t0)
{
    char t7[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    int t9;
    char *t10;
    char *t11;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;

LAB0:    t1 = (t0 + 4048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 4368);
    *((int *)t2) = 1;
    t3 = (t0 + 4080);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(23, ng0);

LAB5:    xsi_set_current_line(24, ng0);
    t4 = (t0 + 3856);
    xsi_process_wait(t4, 3000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(25, ng0);
    t5 = (t0 + 2568U);
    t6 = *((char **)t5);
    t5 = ((char*)((ng1)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_mod(t7, 7, t6, 7, t5, 7);

LAB7:    t8 = ((char*)((ng2)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 7, t8, 7);
    if (t9 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng4)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 7, t2, 7);
    if (t9 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng6)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 7, t2, 7);
    if (t9 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng8)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 7, t2, 7);
    if (t9 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng10)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 7, t2, 7);
    if (t9 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng12)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 7, t2, 7);
    if (t9 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng5)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 7, t2, 7);
    if (t9 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng15)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 7, t2, 7);
    if (t9 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng17)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 7, t2, 7);
    if (t9 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng19)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 7, t2, 7);
    if (t9 == 1)
        goto LAB26;

LAB27:
LAB28:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2568U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng19)));
    memset(t12, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB30;

LAB29:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB30;

LAB33:    if (*((unsigned int *)t3) > *((unsigned int *)t2))
        goto LAB31;

LAB32:    t8 = (t12 + 4);
    t13 = *((unsigned int *)t8);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3128);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);

LAB36:    goto LAB2;

LAB8:    xsi_set_current_line(26, ng0);
    t10 = ((char*)((ng3)));
    t11 = (t0 + 2968);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 7);
    goto LAB28;

LAB10:    xsi_set_current_line(27, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2968);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB28;

LAB12:    xsi_set_current_line(28, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2968);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB28;

LAB14:    xsi_set_current_line(29, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 2968);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB28;

LAB16:    xsi_set_current_line(30, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 2968);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB28;

LAB18:    xsi_set_current_line(31, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 2968);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB28;

LAB20:    xsi_set_current_line(32, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 2968);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB28;

LAB22:    xsi_set_current_line(33, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 2968);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB28;

LAB24:    xsi_set_current_line(34, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 2968);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB28;

LAB26:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 2968);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB28;

LAB30:    t6 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB32;

LAB31:    *((unsigned int *)t12) = 1;
    goto LAB32;

LAB34:    xsi_set_current_line(38, ng0);
    t10 = ((char*)((ng5)));
    t11 = (t0 + 3128);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 7);
    goto LAB36;

}


extern void work_m_00000000003949893333_1411027795_init()
{
	static char *pe[] = {(void *)Always_23_0};
	xsi_register_didat("work_m_00000000003949893333_1411027795", "isim/Last_TestBench_isim_beh.exe.sim/work/m_00000000003949893333_1411027795.didat");
	xsi_register_executes(pe);
}
