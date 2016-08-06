// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <stdint.h>
#include <stdlib.h>
#include <zcm/zcm_coretypes.h>
#include <zcm/zcm.h>

#ifndef _prim1_h
#define _prim1_h

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _prim1 prim1;
struct _prim1
{
    int8_t     i8;
    int16_t    i16;
    int32_t    i32;
    int64_t    i64;
    float      f;
    double     d;
    char*      s;
    int8_t     bl;
    uint8_t    b;
};

/**
 * Create a deep copy of a prim1.
 * When no longer needed, destroy it with prim1_destroy()
 */
prim1* prim1_copy(const prim1* to_copy);

/**
 * Destroy an instance of prim1 created by prim1_copy()
 */
void prim1_destroy(prim1* to_destroy);

/**
 * Identifies a single subscription.  This is an opaque data type.
 */
typedef struct _prim1_subscription_t prim1_subscription_t;

/**
 * Prototype for a callback function invoked when a message of type
 * prim1 is received.
 */
typedef void(*prim1_handler_t)(const zcm_recv_buf_t *rbuf,
             const char *channel, const prim1 *msg, void *userdata);

/**
 * Publish a message of type prim1 using ZCM.
 *
 * @param zcm The ZCM instance to publish with.
 * @param channel The channel to publish on.
 * @param msg The message to publish.
 * @return 0 on success, <0 on error.  Success means ZCM has transferred
 * responsibility of the message data to the OS.
 */
int prim1_publish(zcm_t *zcm, const char *channel, const prim1 *msg);

/**
 * Subscribe to messages of type prim1 using ZCM.
 *
 * @param zcm The ZCM instance to subscribe with.
 * @param channel The channel to subscribe to.
 * @param handler The callback function invoked by ZCM when a message is received.
 *                This function is invoked by ZCM during calls to zcm_handle() and
 *                zcm_handle_timeout().
 * @param userdata An opaque pointer passed to @p handler when it is invoked.
 * @return pointer to subscription type, NULL if failure. Must clean up
 *         dynamic memory by passing the pointer to prim1_unsubscribe.
 */
prim1_subscription_t* prim1_subscribe(zcm_t *zcm, const char *channel, prim1_handler_t handler, void *userdata);

/**
 * Removes and destroys a subscription created by prim1_subscribe()
 */
int prim1_unsubscribe(zcm_t *zcm, prim1_subscription_t* hid);
/**
 * Encode a message of type prim1 into binary form.
 *
 * @param buf The output buffer.
 * @param offset Encoding starts at this byte offset into @p buf.
 * @param maxlen Maximum number of bytes to write.  This should generally
 *               be equal to prim1_encoded_size().
 * @param msg The message to encode.
 * @return The number of bytes encoded, or <0 if an error occured.
 */
int prim1_encode(void *buf, int offset, int maxlen, const prim1 *p);

/**
 * Decode a message of type prim1 from binary form.
 * When decoding messages containing strings or variable-length arrays, this
 * function may allocate memory.  When finished with the decoded message,
 * release allocated resources with prim1_decode_cleanup().
 *
 * @param buf The buffer containing the encoded message
 * @param offset The byte offset into @p buf where the encoded message starts.
 * @param maxlen The maximum number of bytes to read while decoding.
 * @param msg Output parameter where the decoded message is stored
 * @return The number of bytes decoded, or <0 if an error occured.
 */
int prim1_decode(const void *buf, int offset, int maxlen, prim1 *msg);

/**
 * Release resources allocated by prim1_decode()
 * @return 0
 */
int prim1_decode_cleanup(prim1 *p);

/**
 * Check how many bytes are required to encode a message of type prim1
 */
int prim1_encoded_size(const prim1 *p);

// ZCM support functions. Users should not call these
int64_t __prim1_get_hash(void);
uint64_t __prim1_hash_recursive(const __zcm_hash_ptr *p);
int     __prim1_encode_array(void *buf, int offset, int maxlen, const prim1 *p, int elements);
int     __prim1_decode_array(const void *buf, int offset, int maxlen, prim1 *p, int elements);
int     __prim1_decode_array_cleanup(prim1 *p, int elements);
int     __prim1_encoded_array_size(const prim1 *p, int elements);
int     __prim1_clone_array(const prim1 *p, prim1 *q, int elements);

#ifdef __cplusplus
}
#endif

#endif