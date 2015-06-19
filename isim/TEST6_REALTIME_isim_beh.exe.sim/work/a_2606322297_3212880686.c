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
static const char *ng0 = "D:/github/FinalProject/SDRAM/Main_Code.vhd";
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
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    int t14;
    int t15;

LAB0:    xsi_set_current_line(121, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 8040);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(122, ng0);
    t3 = (t0 + 5352U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (t0 + 8136);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(123, ng0);
    t1 = (t0 + 5512U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t10 = (t5 == (unsigned char)3);
    if (t10 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 != 0)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(128, ng0);
    t1 = (t0 + 5352U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)4);
    if (t5 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(131, ng0);
    t1 = (t0 + 5832U);
    t3 = *((char **)t1);
    t14 = *((int *)t3);
    t15 = (t14 + 1);
    t1 = (t0 + 8264);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t15;
    xsi_driver_first_trans_fast(t1);

LAB12:    xsi_set_current_line(134, ng0);
    t1 = (t0 + 5832U);
    t3 = *((char **)t1);
    t14 = *((int *)t3);
    t2 = (t14 == 700);
    if (t2 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(138, ng0);
    t1 = (t0 + 5352U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 8136);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t2;
    xsi_driver_first_trans_fast(t1);

LAB15:    goto LAB3;

LAB5:    xsi_set_current_line(124, ng0);
    t1 = (t0 + 5032U);
    t6 = *((char **)t1);
    t1 = (t0 + 8200);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t13 = *((char **)t9);
    memcpy(t13, t6, 16U);
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB8:    t1 = (t0 + 4872U);
    t4 = *((char **)t1);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)3);
    t2 = t12;
    goto LAB10;

LAB11:    xsi_set_current_line(129, ng0);
    t1 = (t0 + 8264);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB14:    xsi_set_current_line(135, ng0);
    t1 = (t0 + 8136);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(136, ng0);
    t1 = (t0 + 8264);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

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
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB7, &&LAB8, &&LAB6};

LAB0:    xsi_set_current_line(146, ng0);
    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 8328);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(147, ng0);
    t1 = (t0 + 8392);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(148, ng0);
    t1 = (t0 + 8456);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(149, ng0);
    t1 = (t0 + 8520);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(150, ng0);
    t1 = (t0 + 8584);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(152, ng0);
    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 8056);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(155, ng0);
    t4 = (t0 + 4712U);
    t5 = *((char **)t4);
    t8 = *((unsigned char *)t5);
    t9 = (t8 == (unsigned char)3);
    if (t9 != 0)
        goto LAB9;

LAB11:
LAB10:    goto LAB2;

LAB4:    xsi_set_current_line(160, ng0);
    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t8 = (t3 == (unsigned char)3);
    if (t8 != 0)
        goto LAB12;

LAB14:
LAB13:    goto LAB2;

LAB5:    xsi_set_current_line(165, ng0);
    t1 = (t0 + 8328);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(166, ng0);
    t1 = (t0 + 5672U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t13 = (t12 + 1);
    t1 = (t0 + 8648);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = t13;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(167, ng0);
    t1 = (t0 + 5672U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t3 = (t12 < 13);
    if (t3 != 0)
        goto LAB15;

LAB17:    xsi_set_current_line(170, ng0);
    t1 = (t0 + 8328);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB16:    goto LAB2;

LAB6:    xsi_set_current_line(175, ng0);
    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t8 = (t3 == (unsigned char)2);
    if (t8 != 0)
        goto LAB18;

LAB20:    xsi_set_current_line(180, ng0);
    t1 = (t0 + 8328);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(185, ng0);
    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t8 = (t3 == (unsigned char)2);
    if (t8 != 0)
        goto LAB21;

LAB23:    xsi_set_current_line(215, ng0);
    t1 = (t0 + 8328);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);

LAB22:    goto LAB2;

LAB8:    xsi_set_current_line(219, ng0);
    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t8 = (t3 == (unsigned char)2);
    if (t8 != 0)
        goto LAB39;

LAB41:    xsi_set_current_line(223, ng0);
    t1 = (t0 + 8328);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(224, ng0);
    t1 = (t0 + 8904);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB40:    goto LAB2;

LAB9:    xsi_set_current_line(156, ng0);
    t4 = (t0 + 8328);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t4);
    goto LAB10;

LAB12:    xsi_set_current_line(161, ng0);
    t1 = (t0 + 8328);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    goto LAB13;

LAB15:    xsi_set_current_line(168, ng0);
    t1 = (t0 + 8328);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB16;

LAB18:    xsi_set_current_line(176, ng0);
    t1 = (t0 + 8392);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(177, ng0);
    t1 = (t0 + 13476);
    t4 = (t0 + 8712);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(178, ng0);
    t1 = (t0 + 13492);
    t4 = (t0 + 8776);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    memcpy(t10, t1, 24U);
    xsi_driver_first_trans_fast(t4);
    goto LAB19;

LAB21:    xsi_set_current_line(187, ng0);
    t1 = (t0 + 8392);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(188, ng0);
    t1 = (t0 + 8456);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(189, ng0);
    t1 = (t0 + 5672U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t3 = (t12 == 0);
    if (t3 != 0)
        goto LAB24;

LAB26:    t1 = (t0 + 5672U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t3 = (t12 == 2);
    if (t3 != 0)
        goto LAB27;

LAB28:    t1 = (t0 + 5672U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t3 = (t12 == 4);
    if (t3 != 0)
        goto LAB29;

LAB30:    t1 = (t0 + 5672U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t3 = (t12 == 6);
    if (t3 != 0)
        goto LAB31;

LAB32:    t1 = (t0 + 5672U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t3 = (t12 == 8);
    if (t3 != 0)
        goto LAB33;

LAB34:    t1 = (t0 + 5672U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t3 = (t12 == 10);
    if (t3 != 0)
        goto LAB35;

LAB36:    t1 = (t0 + 5672U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t3 = (t12 == 12);
    if (t3 != 0)
        goto LAB37;

LAB38:
LAB25:    xsi_set_current_line(212, ng0);
    t1 = (t0 + 8520);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(213, ng0);
    t1 = (t0 + 8584);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB22;

LAB24:    xsi_set_current_line(190, ng0);
    t1 = (t0 + 13516);
    t5 = (t0 + 8776);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 24U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(191, ng0);
    t1 = (t0 + 13540);
    t4 = (t0 + 8840);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    goto LAB25;

LAB27:    xsi_set_current_line(193, ng0);
    t1 = (t0 + 13556);
    t5 = (t0 + 8776);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 24U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(194, ng0);
    t1 = (t0 + 13580);
    t4 = (t0 + 8840);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    goto LAB25;

LAB29:    xsi_set_current_line(197, ng0);
    t1 = (t0 + 13596);
    t5 = (t0 + 8776);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 24U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(198, ng0);
    t1 = (t0 + 13620);
    t4 = (t0 + 8840);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    goto LAB25;

LAB31:    xsi_set_current_line(200, ng0);
    t1 = (t0 + 13636);
    t5 = (t0 + 8776);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 24U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(201, ng0);
    t1 = (t0 + 13660);
    t4 = (t0 + 8840);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    goto LAB25;

LAB33:    xsi_set_current_line(203, ng0);
    t1 = (t0 + 13676);
    t5 = (t0 + 8776);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 24U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(204, ng0);
    t1 = (t0 + 13700);
    t4 = (t0 + 8840);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    goto LAB25;

LAB35:    xsi_set_current_line(206, ng0);
    t1 = (t0 + 13716);
    t5 = (t0 + 8776);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 24U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(207, ng0);
    t1 = (t0 + 13740);
    t4 = (t0 + 8840);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    goto LAB25;

LAB37:    xsi_set_current_line(209, ng0);
    t1 = (t0 + 13756);
    t5 = (t0 + 8776);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 24U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(210, ng0);
    t1 = (t0 + 13780);
    t4 = (t0 + 8840);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    goto LAB25;

LAB39:    xsi_set_current_line(220, ng0);
    t1 = (t0 + 8904);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB40;

}


extern void work_a_2606322297_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2606322297_3212880686_p_0,(void *)work_a_2606322297_3212880686_p_1};
	xsi_register_didat("work_a_2606322297_3212880686", "isim/TEST6_REALTIME_isim_beh.exe.sim/work/a_2606322297_3212880686.didat");
	xsi_register_executes(pe);
}
