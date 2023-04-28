#include "zmq.h"
#include "zmq_utils.h"

// Do not remove this function. It must be called from Swift to prevent the code from being stripped.
static int64_t dummy_method_to_enforce_bundling(void) {
    int64_t dummy_var = 0;
    dummy_var ^= ((int64_t) (void*) zmq_errno);
    dummy_var ^= ((int64_t) (void*) zmq_strerror);
    dummy_var ^= ((int64_t) (void*) zmq_version);

    dummy_var ^= ((int64_t) (void*) zmq_ctx_new);
    dummy_var ^= ((int64_t) (void*) zmq_ctx_term);
    dummy_var ^= ((int64_t) (void*) zmq_ctx_shutdown);
    dummy_var ^= ((int64_t) (void*) zmq_ctx_set);
    dummy_var ^= ((int64_t) (void*) zmq_ctx_get);

    dummy_var ^= ((int64_t) (void*) zmq_init);
    dummy_var ^= ((int64_t) (void*) zmq_term);
    dummy_var ^= ((int64_t) (void*) zmq_ctx_destroy);

    dummy_var ^= ((int64_t) (void*) zmq_msg_init);
    dummy_var ^= ((int64_t) (void*) zmq_msg_init_size);
    dummy_var ^= ((int64_t) (void*) zmq_msg_init_data);
    dummy_var ^= ((int64_t) (void*) zmq_msg_send);
    dummy_var ^= ((int64_t) (void*) zmq_msg_recv);
    dummy_var ^= ((int64_t) (void*) zmq_msg_close);
    dummy_var ^= ((int64_t) (void*) zmq_msg_move);
    dummy_var ^= ((int64_t) (void*) zmq_msg_copy);
    dummy_var ^= ((int64_t) (void*) zmq_msg_data);
    dummy_var ^= ((int64_t) (void*) zmq_msg_size);
    dummy_var ^= ((int64_t) (void*) zmq_msg_more);
    dummy_var ^= ((int64_t) (void*) zmq_msg_get);
    dummy_var ^= ((int64_t) (void*) zmq_msg_set);
    dummy_var ^= ((int64_t) (void*) zmq_msg_gets);

    dummy_var ^= ((int64_t) (void*) zmq_socket);
    dummy_var ^= ((int64_t) (void*) zmq_close);
    dummy_var ^= ((int64_t) (void*) zmq_setsockopt);
    dummy_var ^= ((int64_t) (void*) zmq_getsockopt);
    dummy_var ^= ((int64_t) (void*) zmq_bind);
    dummy_var ^= ((int64_t) (void*) zmq_connect);
    dummy_var ^= ((int64_t) (void*) zmq_unbind);
    dummy_var ^= ((int64_t) (void*) zmq_disconnect);
    dummy_var ^= ((int64_t) (void*) zmq_send);
    dummy_var ^= ((int64_t) (void*) zmq_send_const);
    dummy_var ^= ((int64_t) (void*) zmq_recv);
    dummy_var ^= ((int64_t) (void*) zmq_socket_monitor);

    dummy_var ^= ((int64_t) (void*) zmq_poll);

    dummy_var ^= ((int64_t) (void*) zmq_proxy);
    dummy_var ^= ((int64_t) (void*) zmq_proxy_steerable);

    dummy_var ^= ((int64_t) (void*) zmq_has);

    dummy_var ^= ((int64_t) (void*) zmq_device);
    dummy_var ^= ((int64_t) (void*) zmq_sendmsg);
    dummy_var ^= ((int64_t) (void*) zmq_recvmsg);
    dummy_var ^= ((int64_t) (void*) zmq_sendiov);
    dummy_var ^= ((int64_t) (void*) zmq_recviov);

    dummy_var ^= ((int64_t) (void*) zmq_z85_encode);
    dummy_var ^= ((int64_t) (void*) zmq_z85_decode);
    dummy_var ^= ((int64_t) (void*) zmq_curve_keypair);
    dummy_var ^= ((int64_t) (void*) zmq_curve_public);

    dummy_var ^= ((int64_t) (void*) zmq_atomic_counter_new);
    dummy_var ^= ((int64_t) (void*) zmq_atomic_counter_set);
    dummy_var ^= ((int64_t) (void*) zmq_atomic_counter_inc);
    dummy_var ^= ((int64_t) (void*) zmq_atomic_counter_dec);
    dummy_var ^= ((int64_t) (void*) zmq_atomic_counter_value);
    dummy_var ^= ((int64_t) (void*) zmq_atomic_counter_destroy);

    dummy_var ^= ((int64_t) (void*) zmq_timers_new);
    dummy_var ^= ((int64_t) (void*) zmq_timers_destroy);
    dummy_var ^= ((int64_t) (void*) zmq_timers_add);
    dummy_var ^= ((int64_t) (void*) zmq_timers_cancel);
    dummy_var ^= ((int64_t) (void*) zmq_timers_set_interval);
    dummy_var ^= ((int64_t) (void*) zmq_timers_reset);
    dummy_var ^= ((int64_t) (void*) zmq_timers_timeout);
    dummy_var ^= ((int64_t) (void*) zmq_timers_execute);

    dummy_var ^= ((int64_t) (void*) zmq_stopwatch_start);
    dummy_var ^= ((int64_t) (void*) zmq_stopwatch_intermediate);
    dummy_var ^= ((int64_t) (void*) zmq_stopwatch_stop);
    dummy_var ^= ((int64_t) (void*) zmq_sleep);
    dummy_var ^= ((int64_t) (void*) zmq_threadstart);
    dummy_var ^= ((int64_t) (void*) zmq_threadclose);
    return dummy_var;
}