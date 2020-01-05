#ifndef RING_BUFFER_H_
#define RING_BUFFER_H_

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

typedef void (*RingBufferDtor)(void *element);

typedef struct {
    size_t element_size;
    size_t capacity;
    size_t count;
    size_t begin;
    uint8_t *data;
    RingBufferDtor dtor;
} RingBuffer;

static inline
RingBuffer create_ring_buffer(size_t element_size,
                              size_t capacity,
                              RingBufferDtor dtor)
{
    RingBuffer result = {0};
    result.element_size = element_size;
    result.capacity = capacity;
    result.dtor = dtor;
    result.data = malloc(result.element_size * result.capacity);
    return result;
}

static inline
void destroy_ring_buffer(RingBuffer buffer)
{
    free(buffer.data);
}

void ring_buffer_push(RingBuffer *buffer, void *element);
int ring_buffer_pop(RingBuffer *buffer);
void *ring_buffer_top(RingBuffer *buffer);

#endif  // RING_BUFFER_H_
