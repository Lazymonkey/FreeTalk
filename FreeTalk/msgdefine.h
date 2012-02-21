/*
                 {/ ． ．\}
                 ( (oo)   )
+--------------oOOo---︶︶︶︶---oOOo------------------+
#     FileName  :           msgdefine.h
#     Describe  :           FreeTalk message type define
#                           File.
#     Author    :           Lazy.monkey™
#     Email     :           lazymonkey.me@gmail.com
#     HomePage  :           NULL
#     Version   :           0.0.1
#     LastChange:           2012-02-21 20:44:11
#     History   :
+------------------------------------Oooo--------------+

*/
#pragma once

struct msg_base
{
    BYTE t_msg_type
};

struct msg_sign : msg_base
{
    BYTE t_user_age;
    long l_freetalk;
    char str_name[31];
    char str_psw[10];
    char str_sex[3];
    char str_email[31];
    char str_phone_num[15];
    char str_adress[31];
};

struct msg_login : msg_base
{
    BYTE t_result;
    BYTE t_clint_num;
    long l_freetalk;
    char str_name[31];
    char str_psw[10];
};

struct msg_left : msg_base
{
    BYTE t_clint_num;
    long l_freetalk;
};

struct msg_usr_list : msg_base
{
    BYTE t_count;
    char u_list[511];
};

struct msg_chat : msg_base
{
    BYTE t_clint_num;
    char str_my_name[31];
    char str_dest_name[31];
    char str_msg[255];
};

struct msg_note : msg_base
{
    char str_name[31];
    BYTE t_age;
    long l_freetalk;
    char str_sex[3];
    char str_adress[31];
    char str_phone_num[15];
};

struct msg_mod_psw : msg_base
{
    BYTE t_result;
    long l_freetalk;
    char str_old_psw[15];
    char str_new_psw[15];
};

struct msg_server : msg_base
{
    char str_msg[127];
};

#define MSG_SIGN        1
#define MSG_LOGIN       2
#define MSG_LEFT        3
#define MSG_LIST        4
#define MSG_CHAT        5
#define MSG_STOP        6
#define MSG_NOTE        7
#define MSG_MOD_INFO    8
#define MSG_MOD_PSW     9
#define MSG_SRV         10
