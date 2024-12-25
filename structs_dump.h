/*
   This file has been generated by IDA.
   It contains local type definitions from
   the type library 'kernelcache.decompressed'
*/

#define __int8 char
#define __int16 short
#define __int32 int
#define __int64 long long

struct __objc2_class;

/* 3 */
typedef unsigned int u_int32_t;

/* 2 */
typedef u_int32_t uint32_t;

/* 5 */
typedef unsigned __int8 u_int8_t;

/* 4 */
typedef u_int8_t uint8_t;

/* 1 */
struct uuid_command
{
  uint32_t cmd;
  uint32_t cmdsize;
  uint8_t uuid[16];
};

/* 6 */
struct build_version_command
{
  uint32_t cmd;
  uint32_t cmdsize;
  uint32_t platform;
  uint32_t minos;
  uint32_t sdk;
  uint32_t ntools;
};

/* 7 */
struct linkedit_data_command
{
  uint32_t cmd;
  uint32_t cmdsize;
  uint32_t dataoff;
  uint32_t datasize;
};

/* 10 */
typedef unsigned __int64 u_int64_t;

/* 9 */
typedef u_int64_t uint64_t;

/* 11 */
typedef int vm_prot_t;

/* 8 */
struct __attribute__((aligned(8))) segment_command_64
{
  uint32_t cmd;
  uint32_t cmdsize;
  char segname[16];
  uint64_t vmaddr;
  uint64_t vmsize;
  uint64_t fileoff;
  uint64_t filesize;
  vm_prot_t maxprot;
  vm_prot_t initprot;
  uint32_t nsects;
  uint32_t flags;
};

/* 12 */
struct __attribute__((aligned(8))) section_64
{
  char sectname[16];
  char segname[16];
  uint64_t addr;
  uint64_t size;
  uint32_t offset;
  uint32_t align;
  uint32_t reloff;
  uint32_t nreloc;
  uint32_t flags;
  uint32_t reserved1;
  uint32_t reserved2;
  uint32_t reserved3;
};

/* 14 */
union lc_str
{
  uint32_t offset;
};

/* 13 */
struct fileset_entry_command
{
  uint32_t cmd;
  uint32_t cmdsize;
  uint64_t vmaddr;
  uint64_t fileoff;
  union lc_str entry_id;
  uint32_t reserved;
};

/* 15 */
struct symtab_command
{
  uint32_t cmd;
  uint32_t cmdsize;
  uint32_t symoff;
  uint32_t nsyms;
  uint32_t stroff;
  uint32_t strsize;
};

/* 39 */
struct struct_0
{
  uint32_t cmd;
  uint32_t cmdsize;
  uint32_t ilocalsym;
  uint32_t nlocalsym;
  uint32_t iextdefsym;
  uint32_t nextdefsym;
  uint32_t iundefsym;
  uint32_t nundefsym;
  uint32_t tocoff;
  uint32_t ntoc;
  uint32_t modtaboff;
  uint32_t nmodtab;
  uint32_t extrefsymoff;
  uint32_t nextrefsyms;
  uint32_t indirectsymoff;
  uint32_t nindirectsyms;
  uint32_t extreloff;
  uint32_t nextrel;
  uint32_t locreloff;
  uint32_t nlocrel;
};

/* 16 */
struct __attribute__((aligned(4))) dysymtab_command
{
  struct_0 cmd;
};

/* 17 */
struct source_version_command
{
  uint32_t cmd;
  uint32_t cmdsize;
  uint64_t version;
};

/* 18 */
struct __objc2_prop
{
  char *name;
  char *attr;
};

/* 19 */
struct __objc2_prop_list
{
  uint32_t entrysize;
  uint32_t count;
};

/* 22 */
typedef void *id;

/* 23 */
typedef const char *SEL;

/* 21 */
typedef id (__cdecl *__objc_IMP)(id, SEL);

/* 20 */
struct __objc2_meth
{
  char *name;
  char *types;
  __objc_IMP imp;
};

/* 24 */
struct __objc2_meth_list
{
  uint32_t entrysize;
  uint32_t count;
};

/* 26 */
typedef int int32_t;

/* 25 */
struct __objc2_ivar
{
  int32_t *offs;
  char *name;
  char *type;
  uint32_t align;
  uint32_t size;
};

/* 27 */
struct __objc2_ivar_list
{
  uint32_t entrysize;
  uint32_t count;
};

/* 28 */
struct __objc2_prot_list
{
  uint64_t count;
};

/* 29 */
struct __objc2_prot
{
  void *isa;
  char *name;
  __objc2_prot_list *prots;
  __objc2_meth_list *inst_meths;
  __objc2_meth_list *class_meths;
  __objc2_meth_list *opt_inst_meths;
  __objc2_meth_list *opt_class_meths;
  __objc2_prop_list *inst_props;
  uint32_t cb;
  uint32_t flags;
};

/* 30 */
struct __objc2_class_ro
{
  uint32_t flags;
  uint32_t ivar_base_start;
  uint32_t ivar_base_size;
  uint32_t reserved;
  void *ivar_lyt;
  char *name;
  __objc2_meth_list *base_meths;
  __objc2_prot_list *base_prots;
  __objc2_ivar_list *ivars;
  void *weak_ivar_lyt;
  __objc2_prop_list *base_props;
};

/* 31 */
struct __objc2_category
{
  char *name;
  __objc2_class *_class;
  __objc2_meth_list *inst_meths;
  __objc2_meth_list *class_meths;
  __objc2_prot_list *prots;
  __objc2_prop_list *props;
};

/* 32 */
struct __objc2_class
{
  __objc2_class *isa;
  __objc2_class *superclass;
  void *cache;
  void *vtable;
  __objc2_class_ro *info;
};

/* 33 */
struct __objc2_class_rw
{
  uint32_t flags;
  uint32_t version;
  __objc2_class_ro *ro;
  __objc2_meth_list *methods;
  __objc2_prop_list *properties;
  __objc2_prot_list *protocols;
  __objc2_class *firstSubclass;
  __objc2_class *nextSiblingClass;
  char *demangledName;
};

/* 35 */
typedef unsigned __int16 uint16_t;

/* 34 */
struct __objc2_class_rw1
{
  uint32_t flags;
  uint16_t witness;
  uint16_t index;
  void *ro_or_rw_ext;
  __objc2_class *firstSubclass;
  __objc2_class *nextSiblingClass;
};

/* 36 */
struct __objc2_class_rw1_ext
{
  const __objc2_class_ro *ro;
  __objc2_meth_list *methods;
  __objc2_prop_list *properties;
  __objc2_prot_list *protocols;
  char *demangledName;
  uint32_t version;
};

/* 37 */
union __attribute__((aligned(8))) __n64
{
  unsigned __int64 n64_u64[1];
  unsigned __int32 n64_u32[2];
  unsigned __int16 n64_u16[4];
  unsigned __int8 n64_u8[8];
  __int64 n64_i64[1];
  __int32 n64_i32[2];
  __int16 n64_i16[4];
  __int8 n64_i8[8];
  float n64_f32[2];
  double n64_f64[1];
};

/* 38 */
union __attribute__((aligned(8))) __n128
{
  unsigned __int64 n128_u64[2];
  unsigned __int32 n128_u32[4];
  unsigned __int16 n128_u16[8];
  unsigned __int8 n128_u8[16];
  __int64 n128_i64[2];
  __int32 n128_i32[4];
  __int16 n128_i16[8];
  __int8 n128_i8[16];
  float n128_f32[4];
  double n128_f64[2];
};

