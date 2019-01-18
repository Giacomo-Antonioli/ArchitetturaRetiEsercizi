/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: message.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "message.pb-c.h"

void richiesta_client__init
        (RichiestaClient *message) {
    static RichiestaClient init_value = RICHIESTA_CLIENT__INIT;
    *message = init_value;
}

size_t richiesta_client__get_packed_size
        (const RichiestaClient *message) {
    assert(message->base.descriptor == &richiesta_client__descriptor);
    return protobuf_c_message_get_packed_size((const ProtobufCMessage *) (message));
}

size_t richiesta_client__pack
        (const RichiestaClient *message,
         uint8_t *out) {
    assert(message->base.descriptor == &richiesta_client__descriptor);
    return protobuf_c_message_pack((const ProtobufCMessage *) message, out);
}

size_t richiesta_client__pack_to_buffer
        (const RichiestaClient *message,
         ProtobufCBuffer *buffer) {
    assert(message->base.descriptor == &richiesta_client__descriptor);
    return protobuf_c_message_pack_to_buffer((const ProtobufCMessage *) message, buffer);
}

RichiestaClient *
richiesta_client__unpack
        (ProtobufCAllocator *allocator,
         size_t len,
         const uint8_t *data) {
    return (RichiestaClient *)
            protobuf_c_message_unpack(&richiesta_client__descriptor,
                                      allocator, len, data);
}

void richiesta_client__free_unpacked
        (RichiestaClient *message,
         ProtobufCAllocator *allocator) {
    assert(message->base.descriptor == &richiesta_client__descriptor);
    protobuf_c_message_free_unpacked((ProtobufCMessage *) message, allocator);
}

void risposta_server__init
        (RispostaServer *message) {
    static RispostaServer init_value = RISPOSTA_SERVER__INIT;
    *message = init_value;
}

size_t risposta_server__get_packed_size
        (const RispostaServer *message) {
    assert(message->base.descriptor == &risposta_server__descriptor);
    return protobuf_c_message_get_packed_size((const ProtobufCMessage *) (message));
}

size_t risposta_server__pack
        (const RispostaServer *message,
         uint8_t *out) {
    assert(message->base.descriptor == &risposta_server__descriptor);
    return protobuf_c_message_pack((const ProtobufCMessage *) message, out);
}

size_t risposta_server__pack_to_buffer
        (const RispostaServer *message,
         ProtobufCBuffer *buffer) {
    assert(message->base.descriptor == &risposta_server__descriptor);
    return protobuf_c_message_pack_to_buffer((const ProtobufCMessage *) message, buffer);
}

RispostaServer *
risposta_server__unpack
        (ProtobufCAllocator *allocator,
         size_t len,
         const uint8_t *data) {
    return (RispostaServer *)
            protobuf_c_message_unpack(&risposta_server__descriptor,
                                      allocator, len, data);
}

void risposta_server__free_unpacked
        (RispostaServer *message,
         ProtobufCAllocator *allocator) {
    assert(message->base.descriptor == &risposta_server__descriptor);
    protobuf_c_message_free_unpacked((ProtobufCMessage *) message, allocator);
}

static const ProtobufCFieldDescriptor richiesta_client__field_descriptors[1] =
        {
                {
                        "nomefile",
                        1,
                        PROTOBUF_C_LABEL_REQUIRED,
                        PROTOBUF_C_TYPE_STRING,
                        0,   /* quantifier_offset */
                        offsetof(RichiestaClient, nomefile),
                        NULL,
                        NULL,
                        0,             /* flags */
                        0, NULL, NULL    /* reserved1,reserved2, etc */
                },
        };
static const unsigned richiesta_client__field_indices_by_name[] = {
        0,   /* field[0] = nomefile */
};
static const ProtobufCIntRange richiesta_client__number_ranges[1 + 1] =
        {
                {1, 0},
                {0, 1}
        };
const ProtobufCMessageDescriptor richiesta_client__descriptor =
        {
                PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
                "RichiestaClient",
                "RichiestaClient",
                "RichiestaClient",
                "",
                sizeof(RichiestaClient),
                1,
                richiesta_client__field_descriptors,
                richiesta_client__field_indices_by_name,
                1, richiesta_client__number_ranges,
                (ProtobufCMessageInit) richiesta_client__init,
                NULL, NULL, NULL    /* reserved[123] */
        };
static const ProtobufCFieldDescriptor risposta_server__field_descriptors[1] =
        {
                {
                        "dim",
                        1,
                        PROTOBUF_C_LABEL_REQUIRED,
                        PROTOBUF_C_TYPE_INT32,
                        0,   /* quantifier_offset */
                        offsetof(RispostaServer, dim),
                        NULL,
                        NULL,
                        0,             /* flags */
                        0, NULL, NULL    /* reserved1,reserved2, etc */
                },
        };
static const unsigned risposta_server__field_indices_by_name[] = {
        0,   /* field[0] = dim */
};
static const ProtobufCIntRange risposta_server__number_ranges[1 + 1] =
        {
                {1, 0},
                {0, 1}
        };
const ProtobufCMessageDescriptor risposta_server__descriptor =
        {
                PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
                "RispostaServer",
                "RispostaServer",
                "RispostaServer",
                "",
                sizeof(RispostaServer),
                1,
                risposta_server__field_descriptors,
                risposta_server__field_indices_by_name,
                1, risposta_server__number_ranges,
                (ProtobufCMessageInit) risposta_server__init,
                NULL, NULL, NULL    /* reserved[123] */
        };
