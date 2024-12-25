# iOS 17.3.1 Offsets

This document contains a list of memory offsets extracted from the decompressed kernelcache using IDA Pro (version 7.7). These offsets are specific to iOS 17.3.1.

## Device and iOS Information

- **IPSW Filename**: iPhone13,2,iPhone13,3_17.3.1_21D61_Restore
- **iOS Version**: 17.3.1
- **Device**: iPhone 12

## Offsets

- **Kernel Base Address**: `0xFFFFFFF007004000`

### Function Offsets

- **kalloc_heap_init**: `0x848830C`
- **kalloc_zone_init**: `0x148A310`

### TODO
- zalloc
- zalloc_flags
- zfree
- kmem_alloc
- kmem_free
- kalloc_external
- kfree_external
- pmap_enter
- pmap_remove
- ml_static_malloc
- ml_static_free
- pmap_image4_validate
- ptrauth_strip
- ptrauth_sign
- kernel_task
- vm_map_enter
- vm_map_remove
- bzero
- memcpy
- memmov
