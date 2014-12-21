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

/* This file is designed for use with ISim build 0xc3576ebc */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Michael/Desktop/DDSGenerator/testbench1.vhd";



static void work_a_3186643259_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    int t11;
    int t12;

LAB0:    t1 = (t0 + 3312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t3 = (1000 * 1000LL);
    t2 = (t0 + 3120);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3696);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 6172);
    t5 = (t0 + 3760);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 19U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 6191);
    *((int *)t2) = 1;
    t4 = (t0 + 6195);
    *((int *)t4) = 1024;
    t10 = 1;
    t11 = 1024;

LAB8:    if (t10 <= t11)
        goto LAB9;

LAB11:    xsi_set_current_line(71, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 3120);
    xsi_process_wait(t2, t3);

LAB23:    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(62, ng0);
    t5 = (t0 + 3824);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(63, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3120);
    xsi_process_wait(t2, t3);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB10:    t2 = (t0 + 6191);
    t10 = *((int *)t2);
    t4 = (t0 + 6195);
    t11 = *((int *)t4);
    if (t10 == t11)
        goto LAB11;

LAB20:    t12 = (t10 + 1);
    t10 = t12;
    t5 = (t0 + 6191);
    *((int *)t5) = t10;
    goto LAB8;

LAB12:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3824);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(65, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3120);
    xsi_process_wait(t2, t3);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    goto LAB10;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB21:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 6199);
    t5 = (t0 + 3888);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 2U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 6201);
    *((int *)t2) = 1;
    t4 = (t0 + 6205);
    *((int *)t4) = 1024;
    t10 = 1;
    t11 = 1024;

LAB25:    if (t10 <= t11)
        goto LAB26;

LAB28:    xsi_set_current_line(87, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 3120);
    xsi_process_wait(t2, t3);

LAB40:    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB22:    goto LAB21;

LAB24:    goto LAB22;

LAB26:    xsi_set_current_line(78, ng0);
    t5 = (t0 + 3824);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(79, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3120);
    xsi_process_wait(t2, t3);

LAB31:    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB27:    t2 = (t0 + 6201);
    t10 = *((int *)t2);
    t4 = (t0 + 6205);
    t11 = *((int *)t4);
    if (t10 == t11)
        goto LAB28;

LAB37:    t12 = (t10 + 1);
    t10 = t12;
    t5 = (t0 + 6201);
    *((int *)t5) = t10;
    goto LAB25;

LAB29:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3824);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(81, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3120);
    xsi_process_wait(t2, t3);

LAB35:    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB30:    goto LAB29;

LAB32:    goto LAB30;

LAB33:    goto LAB27;

LAB34:    goto LAB33;

LAB36:    goto LAB34;

LAB38:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 6209);
    t5 = (t0 + 3888);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 2U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 6211);
    *((int *)t2) = 1;
    t4 = (t0 + 6215);
    *((int *)t4) = 1024;
    t10 = 1;
    t11 = 1024;

LAB42:    if (t10 <= t11)
        goto LAB43;

LAB45:    xsi_set_current_line(100, ng0);

LAB57:    *((char **)t1) = &&LAB58;
    goto LAB1;

LAB39:    goto LAB38;

LAB41:    goto LAB39;

LAB43:    xsi_set_current_line(93, ng0);
    t5 = (t0 + 3824);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(94, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3120);
    xsi_process_wait(t2, t3);

LAB48:    *((char **)t1) = &&LAB49;
    goto LAB1;

LAB44:    t2 = (t0 + 6211);
    t10 = *((int *)t2);
    t4 = (t0 + 6215);
    t11 = *((int *)t4);
    if (t10 == t11)
        goto LAB45;

LAB54:    t12 = (t10 + 1);
    t10 = t12;
    t5 = (t0 + 6211);
    *((int *)t5) = t10;
    goto LAB42;

LAB46:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 3824);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(96, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3120);
    xsi_process_wait(t2, t3);

LAB52:    *((char **)t1) = &&LAB53;
    goto LAB1;

LAB47:    goto LAB46;

LAB49:    goto LAB47;

LAB50:    goto LAB44;

LAB51:    goto LAB50;

LAB53:    goto LAB51;

LAB55:    goto LAB2;

LAB56:    goto LAB55;

LAB58:    goto LAB56;

}


extern void work_a_3186643259_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3186643259_3212880686_p_0};
	xsi_register_didat("work_a_3186643259_3212880686", "isim/testbench1_isim_beh.exe.sim/work/a_3186643259_3212880686.didat");
	xsi_register_executes(pe);
}
