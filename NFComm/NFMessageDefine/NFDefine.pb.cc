// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: NFDefine.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "NFDefine.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace NFMsg {

namespace {

const ::google::protobuf::EnumDescriptor* EGameEventCode_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* ESynMsgID_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EGameMsgID_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EItemType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EGameEquipSubType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EGameGemSubType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EGameItemSubType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EGameCardSubType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EGameTokenSubType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EGameItemExpiredType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EDrawDropItemState_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EGuildPowerType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* ETaskState_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* ETaskType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EBattleType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EShopType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* ERankType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* ENPCType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EPropertyType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EGameElementType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_NFDefine_2eproto() {
  protobuf_AddDesc_NFDefine_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "NFDefine.proto");
  GOOGLE_CHECK(file != NULL);
  EGameEventCode_descriptor_ = file->enum_type(0);
  ESynMsgID_descriptor_ = file->enum_type(1);
  EGameMsgID_descriptor_ = file->enum_type(2);
  EItemType_descriptor_ = file->enum_type(3);
  EGameEquipSubType_descriptor_ = file->enum_type(4);
  EGameGemSubType_descriptor_ = file->enum_type(5);
  EGameItemSubType_descriptor_ = file->enum_type(6);
  EGameCardSubType_descriptor_ = file->enum_type(7);
  EGameTokenSubType_descriptor_ = file->enum_type(8);
  EGameItemExpiredType_descriptor_ = file->enum_type(9);
  EDrawDropItemState_descriptor_ = file->enum_type(10);
  EGuildPowerType_descriptor_ = file->enum_type(11);
  ETaskState_descriptor_ = file->enum_type(12);
  ETaskType_descriptor_ = file->enum_type(13);
  EBattleType_descriptor_ = file->enum_type(14);
  EShopType_descriptor_ = file->enum_type(15);
  ERankType_descriptor_ = file->enum_type(16);
  ENPCType_descriptor_ = file->enum_type(17);
  EPropertyType_descriptor_ = file->enum_type(18);
  EGameElementType_descriptor_ = file->enum_type(19);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_NFDefine_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_NFDefine_2eproto() {
}

void protobuf_AddDesc_NFDefine_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\016NFDefine.proto\022\005NFMsg*\230\n\n\016EGameEventCo"
    "de\022\020\n\014EGEC_SUCCESS\020\000\022\025\n\021EGEC_UNKOWN_ERRO"
    "R\020\001\022\026\n\022EGEC_ACCOUNT_EXIST\020\002\022\033\n\027EGEC_ACCO"
    "UNTPWD_INVALID\020\003\022\026\n\022EGEC_ACCOUNT_USING\020\004"
    "\022\027\n\023EGEC_ACCOUNT_LOCKED\020\005\022\030\n\024EGEC_ACCOUN"
    "T_SUCCESS\020\006\022\033\n\027EGEC_VERIFY_KEY_SUCCESS\020\007"
    "\022\030\n\024EGEC_VERIFY_KEY_FAIL\020\010\022\035\n\031EGEC_SELEC"
    "TSERVER_SUCCESS\020\t\022\032\n\026EGEC_SELECTSERVER_F"
    "AIL\020\n\022\030\n\024EGEC_CHARACTER_EXIST\020n\022\032\n\026EGEC_"
    "SVRZONEID_INVALID\020o\022\031\n\025EGEC_CHARACTER_NU"
    "MOUT\020p\022\032\n\026EGEC_CHARACTER_INVALID\020q\022\033\n\027EG"
    "EC_CHARACTER_NOTEXIST\020r\022\030\n\024EGEC_CHARACTE"
    "R_USING\020s\022\031\n\025EGEC_CHARACTER_LOCKED\020t\022\026\n\022"
    "EGEC_ZONE_OVERLOAD\020u\022\023\n\017EGEC_NOT_ONLINE\020"
    "v\022\027\n\023EGEC_ALREAY_IN_TEAM\020w\022\034\n\030EGEC_INVAL"
    "ID_TEAM_INVITE\020x\022\022\n\016EGEC_TEAM_FULL\020y\022\032\n\026"
    "EGEC_MAIL_UPDATE_ERROR\020z\022\034\n\030EGEC_MAIL_TO"
    "NAME_INVALID\020{\022\032\n\026EGEC_MAIL_DELETE_ERROR"
    "\020|\022\033\n\027EGEC_MAIL_TOWNAME_EQUAL\020}\022\023\n\017EGEC_"
    "LACK_MONEY\020~\022\025\n\021EGEC_FULL_PACKAGE\020\177\022\026\n\021E"
    "GEC_INVALID_ITEM\020\200\001\022\035\n\030EGEC_INVALID_CONS"
    "IGNMENT\020\201\001\022\030\n\023EGEC_NOT_ENOUGH_VIP\020\202\001\022\024\n\017"
    "EGEC_NEED_LEVEL\020\203\001\022\031\n\024EGEC_MAX_FRIEND_LI"
    "ST\020\204\001\022\030\n\023EGEC_MAX_ENEMY_LIST\020\205\001\022\030\n\023EGEC_"
    "MAX_GANGS_LSIT\020\206\001\022\032\n\025EGEC_LIMITS_TO_RIGH"
    "TS\020\207\001\022\034\n\027EGEC_INVALID_GANGS_NAME\020\210\001\022\034\n\027E"
    "GEC_REPEAT_ENTER_GANGS\020\211\001\022\035\n\030EGEC_INVALI"
    "D_GANGSMEMBER\020\212\001\022\034\n\027EGEC_MASTER_LEAVE_GA"
    "NGS\020\213\001\022\033\n\026EGEC_GANGS_TITLE_OUTOF\020\214\001\022\035\n\030E"
    "GEC_ENTER_GATEWAY_FAILD\020\215\001\022\030\n\023EGEC_NO_SE"
    "RVER4ZONE\020\216\001\022\027\n\022EGEC_INVALID_SKILL\020\217\001\022\036\n"
    "\031EGEC_CREATE_GUILD_SUCCESS\020\310\001\022\034\n\027EGEC_JO"
    "IN_GUILD_SUCCESS\020\311\001\022\035\n\030EGEC_LEAVE_GUILD_"
    "SUCCESS\020\312\001*\034\n\tESynMsgID\022\017\n\013ESMI_UNKNOW\020\000"
    "*\344-\n\nEGameMsgID\022\017\n\013EGMI_UNKNOW\020\000\022\025\n\021EGMI"
    "_EVENT_RESULT\020\001\022\030\n\024EGMI_EVENT_TRANSPOND\020"
    "\002\022\025\n\021EGMI_CLOSE_SOCKET\020\003\022\035\n\031EGMI_WTM_WOR"
    "LD_REGISTERED\020\n\022\037\n\033EGMI_WTM_WORLD_UNREGI"
    "STERED\020\013\022\032\n\026EGMI_WTM_WORLD_REFRESH\020\014\022\035\n\031"
    "EGMI_LTM_LOGIN_REGISTERED\020\024\022\037\n\033EGMI_LTM_"
    "LOGIN_UNREGISTERED\020\025\022\032\n\026EGMI_LTM_LOGIN_R"
    "EFRESH\020\026\022\036\n\032EGMI_PTWG_PROXY_REGISTERED\020\036"
    "\022 \n\034EGMI_PTWG_PROXY_UNREGISTERED\020\037\022\033\n\027EG"
    "MI_PTWG_PROXY_REFRESH\020 \022\034\n\030EGMI_GTW_GAME"
    "_REGISTERED\020(\022\036\n\032EGMI_GTW_GAME_UNREGISTE"
    "RED\020)\022\031\n\025EGMI_GTW_GAME_REFRESH\020*\022\025\n\021EGMI"
    "_STS_NET_INFO\0202\022\032\n\026EGMI_STS_SERVER_REPOR"
    "T\020Z\022\027\n\023EGMI_STS_HEART_BEAT\020d\022\022\n\016EGMI_REQ"
    "_LOGIN\020e\022\022\n\016EGMI_ACK_LOGIN\020f\022\023\n\017EGMI_REQ"
    "_LOGOUT\020g\022\027\n\023EGMI_REQ_WORLD_LIST\020n\022\027\n\023EG"
    "MI_ACK_WORLD_LIST\020o\022\032\n\026EGMI_REQ_CONNECT_"
    "WORLD\020p\022\032\n\026EGMI_ACK_CONNECT_WORLD\020q\022 \n\034E"
    "GMI_REQ_KICK_CLIENT_INWORLD\020r\022\030\n\024EGMI_RE"
    "Q_CONNECT_KEY\020x\022\030\n\024EGMI_ACK_CONNECT_KEY\020"
    "z\022\033\n\026EGMI_REQ_SELECT_SERVER\020\202\001\022\033\n\026EGMI_A"
    "CK_SELECT_SERVER\020\203\001\022\027\n\022EGMI_REQ_ROLE_LIS"
    "T\020\204\001\022\027\n\022EGMI_ACK_ROLE_LIST\020\205\001\022\031\n\024EGMI_RE"
    "Q_CREATE_ROLE\020\206\001\022\031\n\024EGMI_REQ_DELETE_ROLE"
    "\020\207\001\022\032\n\025EGMI_REQ_RECOVER_ROLE\020\210\001\022\030\n\023EGMI_"
    "REQ_ENTER_GAME\020\226\001\022\030\n\023EGMI_ACK_ENTER_GAME"
    "\020\227\001\022\030\n\023EGMI_REQ_LEAVE_GAME\020\230\001\022\030\n\023EGMI_AC"
    "K_LEAVE_GAME\020\231\001\022\027\n\022EGMI_REQ_SWAP_GAME\020\232\001"
    "\022\030\n\023EGMI_REQ_SWAP_SCENE\020\233\001\022\030\n\023EGMI_ACK_S"
    "WAP_SCENE\020\234\001\022\035\n\030EGMI_REQ_SWAP_HOME_SCENE"
    "\020\235\001\022\035\n\030EGMI_ACK_SWAP_HOME_SCENE\020\236\001\022\037\n\032EG"
    "MI_REQ_ENTER_GAME_FINISH\020\237\001\022\037\n\032EGMI_ACK_"
    "ENTER_GAME_FINISH\020\240\001\022\032\n\025EGMI_ACK_OBJECT_"
    "ENTRY\020\310\001\022\032\n\025EGMI_ACK_OBJECT_LEAVE\020\311\001\022#\n\036"
    "EGMI_ACK_OBJECT_PROPERTY_ENTRY\020\312\001\022!\n\034EGM"
    "I_ACK_OBJECT_RECORD_ENTRY\020\313\001\022\032\n\025EGMI_ACK"
    "_PROPERTY_INT\020\322\001\022\034\n\027EGMI_ACK_PROPERTY_FL"
    "OAT\020\323\001\022\035\n\030EGMI_ACK_PROPERTY_STRING\020\324\001\022\035\n"
    "\030EGMI_ACK_PROPERTY_OBJECT\020\326\001\022\036\n\031EGMI_ACK"
    "_PROPERTY_VECTOR2\020\327\001\022\036\n\031EGMI_ACK_PROPERT"
    "Y_VECTOR3\020\330\001\022\025\n\020EGMI_ACK_ADD_ROW\020\334\001\022\030\n\023E"
    "GMI_ACK_REMOVE_ROW\020\335\001\022\026\n\021EGMI_ACK_SWAP_R"
    "OW\020\336\001\022\030\n\023EGMI_ACK_RECORD_INT\020\337\001\022\032\n\025EGMI_"
    "ACK_RECORD_FLOAT\020\340\001\022\033\n\026EGMI_ACK_RECORD_S"
    "TRING\020\342\001\022\033\n\026EGMI_ACK_RECORD_OBJECT\020\343\001\022\034\n"
    "\027EGMI_ACK_RECORD_VECTOR2\020\344\001\022\034\n\027EGMI_ACK_"
    "RECORD_VECTOR3\020\345\001\022\032\n\025EGMI_ACK_RECORD_CLE"
    "AR\020\372\001\022\031\n\024EGMI_ACK_RECORD_SORT\020\373\001\022\033\n\026EGMI"
    "_ACK_DATA_FINISHED\020\204\002\022\033\n\026EGMI_REQ_START_"
    "OPPNENT\020\304\t\022\033\n\026EGMI_ACK_START_OPPNENT\020\305\t\022"
    "\031\n\024EGMI_REQ_END_OPPNENT\020\306\t\022\031\n\024EGMI_ACK_E"
    "ND_OPPNENT\020\307\t\022\034\n\027EGMI_REQ_SEARCH_OPPNENT"
    "\020\310\t\022\034\n\027EGMI_ACK_SEARCH_OPPNENT\020\311\t\022\022\n\rEGM"
    "I_REQ_MOVE\020\316\t\022\022\n\rEGMI_ACK_MOVE\020\317\t\022\031\n\024EGM"
    "I_REQ_MOVE_IMMUNE\020\320\t\022\031\n\024EGMI_ACK_MOVE_IM"
    "MUNE\020\321\t\022\033\n\026EGMI_REQ_SKILL_OBJECTX\020\330\t\022\033\n\026"
    "EGMI_ACK_SKILL_OBJECTX\020\331\t\022\027\n\022EGMI_REQ_SK"
    "ILL_POS\020\332\t\022\027\n\022EGMI_ACK_SKILL_POS\020\333\t\022\031\n\024E"
    "GMI_REQ_ITEM_OBJECT\020\334\t\022\031\n\024EGMI_ACK_ITEM_"
    "OBJECT\020\335\t\022\026\n\021EGMI_REQ_ITEM_POS\020\336\t\022\026\n\021EGM"
    "I_ACK_ITEM_POS\020\337\t\022\022\n\rEGMI_REQ_CHAT\020\342\t\022\022\n"
    "\rEGMI_ACK_CHAT\020\343\t\022\027\n\022EGMI_REQ_SALE_ITEM\020"
    "\344\t\022\030\n\023EGMI_REQ_SPLIT_ITEM\020\345\t\022\032\n\025EGMI_REQ"
    "_PRODUCE_ITEM\020\346\t\022\027\n\022EGMI_REQ_PICK_ITEM\020\347"
    "\t\022\031\n\024EGMI_REQ_ACCEPT_TASK\020\350\t\022\034\n\027EGMI_REQ"
    "_COMPELETE_TASK\020\351\t\022\033\n\026EGMI_ACK_ONLINE_NO"
    "TIFY\020\212\n\022\034\n\027EGMI_ACK_OFFLINE_NOTIFY\020\213\n\022\032\n"
    "\025EGMI_REQ_CREATE_GUILD\020\224\n\022\032\n\025EGMI_ACK_CR"
    "EATE_GUILD\020\225\n\022\030\n\023EGMI_REQ_JOIN_GUILD\020\226\n\022"
    "\030\n\023EGMI_ACK_JOIN_GUILD\020\227\n\022\031\n\024EGMI_REQ_LE"
    "AVE_GUILD\020\230\n\022\031\n\024EGMI_ACK_LEAVE_GUILD\020\231\n\022"
    "\027\n\022EGMI_REQ_OPR_GUILD\020\232\n\022\027\n\022EGMI_ACK_OPR"
    "_GUILD\020\233\n\022\032\n\025EGMI_REQ_SEARCH_GUILD\020\234\n\022\032\n"
    "\025EGMI_ACK_SEARCH_GUILD\020\235\n\022\033\n\026EGMI_REQ_OP"
    "R_GUILDINFO\020\236\n\022\033\n\026EGMI_ACK_OPR_GUILDINFO"
    "\020\237\n\022\035\n\030EGMI_REQ_GUILDECTYPEINFO\020\240\n\022\035\n\030EG"
    "MI_ACK_GUILDECTYPEINFO\020\241\n\022\035\n\030EGMI_SET_GU"
    "ILDECTYPEINFO\020\242\n\022\035\n\030EGMI_ReqEnterGuildEc"
    "type\020\243\n\022\036\n\031EGEC_REQ_CREATE_CHATGROUP\020\370\n\022"
    "\036\n\031EGEC_ACK_CREATE_CHATGROUP\020\371\n\022\034\n\027EGEC_"
    "REQ_JOIN_CHATGROUP\020\372\n\022\034\n\027EGEC_ACK_JOIN_C"
    "HATGROUP\020\373\n\022\035\n\030EGEC_REQ_LEAVE_CHATGROUP\020"
    "\374\n\022\035\n\030EGEC_ACK_LEAVE_CHATGROUP\020\375\n\022$\n\037EGE"
    "C_REQ_SUBSCRIPTION_CHATGROUP\020\376\n\022*\n%EGEC_"
    "REQ_CANCELSUBSCRIPTION_CHATGROUP\020\377\n\022\036\n\031E"
    "GEC_REQ_INVITE_CHATGROUP\020\200\013\022\036\n\031EGEC_ACK_"
    "INVITE_CHATGROUP\020\201\013\022\034\n\027EGEC_REQ_KICK_CHA"
    "TGROUP\020\202\013\022\034\n\027EGEC_ACK_KICK_CHATGROUP\020\203\013\022"
    "\037\n\032EGEC_REQ_CHATGROUP_TO_TEAM\020\252\013\022\037\n\032EGEC"
    "_ACK_CHATGROUP_TO_TEAM\020\253\013\022%\n EGEC_REQ_IN"
    "TENSIFYLEVEL_TO_EQUIP\020\334\013\022%\n EGEC_ACK_INT"
    "ENSIFYLEVEL_TO_EQUIP\020\335\013\022\033\n\026EGEC_REQ_HOLE"
    "_TO_EQUIP\020\336\013\022\033\n\026EGEC_ACK_HOLE_TO_EQUIP\020\337"
    "\013\022!\n\034EGEC_REQ_INLAYSTONE_TO_EQUIP\020\340\013\022!\n\034"
    "EGEC_ACK_INLAYSTONE_TO_EQUIP\020\341\013\022#\n\036EGEC_"
    "REQ_ELEMENTLEVEL_TO_EQUIP\020\342\013\022#\n\036EGEC_ACK"
    "_ELEMENTLEVEL_TO_EQUIP\020\343\013\022\024\n\017EGEC_WEAR_E"
    "QUIP\020\344\013\022\027\n\022EGEC_TAKEOFF_EQUIP\020\345\013\022\034\n\027EGEC"
    "_REQ_SET_FIGHT_HERO\020\360\013\022\037\n\032EGEC_REQ_SWITC"
    "H_FIGHT_HERO\020\361\013\022\032\n\025EGEC_REQ_MINING_TITLE"
    "\020\300\014\022\032\n\025EGEC_ACK_MINING_TITLE\020\301\014\022\027\n\022EGEC_"
    "REQ_SEND_MAIL\020\244\r\022\027\n\022EGEC_REQ_DRAW_MAIL\020\245"
    "\r\022\031\n\024EGEC_REQ_DELETE_MAIL\020\246\r\022 \n\033EGMI_ACK"
    "_CLONE_OBJECT_ENTRY\020\210\016\022 \n\033EGMI_ACK_CLONE"
    "_OBJECT_LEAVE\020\211\016\022)\n$EGMI_ACK_CLONE_OBJEC"
    "T_PROPERTY_ENTRY\020\212\016\022\'\n\"EGMI_ACK_CLONE_OB"
    "JECT_RECORD_ENTRY\020\213\016\022 \n\033EGMI_ACK_CLONE_P"
    "ROPERTY_INT\020\222\016\022\"\n\035EGMI_ACK_CLONE_PROPERT"
    "Y_FLOAT\020\223\016\022#\n\036EGMI_ACK_CLONE_PROPERTY_ST"
    "RING\020\224\016\022#\n\036EGMI_ACK_CLONE_PROPERTY_OBJEC"
    "T\020\226\016\022\030\n\023EGMI_REQSWICHSERVER\020\260\016\022\030\n\023EGMI_A"
    "CKSWICHSERVER\020\261\016\022\031\n\024EGMI_REQ_CREATE_TEAM"
    "\020\304\016\022\031\n\024EGMI_ACK_CREATE_TEAM\020\305\016\022\027\n\022EGMI_R"
    "EQ_JOIN_TEAM\020\306\016\022\027\n\022EGMI_ACK_JOIN_TEAM\020\307\016"
    "\022\030\n\023EGMI_REQ_LEAVE_TEAM\020\310\016\022\030\n\023EGMI_ACK_L"
    "EAVE_TEAM\020\311\016\022\031\n\024EGMI_REQ_INVITE_TEAM\020\312\016\022"
    "\034\n\027EGMI_REQ_OPRMEMBER_TEAM\020\313\016\022\034\n\027EGMI_AC"
    "K_OPRMEMBER_TEAM\020\314\016\022\037\n\032EGMI_REQ_TEAM_ENT"
    "ER_ECTYPE\020\315\016\022\037\n\032EGMI_ACK_TEAM_ENTER_ECTY"
    "PE\020\316\016\022\033\n\026EGMI_REQ_MAP_GRID_INFO\020\354\016\022\033\n\026EG"
    "MI_ACK_MAP_GRID_INFO\020\355\016\022\032\n\025EGMI_REQ_BIG_"
    "MAP_INFO\020\356\016\022\032\n\025EGMI_ACK_BIG_MAP_INFO\020\357\016\022"
    "\033\n\026EGMI_REQ_HOLD_MAP_GRID\020\366\016\022\033\n\026EGMI_ACK"
    "_HOLD_MAP_GRID\020\367\016\022 \n\033EGMI_REQ_LEAVE_MSG_"
    "MAP_GRID\020\370\016\022 \n\033EGMI_ACK_LEAVE_MSG_MAP_GR"
    "ID\020\371\016\022 \n\033EGMI_REQ_GET_MAP_GRID_AWARD\020\372\016\022"
    " \n\033EGMI_ACK_GET_MAP_GRID_AWARD\020\373\016\022\036\n\031EGM"
    "I_REQ_MAP_GRID_HUNTING\020\374\016\022\036\n\031EGMI_ACK_MA"
    "P_GRID_HUNTING\020\375\016\022\037\n\032EGMI_REQ_MAP_GRID_K"
    "ING_WAR\020\376\016\022\037\n\032EGMI_ACK_MAP_GRID_KING_WAR"
    "\020\377\016\022\036\n\031EGMI_REQ_CMD_PROPERTY_INT\020\220N\022\036\n\031E"
    "GMI_REQ_CMD_PROPERTY_STR\020\221N\022!\n\034EGMI_REQ_"
    "CMD_PROPERTY_OBJECT\020\222N\022 \n\033EGMI_REQ_CMD_P"
    "ROPERTY_FLOAT\020\223N\022\034\n\027EGMI_REQ_CMD_RECORD_"
    "INT\020\224N\022\034\n\027EGMI_REQ_CMD_RECORD_STR\020\225N\022\037\n\032"
    "EGMI_REQ_CMD_RECORD_OBJECT\020\226N\022\036\n\031EGMI_RE"
    "Q_CMD_RECORD_FLOAT\020\227N\022\030\n\023EGMI_REQ_CMD_NO"
    "RMAL\020\230N\022!\n\034EGMI_REQ_QUERY_SERVER_STATUS\020"
    "\330O\022\034\n\026EGMI_REQ_BUY_FORM_SHOP\020\240\234\001\022\034\n\026EGMI"
    "_ACK_BUY_FORM_SHOP\020\241\234\001\022 \n\032EGMI_REQ_MOVE_"
    "BUILD_OBJECT\020\242\234\001\022 \n\032EGMI_ACK_MOVE_BUILD_"
    "OBJECT\020\243\234\001\022\033\n\025EGMI_REQ_UP_BUILD_LVL\020\205\235\001\022"
    "\032\n\024EGMI_REQ_CREATE_ITEM\020\206\235\001\022\034\n\026EGMI_REQ_"
    "BUILD_OPERATE\020\207\235\001\022\036\n\030EGMI_REQ_SEARCH_TO_"
    "SHARE\020\260\352\001\022\036\n\030EGMI_ACK_SEARCH_TO_SHARE\020\261\352"
    "\001\022\035\n\027EGMI_REQ_SHARE_TO_ATART\020\262\352\001\022\035\n\027EGMI"
    "_ACK_SHARE_TO_ATART\020\263\352\001*R\n\tEItemType\022\r\n\t"
    "EIT_EQUIP\020\000\022\013\n\007EIT_GEM\020\001\022\014\n\010EIT_ITEM\020\002\022\014"
    "\n\010EIT_CARD\020\003\022\r\n\tEIT_TOKEN\020\004*\221\001\n\021EGameEqu"
    "ipSubType\022\024\n\020EQUIPTYPE_WEAPON\020\000\022\024\n\020EQUIP"
    "TYPE_HELMET\020\001\022\023\n\017EQUIPTYPE_ARMOR\020\002\022\023\n\017EQ"
    "UIPTYPE_WRIST\020\003\022\022\n\016EQUIPTYPE_PANT\020\004\022\022\n\016E"
    "QUIPTYPE_BOOT\020\005*\262\001\n\017EGameGemSubType\022\024\n\020E"
    "GGSTYPE_GEM_ATK\020\000\022\024\n\020EGGSTYPE_GEM_DEF\020\001\022"
    "\025\n\021EGGSTYPE_GEM_FIRE\020\003\022\026\n\022EGGSTYPE_GEM_L"
    "IGHT\020\004\022\025\n\021EGGSTYPE_GEM_WIND\020\005\022\024\n\020EGGSTYP"
    "E_GEM_ICE\020\006\022\027\n\023EGGSTYPE_GEM_POISON\020\007*\263\001\n"
    "\020EGameItemSubType\022\023\n\017EGIT_ITEM_WATER\020\000\022\025"
    "\n\021EGIT_ITEM_DIAMOND\020\001\022\026\n\022EGIT_ITEM_CURRE"
    "NCY\020\002\022\021\n\rEGIT_ITEM_EXP\020\003\022\020\n\014EGIT_ITEM_HP"
    "\020\004\022\020\n\014EGIT_ITEM_MP\020\005\022\020\n\014EGIT_ITEM_SP\020\006\022\022"
    "\n\016EGIT_ITEM_PACK\020\007*Q\n\020EGameCardSubType\022\022"
    "\n\016EGCST_STRENGTH\020\001\022\021\n\rEGCST_AGILITY\020\002\022\026\n"
    "\022EGCST_INTELLIGENCE\020\003*w\n\021EGameTokenSubTy"
    "pe\022\026\n\022EGTST_TOKEN_REBORN\020\000\022\030\n\024EGTST_TOKE"
    "N_POSITION\020\001\022\026\n\022EGTST_TOKEN_BOUNTY\020\002\022\030\n\024"
    "EGTST_TOKEN_ACTIVITY\020\003*e\n\024EGameItemExpir"
    "edType\022\016\n\nEGIET_NONE\020\000\022\023\n\017EGIET_USE_TIME"
    "S\020\001\022\023\n\017EGIET_REAL_TIME\020\002\022\023\n\017EGIET_END_IN"
    "DEX\020\003*Y\n\022EDrawDropItemState\022\025\n\021E_DRAW_ST"
    "ATE_NONE\020\000\022\025\n\021E_DRAW_STATE_GAIN\020\001\022\025\n\021E_D"
    "RAW_STATE_RECV\020\002*s\n\017EGuildPowerType\022\033\n\027G"
    "UILD_POWER_TYPE_NORMAL\020\000\022#\n\037GUILD_POWER_"
    "TYPE_VICE_PRESIDENT\020\001\022\036\n\032GUILD_POWER_TYP"
    "E_PRESIDENT\020\002*V\n\nETaskState\022\023\n\017TASK_IN_P"
    "ROCESS\020\000\022\r\n\tTASK_DONE\020\001\022\023\n\017TASK_DRAW_AWA"
    "RD\020\002\022\017\n\013TASK_FINISH\020\003*\251\002\n\tETaskType\022 \n\034T"
    "ASK_LEVEL_UPDATE_SOME_LEVEL\020\000\022\024\n\020TASK_PA"
    "SS_ECTYPE\020\001\022\032\n\026TASK_PASS_ECTYPE_COUNT\020\002\022"
    "$\n TASK_PASS_SOME_TYPE_ECTYPE_COUNT\020\003\022\033\n"
    "\027TASK_UPDATE_SKILL_COUNT\020\004\022\026\n\022TASK_CONSU"
    "ME_MONEY\020\005\022\030\n\024TASK_CONSUME_DIAMOND\020\006\022\024\n\020"
    "TASK_ARENA_COUNT\020\007\022\033\n\027TASK_KILL_MONSTER_"
    "COUNT\020\010\022 \n\034TASK_KILL_SOME_MONSTER_COUNT\020"
    "\t*5\n\013EBattleType\022\021\n\rBATTLE_SINGLE\020\000\022\023\n\017B"
    "ATTLE_PVE_TEAM\020\001*c\n\tEShopType\022\020\n\014EST_BUI"
    "LDING\020\001\022\014\n\010EST_GOLD\020\002\022\014\n\010EST_ITEM\020\003\022\r\n\tE"
    "ST_EQUIP\020\005\022\013\n\007EST_GEM\020\006\022\014\n\010EST_CARD\020\007*{\n"
    "\tERankType\022\024\n\020ERT_PLAYER_LEVEL\020\001\022\023\n\017ERT_"
    "FIGHT_VALUE\020\002\022\024\n\020ERT_PLAYER_MONEY\020\003\022\023\n\017E"
    "RT_GUILD_LEVEL\020\004\022\030\n\024ERT_GUILD_KINGSOURCE"
    "\020\005*G\n\010ENPCType\022\023\n\017ENPCTYPE_NORMAL\020\000\022\021\n\rE"
    "NPCTYPE_HERO\020\001\022\023\n\017ENPCTYPE_TURRET\020\002*H\n\rE"
    "PropertyType\022\020\n\014EPT_STRENGTH\020\001\022\017\n\013EPT_AG"
    "ILITY\020\002\022\024\n\020EPT_INTELLIGENCE\020\003*\207\001\n\020EGameE"
    "lementType\022\025\n\021EELEMENTTYPE_FIRE\020\000\022\026\n\022EEL"
    "EMENTTYPE_LIGHT\020\001\022\025\n\021EELEMENTTYPE_WIND\020\002"
    "\022\024\n\020EELEMENTTYPE_ICE\020\003\022\027\n\023EELEMENTTYPE_P"
    "OISON\020\004", 9287);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "NFDefine.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_NFDefine_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_NFDefine_2eproto {
  StaticDescriptorInitializer_NFDefine_2eproto() {
    protobuf_AddDesc_NFDefine_2eproto();
  }
} static_descriptor_initializer_NFDefine_2eproto_;
const ::google::protobuf::EnumDescriptor* EGameEventCode_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EGameEventCode_descriptor_;
}
bool EGameEventCode_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 110:
    case 111:
    case 112:
    case 113:
    case 114:
    case 115:
    case 116:
    case 117:
    case 118:
    case 119:
    case 120:
    case 121:
    case 122:
    case 123:
    case 124:
    case 125:
    case 126:
    case 127:
    case 128:
    case 129:
    case 130:
    case 131:
    case 132:
    case 133:
    case 134:
    case 135:
    case 136:
    case 137:
    case 138:
    case 139:
    case 140:
    case 141:
    case 142:
    case 143:
    case 200:
    case 201:
    case 202:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ESynMsgID_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ESynMsgID_descriptor_;
}
bool ESynMsgID_IsValid(int value) {
  switch(value) {
    case 0:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGameMsgID_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EGameMsgID_descriptor_;
}
bool EGameMsgID_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 10:
    case 11:
    case 12:
    case 20:
    case 21:
    case 22:
    case 30:
    case 31:
    case 32:
    case 40:
    case 41:
    case 42:
    case 50:
    case 90:
    case 100:
    case 101:
    case 102:
    case 103:
    case 110:
    case 111:
    case 112:
    case 113:
    case 114:
    case 120:
    case 122:
    case 130:
    case 131:
    case 132:
    case 133:
    case 134:
    case 135:
    case 136:
    case 150:
    case 151:
    case 152:
    case 153:
    case 154:
    case 155:
    case 156:
    case 157:
    case 158:
    case 159:
    case 160:
    case 200:
    case 201:
    case 202:
    case 203:
    case 210:
    case 211:
    case 212:
    case 214:
    case 215:
    case 216:
    case 220:
    case 221:
    case 222:
    case 223:
    case 224:
    case 226:
    case 227:
    case 228:
    case 229:
    case 250:
    case 251:
    case 260:
    case 1220:
    case 1221:
    case 1222:
    case 1223:
    case 1224:
    case 1225:
    case 1230:
    case 1231:
    case 1232:
    case 1233:
    case 1240:
    case 1241:
    case 1242:
    case 1243:
    case 1244:
    case 1245:
    case 1246:
    case 1247:
    case 1250:
    case 1251:
    case 1252:
    case 1253:
    case 1254:
    case 1255:
    case 1256:
    case 1257:
    case 1290:
    case 1291:
    case 1300:
    case 1301:
    case 1302:
    case 1303:
    case 1304:
    case 1305:
    case 1306:
    case 1307:
    case 1308:
    case 1309:
    case 1310:
    case 1311:
    case 1312:
    case 1313:
    case 1314:
    case 1315:
    case 1400:
    case 1401:
    case 1402:
    case 1403:
    case 1404:
    case 1405:
    case 1406:
    case 1407:
    case 1408:
    case 1409:
    case 1410:
    case 1411:
    case 1450:
    case 1451:
    case 1500:
    case 1501:
    case 1502:
    case 1503:
    case 1504:
    case 1505:
    case 1506:
    case 1507:
    case 1508:
    case 1509:
    case 1520:
    case 1521:
    case 1600:
    case 1601:
    case 1700:
    case 1701:
    case 1702:
    case 1800:
    case 1801:
    case 1802:
    case 1803:
    case 1810:
    case 1811:
    case 1812:
    case 1814:
    case 1840:
    case 1841:
    case 1860:
    case 1861:
    case 1862:
    case 1863:
    case 1864:
    case 1865:
    case 1866:
    case 1867:
    case 1868:
    case 1869:
    case 1870:
    case 1900:
    case 1901:
    case 1902:
    case 1903:
    case 1910:
    case 1911:
    case 1912:
    case 1913:
    case 1914:
    case 1915:
    case 1916:
    case 1917:
    case 1918:
    case 1919:
    case 10000:
    case 10001:
    case 10002:
    case 10003:
    case 10004:
    case 10005:
    case 10006:
    case 10007:
    case 10008:
    case 10200:
    case 20000:
    case 20001:
    case 20002:
    case 20003:
    case 20101:
    case 20102:
    case 20103:
    case 30000:
    case 30001:
    case 30002:
    case 30003:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EItemType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EItemType_descriptor_;
}
bool EItemType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGameEquipSubType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EGameEquipSubType_descriptor_;
}
bool EGameEquipSubType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGameGemSubType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EGameGemSubType_descriptor_;
}
bool EGameGemSubType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGameItemSubType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EGameItemSubType_descriptor_;
}
bool EGameItemSubType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGameCardSubType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EGameCardSubType_descriptor_;
}
bool EGameCardSubType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGameTokenSubType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EGameTokenSubType_descriptor_;
}
bool EGameTokenSubType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGameItemExpiredType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EGameItemExpiredType_descriptor_;
}
bool EGameItemExpiredType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EDrawDropItemState_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EDrawDropItemState_descriptor_;
}
bool EDrawDropItemState_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGuildPowerType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EGuildPowerType_descriptor_;
}
bool EGuildPowerType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ETaskState_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ETaskState_descriptor_;
}
bool ETaskState_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ETaskType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ETaskType_descriptor_;
}
bool ETaskType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EBattleType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EBattleType_descriptor_;
}
bool EBattleType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EShopType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EShopType_descriptor_;
}
bool EShopType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ERankType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ERankType_descriptor_;
}
bool ERankType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ENPCType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ENPCType_descriptor_;
}
bool ENPCType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EPropertyType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EPropertyType_descriptor_;
}
bool EPropertyType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGameElementType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EGameElementType_descriptor_;
}
bool EGameElementType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace NFMsg

// @@protoc_insertion_point(global_scope)
