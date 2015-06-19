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
static const char *ng0 = "D:/github/FinalProject/SDRAM/Write_to_FT245.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_674691591_3965413181(char *, char *, char *, char *, unsigned char );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0853715936_3212880686_p_0(char *t0)
{
    char t8[16];
    char t21[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    int t16;
    char *t17;
    char *t18;
    unsigned char t19;
    unsigned int t20;

LAB0:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 3712);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 1632U);
    t7 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t7 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3632);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t2 = (t0 + 5988U);
    t4 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t8, t3, t2, (unsigned char)3);
    t5 = (t8 + 12U);
    t9 = *((unsigned int *)t5);
    t10 = (1U * t9);
    t11 = (16U != t10);
    if (t11 == 1)
        goto LAB5;

LAB6:    t6 = (t0 + 3776);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t4, 16U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 5988U);
    t3 = (t0 + 6065);
    t5 = (t8 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 13;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t16 = (13 - 0);
    t9 = (t16 * 1);
    t9 = (t9 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t9;
    t7 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t8);
    if (t7 != 0)
        goto LAB7;

LAB9:
LAB8:    goto LAB3;

LAB5:    xsi_size_not_matching(16U, t10, 0);
    goto LAB6;

LAB7:    xsi_set_current_line(47, ng0);
    t6 = (t0 + 6079);
    t13 = (t0 + 3776);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t6, 16U);
    xsi_driver_first_trans_fast(t13);
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t11 = (t7 == (unsigned char)2);
    if (t11 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB8;

LAB10:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t1 = (t0 + 5972U);
    t4 = (t0 + 6095);
    t6 = (t8 + 0U);
    t12 = (t6 + 0U);
    *((int *)t12) = 0;
    t12 = (t6 + 4U);
    *((int *)t12) = 2;
    t12 = (t6 + 8U);
    *((int *)t12) = 1;
    t16 = (2 - 0);
    t9 = (t16 * 1);
    t9 = (t9 + 1);
    t12 = (t6 + 12U);
    *((unsigned int *)t12) = t9;
    t19 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t1, t4, t8);
    if (t19 != 0)
        goto LAB13;

LAB15:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 5972U);
    t3 = (t0 + 6101);
    t5 = (t8 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 2;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t16 = (2 - 0);
    t9 = (t16 * 1);
    t9 = (t9 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t9;
    t7 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t8);
    if (t7 != 0)
        goto LAB18;

LAB19:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 5972U);
    t3 = (t0 + 6107);
    t5 = (t8 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 2;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t16 = (2 - 0);
    t9 = (t16 * 1);
    t9 = (t9 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t9;
    t7 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t8);
    if (t7 != 0)
        goto LAB22;

LAB23:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 5972U);
    t3 = (t0 + 6113);
    t5 = (t8 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 2;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t16 = (2 - 0);
    t9 = (t16 * 1);
    t9 = (t9 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t9;
    t7 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t8);
    if (t7 != 0)
        goto LAB26;

LAB27:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 5972U);
    t3 = (t0 + 6119);
    t5 = (t8 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 2;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t16 = (2 - 0);
    t9 = (t16 * 1);
    t9 = (t9 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t9;
    t7 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t8);
    if (t7 != 0)
        goto LAB30;

LAB31:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 3840);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(69, ng0);
    t1 = (t0 + 6133);
    t3 = (t0 + 3968);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    memcpy(t12, t1, 3U);
    xsi_driver_first_trans_fast(t3);

LAB14:    goto LAB11;

LAB13:    xsi_set_current_line(50, ng0);
    t12 = (t0 + 3840);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t12);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t9 = (15 - 7);
    t10 = (t9 * 1U);
    t20 = (0 + t10);
    t1 = (t2 + t20);
    t3 = (t0 + 3904);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    memcpy(t12, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 5972U);
    t3 = (t0 + 6098);
    t5 = (t21 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 2;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t16 = (2 - 0);
    t9 = (t16 * 1);
    t9 = (t9 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t9;
    t6 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t8, t2, t1, t3, t21);
    t12 = (t8 + 12U);
    t9 = *((unsigned int *)t12);
    t10 = (1U * t9);
    t7 = (3U != t10);
    if (t7 == 1)
        goto LAB16;

LAB17:    t13 = (t0 + 3968);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t6, 3U);
    xsi_driver_first_trans_fast(t13);
    goto LAB14;

LAB16:    xsi_size_not_matching(3U, t10, 0);
    goto LAB17;

LAB18:    xsi_set_current_line(54, ng0);
    t6 = (t0 + 3840);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 5972U);
    t3 = (t0 + 6104);
    t5 = (t21 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 2;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t16 = (2 - 0);
    t9 = (t16 * 1);
    t9 = (t9 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t9;
    t6 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t8, t2, t1, t3, t21);
    t12 = (t8 + 12U);
    t9 = *((unsigned int *)t12);
    t10 = (1U * t9);
    t7 = (3U != t10);
    if (t7 == 1)
        goto LAB20;

LAB21:    t13 = (t0 + 3968);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t6, 3U);
    xsi_driver_first_trans_fast(t13);
    goto LAB14;

LAB20:    xsi_size_not_matching(3U, t10, 0);
    goto LAB21;

LAB22:    xsi_set_current_line(57, ng0);
    t6 = (t0 + 3840);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t9 = (15 - 15);
    t10 = (t9 * 1U);
    t20 = (0 + t10);
    t1 = (t2 + t20);
    t3 = (t0 + 3904);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    memcpy(t12, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 5972U);
    t3 = (t0 + 6110);
    t5 = (t21 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 2;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t16 = (2 - 0);
    t9 = (t16 * 1);
    t9 = (t9 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t9;
    t6 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t8, t2, t1, t3, t21);
    t12 = (t8 + 12U);
    t9 = *((unsigned int *)t12);
    t10 = (1U * t9);
    t7 = (3U != t10);
    if (t7 == 1)
        goto LAB24;

LAB25:    t13 = (t0 + 3968);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t6, 3U);
    xsi_driver_first_trans_fast(t13);
    goto LAB14;

LAB24:    xsi_size_not_matching(3U, t10, 0);
    goto LAB25;

LAB26:    xsi_set_current_line(61, ng0);
    t6 = (t0 + 3840);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 5972U);
    t3 = (t0 + 6116);
    t5 = (t21 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 2;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t16 = (2 - 0);
    t9 = (t16 * 1);
    t9 = (t9 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t9;
    t6 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t8, t2, t1, t3, t21);
    t12 = (t8 + 12U);
    t9 = *((unsigned int *)t12);
    t10 = (1U * t9);
    t7 = (3U != t10);
    if (t7 == 1)
        goto LAB28;

LAB29:    t13 = (t0 + 3968);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t6, 3U);
    xsi_driver_first_trans_fast(t13);
    goto LAB14;

LAB28:    xsi_size_not_matching(3U, t10, 0);
    goto LAB29;

LAB30:    xsi_set_current_line(64, ng0);
    t6 = (t0 + 3840);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(65, ng0);
    t1 = (t0 + 6122);
    t3 = (t0 + 3904);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    memcpy(t12, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 5972U);
    t3 = (t0 + 6130);
    t5 = (t21 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 2;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t16 = (2 - 0);
    t9 = (t16 * 1);
    t9 = (t9 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t9;
    t6 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t8, t2, t1, t3, t21);
    t12 = (t8 + 12U);
    t9 = *((unsigned int *)t12);
    t10 = (1U * t9);
    t7 = (3U != t10);
    if (t7 == 1)
        goto LAB32;

LAB33:    t13 = (t0 + 3968);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t6, 3U);
    xsi_driver_first_trans_fast(t13);
    goto LAB14;

LAB32:    xsi_size_not_matching(3U, t10, 0);
    goto LAB33;

}


extern void work_a_0853715936_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0853715936_3212880686_p_0};
	xsi_register_didat("work_a_0853715936_3212880686", "isim/test4_MainCode_isim_beh.exe.sim/work/a_0853715936_3212880686.didat");
	xsi_register_executes(pe);
}
