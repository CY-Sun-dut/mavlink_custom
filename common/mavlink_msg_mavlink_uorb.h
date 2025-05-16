#pragma once
// MESSAGE MAVLINK_UORB PACKING

#define MAVLINK_MSG_ID_MAVLINK_UORB 20001


typedef struct __mavlink_mavlink_uorb_t {
 uint64_t time_usec; /*<  uint64_t*/
 float accel0; /*<  float*/
 float accel1; /*<  float*/
 float accel2; /*<  float*/
} mavlink_mavlink_uorb_t;

#define MAVLINK_MSG_ID_MAVLINK_UORB_LEN 20
#define MAVLINK_MSG_ID_MAVLINK_UORB_MIN_LEN 20
#define MAVLINK_MSG_ID_20001_LEN 20
#define MAVLINK_MSG_ID_20001_MIN_LEN 20

#define MAVLINK_MSG_ID_MAVLINK_UORB_CRC 97
#define MAVLINK_MSG_ID_20001_CRC 97



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_MAVLINK_UORB { \
    20001, \
    "MAVLINK_UORB", \
    4, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_mavlink_uorb_t, time_usec) }, \
         { "accel0", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_mavlink_uorb_t, accel0) }, \
         { "accel1", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_mavlink_uorb_t, accel1) }, \
         { "accel2", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_mavlink_uorb_t, accel2) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_MAVLINK_UORB { \
    "MAVLINK_UORB", \
    4, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_mavlink_uorb_t, time_usec) }, \
         { "accel0", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_mavlink_uorb_t, accel0) }, \
         { "accel1", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_mavlink_uorb_t, accel1) }, \
         { "accel2", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_mavlink_uorb_t, accel2) }, \
         } \
}
#endif

/**
 * @brief Pack a mavlink_uorb message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec  uint64_t
 * @param accel0  float
 * @param accel1  float
 * @param accel2  float
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mavlink_uorb_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, float accel0, float accel1, float accel2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MAVLINK_UORB_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, accel0);
    _mav_put_float(buf, 12, accel1);
    _mav_put_float(buf, 16, accel2);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MAVLINK_UORB_LEN);
#else
    mavlink_mavlink_uorb_t packet;
    packet.time_usec = time_usec;
    packet.accel0 = accel0;
    packet.accel1 = accel1;
    packet.accel2 = accel2;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MAVLINK_UORB_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MAVLINK_UORB;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MAVLINK_UORB_MIN_LEN, MAVLINK_MSG_ID_MAVLINK_UORB_LEN, MAVLINK_MSG_ID_MAVLINK_UORB_CRC);
}

/**
 * @brief Pack a mavlink_uorb message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec  uint64_t
 * @param accel0  float
 * @param accel1  float
 * @param accel2  float
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mavlink_uorb_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t time_usec, float accel0, float accel1, float accel2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MAVLINK_UORB_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, accel0);
    _mav_put_float(buf, 12, accel1);
    _mav_put_float(buf, 16, accel2);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MAVLINK_UORB_LEN);
#else
    mavlink_mavlink_uorb_t packet;
    packet.time_usec = time_usec;
    packet.accel0 = accel0;
    packet.accel1 = accel1;
    packet.accel2 = accel2;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MAVLINK_UORB_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MAVLINK_UORB;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_MAVLINK_UORB_MIN_LEN, MAVLINK_MSG_ID_MAVLINK_UORB_LEN, MAVLINK_MSG_ID_MAVLINK_UORB_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_MAVLINK_UORB_MIN_LEN, MAVLINK_MSG_ID_MAVLINK_UORB_LEN);
#endif
}

/**
 * @brief Pack a mavlink_uorb message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec  uint64_t
 * @param accel0  float
 * @param accel1  float
 * @param accel2  float
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mavlink_uorb_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,float accel0,float accel1,float accel2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MAVLINK_UORB_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, accel0);
    _mav_put_float(buf, 12, accel1);
    _mav_put_float(buf, 16, accel2);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MAVLINK_UORB_LEN);
#else
    mavlink_mavlink_uorb_t packet;
    packet.time_usec = time_usec;
    packet.accel0 = accel0;
    packet.accel1 = accel1;
    packet.accel2 = accel2;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MAVLINK_UORB_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MAVLINK_UORB;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_MAVLINK_UORB_MIN_LEN, MAVLINK_MSG_ID_MAVLINK_UORB_LEN, MAVLINK_MSG_ID_MAVLINK_UORB_CRC);
}

/**
 * @brief Encode a mavlink_uorb struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param mavlink_uorb C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mavlink_uorb_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_mavlink_uorb_t* mavlink_uorb)
{
    return mavlink_msg_mavlink_uorb_pack(system_id, component_id, msg, mavlink_uorb->time_usec, mavlink_uorb->accel0, mavlink_uorb->accel1, mavlink_uorb->accel2);
}

/**
 * @brief Encode a mavlink_uorb struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mavlink_uorb C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mavlink_uorb_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_mavlink_uorb_t* mavlink_uorb)
{
    return mavlink_msg_mavlink_uorb_pack_chan(system_id, component_id, chan, msg, mavlink_uorb->time_usec, mavlink_uorb->accel0, mavlink_uorb->accel1, mavlink_uorb->accel2);
}

/**
 * @brief Encode a mavlink_uorb struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param mavlink_uorb C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mavlink_uorb_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_mavlink_uorb_t* mavlink_uorb)
{
    return mavlink_msg_mavlink_uorb_pack_status(system_id, component_id, _status, msg,  mavlink_uorb->time_usec, mavlink_uorb->accel0, mavlink_uorb->accel1, mavlink_uorb->accel2);
}

/**
 * @brief Send a mavlink_uorb message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec  uint64_t
 * @param accel0  float
 * @param accel1  float
 * @param accel2  float
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_mavlink_uorb_send(mavlink_channel_t chan, uint64_t time_usec, float accel0, float accel1, float accel2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MAVLINK_UORB_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, accel0);
    _mav_put_float(buf, 12, accel1);
    _mav_put_float(buf, 16, accel2);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAVLINK_UORB, buf, MAVLINK_MSG_ID_MAVLINK_UORB_MIN_LEN, MAVLINK_MSG_ID_MAVLINK_UORB_LEN, MAVLINK_MSG_ID_MAVLINK_UORB_CRC);
#else
    mavlink_mavlink_uorb_t packet;
    packet.time_usec = time_usec;
    packet.accel0 = accel0;
    packet.accel1 = accel1;
    packet.accel2 = accel2;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAVLINK_UORB, (const char *)&packet, MAVLINK_MSG_ID_MAVLINK_UORB_MIN_LEN, MAVLINK_MSG_ID_MAVLINK_UORB_LEN, MAVLINK_MSG_ID_MAVLINK_UORB_CRC);
#endif
}

/**
 * @brief Send a mavlink_uorb message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_mavlink_uorb_send_struct(mavlink_channel_t chan, const mavlink_mavlink_uorb_t* mavlink_uorb)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_mavlink_uorb_send(chan, mavlink_uorb->time_usec, mavlink_uorb->accel0, mavlink_uorb->accel1, mavlink_uorb->accel2);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAVLINK_UORB, (const char *)mavlink_uorb, MAVLINK_MSG_ID_MAVLINK_UORB_MIN_LEN, MAVLINK_MSG_ID_MAVLINK_UORB_LEN, MAVLINK_MSG_ID_MAVLINK_UORB_CRC);
#endif
}

#if MAVLINK_MSG_ID_MAVLINK_UORB_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_mavlink_uorb_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, float accel0, float accel1, float accel2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, accel0);
    _mav_put_float(buf, 12, accel1);
    _mav_put_float(buf, 16, accel2);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAVLINK_UORB, buf, MAVLINK_MSG_ID_MAVLINK_UORB_MIN_LEN, MAVLINK_MSG_ID_MAVLINK_UORB_LEN, MAVLINK_MSG_ID_MAVLINK_UORB_CRC);
#else
    mavlink_mavlink_uorb_t *packet = (mavlink_mavlink_uorb_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->accel0 = accel0;
    packet->accel1 = accel1;
    packet->accel2 = accel2;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAVLINK_UORB, (const char *)packet, MAVLINK_MSG_ID_MAVLINK_UORB_MIN_LEN, MAVLINK_MSG_ID_MAVLINK_UORB_LEN, MAVLINK_MSG_ID_MAVLINK_UORB_CRC);
#endif
}
#endif

#endif

// MESSAGE MAVLINK_UORB UNPACKING


/**
 * @brief Get field time_usec from mavlink_uorb message
 *
 * @return  uint64_t
 */
static inline uint64_t mavlink_msg_mavlink_uorb_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field accel0 from mavlink_uorb message
 *
 * @return  float
 */
static inline float mavlink_msg_mavlink_uorb_get_accel0(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field accel1 from mavlink_uorb message
 *
 * @return  float
 */
static inline float mavlink_msg_mavlink_uorb_get_accel1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field accel2 from mavlink_uorb message
 *
 * @return  float
 */
static inline float mavlink_msg_mavlink_uorb_get_accel2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Decode a mavlink_uorb message into a struct
 *
 * @param msg The message to decode
 * @param mavlink_uorb C-struct to decode the message contents into
 */
static inline void mavlink_msg_mavlink_uorb_decode(const mavlink_message_t* msg, mavlink_mavlink_uorb_t* mavlink_uorb)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_uorb->time_usec = mavlink_msg_mavlink_uorb_get_time_usec(msg);
    mavlink_uorb->accel0 = mavlink_msg_mavlink_uorb_get_accel0(msg);
    mavlink_uorb->accel1 = mavlink_msg_mavlink_uorb_get_accel1(msg);
    mavlink_uorb->accel2 = mavlink_msg_mavlink_uorb_get_accel2(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_MAVLINK_UORB_LEN? msg->len : MAVLINK_MSG_ID_MAVLINK_UORB_LEN;
        memset(mavlink_uorb, 0, MAVLINK_MSG_ID_MAVLINK_UORB_LEN);
    memcpy(mavlink_uorb, _MAV_PAYLOAD(msg), len);
#endif
}
