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
static const char *ng0 = "D:/final project/SDRAM/Main_Code.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2606322297_3212880686_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    int t11;

LAB0:    xsi_set_current_line(197, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 7880);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(198, ng0);
    t3 = (t0 + 5352U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (t0 + 7976);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(199, ng0);
    t1 = (t0 + 5352U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(202, ng0);
    t1 = (t0 + 5832U);
    t3 = *((char **)t1);
    t10 = *((int *)t3);
    t11 = (t10 + 1);
    t1 = (t0 + 8040);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t11;
    xsi_driver_first_trans_fast(t1);

LAB6:    xsi_set_current_line(205, ng0);
    t1 = (t0 + 5832U);
    t3 = *((char **)t1);
    t10 = *((int *)t3);
    t2 = (t10 == 50);
    if (t2 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(209, ng0);
    t1 = (t0 + 5352U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 7976);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t2;
    xsi_driver_first_trans_fast(t1);

LAB9:    goto LAB3;

LAB5:    xsi_set_current_line(200, ng0);
    t1 = (t0 + 8040);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB8:    xsi_set_current_line(206, ng0);
    t1 = (t0 + 7976);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(207, ng0);
    t1 = (t0 + 8040);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB9;

}

static void work_a_2606322297_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    int t12;
    int t13;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB6, &&LAB7, &&LAB5};

LAB0:    xsi_set_current_line(217, ng0);
    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 8104);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(218, ng0);
    t1 = (t0 + 8168);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(219, ng0);
    t1 = (t0 + 8232);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(220, ng0);
    t1 = (t0 + 8296);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(221, ng0);
    t1 = (t0 + 8360);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(223, ng0);
    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 7896);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(226, ng0);
    t4 = (t0 + 4712U);
    t5 = *((char **)t4);
    t8 = *((unsigned char *)t5);
    t9 = (t8 == (unsigned char)3);
    if (t9 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB2;

LAB4:    xsi_set_current_line(231, ng0);
    t1 = (t0 + 8104);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(232, ng0);
    t1 = (t0 + 5672U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t13 = (t12 + 1);
    t1 = (t0 + 8424);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = t13;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(233, ng0);
    t1 = (t0 + 5672U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t3 = (t12 < 13);
    if (t3 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(236, ng0);
    t1 = (t0 + 8104);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB12:    goto LAB2;

LAB5:    xsi_set_current_line(240, ng0);
    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t8 = (t3 == (unsigned char)2);
    if (t8 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(244, ng0);
    t1 = (t0 + 8104);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB15:    goto LAB2;

LAB6:    xsi_set_current_line(248, ng0);
    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t8 = (t3 == (unsigned char)2);
    if (t8 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(276, ng0);
    t1 = (t0 + 8104);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB18:    goto LAB2;

LAB7:    xsi_set_current_line(280, ng0);
    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t8 = (t3 == (unsigned char)2);
    if (t8 != 0)
        goto LAB35;

LAB37:    xsi_set_current_line(284, ng0);
    t1 = (t0 + 8104);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(285, ng0);
    t1 = (t0 + 8616);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB36:    goto LAB2;

LAB8:    xsi_set_current_line(227, ng0);
    t4 = (t0 + 8104);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)4;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(234, ng0);
    t1 = (t0 + 8104);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB14:    xsi_set_current_line(241, ng0);
    t1 = (t0 + 8168);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(242, ng0);
    t1 = (t0 + 12828);
    t4 = (t0 + 8488);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    memcpy(t10, t1, 24U);
    xsi_driver_first_trans_fast(t4);
    goto LAB15;

LAB17:    xsi_set_current_line(249, ng0);
    t1 = (t0 + 8168);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(250, ng0);
    t1 = (t0 + 8232);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(251, ng0);
    t1 = (t0 + 5672U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t3 = (t12 == 0);
    if (t3 != 0)
        goto LAB20;

LAB22:    t1 = (t0 + 5672U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t3 = (t12 == 2);
    if (t3 != 0)
        goto LAB23;

LAB24:    t1 = (t0 + 5672U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t3 = (t12 == 4);
    if (t3 != 0)
        goto LAB25;

LAB26:    t1 = (t0 + 5672U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t3 = (t12 == 6);
    if (t3 != 0)
        goto LAB27;

LAB28:    t1 = (t0 + 5672U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t3 = (t12 == 8);
    if (t3 != 0)
        goto LAB29;

LAB30:    t1 = (t0 + 5672U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t3 = (t12 == 10);
    if (t3 != 0)
        goto LAB31;

LAB32:    t1 = (t0 + 5672U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t3 = (t12 == 12);
    if (t3 != 0)
        goto LAB33;

LAB34:
LAB21:    xsi_set_current_line(273, ng0);
    t1 = (t0 + 8296);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(274, ng0);
    t1 = (t0 + 8360);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB18;

LAB20:    xsi_set_current_line(252, ng0);
    t1 = (t0 + 12852);
    t5 = (t0 + 8488);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 24U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(253, ng0);
    t1 = (t0 + 12876);
    t4 = (t0 + 8552);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    goto LAB21;

LAB23:    xsi_set_current_line(255, ng0);
    t1 = (t0 + 12892);
    t5 = (t0 + 8488);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 24U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(256, ng0);
    t1 = (t0 + 12916);
    t4 = (t0 + 8552);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    goto LAB21;

LAB25:    xsi_set_current_line(258, ng0);
    t1 = (t0 + 12932);
    t5 = (t0 + 8488);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 24U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(259, ng0);
    t1 = (t0 + 12956);
    t4 = (t0 + 8552);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    goto LAB21;

LAB27:    xsi_set_current_line(261, ng0);
    t1 = (t0 + 12972);
    t5 = (t0 + 8488);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 24U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(262, ng0);
    t1 = (t0 + 12996);
    t4 = (t0 + 8552);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    goto LAB21;

LAB29:    xsi_set_current_line(264, ng0);
    t1 = (t0 + 13012);
    t5 = (t0 + 8488);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 24U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(265, ng0);
    t1 = (t0 + 13036);
    t4 = (t0 + 8552);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    goto LAB21;

LAB31:    xsi_set_current_line(267, ng0);
    t1 = (t0 + 13052);
    t5 = (t0 + 8488);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 24U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(268, ng0);
    t1 = (t0 + 13076);
    t4 = (t0 + 8552);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    goto LAB21;

LAB33:    xsi_set_current_line(270, ng0);
    t1 = (t0 + 13092);
    t5 = (t0 + 8488);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 24U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(271, ng0);
    t1 = (t0 + 13116);
    t4 = (t0 + 8552);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    goto LAB21;

LAB35:    xsi_set_current_line(281, ng0);
    t1 = (t0 + 8616);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB36;

}


extern void work_a_2606322297_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2606322297_3212880686_p_0,(void *)work_a_2606322297_3212880686_p_1};
	xsi_register_didat("work_a_2606322297_3212880686", "isim/test4_MainCode_isim_beh.exe.sim/work/a_2606322297_3212880686.didat");
	xsi_register_executes(pe);
}
