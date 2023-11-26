typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef pointer pointer __((offset(0x10)));

typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef long __off64_t;

typedef ulong size_t;

struct _IO_FILE {
    int _flags;
    char * _IO_read_ptr;
    char * _IO_read_end;
    char * _IO_read_base;
    char * _IO_write_base;
    char * _IO_write_ptr;
    char * _IO_write_end;
    char * _IO_buf_base;
    char * _IO_buf_end;
    char * _IO_save_base;
    char * _IO_backup_base;
    char * _IO_save_end;
    struct _IO_marker * _markers;
    struct _IO_FILE * _chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t * _lock;
    __off64_t _offset;
    void * __pad1;
    void * __pad2;
    void * __pad3;
    void * __pad4;
    size_t __pad5;
    int _mode;
    char _unused2[20];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

typedef struct _IO_FILE FILE;

typedef long __ssize_t;

typedef __ssize_t ssize_t;

typedef union pthread_mutex_t pthread_mutex_t, *Ppthread_mutex_t;

typedef struct __pthread_mutex_s __pthread_mutex_s, *P__pthread_mutex_s;

typedef struct __pthread_internal_list __pthread_internal_list, *P__pthread_internal_list;

typedef struct __pthread_internal_list __pthread_list_t;

struct __pthread_internal_list {
    struct __pthread_internal_list * __prev;
    struct __pthread_internal_list * __next;
};

struct __pthread_mutex_s {
    int __lock;
    uint __count;
    int __owner;
    uint __nusers;
    int __kind;
    int __spins;
    __pthread_list_t __list;
};

union pthread_mutex_t {
    struct __pthread_mutex_s __data;
    char __size[40];
    long __align;
};

typedef int pthread_once_t;

typedef ulong pthread_t;

typedef uint pthread_key_t;

typedef union pthread_attr_t pthread_attr_t, *Ppthread_attr_t;

union pthread_attr_t {
    char __size[56];
    long __align;
};

typedef struct __forced_unwind __forced_unwind, *P__forced_unwind;

struct __forced_unwind { // PlaceHolder Structure
};

typedef struct __class_type_info __class_type_info, *P__class_type_info;

struct __class_type_info { // PlaceHolder Structure
};

typedef struct __foreign_exception __foreign_exception, *P__foreign_exception;

struct __foreign_exception { // PlaceHolder Structure
};

typedef struct __si_class_type_info __si_class_type_info, *P__si_class_type_info;

struct __si_class_type_info { // PlaceHolder Structure
};

typedef struct __dyncast_result __dyncast_result, *P__dyncast_result;

struct __dyncast_result { // PlaceHolder Structure
};

typedef struct __upcast_result __upcast_result, *P__upcast_result;

struct __upcast_result { // PlaceHolder Structure
};

typedef dword __sub_kind;

typedef struct exception exception, *Pexception;

struct exception { // PlaceHolder Structure
};

typedef struct bad_alloc bad_alloc, *Pbad_alloc;

struct bad_alloc { // PlaceHolder Structure
};

typedef struct type_info type_info, *Ptype_info;

struct type_info { // PlaceHolder Structure
};

typedef struct bad_exception bad_exception, *Pbad_exception;

struct bad_exception { // PlaceHolder Structure
};

typedef struct FpService FpService, *PFpService;

struct FpService { // PlaceHolder Structure
};

typedef struct String16 String16, *PString16;

struct String16 { // PlaceHolder Structure
};

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType_AARCH64 {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191,
    SHT_AARCH64_ATTRIBUTES=1879048195
} Elf_SectionHeaderType_AARCH64;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_AARCH64 sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

typedef enum Elf_ProgramHeaderType_AARCH64 {
    PT_NULL=0,
    PT_LOAD=1,
    PT_DYNAMIC=2,
    PT_INTERP=3,
    PT_NOTE=4,
    PT_SHLIB=5,
    PT_PHDR=6,
    PT_TLS=7,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_STACK=1685382481,
    PT_GNU_RELRO=1685382482,
    PT_AARCH64_ARCHEXT=1879048192
} Elf_ProgramHeaderType_AARCH64;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType_AARCH64 p_type;
    dword p_flags;
    qword p_offset;
    qword p_vaddr;
    qword p_paddr;
    qword p_filesz;
    qword p_memsz;
    qword p_align;
};

typedef struct GnuBuildId GnuBuildId, *PGnuBuildId;

struct GnuBuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    byte hash[20];
};

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};

typedef struct Elf64_Dyn_AARCH64 Elf64_Dyn_AARCH64, *PElf64_Dyn_AARCH64;

typedef enum Elf64_DynTag_AARCH64 {
    DT_NULL=0,
    DT_NEEDED=1,
    DT_PLTRELSZ=2,
    DT_PLTGOT=3,
    DT_HASH=4,
    DT_STRTAB=5,
    DT_SYMTAB=6,
    DT_RELA=7,
    DT_RELASZ=8,
    DT_RELAENT=9,
    DT_STRSZ=10,
    DT_SYMENT=11,
    DT_INIT=12,
    DT_FINI=13,
    DT_SONAME=14,
    DT_RPATH=15,
    DT_SYMBOLIC=16,
    DT_REL=17,
    DT_RELSZ=18,
    DT_RELENT=19,
    DT_PLTREL=20,
    DT_DEBUG=21,
    DT_TEXTREL=22,
    DT_JMPREL=23,
    DT_BIND_NOW=24,
    DT_INIT_ARRAY=25,
    DT_FINI_ARRAY=26,
    DT_INIT_ARRAYSZ=27,
    DT_FINI_ARRAYSZ=28,
    DT_RUNPATH=29,
    DT_FLAGS=30,
    DT_PREINIT_ARRAY=32,
    DT_PREINIT_ARRAYSZ=33,
    DT_RELRSZ=35,
    DT_RELR=36,
    DT_RELRENT=37,
    DT_ANDROID_REL=1610612751,
    DT_ANDROID_RELSZ=1610612752,
    DT_ANDROID_RELA=1610612753,
    DT_ANDROID_RELASZ=1610612754,
    DT_ANDROID_RELR=1879040000,
    DT_ANDROID_RELRSZ=1879040001,
    DT_ANDROID_RELRENT=1879040003,
    DT_GNU_PRELINKED=1879047669,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_CHECKSUM=1879047672,
    DT_PLTPADSZ=1879047673,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_FEATURE_1=1879047676,
    DT_POSFLAG_1=1879047677,
    DT_SYMINSZ=1879047678,
    DT_SYMINENT=1879047679,
    DT_GNU_XHASH=1879047924,
    DT_GNU_HASH=1879047925,
    DT_TLSDESC_PLT=1879047926,
    DT_TLSDESC_GOT=1879047927,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_LIBLIST=1879047929,
    DT_CONFIG=1879047930,
    DT_DEPAUDIT=1879047931,
    DT_AUDIT=1879047932,
    DT_PLTPAD=1879047933,
    DT_MOVETAB=1879047934,
    DT_SYMINFO=1879047935,
    DT_VERSYM=1879048176,
    DT_RELACOUNT=1879048185,
    DT_RELCOUNT=1879048186,
    DT_FLAGS_1=1879048187,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_AUXILIARY=2147483645,
    DT_FILTER=2147483647
} Elf64_DynTag_AARCH64;

struct Elf64_Dyn_AARCH64 {
    enum Elf64_DynTag_AARCH64 d_tag;
    qword d_val;
};

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};




void FUN_001049a0(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



void __thiscall android::String16::String16(String16 *this,char *param_1)

{
  String16(this,param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::defaultServiceManager(void)

{
  defaultServiceManager();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



void __libc_init(void)

{
  __libc_init();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pthread_key_delete(pthread_key_t __key)

{
  int iVar1;
  
  iVar1 = pthread_key_delete(__key);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = sprintf(__s,__format);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pthread_setspecific(pthread_key_t __key,void *__pointer)

{
  int iVar1;
  
  iVar1 = pthread_setspecific(__key,__pointer);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pthread_once(pthread_once_t *__once_control,__init_routine *__init_routine)

{
  int iVar1;
  
  iVar1 = pthread_once(__once_control,__init_routine);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::IPCThreadState::joinThreadPool(bool param_1)

{
  joinThreadPool(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = realloc(__ptr,__size);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::RefBase::decStrong(void *param_1)

{
  decStrong(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = strncmp(__s1,__s2,__n);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = fputc(__c,__stream);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::ProcessState::startThreadPool(void)

{
  startThreadPool();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = fwrite(__ptr,__size,__n,__s);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::IPCThreadState::self(void)

{
  self();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * pthread_getspecific(pthread_key_t __key)

{
  void *pvVar1;
  
  pvVar1 = pthread_getspecific(__key);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void abort(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



void __cxa_atexit(void)

{
  __cxa_atexit();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = memcmp(__s1,__s2,__n);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = write(__fd,__buf,__n);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock(__mutex);
  return iVar1;
}



void __thiscall android::String16::~String16(String16 *this)

{
  ~String16(this);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pthread_key_create(pthread_key_t *__key,__destr_function *__destr_function)

{
  int iVar1;
  
  iVar1 = pthread_key_create(__key,__destr_function);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::ProcessState::self(void)

{
  self();
  return;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = fputs(__s,__stream);
  return iVar1;
}



void __thiscall android::FpService::FpService(FpService *this)

{
  FpService(this);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::RefBase::incStrong(void *param_1)

{
  incStrong(param_1);
  return;
}



void dl_iterate_phdr(void)

{
  dl_iterate_phdr();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void main(void)

{
  bool bVar1;
  FpService *this;
  code *pcVar2;
  long *local_20;
  String16 aSStack_18 [8];
  long *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  android::defaultServiceManager();
  this = (FpService *)operator_new(0x2f0);
  android::FpService::FpService(this);
  pcVar2 = *(code **)(*local_20 + 0x30);
  android::String16::String16(aSStack_18,"goodix.fp");
  local_10 = (long *)(this + 8);
  android::RefBase::incStrong
            ((FpService *)((long)local_10 + *(long *)(*(long *)(this + 8) + -0x18)));
  (*pcVar2)(local_20,aSStack_18,&local_10,0);
  if (local_10 != (long *)0x0) {
    android::RefBase::decStrong((FpService *)((long)local_10 + *(long *)(*local_10 + -0x18)));
  }
  android::String16::~String16(aSStack_18);
  android::ProcessState::self();
  android::ProcessState::startThreadPool();
  if (local_10 != (long *)0x0) {
    android::RefBase::decStrong((FpService *)((long)local_10 + *(long *)(*local_10 + -0x18)));
  }
  bVar1 = (bool)android::IPCThreadState::self();
  android::IPCThreadState::joinThreadPool(bVar1);
  if (local_20 != (long *)0x0) {
    android::RefBase::decStrong((void *)((long)local_20 + *(long *)(*local_20 + -0x18)));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(0);
}



void FUN_00104d44(void)

{
  DAT_0012fc40 = 0;
  DAT_0012fc48 = 0;
  DAT_0012fc50 = 0;
  DAT_0012fc58 = 0;
  DAT_0012fc60 = 0;
  return;
}



void FUN_00104d5c(void)

{
  int iVar1;
  
  DAT_0013fc84 = 0;
  iVar1 = pthread_key_create(&DAT_0013fc80,FUN_00106888);
  DAT_0013fc84 = iVar1 == 0;
  __cxa_atexit(FUN_0010686c,&DAT_0013fc80,&DAT_0012e000);
  return;
}



void entry(void)

{
  FUN_00104ddc(&stack0x00000000);
  return;
}



void FUN_00104dc4(undefined *param_1)

{
  if (param_1 != (undefined *)0x0) {
    (*(code *)param_1)();
  }
  return;
}



void FUN_00104ddc(undefined8 param_1)

{
  undefined8 uVar1;
  qword *local_18;
  qword *local_10;
  qword *local_8;
  
  local_18 = &__PREINIT_ARRAY__;
  local_10 = &__INIT_ARRAY__;
  local_8 = &__FINI_ARRAY__;
  uVar1 = __libc_init(param_1,0,main,&local_18);
  __cxa_atexit(FUN_00104dc4,uVar1,&DAT_0012e000);
  return;
}



// operator new(unsigned long)

void * operator_new(ulong param_1)

{
  void *pvVar1;
  code *pcVar2;
  undefined8 *puVar3;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  pvVar1 = malloc(param_1);
  while( true ) {
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    pcVar2 = (code *)std::get_new_handler();
    if (pcVar2 == (code *)0x0) break;
    (*pcVar2)();
    pvVar1 = malloc(param_1);
  }
  puVar3 = __cxa_allocate_exception(8);
  *puVar3 = &PTR__bad_alloc_0012d8f0;
                    // WARNING: Subroutine does not return
  __cxa_throw((long)puVar3,&std::bad_alloc::typeinfo,std::bad_alloc::~bad_alloc);
}



// std::bad_alloc::what() const

char * std::bad_alloc::what(void)

{
  return "std::bad_alloc";
}



// std::bad_alloc::~bad_alloc()

void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
  *(undefined ***)this = &PTR__bad_alloc_0012d8f0;
  exception::~exception((exception *)this);
  return;
}



// std::bad_alloc::~bad_alloc()

void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
  ~bad_alloc(this);
  operator_delete(this);
  return;
}



// operator delete(void*)

void operator_delete(void *param_1)

{
  free(param_1);
  return;
}



char * FUN_00104eec(void)

{
  return "__gnu_cxx::__concurrence_lock_error";
}



char * FUN_00104ef8(void)

{
  return "__gnu_cxx::__concurrence_unlock_error";
}



void FUN_00104f04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0012ccc0;
  std::exception::~exception((exception *)param_1);
  return;
}



void FUN_00104f14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0012ccf0;
  std::exception::~exception((exception *)param_1);
  return;
}



void FUN_00104f24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0012ccc0;
  std::exception::~exception((exception *)param_1);
  operator_delete(param_1);
  return;
}



void FUN_00104f54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0012ccf0;
  std::exception::~exception((exception *)param_1);
  operator_delete(param_1);
  return;
}



void FUN_00104f84(void)

{
  undefined8 *puVar1;
  
  puVar1 = __cxa_allocate_exception(8);
  *puVar1 = &PTR_FUN_0012ccc0;
                    // WARNING: Subroutine does not return
  __cxa_throw((long)puVar1,&PTR_PTR____si_class_type_info_0012d910,FUN_00104f04);
}



void FUN_00104fb4(void)

{
  undefined8 *puVar1;
  
  puVar1 = __cxa_allocate_exception(8);
  *puVar1 = &PTR_FUN_0012ccf0;
                    // WARNING: Subroutine does not return
  __cxa_throw((long)puVar1,&PTR_PTR____si_class_type_info_0012d928,FUN_00104f14);
}



undefined8 * __cxa_allocate_exception(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined auVar7 [16];
  
  puVar3 = (undefined8 *)malloc(param_1 + 0x80U);
  if (puVar3 != (undefined8 *)0x0) {
LAB_00105008:
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    return puVar3 + 0x10;
  }
                    // try { // try from 00105050 to 00105053 has its CatchHandler @ 001050c4
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0012fc40);
  if (iVar2 == 0) {
    if (param_1 + 0x80U < 0x401) {
      uVar6 = 0;
      uVar4 = DAT_0013fc70;
      do {
        if ((uVar4 & 1) == 0) {
          DAT_0013fc70 = 1L << (uVar6 & 0x3f) | DAT_0013fc70;
          puVar3 = &DAT_0012fc70 + uVar6 * 0x80;
                    // try { // try from 001050b8 to 001050c3 has its CatchHandler @ 001050d8
          iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_0012fc40);
          if (iVar2 == 0) goto LAB_00105008;
          auVar7 = FUN_00104fb4();
          plVar5 = auVar7._0_8_;
                    // catch() { ... } // from try @ 00105050 with catch @ 001050c4
                    // catch() { ... } // from try @ 001050d0 with catch @ 001050c4
          if (auVar7._8_8_ != -1) {
                    // WARNING: Subroutine does not return
            _Unwind_Resume(plVar5,auVar7._8_8_);
          }
          goto LAB_001050d4;
        }
        uVar1 = (int)uVar6 + 1;
        uVar6 = (ulong)uVar1;
        uVar4 = uVar4 >> 1;
      } while (uVar1 != 0x40);
    }
                    // WARNING: Subroutine does not return
    std::terminate();
  }
                    // try { // try from 001050d0 to 001050d3 has its CatchHandler @ 001050c4
  plVar5 = (long *)FUN_00104f84();
LAB_001050d4:
                    // WARNING: Subroutine does not return
  __cxa_call_unexpected(plVar5);
}



// WARNING: Removing unreachable block (ram,0x00105168)

void __cxa_free_exception(undefined8 *param_1)

{
  int iVar1;
  undefined auVar2 [16];
  
  if ((param_1 < &DAT_0012fc70) || ((undefined8 *)0x13fc6f < param_1)) {
    free(param_1 + -0x10);
    return;
  }
                    // try { // try from 00105120 to 00105123 has its CatchHandler @ 001051a0
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0012fc40);
  if (iVar1 == 0) {
    DAT_0013fc70 = DAT_0013fc70 &
                   (1L << ((ulong)(param_1 + -0x25f8e) >> 10 & 0x3f) ^ 0xffffffffffffffffU);
                    // try { // try from 00105144 to 0010518f has its CatchHandler @ 00105190
    iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_0012fc40);
    if (iVar1 == 0) {
      return;
    }
    auVar2 = FUN_00104fb4();
  }
  else {
                    // try { // try from 0010519c to 0010519f has its CatchHandler @ 001051a0
    auVar2 = FUN_00104f84();
                    // catch() { ... } // from try @ 00105120 with catch @ 001051a0
                    // catch() { ... } // from try @ 0010519c with catch @ 001051a0
  }
                    // catch() { ... } // from try @ 00105144 with catch @ 00105190
  if (auVar2._8_8_ == -1) {
                    // WARNING: Subroutine does not return
    __cxa_call_unexpected(auVar2._0_8_);
  }
                    // WARNING: Subroutine does not return
  _Unwind_Resume(auVar2._0_8_,auVar2._8_8_);
}



undefined8 * __cxa_allocate_dependent_exception(void)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined auVar6 [16];
  
  puVar3 = (undefined8 *)malloc(0x70);
  if (puVar3 == (undefined8 *)0x0) {
                    // try { // try from 00105204 to 00105207 has its CatchHandler @ 00105288
    iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0012fc40);
    if (iVar2 == 0) {
      uVar4 = 0;
      uVar5 = DAT_0012e030;
      while ((uVar5 & 1) != 0) {
        uVar1 = (int)uVar4 + 1;
        uVar4 = (ulong)uVar1;
        uVar5 = uVar5 >> 1;
        if (uVar1 == 0x40) {
                    // WARNING: Subroutine does not return
          std::terminate();
        }
      }
      DAT_0012e030 = 1L << (uVar4 & 0x3f) | DAT_0012e030;
      puVar3 = &DAT_0012e040 + uVar4 * 0xe;
                    // try { // try from 0010526c to 00105277 has its CatchHandler @ 0010527c
      iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_0012fc40);
      if (iVar2 == 0) goto LAB_001051c4;
      FUN_00104fb4();
    }
                    // try { // try from 00105278 to 0010527b has its CatchHandler @ 00105288
    auVar6 = FUN_00104f84();
                    // catch() { ... } // from try @ 0010526c with catch @ 0010527c
    if (auVar6._8_8_ == -1) {
                    // WARNING: Subroutine does not return
      __cxa_call_unexpected(auVar6._0_8_);
    }
                    // WARNING: Subroutine does not return
    _Unwind_Resume(auVar6._0_8_,auVar6._8_8_);
  }
LAB_001051c4:
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  return puVar3;
}



// WARNING: Removing unreachable block (ram,0x00105330)

void __cxa_free_dependent_exception(undefined8 *param_1)

{
  int iVar1;
  undefined auVar2 [16];
  
  if ((param_1 < &DAT_0012e040) || ((undefined8 *)0x12fc3f < param_1)) {
    free(param_1);
    return;
  }
                    // try { // try from 001052ec to 001052ef has its CatchHandler @ 00105368
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0012fc40);
  if (iVar1 == 0) {
    DAT_0012e030 = DAT_0012e030 &
                   (1L << (SUB168(ZEXT416((int)param_1 - 0x12e040U >> 4) *
                                  ZEXT816(0x2492492492492494),8) & 0x3f) ^ 0xffffffffffffffffU);
                    // try { // try from 00105310 to 00105357 has its CatchHandler @ 00105358
    iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_0012fc40);
    if (iVar1 == 0) {
      return;
    }
    auVar2 = FUN_00104fb4();
  }
  else {
                    // try { // try from 00105364 to 00105367 has its CatchHandler @ 00105368
    auVar2 = FUN_00104f84();
                    // catch() { ... } // from try @ 001052ec with catch @ 00105368
                    // catch() { ... } // from try @ 00105364 with catch @ 00105368
  }
                    // catch() { ... } // from try @ 00105310 with catch @ 00105358
  if (auVar2._8_8_ == -1) {
                    // WARNING: Subroutine does not return
    __cxa_call_unexpected(auVar2._0_8_);
  }
                    // WARNING: Subroutine does not return
  _Unwind_Resume(auVar2._0_8_,auVar2._8_8_);
}



// std::exception::~exception()

void __thiscall std::exception::~exception(exception *this)

{
  return;
}



// std::bad_exception::~bad_exception()

void __thiscall std::bad_exception::~bad_exception(bad_exception *this)

{
  *(undefined ***)this = &PTR__bad_exception_0012d9d0;
  exception::~exception((exception *)this);
  return;
}



// std::exception::what() const

char * std::exception::what(void)

{
  return "std::exception";
}



// std::bad_exception::what() const

char * std::bad_exception::what(void)

{
  return "std::bad_exception";
}



// std::exception::~exception()

void __thiscall std::exception::~exception(exception *this)

{
  ~exception(this);
  operator_delete(this);
  return;
}



// std::bad_exception::~bad_exception()

void __thiscall std::bad_exception::~bad_exception(bad_exception *this)

{
  ~bad_exception(this);
  operator_delete(this);
  return;
}



// __cxxabiv1::__forced_unwind::~__forced_unwind()

void __thiscall __cxxabiv1::__forced_unwind::~__forced_unwind(__forced_unwind *this)

{
  return;
}



// __cxxabiv1::__forced_unwind::~__forced_unwind()

void __thiscall __cxxabiv1::__forced_unwind::~__forced_unwind(__forced_unwind *this)

{
  ~__forced_unwind(this);
  operator_delete(this);
  return;
}



// __cxxabiv1::__foreign_exception::~__foreign_exception()

void __thiscall __cxxabiv1::__foreign_exception::~__foreign_exception(__foreign_exception *this)

{
  return;
}



// __cxxabiv1::__foreign_exception::~__foreign_exception()

void __thiscall __cxxabiv1::__foreign_exception::~__foreign_exception(__foreign_exception *this)

{
  ~__foreign_exception(this);
  operator_delete(this);
  return;
}



void FUN_00105438(byte *param_1,ulong *param_2)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = 0;
  uVar4 = 0;
  do {
    bVar2 = *param_1;
    uVar3 = uVar4 & 0x3f;
    uVar1 = (int)uVar4 + 7;
    uVar4 = (ulong)uVar1;
    uVar5 = uVar5 | ((ulong)bVar2 & 0x7f) << uVar3;
    param_1 = param_1 + 1;
  } while ((char)bVar2 < '\0');
  if ((uVar1 < 0x40) && ((bVar2 >> 6 & 1) != 0)) {
    uVar5 = -1L << (uVar4 & 0x3f) | uVar5;
  }
  *param_2 = uVar5;
  return;
}



ulong * FUN_00105478(byte param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  byte bVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *local_8;
  
  if (param_1 != 0x50) {
    switch(param_1 & 0xf) {
    case 0:
    case 4:
    case 0xc:
      puVar4 = param_3 + 1;
      local_8 = (ulong *)*param_3;
      break;
    case 1:
      local_8 = (ulong *)0x0;
      uVar5 = 0;
      puVar3 = param_3;
      do {
        puVar4 = (ulong *)((long)puVar3 + 1);
        bVar1 = *(byte *)puVar3;
        uVar2 = uVar5 & 0x3f;
        uVar5 = (ulong)((int)uVar5 + 7);
        local_8 = (ulong *)((ulong)local_8 | ((ulong)bVar1 & 0x7f) << uVar2);
        puVar3 = puVar4;
      } while ((char)bVar1 < '\0');
      break;
    case 2:
      puVar4 = (ulong *)((long)param_3 + 2);
      local_8 = (ulong *)(ulong)*(ushort *)param_3;
      break;
    case 3:
      puVar4 = (ulong *)((long)param_3 + 4);
      local_8 = (ulong *)(ulong)*(uint *)param_3;
      break;
    default:
                    // WARNING: Subroutine does not return
      abort();
    case 9:
      puVar4 = (ulong *)FUN_00105438((byte *)param_3,(ulong *)&local_8);
      break;
    case 10:
      puVar4 = (ulong *)((long)param_3 + 2);
      local_8 = (ulong *)(long)*(short *)param_3;
      break;
    case 0xb:
      puVar4 = (ulong *)((long)param_3 + 4);
      local_8 = (ulong *)(long)*(int *)param_3;
    }
    if (local_8 != (ulong *)0x0) {
      if ((param_1 & 0x70) != 0x10) {
        param_3 = param_2;
      }
      local_8 = (ulong *)((long)local_8 + (long)param_3);
      if ((char)param_1 < '\0') {
        local_8 = (ulong *)*local_8;
      }
    }
    *param_4 = (ulong)local_8;
    return puVar4;
  }
  puVar4 = (ulong *)((long)param_3 + 7U & 0xfffffffffffffff8);
  *param_4 = *puVar4;
  return puVar4 + 1;
}



undefined8 FUN_00105588(byte param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  if (param_1 == 0xff) {
    return 0;
  }
  bVar1 = param_1 & 0x70;
  if (bVar1 == 0x20) {
    uVar2 = _Unwind_GetTextRelBase(param_2);
    return uVar2;
  }
  if (bVar1 < 0x21) {
    if ((param_1 & 0x70) == 0) {
      return 0;
    }
    if (bVar1 == 0x10) {
      return 0;
    }
  }
  else {
    if (bVar1 == 0x40) {
      uVar2 = _Unwind_GetRegionStart(param_2);
      return uVar2;
    }
    if (bVar1 == 0x50) {
      return 0;
    }
    if (bVar1 == 0x30) {
      uVar2 = _Unwind_GetDataRelBase(param_2);
      return uVar2;
    }
  }
                    // WARNING: Subroutine does not return
  abort();
}



void FUN_00105604(long param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = _Unwind_GetRegionStart(param_1);
  }
  *param_3 = uVar4;
  bVar1 = *param_2;
  if (bVar1 == 0xff) {
    param_3[1] = uVar4;
    pbVar6 = param_2 + 2;
    cVar2 = param_2[1];
    *(char *)(param_3 + 5) = cVar2;
  }
  else {
    puVar5 = (ulong *)FUN_00105588(bVar1,param_1);
    puVar5 = FUN_00105478(bVar1,puVar5,(ulong *)(param_2 + 1),param_3 + 1);
    pbVar6 = (byte *)((long)puVar5 + 1);
    cVar2 = *(char *)puVar5;
    *(char *)(param_3 + 5) = cVar2;
  }
  if (cVar2 == -1) {
    param_3[3] = 0;
  }
  else {
    uVar9 = 0;
    uVar8 = 0;
    pbVar7 = pbVar6;
    do {
      pbVar6 = pbVar7 + 1;
      bVar1 = *pbVar7;
      uVar3 = uVar8 & 0x3f;
      uVar8 = (ulong)((int)uVar8 + 7);
      uVar9 = uVar9 | ((ulong)bVar1 & 0x7f) << uVar3;
      pbVar7 = pbVar6;
    } while ((char)bVar1 < '\0');
    param_3[3] = pbVar6 + uVar9;
  }
  uVar9 = 0;
  *(byte *)((long)param_3 + 0x29) = *pbVar6;
  uVar8 = 0;
  pbVar6 = pbVar6 + 1;
  do {
    pbVar7 = pbVar6 + 1;
    bVar1 = *pbVar6;
    uVar3 = uVar8 & 0x3f;
    uVar8 = (ulong)((int)uVar8 + 7);
    uVar9 = uVar9 | ((ulong)bVar1 & 0x7f) << uVar3;
    pbVar6 = pbVar7;
  } while ((char)bVar1 < '\0');
  param_3[4] = pbVar7 + uVar9;
  return;
}



char FUN_00105710(long param_1,long *param_2,long **param_3,ulong param_4)

{
  byte bVar1;
  ulong uVar2;
  long **pplVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  long **local_8;
  byte *pbVar9;
  
  pbVar8 = (byte *)(*(long *)(param_1 + 0x18) + ~param_4);
  do {
    uVar6 = 0;
    uVar5 = 0;
    pbVar9 = pbVar8;
    do {
      pbVar8 = pbVar9 + 1;
      bVar1 = *pbVar9;
      uVar2 = uVar5 & 0x3f;
      uVar5 = (ulong)((int)uVar5 + 7);
      uVar6 = uVar6 | ((ulong)bVar1 & 0x7f) << uVar2;
      pbVar9 = pbVar8;
    } while ((char)bVar1 < '\0');
    if (uVar6 == 0) {
      return '\0';
    }
    bVar1 = *(byte *)(param_1 + 0x28);
    if (bVar1 == 0xff) {
      lVar7 = 0;
    }
    else {
      switch(bVar1 & 7) {
      case 0:
      case 4:
        lVar7 = uVar6 * -8;
        break;
      default:
                    // WARNING: Subroutine does not return
        abort();
      case 2:
        lVar7 = uVar6 * -2;
        break;
      case 3:
        lVar7 = uVar6 * -4;
      }
    }
    FUN_00105478(bVar1,*(ulong **)(param_1 + 0x10),(ulong *)(*(long *)(param_1 + 0x18) + lVar7),
                 (ulong *)&local_8);
    pplVar3 = local_8;
    local_8 = param_3;
    cVar4 = (**(code **)(*param_2 + 0x10))(param_2);
    if (cVar4 != '\0') {
      local_8 = (long **)*local_8;
    }
    cVar4 = (*(code *)(*pplVar3)[4])(pplVar3,param_2,&local_8,1);
  } while (cVar4 == '\0');
  return cVar4;
}



undefined8 __gxx_personality_v0(int param_1,uint param_2,long param_3,ulong *param_4,long param_5)

{
  bool bVar1;
  bool bVar2;
  long **pplVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong *puVar10;
  byte *pbVar11;
  long *plVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  byte *pbVar17;
  pointer_____offset_0x10___ *local_70;
  long **local_68;
  byte *local_60;
  uint local_4c;
  int local_48;
  undefined4 uStack_44;
  ulong local_40;
  long **local_38;
  long local_30;
  long local_28;
  ulong *local_20;
  long local_18;
  ulong *local_10;
  byte local_8;
  byte local_7;
  
  local_4c = 0;
  if (param_1 != 1) {
    return 3;
  }
  bVar1 = 1 < param_3 + 0xb8b1aabcbcd4d500U;
  if ((param_2 == 6) <= bVar1) {
    local_60 = (byte *)_Unwind_GetLanguageSpecificData(param_5);
    if (local_60 == (byte *)0x0) {
      return 8;
    }
    puVar8 = (ulong *)FUN_00105604(param_5,local_60,&local_30);
    local_20 = (ulong *)FUN_00105588(local_8,param_5);
    lVar9 = _Unwind_GetIPInfo(param_5,&local_4c);
    uVar16 = lVar9 - (ulong)(local_4c == 0);
    if (puVar8 < local_10) {
      do {
        bVar4 = local_7;
        puVar10 = (ulong *)FUN_00105588(local_7,0);
        puVar8 = FUN_00105478(bVar4,puVar10,puVar8,(ulong *)&local_48);
        bVar4 = local_7;
        puVar10 = (ulong *)FUN_00105588(local_7,0);
        puVar8 = FUN_00105478(bVar4,puVar10,puVar8,&local_40);
        bVar4 = local_7;
        puVar10 = (ulong *)FUN_00105588(local_7,0);
        puVar10 = FUN_00105478(bVar4,puVar10,puVar8,(ulong *)&local_38);
        uVar14 = 0;
        uVar7 = 0;
        do {
          puVar8 = (ulong *)((long)puVar10 + 1);
          bVar4 = *(byte *)puVar10;
          uVar15 = uVar7 & 0x3f;
          uVar7 = (ulong)((int)uVar7 + 7);
          uVar14 = uVar14 | ((ulong)bVar4 & 0x7f) << uVar15;
          puVar10 = puVar8;
        } while ((char)bVar4 < '\0');
        uVar7 = CONCAT44(uStack_44,local_48) + local_30;
        if (uVar16 < uVar7) break;
        if (uVar16 < uVar7 + local_40) {
          if (local_38 == (long **)0x0) {
            return 8;
          }
          uVar16 = (long)local_38 + local_28;
          if (uVar14 == 0) {
            if (uVar16 == 0) {
              return 8;
            }
          }
          else {
            if (uVar16 == 0) {
              return 8;
            }
            pbVar17 = (byte *)((long)local_10 + (uVar14 - 1));
            if (pbVar17 != (byte *)0x0) {
              if ((param_2 >> 3 & 1) == 0) {
                if (bVar1) {
                  local_68 = (long **)0x0;
                  local_70 = &__cxxabiv1::__foreign_exception::typeinfo;
                }
                else {
                  local_68 = (long **)(param_4 + 4);
                  if ((*param_4 & 1) != 0) {
                    local_68 = (long **)param_4[-10];
                  }
                  local_70 = (pointer_____offset_0x10___ *)local_68[-0xe];
                }
              }
              else {
                local_68 = (long **)0x0;
                local_70 = &__cxxabiv1::__forced_unwind::typeinfo;
              }
              bVar2 = false;
              goto LAB_00105ba8;
            }
          }
          iVar6 = 2;
          goto LAB_00105ab4;
        }
      } while (puVar8 < local_10);
    }
    uVar16 = 0;
    iVar6 = 1;
LAB_00105ab4:
    local_68 = (long **)0x0;
    local_48 = 0;
    pbVar17 = (byte *)0x0;
    goto LAB_00105ac0;
  }
  local_60 = (byte *)param_4[-3];
  uVar16 = param_4[-2];
  local_48 = *(int *)((long)param_4 + -0x24);
  if (uVar16 == 0) {
    if ((param_2 >> 3 & 1) != 0) {
                    // WARNING: Subroutine does not return
      std::terminate();
    }
LAB_001058e8:
    FUN_001066c4((long *)param_4);
  }
  if ((param_2 >> 3 & 1) == 0) {
LAB_00105954:
    if (local_48 < 0) {
      FUN_00105604(param_5,local_60,&local_30);
      local_20 = (ulong *)FUN_00105588(local_8,param_5);
      uVar7 = FUN_00105588(local_8,param_5);
      param_4[-2] = uVar7;
    }
    goto LAB_001058f8;
  }
  goto LAB_001058f4;
LAB_00105ba8:
  pbVar11 = (byte *)FUN_00105438(pbVar17,(ulong *)&local_48);
  FUN_00105438(pbVar11,&local_40);
  uVar7 = CONCAT44(uStack_44,local_48);
  if (uVar7 == 0) {
    bVar2 = true;
  }
  else if ((long)uVar7 < 1) {
    if (bVar1 < (local_70 != (pointer_____offset_0x10___ *)0x0 && (param_2 & 8) == 0)) {
      bVar4 = FUN_00105710((long)&local_30,(long *)local_70,local_68,uVar7);
      bVar4 = bVar4 ^ 1;
    }
    else {
      uVar15 = 0;
      uVar14 = 0;
      pbVar13 = (byte *)(local_18 + ~uVar7);
      do {
        bVar4 = *pbVar13;
        uVar7 = uVar14 & 0x3f;
        uVar14 = (ulong)((int)uVar14 + 7);
        uVar15 = uVar15 | ((ulong)bVar4 & 0x7f) << uVar7;
        pbVar13 = pbVar13 + 1;
      } while ((char)bVar4 < '\0');
      bVar4 = uVar15 == 0;
    }
    if (bVar4 != 0) {
LAB_00105d0c:
      iVar6 = 3;
      goto LAB_00105ac0;
    }
  }
  else {
    if (local_8 == 0xff) {
      lVar9 = 0;
    }
    else {
      switch(local_8 & 7) {
      case 0:
      case 4:
        lVar9 = uVar7 * -8;
        break;
      default:
                    // WARNING: Subroutine does not return
        abort();
      case 2:
        lVar9 = uVar7 * -2;
        break;
      case 3:
        lVar9 = uVar7 * -4;
      }
    }
    FUN_00105478(local_8,local_20,(ulong *)(local_18 + lVar9),(ulong *)&local_38);
    pplVar3 = local_38;
    if (local_38 == (long **)0x0) goto LAB_00105d0c;
    if (local_70 != (pointer_____offset_0x10___ *)0x0) {
      local_38 = local_68;
      cVar5 = (**(code **)(*local_70 + 0x10))(local_70);
      if (cVar5 != '\0') {
        local_38 = (long **)*local_38;
      }
      cVar5 = (*(code *)(*pplVar3)[4])(pplVar3,local_70,&local_38,1);
      if (cVar5 != '\0') {
        local_68 = local_38;
        goto LAB_00105d0c;
      }
    }
  }
  if (local_40 == 0) goto LAB_00105d60;
  pbVar17 = pbVar11 + local_40;
  goto LAB_00105ba8;
LAB_00105d60:
  if (!bVar2) {
    return 8;
  }
  local_48 = 0;
  iVar6 = 2;
LAB_00105ac0:
  if ((param_2 & 1) != 0) {
    if (iVar6 == 2) {
      return 8;
    }
    if (!bVar1) {
      param_4[-3] = (ulong)local_60;
      *(int *)((long)param_4 + -0x24) = local_48;
      param_4[-4] = (ulong)pbVar17;
      param_4[-1] = (ulong)local_68;
      param_4[-2] = uVar16;
      return 6;
    }
    return 6;
  }
  if (((param_2 >> 3 & 1) == 0) && (!bVar1)) {
    if (iVar6 == 1) goto LAB_001058e8;
    goto LAB_00105954;
  }
  if (iVar6 == 1) {
                    // WARNING: Subroutine does not return
    std::terminate();
  }
LAB_001058f4:
  if (local_48 < 0) {
                    // try { // try from 00105d88 to 00105d8b has its CatchHandler @ 00105b14
    plVar12 = (long *)std::unexpected();
    __cxa_begin_catch(plVar12);
                    // WARNING: Subroutine does not return
    __cxxabiv1::__unexpected((_func_void *)plVar12[-8]);
  }
LAB_001058f8:
  _Unwind_SetGR(param_5,0,param_4);
  _Unwind_SetGR(param_5,1,(long)local_48);
  _Unwind_SetIP(param_5,uVar16);
  return 7;
}



void __cxa_call_unexpected(long *param_1)

{
  __cxa_begin_catch(param_1);
                    // WARNING: Subroutine does not return
                    // try { // try from 00105dc0 to 00105dc3 has its CatchHandler @ 00105dc4
  __cxxabiv1::__unexpected((_func_void *)param_1[-8]);
}



// __cxxabiv1::__terminate(void (*)())

void __cxxabiv1::__terminate(_func_void *param_1)

{
                    // try { // try from 00105e84 to 00105e8b has its CatchHandler @ 00105e8c
  (*param_1)();
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// std::set_terminate(void (*)())

undefined * std::set_terminate(_func_void *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  do {
    puVar3 = __cxxabiv1::__terminate_handler;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(&__cxxabiv1::__terminate_handler,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      __cxxabiv1::__terminate_handler = param_1;
    }
  } while (cVar1 != '\0');
  return puVar3;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// std::get_terminate()

undefined * std::get_terminate(void)

{
  return __cxxabiv1::__terminate_handler;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// std::terminate()

void std::terminate(void)

{
  _func_void *p_Var1;
  
  p_Var1 = (_func_void *)get_terminate();
                    // WARNING: Subroutine does not return
  __cxxabiv1::__terminate(p_Var1);
}



// __cxxabiv1::__unexpected(void (*)())

void __cxxabiv1::__unexpected(_func_void *param_1)

{
  (*param_1)();
                    // WARNING: Subroutine does not return
  std::terminate();
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// std::set_unexpected(void (*)())

undefined * std::set_unexpected(_func_void *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  do {
    puVar3 = __cxxabiv1::__unexpected_handler;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(&__cxxabiv1::__unexpected_handler,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      __cxxabiv1::__unexpected_handler = param_1;
    }
  } while (cVar1 != '\0');
  return puVar3;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// std::get_unexpected()

undefined * std::get_unexpected(void)

{
  return __cxxabiv1::__unexpected_handler;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// std::unexpected()

void std::unexpected(void)

{
  _func_void *p_Var1;
  
  p_Var1 = (_func_void *)get_unexpected();
                    // WARNING: Subroutine does not return
  __cxxabiv1::__unexpected(p_Var1);
}



void FUN_00105f40(uint param_1,long param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  
  if (1 < param_1) {
                    // WARNING: Subroutine does not return
    __cxxabiv1::__terminate(*(_func_void **)(param_2 + -0x38));
  }
  piVar4 = (int *)(param_2 + -0x60);
  do {
    iVar1 = *piVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar3) {
      *piVar4 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 == 0) {
    if (*(code **)(param_2 + -0x48) != (code *)0x0) {
      (**(code **)(param_2 + -0x48))((undefined8 *)(param_2 + 0x20));
    }
    __cxa_free_exception((undefined8 *)(param_2 + 0x20));
    return;
  }
  return;
}



void __cxa_throw(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = __cxa_get_globals();
  *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
  *(undefined8 *)(param_1 + -0x68) = param_3;
  *(undefined8 *)(param_1 + -0x70) = param_2;
  *(undefined4 *)(param_1 + -0x80) = 1;
  uVar2 = std::get_unexpected();
  *(undefined8 *)(param_1 + -0x60) = uVar2;
  uVar2 = std::get_terminate();
  *(undefined8 *)(param_1 + -0x58) = uVar2;
  *(undefined8 *)(param_1 + -0x20) = 0x474e5543432b2b00;
  *(code **)(param_1 + -0x18) = FUN_00105f40;
  _Unwind_RaiseException((long *)(param_1 + -0x20),FUN_00105f40);
  __cxa_begin_catch((long *)(param_1 + -0x20));
                    // WARNING: Subroutine does not return
  std::terminate();
}



void __cxa_rethrow(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = __cxa_get_globals();
  lVar2 = *plVar1;
  *(int *)(plVar1 + 1) = *(int *)(plVar1 + 1) + 1;
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x50) + 0xb8b1aabcbcd4d500U < 2) {
      *(int *)(lVar2 + 0x28) = -*(int *)(lVar2 + 0x28);
    }
    else {
      *plVar1 = 0;
    }
    _Unwind_Resume_or_Rethrow((long *)(lVar2 + 0x50),lVar2);
    __cxa_begin_catch((long *)(lVar2 + 0x50));
  }
                    // WARNING: Subroutine does not return
  std::terminate();
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// std::set_new_handler(void (*)())

_func_void * std::set_new_handler(_func_void *param_1)

{
  char cVar1;
  bool bVar2;
  _func_void *p_Var3;
  
  do {
    p_Var3 = DAT_0013fc78;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x13fc78,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_0013fc78 = param_1;
    }
  } while (cVar1 != '\0');
  return p_Var3;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// std::get_new_handler()

undefined8 std::get_new_handler(void)

{
  return DAT_0013fc78;
}



void __cxa_pure_virtual(void)

{
  write(2,"pure virtual method called\n",0x1b);
                    // WARNING: Subroutine does not return
  std::terminate();
}



void __cxa_deleted_virtual(void)

{
  write(2,"deleted virtual method called\n",0x1e);
                    // WARNING: Subroutine does not return
  std::terminate();
}



// __cxxabiv1::__si_class_type_info::~__si_class_type_info()

void __thiscall __cxxabiv1::__si_class_type_info::~__si_class_type_info(__si_class_type_info *this)

{
  *(undefined ***)this = &PTR____si_class_type_info_0012da80;
  __class_type_info::~__class_type_info((__class_type_info *)this);
  return;
}



// __cxxabiv1::__si_class_type_info::~__si_class_type_info()

void __thiscall __cxxabiv1::__si_class_type_info::~__si_class_type_info(__si_class_type_info *this)

{
  ~__si_class_type_info(this);
  operator_delete(this);
  return;
}



// __cxxabiv1::__si_class_type_info::__do_dyncast(long, __cxxabiv1::__class_type_info::__sub_kind,
// __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info const*, void
// const*, __cxxabiv1::__class_type_info::__dyncast_result&) const

undefined __thiscall
__cxxabiv1::__si_class_type_info::__do_dyncast
          (__si_class_type_info *this,long param_1,__sub_kind param_2,__class_type_info *param_3,
          void *param_4,__class_type_info *param_5,void *param_6,__dyncast_result *param_7)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  undefined4 uVar4;
  char *__s1;
  
  __s1 = *(char **)(this + 8);
  if (__s1 == *(char **)(param_3 + 8)) {
LAB_001061e8:
    *(void **)param_7 = param_4;
    *(__sub_kind *)(param_7 + 8) = param_2;
    if (-1 < param_1) {
      uVar4 = 6;
      if (param_6 != (void *)((long)param_4 + param_1)) {
        uVar4 = 1;
      }
      *(undefined4 *)(param_7 + 0x10) = uVar4;
      return 0;
    }
    uVar2 = 0;
    if (param_1 == -2) {
      *(undefined4 *)(param_7 + 0x10) = 1;
    }
  }
  else {
    cVar1 = *__s1;
    if (cVar1 != '*') {
      iVar3 = strcmp(__s1,*(char **)(param_3 + 8));
      if (iVar3 == 0) goto LAB_001061e8;
    }
    if (param_4 == param_6) {
      if (__s1 == *(char **)(param_5 + 8)) {
LAB_00106284:
        *(__sub_kind *)(param_7 + 0xc) = param_2;
        return 0;
      }
      if (cVar1 != '*') {
        iVar3 = strcmp(__s1,*(char **)(param_5 + 8));
        if (iVar3 == 0) goto LAB_00106284;
      }
    }
    uVar2 = (**(code **)(**(long **)(this + 0x10) + 0x38))
                      (*(long **)(this + 0x10),param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return uVar2;
}



// __cxxabiv1::__si_class_type_info::__do_find_public_src(long, void const*,
// __cxxabiv1::__class_type_info const*, void const*) const

undefined4 __thiscall
__cxxabiv1::__si_class_type_info::__do_find_public_src
          (__si_class_type_info *this,long param_1,void *param_2,__class_type_info *param_3,
          void *param_4)

{
  undefined4 uVar1;
  int iVar2;
  char *__s1;
  
  if (param_4 == param_2) {
    __s1 = *(char **)(this + 8);
    if (__s1 == *(char **)(param_3 + 8)) {
      return 6;
    }
    if ((*__s1 != '*') && (iVar2 = strcmp(__s1,*(char **)(param_3 + 8)), iVar2 == 0)) {
      return 6;
    }
  }
  uVar1 = (**(code **)(**(long **)(this + 0x10) + 0x40))
                    (*(long **)(this + 0x10),param_1,param_2,param_3,param_4);
  return uVar1;
}



// __cxxabiv1::__si_class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void const*,
// __cxxabiv1::__class_type_info::__upcast_result&) const

char __thiscall
__cxxabiv1::__si_class_type_info::__do_upcast
          (__si_class_type_info *this,__class_type_info *param_1,void *param_2,
          __upcast_result *param_3)

{
  char cVar1;
  
  cVar1 = __class_type_info::__do_upcast((__class_type_info *)this,param_1,param_2,param_3);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(**(long **)(this + 0x10) + 0x30))
                      (*(long **)(this + 0x10),param_1,param_2,param_3);
  }
  return cVar1;
}



void FUN_00106390(void)

{
  return;
}



undefined8 FUN_00106394(void)

{
  return 0;
}



undefined8 FUN_0010639c(void)

{
  return 0;
}



undefined8 FUN_001063a4(void)

{
  return 0;
}



void operator_delete(void *param_1)

{
  free(param_1);
  return;
}



bool FUN_001063b0(long param_1,long param_2)

{
  int iVar1;
  char *__s1;
  
  __s1 = *(char **)(param_1 + 8);
  if (__s1 == *(char **)(param_2 + 8)) {
    return true;
  }
  if (*__s1 != '*') {
    iVar1 = strcmp(__s1,*(char **)(param_2 + 8));
    return iVar1 == 0;
  }
  return false;
}



// __cxxabiv1::__class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void**) const

bool __thiscall
__cxxabiv1::__class_type_info::__do_upcast
          (__class_type_info *this,__class_type_info *param_1,void **param_2)

{
  bool bVar1;
  void *local_18;
  uint local_10;
  undefined4 local_c;
  undefined8 local_8;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  local_c = 0x10;
  local_8 = 0;
  (**(code **)(*(long *)this + 0x30))(this,param_1,*param_2,&local_18);
  bVar1 = (local_10 & 6) == 6;
  if (bVar1) {
    *param_2 = local_18;
  }
  return bVar1;
}



// __cxxabiv1::__class_type_info::__do_find_public_src(long, void const*,
// __cxxabiv1::__class_type_info const*, void const*) const

undefined4 __thiscall
__cxxabiv1::__class_type_info::__do_find_public_src
          (__class_type_info *this,long param_1,void *param_2,__class_type_info *param_3,
          void *param_4)

{
  undefined4 uVar1;
  
  uVar1 = 6;
  if (param_4 != param_2) {
    uVar1 = 1;
  }
  return uVar1;
}



// __cxxabiv1::__class_type_info::~__class_type_info()

void __thiscall __cxxabiv1::__class_type_info::~__class_type_info(__class_type_info *this)

{
  *(undefined ***)this = &PTR____class_type_info_0012db10;
  FUN_00106390();
  return;
}



// __cxxabiv1::__class_type_info::~__class_type_info()

void __thiscall __cxxabiv1::__class_type_info::~__class_type_info(__class_type_info *this)

{
  ~__class_type_info(this);
  operator_delete(this);
  return;
}



// __cxxabiv1::__class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void const*,
// __cxxabiv1::__class_type_info::__upcast_result&) const

undefined8 __thiscall
__cxxabiv1::__class_type_info::__do_upcast
          (__class_type_info *this,__class_type_info *param_1,void *param_2,__upcast_result *param_3
          )

{
  int iVar1;
  char *__s1;
  
  __s1 = *(char **)(this + 8);
  if (__s1 != *(char **)(param_1 + 8)) {
    if (*__s1 != '*') {
      iVar1 = strcmp(__s1,*(char **)(param_1 + 8));
      if (iVar1 == 0) goto LAB_001064f4;
    }
    return 0;
  }
LAB_001064f4:
  *(void **)param_3 = param_2;
  *(undefined8 *)(param_3 + 0x10) = 0x10;
  *(undefined4 *)(param_3 + 8) = 6;
  return 1;
}



// __cxxabiv1::__class_type_info::__do_catch(std::type_info const*, void**, unsigned int) const

undefined __thiscall
__cxxabiv1::__class_type_info::__do_catch
          (__class_type_info *this,type_info *param_1,void **param_2,uint param_3)

{
  undefined uVar1;
  int iVar2;
  char *__s1;
  
  __s1 = *(char **)(this + 8);
  if (__s1 == *(char **)(param_1 + 8)) {
    return 1;
  }
  if ((*__s1 != '*') && (iVar2 = strcmp(__s1,*(char **)(param_1 + 8)), iVar2 == 0)) {
    return 1;
  }
  if (3 < param_3) {
    return 0;
  }
  uVar1 = (**(code **)(*(long *)param_1 + 0x28))(param_1,this,param_2);
  return uVar1;
}



// __cxxabiv1::__class_type_info::__do_dyncast(long, __cxxabiv1::__class_type_info::__sub_kind,
// __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info const*, void
// const*, __cxxabiv1::__class_type_info::__dyncast_result&) const

undefined8 __thiscall
__cxxabiv1::__class_type_info::__do_dyncast
          (__class_type_info *this,long param_1,__sub_kind param_2,__class_type_info *param_3,
          void *param_4,__class_type_info *param_5,void *param_6,__dyncast_result *param_7)

{
  int iVar1;
  char *__s2;
  char *__s1;
  
  __s1 = *(char **)(this + 8);
  if (param_4 == param_6) {
    if (__s1 == *(char **)(param_5 + 8)) {
LAB_001066a0:
      *(__sub_kind *)(param_7 + 0xc) = param_2;
      return 0;
    }
    if (*__s1 == '*') {
      if (__s1 != *(char **)(param_3 + 8)) {
        return 0;
      }
      goto LAB_00106680;
    }
    iVar1 = strcmp(__s1,*(char **)(param_5 + 8));
    if (iVar1 == 0) goto LAB_001066a0;
    __s2 = *(char **)(param_3 + 8);
    if (__s1 == __s2) goto LAB_00106680;
  }
  else {
    __s2 = *(char **)(param_3 + 8);
    if (__s1 == __s2) goto LAB_00106680;
    if (*__s1 == '*') {
      return 0;
    }
  }
  iVar1 = strcmp(__s1,__s2);
  if (iVar1 != 0) {
    return 0;
  }
LAB_00106680:
  *(void **)param_7 = param_4;
  *(__sub_kind *)(param_7 + 8) = param_2;
  *(undefined4 *)(param_7 + 0x10) = 1;
  return 0;
}



void FUN_001066c4(long *param_1)

{
  if ((param_1 != (long *)0x0) && (__cxa_begin_catch(param_1), *param_1 + 0xb8b1aabcbcd4d500U < 2))
  {
                    // WARNING: Subroutine does not return
    __cxxabiv1::__terminate((_func_void *)param_1[-7]);
  }
                    // WARNING: Subroutine does not return
  std::terminate();
}



undefined8 __cxa_get_exception_ptr(long param_1)

{
  return *(undefined8 *)(param_1 + -8);
}



long __cxa_begin_catch(long *param_1)

{
  int iVar1;
  int iVar2;
  long **pplVar3;
  long *plVar4;
  long *plVar5;
  
  pplVar3 = (long **)__cxa_get_globals();
  plVar5 = *pplVar3;
  plVar4 = param_1 + -10;
  if (*param_1 + 0xb8b1aabcbcd4d500U < 2) {
    iVar2 = *(int *)(param_1 + -5);
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    iVar1 = *(int *)(pplVar3 + 1);
    *(int *)(param_1 + -5) = iVar2 + 1;
    *(int *)(pplVar3 + 1) = iVar1 + -1;
    if (plVar5 != plVar4) {
      param_1[-6] = (long)plVar5;
      *pplVar3 = plVar4;
    }
    return param_1[-1];
  }
  if (plVar5 == (long *)0x0) {
    *pplVar3 = plVar4;
    return 0;
  }
                    // WARNING: Subroutine does not return
  std::terminate();
}



void __cxa_end_catch(void)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  
  plVar1 = (long *)__cxa_get_globals_fast();
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    if (1 < *(long *)(lVar2 + 0x50) + 0xb8b1aabcbcd4d500U) {
      *plVar1 = 0;
      _Unwind_DeleteException(lVar2 + 0x50);
      return;
    }
    iVar3 = *(int *)(lVar2 + 0x28);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 1;
      if (iVar3 == 0) {
        *plVar1 = *(long *)(lVar2 + 0x20);
        *(undefined4 *)(lVar2 + 0x28) = 0;
        return;
      }
    }
    else {
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        *plVar1 = *(long *)(lVar2 + 0x20);
        _Unwind_DeleteException(lVar2 + 0x50);
        return;
      }
      if (iVar3 == -1) {
                    // WARNING: Subroutine does not return
        std::terminate();
      }
    }
    *(int *)(lVar2 + 0x28) = iVar3;
  }
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// std::uncaught_exception()

bool std::uncaught_exception(void)

{
  undefined8 *puVar1;
  
  puVar1 = __cxa_get_globals();
  return *(int *)(puVar1 + 1) != 0;
}



pthread_key_t * FUN_0010686c(pthread_key_t *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  uint uVar1;
  pthread_key_t *ppVar2;
  
  if (param_1 == (pthread_key_t *)0x0) {
                    // WARNING: Treating indirect jump as call
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1000,0x106888);
    ppVar2 = (pthread_key_t *)(*UNRECOVERED_JUMPTABLE)();
    return ppVar2;
  }
  if (*(char *)(param_1 + 1) == '\0') {
    return param_1;
  }
  uVar1 = pthread_key_delete(*param_1);
  return (pthread_key_t *)(ulong)uVar1;
}



void FUN_00106888(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  lVar1 = *param_1;
  while (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x20);
    _Unwind_DeleteException(lVar1 + 0x50);
    lVar1 = lVar2;
  }
  free(param_1);
  return;
}



undefined * __cxa_get_globals_fast(void)

{
  undefined *puVar1;
  
  if (DAT_0013fc84 == '\0') {
    return &DAT_0013fc88;
  }
                    // try { // try from 00106900 to 00106903 has its CatchHandler @ 0010690c
  puVar1 = (undefined *)pthread_getspecific(DAT_0013fc80);
  return puVar1;
}



undefined8 * __cxa_get_globals(void)

{
  int iVar1;
  undefined8 *__pointer;
  
  if (DAT_0013fc84 == '\0') {
    __pointer = (undefined8 *)&DAT_0013fc88;
  }
  else {
                    // try { // try from 00106954 to 0010697b has its CatchHandler @ 00106990
    __pointer = (undefined8 *)pthread_getspecific(DAT_0013fc80);
    if (__pointer == (undefined8 *)0x0) {
      __pointer = (undefined8 *)malloc(0x10);
      if ((__pointer == (undefined8 *)0x0) ||
         (iVar1 = pthread_setspecific(DAT_0013fc80,__pointer), iVar1 != 0)) {
                    // WARNING: Subroutine does not return
        std::terminate();
      }
      *__pointer = 0;
      *(undefined4 *)(__pointer + 1) = 0;
    }
  }
  return __pointer;
}



// __gnu_cxx::__verbose_terminate_handler()

void __gnu_cxx::__verbose_terminate_handler(void)

{
  long lVar1;
  char *pcVar2;
  char *__s;
  long *plVar3;
  size_t __n;
  undefined auVar4 [16];
  int local_4;
  
  if (DAT_0013fc98 == '\0') {
    DAT_0013fc98 = '\x01';
    lVar1 = __cxa_current_exception_type();
    if (lVar1 != 0) {
      pcVar2 = *(char **)(lVar1 + 8);
      local_4 = -1;
      if (*pcVar2 == '*') {
        pcVar2 = pcVar2 + 1;
      }
      __s = __cxa_demangle(pcVar2,(char *)0x0,(ulong *)0x0,&local_4);
      fwrite("terminate called after throwing an instance of \'",1,0x30,(FILE *)0x152178);
      if (local_4 == 0) goto LAB_00106a5c;
      fputs(pcVar2,(FILE *)0x152178);
      while (fwrite(&DAT_00118088,1,2,(FILE *)0x152178), local_4 != 0) {
                    // try { // try from 00106a58 to 00106a5b has its CatchHandler @ 00106a9c
        __cxa_rethrow();
LAB_00106a5c:
        fputs(__s,(FILE *)0x152178);
      }
      free(__s);
                    // try { // try from 00106a98 to 00106a9b has its CatchHandler @ 00106a9c
      auVar4 = __cxa_rethrow();
                    // catch(type#1 @ 0012d940) { ... } // from try @ 00106a58 with catch @ 00106a9c
                    // catch(type#1 @ 0012d940) { ... } // from try @ 00106a98 with catch @ 00106a9c
      if (auVar4._8_8_ == 1) {
        plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
        pcVar2 = (char *)(**(code **)(*plVar3 + 0x10))();
                    // try { // try from 00106ad4 to 00106af7 has its CatchHandler @ 00106b14
        fwrite("  what():  ",1,0xb,(FILE *)0x152178);
        fputs(pcVar2,(FILE *)0x152178);
        fputc(10,(FILE *)0x152178);
        __cxa_end_catch();
                    // WARNING: Subroutine does not return
        abort();
      }
      __cxa_begin_catch(auVar4._0_8_);
      __cxa_end_catch();
                    // WARNING: Subroutine does not return
      abort();
    }
    pcVar2 = "terminate called without an active exception\n";
    __n = 0x2d;
  }
  else {
    __n = 0x1d;
    pcVar2 = "terminate called recursively\n";
  }
  fwrite(pcVar2,1,__n,(FILE *)0x152178);
                    // WARNING: Subroutine does not return
  abort();
}



long FUN_00106b30(long param_1,undefined4 param_2,long param_3,long param_4)

{
  long lVar1;
  int iVar2;
  
  switch(param_2) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 0xb:
  case 0x21:
  case 0x2b:
  case 0x2d:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3c:
  case 0x3d:
  case 0x3f:
  case 0x4b:
  case 0x4c:
    if (param_3 == 0) {
      return 0;
    }
switchD_00106b5c_caseD_2a:
    if ((param_4 != 0) && (iVar2 = *(int *)(param_1 + 0x28), iVar2 < *(int *)(param_1 + 0x2c))) {
LAB_00106b78:
      *(int *)(param_1 + 0x28) = iVar2 + 1;
      lVar1 = *(long *)(param_1 + 0x20) + (long)iVar2 * 0x18;
      if (lVar1 != 0) {
        *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 0x18) = param_2;
        *(long *)(lVar1 + 8) = param_3;
        *(long *)(lVar1 + 0x10) = param_4;
        return lVar1;
      }
    }
LAB_00106b40:
    return 0;
  default:
    goto LAB_00106b40;
  case 9:
  case 10:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x28:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x3b:
  case 0x3e:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x48:
  case 0x49:
  case 0x4a:
    if (param_3 == 0) {
      return 0;
    }
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x29:
  case 0x2e:
  case 0x2f:
    iVar2 = *(int *)(param_1 + 0x28);
    if (*(int *)(param_1 + 0x2c) <= iVar2) {
      return 0;
    }
    goto LAB_00106b78;
  case 0x2a:
  case 0x30:
    goto switchD_00106b5c_caseD_2a;
  }
}



long FUN_00106bd0(long param_1,long param_2,int param_3)

{
  long lVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 < *(int *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x28) = iVar2 + 1;
    lVar1 = *(long *)(param_1 + 0x20) + (long)iVar2 * 0x18;
    if ((lVar1 != 0 && param_2 != 0) && (param_3 != 0)) {
      *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 0x18) = 0;
      *(long *)(lVar1 + 8) = param_2;
      *(int *)(lVar1 + 0x10) = param_3;
      return lVar1;
    }
  }
  return 0;
}



int ** FUN_00106c30(long param_1,int **param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  int **ppiVar6;
  
  pcVar4 = *(char **)(param_1 + 0x18);
  cVar2 = *pcVar4;
  ppiVar6 = param_2;
  do {
    if ((cVar2 == 'V') || (cVar2 == 'r')) {
      *(char **)(param_1 + 0x18) = pcVar4 + 1;
      if (cVar2 != 'r') {
        if (cVar2 != 'V') goto LAB_00106c94;
        uVar5 = 0x1d;
        if (param_3 == 0) {
          uVar5 = 0x1a;
        }
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 9;
        goto LAB_00106ca8;
      }
      uVar5 = 0x1c;
      if (param_3 == 0) {
        uVar5 = 0x19;
      }
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 9;
      piVar3 = (int *)FUN_00106b30(param_1,uVar5,0,0);
      *ppiVar6 = piVar3;
    }
    else {
      if (cVar2 != 'K') {
        if (((param_3 == 0) && (cVar2 == 'F')) && (param_2 != ppiVar6)) {
          do {
            piVar3 = *param_2;
            iVar1 = *piVar3;
            if (iVar1 == 0x1a) {
              *piVar3 = 0x1d;
            }
            else if (iVar1 == 0x1b) {
              *piVar3 = 0x1e;
            }
            else if (iVar1 == 0x19) {
              *piVar3 = 0x1c;
            }
            param_2 = (int **)(piVar3 + 2);
          } while (param_2 != ppiVar6);
        }
        return ppiVar6;
      }
      *(char **)(param_1 + 0x18) = pcVar4 + 1;
LAB_00106c94:
      uVar5 = 0x1e;
      if (param_3 == 0) {
        uVar5 = 0x1b;
      }
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 6;
LAB_00106ca8:
      piVar3 = (int *)FUN_00106b30(param_1,uVar5,0,0);
      *ppiVar6 = piVar3;
    }
    if (piVar3 == (int *)0x0) {
      return (int **)0x0;
    }
    pcVar4 = *(char **)(param_1 + 0x18);
    ppiVar6 = (int **)(piVar3 + 2);
    cVar2 = *pcVar4;
  } while( true );
}



long FUN_00106de0(long param_1,int param_2)

{
  long lVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  char *pcVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  undefined8 uVar16;
  long lVar17;
  
  pcVar7 = *(char **)(param_1 + 0x18);
  if (*pcVar7 != 'S') {
    return 0;
  }
  *(char **)(param_1 + 0x18) = pcVar7 + 1;
  if (pcVar7[1] != '\0') {
    *(char **)(param_1 + 0x18) = pcVar7 + 2;
    bVar3 = pcVar7[1];
    uVar6 = (uint)bVar3;
    uVar14 = bVar3 - 0x30;
    if (((uVar14 & 0xff) < 10) || (bVar3 == 0x5f)) {
      if (bVar3 == 0x5f) {
        uVar4 = 0;
        goto LAB_00106f1c;
      }
    }
    else if (0x19 < (byte)(bVar3 + 0xbf)) goto LAB_00106eac;
    uVar9 = 0;
    do {
      uVar4 = (uVar9 * 0x24 + uVar6) - 0x37;
      if ((uVar14 & 0xff) < 10) {
        uVar4 = (uVar9 * 0x24 + uVar6) - 0x30;
      }
      else if (0x19 < (uVar6 - 0x41 & 0xff)) {
        return 0;
      }
      uVar6 = 0;
      if (uVar4 < uVar9) {
        return 0;
      }
      pbVar12 = *(byte **)(param_1 + 0x18);
      if (*pbVar12 != 0) {
        *(byte **)(param_1 + 0x18) = pbVar12 + 1;
        uVar6 = (uint)*pbVar12;
        if (uVar6 == 0x5f) goto LAB_00106f18;
      }
      uVar14 = uVar6 - 0x30;
      uVar9 = uVar4;
    } while( true );
  }
  uVar6 = 0;
LAB_00106eac:
  uVar14 = *(uint *)(param_1 + 0x10) >> 3 & 1;
  if (uVar14 < (param_2 != 0)) {
    uVar14 = (uint)((byte)(**(char **)(param_1 + 0x18) + 0xbdU) < 2);
  }
  if (uVar6 == 0x74) {
    puVar8 = &UNK_0012d170;
  }
  else if (uVar6 == 0x61) {
    puVar8 = &UNK_0012d1a8;
  }
  else if (uVar6 == 0x62) {
    puVar8 = &UNK_0012d1e0;
  }
  else if (uVar6 == 0x73) {
    puVar8 = &UNK_0012d218;
  }
  else if (uVar6 == 0x69) {
    puVar8 = &UNK_0012d250;
  }
  else if (uVar6 == 0x6f) {
    puVar8 = &UNK_0012d288;
  }
  else {
    if (uVar6 != 100) {
      return 0;
    }
    puVar8 = &UNK_0012d2c0;
  }
  lVar5 = *(long *)(puVar8 + 0x28);
  if (lVar5 == 0) {
    iVar15 = *(int *)(param_1 + 0x2c);
    iVar10 = *(int *)(param_1 + 0x28);
  }
  else {
    iVar10 = *(int *)(param_1 + 0x28);
    iVar15 = *(int *)(param_1 + 0x2c);
    uVar2 = *(undefined4 *)(puVar8 + 0x30);
    lVar17 = 0;
    if (iVar10 < iVar15) {
      lVar13 = (long)iVar10;
      iVar10 = iVar10 + 1;
      *(int *)(param_1 + 0x28) = iVar10;
      lVar1 = *(long *)(param_1 + 0x20) + lVar13 * 0x18;
      if (lVar1 != 0) {
        *(undefined4 *)(*(long *)(param_1 + 0x20) + lVar13 * 0x18) = 0x18;
        *(long *)(lVar1 + 8) = lVar5;
        *(undefined4 *)(lVar1 + 0x10) = uVar2;
        lVar17 = lVar1;
      }
    }
    *(long *)(param_1 + 0x48) = lVar17;
  }
  if (uVar14 == 0) {
    uVar16 = *(undefined8 *)(puVar8 + 8);
    iVar11 = *(int *)(puVar8 + 0x10);
  }
  else {
    uVar16 = *(undefined8 *)(puVar8 + 0x18);
    iVar11 = *(int *)(puVar8 + 0x20);
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar11;
  if (iVar15 <= iVar10) {
    return 0;
  }
  *(int *)(param_1 + 0x28) = iVar10 + 1;
  lVar5 = *(long *)(param_1 + 0x20) + (long)iVar10 * 0x18;
  if (lVar5 != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18) = 0x18;
    *(undefined8 *)(lVar5 + 8) = uVar16;
    *(int *)(lVar5 + 0x10) = iVar11;
    return lVar5;
  }
  return 0;
LAB_00106f18:
  uVar4 = uVar4 + 1;
LAB_00106f1c:
  if (*(uint *)(param_1 + 0x38) <= uVar4) {
    return 0;
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + (ulong)uVar4 * 8);
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  return lVar5;
}



void FUN_001070a0(int *param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  
  if (param_3 == (undefined4 *)0x0) {
switchD_001070f4_caseD_5:
    return;
  }
  do {
    switch(*param_3) {
    case 1:
    case 2:
    case 3:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x25:
    case 0x26:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x42:
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
switchD_001070f4_caseD_1:
      piVar1 = *(int **)(param_3 + 2);
      break;
    case 4:
      *param_1 = *param_1 + 1;
      piVar1 = *(int **)(param_3 + 2);
      break;
    default:
      goto switchD_001070f4_caseD_5;
    case 7:
    case 8:
    case 0x32:
      param_3 = *(undefined4 **)(param_3 + 4);
      goto joined_r0x00107114;
    case 0x23:
    case 0x24:
      piVar1 = *(int **)(param_3 + 2);
      if (*piVar1 == 5) {
        *param_2 = *param_2 + 1;
        goto switchD_001070f4_caseD_1;
      }
      break;
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
      param_3 = *(undefined4 **)(param_3 + 2);
      goto joined_r0x00107114;
    }
    FUN_001070a0(param_1,param_2,piVar1);
    param_3 = *(undefined4 **)(param_3 + 4);
joined_r0x00107114:
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
  } while( true );
}



void FUN_0010716c(undefined *param_1,undefined param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x100);
  if (lVar1 != 0xff) {
    *(long *)(param_1 + 0x100) = lVar1 + 1;
    param_1[lVar1] = param_2;
    param_1[0x108] = param_2;
    return;
  }
  param_1[0xff] = 0;
  (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
  *(undefined8 *)(param_1 + 0x100) = 1;
  *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
  *param_1 = param_2;
  param_1[0x108] = param_2;
  return;
}



long FUN_001071e4(byte **param_1)

{
  ulong uVar1;
  bool bVar2;
  byte *pbVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  
  pbVar3 = *param_1;
  bVar5 = *pbVar3;
  bVar2 = bVar5 == 0x6e;
  if (bVar2) {
    *param_1 = pbVar3 + 1;
    uVar6 = 0xffffffffffffffff;
    bVar5 = pbVar3[1];
  }
  else {
    uVar6 = 0;
  }
  if ((byte)(bVar5 - 0x30) < 10) {
    pbVar3 = *param_1;
    uVar4 = 0;
    do {
      pbVar3 = pbVar3 + 1;
      *param_1 = pbVar3;
      uVar1 = (ulong)bVar5;
      bVar5 = *pbVar3;
      uVar4 = (uVar4 * 10 + uVar1) - 0x30;
    } while ((byte)(bVar5 - 0x30) < 10);
  }
  else {
    uVar4 = 0;
  }
  return (uVar4 ^ uVar6) + (ulong)bVar2;
}



undefined8 FUN_0010726c(long param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  int *piVar3;
  int iVar4;
  
  if (*(long *)(param_1 + 0x120) == 0) {
    *(undefined4 *)(param_1 + 0x130) = 1;
  }
  else {
    piVar3 = *(int **)(*(long *)(*(long *)(param_1 + 0x120) + 8) + 0x10);
    uVar2 = *param_2 & 0xffffffff;
    if ((piVar3 != (int *)0x0) && (*piVar3 == 0x2f)) {
      iVar4 = (int)*param_2;
      if (iVar4 < 1) {
        if (iVar4 != 0) {
          return 0;
        }
      }
      else {
        do {
          piVar3 = *(int **)(piVar3 + 4);
          uVar1 = (int)uVar2 - 1;
          uVar2 = (ulong)uVar1;
          if (piVar3 == (int *)0x0) {
            return 0;
          }
          if (*piVar3 != 0x2f) {
            return 0;
          }
        } while (uVar1 != 0);
      }
      return *(undefined8 *)(piVar3 + 2);
    }
  }
  return 0;
}



int * FUN_001072e8(long param_1,undefined4 *param_2)

{
  int *piVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    do {
      switch(*param_2) {
      case 0:
      case 6:
      case 0x18:
      case 0x27:
      case 0x31:
      case 0x40:
      case 0x45:
      case 0x47:
      case 0x4a:
      case 0x4b:
        goto LAB_00107334;
      case 5:
        piVar1 = (int *)FUN_0010726c(param_1,(ulong *)(param_2 + 2));
        if ((piVar1 != (int *)0x0) && (*piVar1 == 0x2f)) {
          return piVar1;
        }
        goto LAB_00107334;
      case 7:
      case 8:
      case 0x32:
        goto switchD_00107350_caseD_7;
      }
      piVar1 = FUN_001072e8(param_1,*(undefined4 **)(param_2 + 2));
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
switchD_00107350_caseD_7:
      param_2 = *(undefined4 **)(param_2 + 4);
    } while (param_2 != (undefined4 *)0x0);
  }
LAB_00107334:
  return (int *)0x0;
}



void FUN_00107380(void *param_1,size_t param_2,void **param_3)

{
  void *pvVar1;
  void *__size;
  
  __size = param_3[2];
  pvVar1 = (void *)((long)param_3[1] + param_2 + 1);
  if (__size < pvVar1) {
    if (*(int *)(param_3 + 3) != 0) {
      return;
    }
    if ((__size != (void *)0x0) || (__size = (void *)0x2, (void *)0x2 < pvVar1)) {
      do {
        __size = (void *)((long)__size * 2);
      } while (__size < pvVar1);
    }
    pvVar1 = realloc(*param_3,(size_t)__size);
    if (pvVar1 == (void *)0x0) {
      free(*param_3);
      *param_3 = (void *)0x0;
      param_3[1] = (void *)0x0;
      param_3[2] = (void *)0x0;
      *(undefined4 *)(param_3 + 3) = 1;
      return;
    }
    *param_3 = pvVar1;
    param_3[2] = __size;
  }
  if (*(int *)(param_3 + 3) != 0) {
    return;
  }
  memcpy((void *)((long)*param_3 + (long)param_3[1]),param_1,param_2);
  *(undefined *)((long)*param_3 + param_2 + (long)param_3[1]) = 0;
  param_3[1] = (void *)((long)param_3[1] + param_2);
  return;
}



void FUN_00107470(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  size_t sVar3;
  long lVar4;
  
  sVar3 = strlen(param_2);
  if (sVar3 != 0) {
    pcVar1 = param_2 + sVar3;
    lVar4 = *(long *)(param_1 + 0x100);
    do {
      while (cVar2 = *param_2, lVar4 == 0xff) {
        param_2 = param_2 + 1;
        param_1[0xff] = '\0';
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(undefined8 *)(param_1 + 0x100) = 1;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        *param_1 = cVar2;
        param_1[0x108] = cVar2;
        lVar4 = 1;
        if (param_2 == pcVar1) {
          return;
        }
      }
      *(long *)(param_1 + 0x100) = lVar4 + 1;
      param_2 = param_2 + 1;
      param_1[lVar4] = cVar2;
      param_1[0x108] = cVar2;
      lVar4 = lVar4 + 1;
    } while (param_2 != pcVar1);
  }
  return;
}



long FUN_00107524(long param_1,int param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  void *__s1;
  
  lVar3 = (long)param_2;
  __s1 = *(void **)(param_1 + 0x18);
  if (lVar3 <= *(long *)(param_1 + 8) - (long)__s1) {
    *(long *)(param_1 + 0x18) = (long)__s1 + lVar3;
    if (((*(uint *)(param_1 + 0x10) >> 2 & 1) != 0) && (*(char *)((long)__s1 + lVar3) == '$')) {
      *(long *)(param_1 + 0x18) = (long)__s1 + lVar3 + 1;
    }
    if ((((9 < param_2) && (iVar2 = memcmp(__s1,"_GLOBAL_",8), iVar2 == 0)) &&
        ((cVar1 = *(char *)((long)__s1 + 8), cVar1 == '_' || cVar1 == '.' || (cVar1 == '$')))) &&
       (*(char *)((long)__s1 + 9) == 'N')) {
      *(int *)(param_1 + 0x50) = (*(int *)(param_1 + 0x50) + 0x16) - param_2;
      lVar3 = FUN_00106bd0(param_1,(long)"(anonymous namespace)",0x15);
      return lVar3;
    }
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar2 < *(int *)(param_1 + 0x2c)) {
      *(int *)(param_1 + 0x28) = iVar2 + 1;
      lVar3 = *(long *)(param_1 + 0x20) + (long)iVar2 * 0x18;
      if ((param_2 != 0 && __s1 != (void *)0x0) && (lVar3 != 0)) {
        *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 0x18) = 0;
        *(void **)(lVar3 + 8) = __s1;
        *(int *)(lVar3 + 0x10) = param_2;
        return lVar3;
      }
    }
  }
  return 0;
}



void FUN_00107678(char *param_1,long param_2)

{
  char cVar1;
  size_t sVar2;
  long lVar3;
  size_t sVar4;
  char local_20 [32];
  
  sprintf(local_20,"%ld",param_2);
  sVar2 = strlen(local_20);
  if (sVar2 != 0) {
    sVar4 = 0;
    lVar3 = *(long *)(param_1 + 0x100);
    do {
      while (cVar1 = local_20[sVar4], lVar3 == 0xff) {
        sVar4 = sVar4 + 1;
        param_1[0xff] = '\0';
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(undefined8 *)(param_1 + 0x100) = 1;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        *param_1 = cVar1;
        param_1[0x108] = cVar1;
        lVar3 = 1;
        if (sVar4 == sVar2) {
          return;
        }
      }
      *(long *)(param_1 + 0x100) = lVar3 + 1;
      sVar4 = sVar4 + 1;
      param_1[lVar3] = cVar1;
      param_1[0x108] = cVar1;
      lVar3 = lVar3 + 1;
    } while (sVar4 != sVar2);
  }
  return;
}



long FUN_00107744(long param_1)

{
  ulong uVar1;
  bool bVar2;
  byte *pbVar3;
  long lVar4;
  byte bVar5;
  
  pbVar3 = *(byte **)(param_1 + 0x18);
  bVar5 = *pbVar3;
  bVar2 = bVar5 == 0x6e;
  if (bVar2) {
    *(byte **)(param_1 + 0x18) = pbVar3 + 1;
    bVar5 = pbVar3[1];
  }
  if ((byte)(bVar5 - 0x30) < 10) {
    pbVar3 = *(byte **)(param_1 + 0x18);
    lVar4 = 0;
    do {
      pbVar3 = pbVar3 + 1;
      *(byte **)(param_1 + 0x18) = pbVar3;
      uVar1 = (ulong)bVar5;
      bVar5 = *pbVar3;
      lVar4 = lVar4 * 10 + uVar1 + -0x30;
    } while ((byte)(bVar5 - 0x30) < 10);
    if ((0 < lVar4) && (!bVar2)) {
      lVar4 = FUN_00107524(param_1,(int)lVar4);
      *(long *)(param_1 + 0x48) = lVar4;
      return lVar4;
    }
  }
  return 0;
}



long FUN_001077ec(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  
  pbVar4 = *(byte **)(param_1 + 0x18);
  bVar1 = *pbVar4;
  if (bVar1 != 0x5f) {
    if ((bVar1 != 0x6e) && ((byte)(bVar1 - 0x30) < 10)) {
      lVar2 = 0;
      do {
        pbVar4 = pbVar4 + 1;
        *(byte **)(param_1 + 0x18) = pbVar4;
        lVar3 = lVar2 * 10 + (ulong)bVar1;
        bVar1 = *pbVar4;
        lVar2 = lVar3 + -0x30;
      } while ((byte)(bVar1 - 0x30) < 10);
      lVar3 = lVar3 + -0x2f;
      if (bVar1 == 0x5f) goto LAB_00107868;
    }
    return -1;
  }
  lVar3 = 0;
LAB_00107868:
  *(byte **)(param_1 + 0x18) = pbVar4 + 1;
  return lVar3;
}



ulong FUN_00107878(long param_1)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  byte *pbVar6;
  
  pcVar4 = *(char **)(param_1 + 0x18);
  if (*pcVar4 == '_') {
    pbVar6 = (byte *)(pcVar4 + 1);
    *(byte **)(param_1 + 0x18) = pbVar6;
    bVar2 = pcVar4[1];
    if (bVar2 == 0x6e) {
      pbVar6 = (byte *)(pcVar4 + 2);
      *(byte **)(param_1 + 0x18) = pbVar6;
      bVar2 = pcVar4[2];
      if (9 < (byte)(bVar2 - 0x30)) {
        return 1;
      }
      bVar3 = true;
    }
    else {
      if (9 < (byte)(bVar2 - 0x30)) {
        return 1;
      }
      bVar3 = false;
    }
    lVar5 = 0;
    do {
      pbVar6 = pbVar6 + 1;
      *(byte **)(param_1 + 0x18) = pbVar6;
      lVar1 = lVar5 * 10 + (ulong)bVar2;
      bVar2 = *pbVar6;
      lVar5 = lVar1 + -0x30;
    } while ((byte)(bVar2 - 0x30) < 10);
    if (bVar3) {
      return lVar1 - 0x31U >> 0x3f;
    }
  }
  return 1;
}



long FUN_0010791c(long param_1)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  char *pcVar7;
  
  pcVar7 = *(char **)(param_1 + 0x18);
  if (*pcVar7 != 'T') {
    return 0;
  }
  pbVar6 = (byte *)(pcVar7 + 1);
  *(byte **)(param_1 + 0x18) = pbVar6;
  bVar2 = pcVar7[1];
  if (bVar2 == 0x5f) {
    lVar5 = 0;
  }
  else {
    if (bVar2 == 0x6e) {
      return 0;
    }
    if (9 < (byte)(bVar2 - 0x30)) {
      return 0;
    }
    lVar4 = 0;
    pbVar3 = (byte *)(pcVar7 + 2);
    do {
      pbVar6 = pbVar3;
      *(byte **)(param_1 + 0x18) = pbVar6;
      lVar5 = lVar4 * 10 + (ulong)bVar2;
      bVar2 = *pbVar6;
      lVar4 = lVar5 + -0x30;
      pbVar3 = pbVar6 + 1;
    } while ((byte)(bVar2 - 0x30) < 10);
    lVar5 = lVar5 + -0x2f;
    if (bVar2 != 0x5f) {
      return 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x28);
  *(byte **)(param_1 + 0x18) = pbVar6 + 1;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  if (iVar1 < *(int *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x28) = iVar1 + 1;
    lVar4 = *(long *)(param_1 + 0x20) + (long)iVar1 * 0x18;
    if (lVar4 != 0) {
      *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar1 * 0x18) = 5;
      *(long *)(lVar4 + 8) = lVar5;
      return lVar4;
    }
  }
  return 0;
}



undefined8 FUN_00107a08(long param_1,uint param_2)

{
  byte *pbVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  
  if (param_2 == 0) {
    pbVar1 = *(byte **)(param_1 + 0x18);
    if (*pbVar1 == 0) {
      return 0;
    }
    *(byte **)(param_1 + 0x18) = pbVar1 + 1;
    param_2 = (uint)*pbVar1;
  }
  if (param_2 == 0x68) {
    pcVar3 = *(char **)(param_1 + 0x18);
    cVar4 = *pcVar3;
    pcVar2 = pcVar3;
    if (cVar4 == 'n') {
      pcVar2 = pcVar3 + 1;
      *(char **)(param_1 + 0x18) = pcVar2;
      cVar4 = pcVar3[1];
    }
    if ((byte)(cVar4 - 0x30U) < 10) {
      do {
        pcVar2 = pcVar2 + 1;
        *(char **)(param_1 + 0x18) = pcVar2;
        cVar4 = *pcVar2;
      } while ((byte)(cVar4 - 0x30U) < 10);
      goto LAB_00107a88;
    }
  }
  else {
    if (param_2 != 0x76) {
      return 0;
    }
    FUN_001071e4((byte **)(param_1 + 0x18));
    if (**(char **)(param_1 + 0x18) != '_') {
      return 0;
    }
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
    FUN_001071e4((byte **)(param_1 + 0x18));
    pcVar2 = *(char **)(param_1 + 0x18);
  }
  cVar4 = *pcVar2;
LAB_00107a88:
  if (cVar4 != '_') {
    return 0;
  }
  *(char **)(param_1 + 0x18) = pcVar2 + 1;
  return 1;
}



long FUN_00107af4(long param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  char *pcVar10;
  long *plVar11;
  undefined8 uVar12;
  char *pcVar13;
  char **ppcVar14;
  int *local_28;
  int *local_20;
  int *local_18;
  long local_8;
  
  pcVar10 = *(char **)(param_1 + 0x18);
  uVar12 = *(undefined8 *)(param_1 + 0x48);
  if (1 < (byte)(*pcVar10 + 0xb7U)) {
    return 0;
  }
  pcVar13 = pcVar10 + 1;
  *(char **)(param_1 + 0x18) = pcVar13;
  cVar2 = pcVar10[1];
  if (cVar2 == 'E') {
    *(char **)(param_1 + 0x18) = pcVar10 + 2;
    lVar5 = FUN_00106b30(param_1,0x2f,0,0);
    return lVar5;
  }
  plVar11 = &local_8;
  local_8 = 0;
LAB_00107b64:
  switch(cVar2) {
  case 'I':
  case 'J':
    piVar4 = (int *)FUN_00107af4(param_1);
    break;
  default:
    piVar4 = FUN_00109734(param_1);
    break;
  case 'L':
    piVar4 = (int *)FUN_0010c2d4(param_1);
    break;
  case 'X':
    pcVar10 = pcVar13 + 1;
    uVar1 = *(undefined4 *)(param_1 + 0x54);
    *(char **)(param_1 + 0x18) = pcVar10;
    *(undefined4 *)(param_1 + 0x54) = 1;
    cVar2 = pcVar13[1];
    if (cVar2 == 'L') {
      piVar4 = (int *)FUN_0010c2d4(param_1);
      pcVar10 = *(char **)(param_1 + 0x18);
    }
    else if (cVar2 == 'T') {
      piVar4 = (int *)FUN_0010791c(param_1);
      pcVar10 = *(char **)(param_1 + 0x18);
    }
    else if (cVar2 == 's') {
      if (pcVar13[2] == 'r') {
        *(char **)(param_1 + 0x18) = pcVar13 + 3;
        piVar4 = FUN_00109734(param_1);
        piVar6 = FUN_0010b0e0(param_1);
        if (**(char **)(param_1 + 0x18) == 'I') {
          lVar5 = FUN_00107af4(param_1);
          piVar6 = (int *)FUN_00106b30(param_1,4,(long)piVar6,lVar5);
        }
        piVar4 = (int *)FUN_00106b30(param_1,1,(long)piVar4,(long)piVar6);
        pcVar10 = *(char **)(param_1 + 0x18);
      }
      else {
        if (pcVar13[2] != 'p') goto LAB_00107c50;
        *(char **)(param_1 + 0x18) = pcVar13 + 3;
        piVar4 = FUN_0010c44c(param_1);
        piVar4 = (int *)FUN_00106b30(param_1,0x4a,(long)piVar4,0);
        pcVar10 = *(char **)(param_1 + 0x18);
      }
    }
    else {
      if (cVar2 == 'f') {
        if (pcVar13[2] != 'p') goto LAB_00107c50;
        *(char **)(param_1 + 0x18) = pcVar13 + 3;
        if (pcVar13[3] == 'T') {
          lVar5 = 0;
          *(char **)(param_1 + 0x18) = pcVar13 + 4;
        }
        else {
          lVar5 = FUN_001077ec(param_1);
          iVar3 = (int)lVar5 + 1;
          lVar5 = (long)iVar3;
          if (iVar3 == 0) {
            pcVar10 = *(char **)(param_1 + 0x18);
            goto LAB_00107d5c;
          }
        }
        iVar3 = *(int *)(param_1 + 0x28);
        if (iVar3 < *(int *)(param_1 + 0x2c)) {
          *(int *)(param_1 + 0x28) = iVar3 + 1;
          piVar4 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar3 * 0x18);
          if (piVar4 != (int *)0x0) {
            *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar3 * 0x18) = 6;
            *(long *)(piVar4 + 2) = lVar5;
            pcVar10 = *(char **)(param_1 + 0x18);
            goto LAB_00107cfc;
          }
        }
        goto switchD_00107fb8_caseD_4;
      }
      if ((byte)(cVar2 - 0x30U) < 10) {
LAB_00107cdc:
        piVar4 = FUN_0010b0e0(param_1);
        pcVar10 = *(char **)(param_1 + 0x18);
        if (piVar4 != (int *)0x0) {
          if (*pcVar10 == 'I') {
            lVar5 = FUN_00107af4(param_1);
            piVar4 = (int *)FUN_00106b30(param_1,4,(long)piVar4,lVar5);
            pcVar10 = *(char **)(param_1 + 0x18);
          }
          goto LAB_00107cfc;
        }
      }
      else {
        if (cVar2 == 'o') {
          if (pcVar13[2] == 'n') {
            *(char **)(param_1 + 0x18) = pcVar13 + 3;
            goto LAB_00107cdc;
          }
        }
        else if (((cVar2 == 't') || (cVar2 == 'i')) && (pcVar13[2] == 'l')) {
          piVar4 = (int *)0x0;
          if (cVar2 == 't') {
            piVar4 = FUN_00109734(param_1);
            pcVar10 = *(char **)(param_1 + 0x18);
          }
          *(char **)(param_1 + 0x18) = pcVar10 + 2;
          lVar5 = FUN_00108fe0(param_1,'E');
          piVar4 = (int *)FUN_00106b30(param_1,0x30,(long)piVar4,lVar5);
          pcVar10 = *(char **)(param_1 + 0x18);
          goto LAB_00107cfc;
        }
LAB_00107c50:
        piVar6 = (int *)FUN_0010aeec(param_1);
        if (piVar6 != (int *)0x0) {
          iVar3 = *piVar6;
          if (iVar3 == 0x31) {
            ppcVar14 = *(char ***)(piVar6 + 2);
            pcVar10 = *ppcVar14;
            *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(ppcVar14 + 2) + -2;
            iVar3 = strcmp(pcVar10,"st");
            if (iVar3 == 0) {
              piVar4 = FUN_00109734(param_1);
LAB_0010802c:
              piVar4 = (int *)FUN_00106b30(param_1,0x36,(long)piVar6,(long)piVar4);
              pcVar10 = *(char **)(param_1 + 0x18);
              goto LAB_00107cfc;
            }
            switch(*(undefined4 *)((long)ppcVar14 + 0x14)) {
            case 0:
              goto switchD_00107fb8_caseD_0;
            case 1:
              cVar2 = *pcVar10;
              if (((cVar2 == 'm') || (cVar2 == 'p')) && (pcVar10[1] == cVar2)) {
                if (**(char **)(param_1 + 0x18) != '_') {
                  piVar4 = FUN_0010c44c(param_1);
                  piVar4 = (int *)FUN_00106b30(param_1,0x38,(long)piVar4,(long)piVar4);
                  goto LAB_0010802c;
                }
                *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
              }
              goto switchD_00107fb8_caseD_1;
            case 2:
              goto switchD_00107e90_caseD_2;
            case 3:
              goto switchD_00107e90_caseD_3;
            }
          }
          else if (iVar3 == 0x32) {
            switch(piVar6[2]) {
            case 0:
switchD_00107fb8_caseD_0:
              piVar4 = (int *)FUN_00106b30(param_1,0x35,(long)piVar6,0);
              pcVar10 = *(char **)(param_1 + 0x18);
              goto LAB_00107cfc;
            case 1:
              goto switchD_00107fb8_caseD_1;
            case 2:
              pcVar10 = (char *)0x0;
switchD_00107e90_caseD_2:
              if (((**(char ***)(piVar6 + 2))[1] == 'c') &&
                 ((cVar2 = ***(char ***)(piVar6 + 2), (byte)(cVar2 + 0x8eU) < 2 ||
                  ((byte)(cVar2 + 0x9dU) < 2)))) {
                piVar4 = FUN_00109734(param_1);
              }
              else {
                piVar4 = FUN_0010c44c(param_1);
              }
              iVar3 = strcmp(pcVar10,"cl");
              if (iVar3 == 0) {
                piVar7 = (int *)FUN_00108fe0(param_1,'E');
              }
              else {
                iVar3 = strcmp(pcVar10,"dt");
                if ((iVar3 == 0) || (iVar3 = strcmp(pcVar10,"pt"), iVar3 == 0)) {
                  piVar7 = FUN_0010b0e0(param_1);
                  if (**(char **)(param_1 + 0x18) == 'I') {
                    lVar5 = FUN_00107af4(param_1);
                    piVar7 = (int *)FUN_00106b30(param_1,4,(long)piVar7,lVar5);
                  }
                }
                else {
                  piVar7 = FUN_0010c44c(param_1);
                }
              }
              lVar5 = FUN_00106b30(param_1,0x38,(long)piVar4,(long)piVar7);
              piVar4 = (int *)FUN_00106b30(param_1,0x37,(long)piVar6,lVar5);
              pcVar10 = *(char **)(param_1 + 0x18);
              goto LAB_00107cfc;
            case 3:
              pcVar10 = (char *)0x0;
switchD_00107e90_caseD_3:
              iVar3 = strcmp(pcVar10,"qu");
              if (iVar3 == 0) {
                local_18 = FUN_0010c44c(param_1);
                pcVar10 = *(char **)(param_1 + 0x18);
                cVar2 = *pcVar10;
                if (cVar2 == 'L') {
                  piVar7 = (int *)FUN_0010c2d4(param_1);
                  pcVar10 = *(char **)(param_1 + 0x18);
                  cVar2 = *pcVar10;
LAB_001082ec:
                  if (cVar2 == 'L') {
                    piVar4 = (int *)FUN_0010c2d4(param_1);
                  }
                  else if (cVar2 == 'T') {
                    piVar4 = (int *)FUN_0010791c(param_1);
                  }
                  else if (cVar2 == 's') {
                    if (pcVar10[1] == 'r') {
                      *(char **)(param_1 + 0x18) = pcVar10 + 2;
                      piVar4 = FUN_00109734(param_1);
                      piVar8 = FUN_0010b0e0(param_1);
                      if (**(char **)(param_1 + 0x18) == 'I') {
                        lVar5 = FUN_00107af4(param_1);
                        piVar8 = (int *)FUN_00106b30(param_1,4,(long)piVar8,lVar5);
                      }
                      piVar4 = (int *)FUN_00106b30(param_1,1,(long)piVar4,(long)piVar8);
                    }
                    else {
                      if (pcVar10[1] != 'p') goto LAB_00108344;
                      *(char **)(param_1 + 0x18) = pcVar10 + 2;
                      piVar4 = FUN_0010c44c(param_1);
                      piVar4 = (int *)FUN_00106b30(param_1,0x4a,(long)piVar4,0);
                    }
                  }
                  else if (cVar2 == 'f') {
                    if (pcVar10[1] == 'p') {
                      *(char **)(param_1 + 0x18) = pcVar10 + 2;
                      if (pcVar10[2] == 'T') {
                        lVar5 = 0;
                        *(char **)(param_1 + 0x18) = pcVar10 + 3;
                      }
                      else {
                        lVar5 = FUN_001077ec(param_1);
                        iVar3 = (int)lVar5 + 1;
                        if (iVar3 == 0) goto LAB_001087a4;
                        lVar5 = (long)iVar3;
                      }
                      iVar3 = *(int *)(param_1 + 0x28);
                      piVar4 = (int *)0x0;
                      if (iVar3 < *(int *)(param_1 + 0x2c)) {
                        *(int *)(param_1 + 0x28) = iVar3 + 1;
                        piVar4 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar3 * 0x18);
                        if (piVar4 != (int *)0x0) {
                          *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar3 * 0x18) = 6;
                          *(long *)(piVar4 + 2) = lVar5;
                        }
                      }
                    }
                    else {
LAB_00108344:
                      piVar8 = (int *)FUN_0010aeec(param_1);
                      if (piVar8 == (int *)0x0) {
LAB_001087a4:
                        piVar4 = (int *)0x0;
                      }
                      else {
                        iVar3 = *piVar8;
                        if (iVar3 == 0x31) {
                          ppcVar14 = *(char ***)(piVar8 + 2);
                          pcVar10 = *ppcVar14;
                          *(int *)(param_1 + 0x50) =
                               *(int *)(param_1 + 0x50) + *(int *)(ppcVar14 + 2) + -2;
                          iVar3 = strcmp(pcVar10,"st");
                          if (iVar3 != 0) {
                            piVar4 = (int *)0x0;
                            switch(*(undefined4 *)((long)ppcVar14 + 0x14)) {
                            case 0:
                              goto switchD_00108738_caseD_0;
                            case 1:
                              goto switchD_001087a0_caseD_1;
                            case 2:
                              goto switchD_001087a0_caseD_2;
                            case 3:
                              goto switchD_001087a0_caseD_3;
                            default:
                              goto switchD_00108738_caseD_4;
                            }
                          }
                          piVar4 = FUN_00109734(param_1);
                        }
                        else {
                          if (iVar3 == 0x32) {
                            piVar4 = (int *)0x0;
                            switch(piVar8[2]) {
                            case 0:
switchD_00108738_caseD_0:
                              piVar4 = (int *)FUN_00106b30(param_1,0x35,(long)piVar8,0);
                              break;
                            case 1:
                              goto switchD_00108738_caseD_1;
                            case 2:
                              pcVar10 = (char *)0x0;
switchD_001087a0_caseD_2:
                              if (((**(char ***)(piVar8 + 2))[1] == 'c') &&
                                 ((cVar2 = ***(char ***)(piVar8 + 2), (byte)(cVar2 + 0x8eU) < 2 ||
                                  ((byte)(cVar2 + 0x9dU) < 2)))) {
                                local_20 = FUN_00109734(param_1);
                              }
                              else {
                                local_20 = FUN_0010c44c(param_1);
                              }
                              iVar3 = strcmp(pcVar10,"cl");
                              if (iVar3 == 0) {
                                piVar4 = (int *)FUN_00108fe0(param_1,'E');
                              }
                              else {
                                iVar3 = strcmp(pcVar10,"dt");
                                if ((iVar3 == 0) || (iVar3 = strcmp(pcVar10,"pt"), iVar3 == 0)) {
                                  piVar4 = FUN_0010b0e0(param_1);
                                  if (**(char **)(param_1 + 0x18) == 'I') {
                                    lVar5 = FUN_00107af4(param_1);
                                    piVar4 = (int *)FUN_00106b30(param_1,4,(long)piVar4,lVar5);
                                  }
                                }
                                else {
                                  piVar4 = FUN_0010c44c(param_1);
                                }
                              }
                              lVar5 = FUN_00106b30(param_1,0x38,(long)local_20,(long)piVar4);
                              piVar4 = (int *)FUN_00106b30(param_1,0x37,(long)piVar8,lVar5);
                              break;
                            case 3:
                              pcVar10 = (char *)0x0;
switchD_001087a0_caseD_3:
                              iVar3 = strcmp(pcVar10,"qu");
                              if (iVar3 == 0) {
                                local_20 = FUN_0010c44c(param_1);
                                local_28 = FUN_0010c44c(param_1);
                                piVar4 = FUN_0010c44c(param_1);
                              }
                              else {
                                if ((*pcVar10 != 'n') ||
                                   ((pcVar10[1] != 'a' && (pcVar10[1] != 'w')))) goto LAB_001087a4;
                                local_20 = (int *)FUN_00108fe0(param_1,'_');
                                local_28 = FUN_00109734(param_1);
                                pcVar10 = *(char **)(param_1 + 0x18);
                                cVar2 = *pcVar10;
                                if (cVar2 != 'E') {
                                  if (cVar2 == 'p') {
                                    piVar4 = (int *)0x0;
                                    if (pcVar10[1] == 'i') {
                                      *(char **)(param_1 + 0x18) = pcVar10 + 2;
                                      piVar4 = (int *)FUN_00108fe0(param_1,'E');
                                      goto LAB_00108b94;
                                    }
                                  }
                                  else {
                                    if (cVar2 != 'i') goto LAB_001087a4;
                                    piVar4 = (int *)0x0;
                                    if (pcVar10[1] == 'l') {
                                      piVar4 = FUN_0010c44c(param_1);
                                      goto LAB_00108b94;
                                    }
                                  }
                                  break;
                                }
                                piVar4 = (int *)0x0;
                                *(char **)(param_1 + 0x18) = pcVar10 + 1;
                              }
LAB_00108b94:
                              lVar5 = FUN_00106b30(param_1,0x3b,(long)local_28,(long)piVar4);
                              lVar5 = FUN_00106b30(param_1,0x3a,(long)local_20,lVar5);
                              piVar4 = (int *)FUN_00106b30(param_1,0x39,(long)piVar8,lVar5);
                            }
                            goto switchD_00108738_caseD_4;
                          }
                          if (iVar3 != 0x33) goto LAB_001087a4;
                          if (**(char **)(param_1 + 0x18) == '_') {
                            *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                            piVar4 = (int *)FUN_00108fe0(param_1,'E');
                            goto LAB_0010838c;
                          }
switchD_00108738_caseD_1:
                          piVar4 = FUN_0010c44c(param_1);
                        }
LAB_0010838c:
                        piVar4 = (int *)FUN_00106b30(param_1,0x36,(long)piVar8,(long)piVar4);
                      }
                    }
                  }
                  else {
                    if (9 < (byte)(cVar2 - 0x30U)) {
                      if (cVar2 != 'o') goto LAB_00108324;
                      if (pcVar10[1] != 'n') goto LAB_00108344;
                      *(char **)(param_1 + 0x18) = pcVar10 + 2;
                    }
                    piVar4 = FUN_0010b0e0(param_1);
                    if ((piVar4 != (int *)0x0) && (**(char **)(param_1 + 0x18) == 'I')) {
                      lVar5 = FUN_00107af4(param_1);
                      piVar4 = (int *)FUN_00106b30(param_1,4,(long)piVar4,lVar5);
                    }
                  }
                }
                else {
                  if (cVar2 == 'T') {
                    piVar7 = (int *)FUN_0010791c(param_1);
                    pcVar10 = *(char **)(param_1 + 0x18);
                    cVar2 = *pcVar10;
                    goto LAB_001082ec;
                  }
                  if (cVar2 == 's') {
                    if (pcVar10[1] == 'r') {
                      *(char **)(param_1 + 0x18) = pcVar10 + 2;
                      piVar7 = FUN_00109734(param_1);
                      piVar4 = FUN_0010b0e0(param_1);
                      if (**(char **)(param_1 + 0x18) != 'I') {
                        piVar7 = (int *)FUN_00106b30(param_1,1,(long)piVar7,(long)piVar4);
                        pcVar10 = *(char **)(param_1 + 0x18);
                        cVar2 = *pcVar10;
                        goto LAB_001082ec;
                      }
                      lVar5 = FUN_00107af4(param_1);
                      piVar4 = (int *)FUN_00106b30(param_1,4,(long)piVar4,lVar5);
                      uVar9 = 1;
                      goto LAB_001082d8;
                    }
                    if (pcVar10[1] != 'p') goto LAB_00108288;
                    *(char **)(param_1 + 0x18) = pcVar10 + 2;
                    piVar7 = FUN_0010c44c(param_1);
                    uVar9 = 0x4a;
LAB_0010862c:
                    piVar7 = (int *)FUN_00106b30(param_1,uVar9,(long)piVar7,0);
LAB_00108638:
                    pcVar10 = *(char **)(param_1 + 0x18);
LAB_0010863c:
                    cVar2 = *pcVar10;
                    goto LAB_001082ec;
                  }
                  if (cVar2 == 'f') {
                    if (pcVar10[1] != 'p') goto LAB_00108288;
                    *(char **)(param_1 + 0x18) = pcVar10 + 2;
                    if (pcVar10[2] == 'T') {
                      pcVar10 = pcVar10 + 3;
                      lVar5 = 0;
                      *(char **)(param_1 + 0x18) = pcVar10;
                    }
                    else {
                      lVar5 = FUN_001077ec(param_1);
                      iVar3 = (int)lVar5 + 1;
                      pcVar10 = *(char **)(param_1 + 0x18);
                      if (iVar3 == 0) {
LAB_00108648:
                        piVar7 = (int *)0x0;
                        cVar2 = *pcVar10;
                        goto LAB_001082ec;
                      }
                      lVar5 = (long)iVar3;
                    }
                    iVar3 = *(int *)(param_1 + 0x28);
                    if (iVar3 < *(int *)(param_1 + 0x2c)) {
                      *(int *)(param_1 + 0x28) = iVar3 + 1;
                      piVar7 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar3 * 0x18);
                      if (piVar7 == (int *)0x0) goto LAB_0010863c;
                      *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar3 * 0x18) = 6;
                      *(long *)(piVar7 + 2) = lVar5;
                      cVar2 = *pcVar10;
                    }
                    else {
                      cVar2 = *pcVar10;
                      piVar7 = (int *)0x0;
                    }
                    goto LAB_001082ec;
                  }
                  if ((byte)(cVar2 - 0x30U) < 10) {
LAB_001084a0:
                    piVar7 = FUN_0010b0e0(param_1);
                    pcVar10 = *(char **)(param_1 + 0x18);
                    cVar2 = *pcVar10;
                    if ((piVar7 != (int *)0x0) && (cVar2 == 'I')) {
                      piVar4 = (int *)FUN_00107af4(param_1);
                      uVar9 = 4;
                      goto LAB_001082d8;
                    }
                    goto LAB_001082ec;
                  }
                  if (cVar2 == 'o') {
                    if (pcVar10[1] == 'n') {
                      *(char **)(param_1 + 0x18) = pcVar10 + 2;
                      goto LAB_001084a0;
                    }
                  }
                  else if (((cVar2 == 't') || (cVar2 == 'i')) && (pcVar10[1] == 'l')) {
                    piVar4 = (int *)0x0;
                    if (cVar2 == 't') {
                      piVar4 = FUN_00109734(param_1);
                      pcVar10 = *(char **)(param_1 + 0x18);
                    }
                    *(char **)(param_1 + 0x18) = pcVar10 + 2;
                    lVar5 = FUN_00108fe0(param_1,'E');
                    piVar7 = (int *)FUN_00106b30(param_1,0x30,(long)piVar4,lVar5);
                    pcVar10 = *(char **)(param_1 + 0x18);
                    cVar2 = *pcVar10;
                    goto LAB_001082ec;
                  }
LAB_00108288:
                  piVar7 = (int *)FUN_0010aeec(param_1);
                  if (piVar7 == (int *)0x0) goto LAB_00108638;
                  iVar3 = *piVar7;
                  if (iVar3 == 0x31) {
                    ppcVar14 = *(char ***)(piVar7 + 2);
                    pcVar10 = *ppcVar14;
                    *(int *)(param_1 + 0x50) =
                         *(int *)(param_1 + 0x50) + *(int *)(ppcVar14 + 2) + -2;
                    iVar3 = strcmp(pcVar10,"st");
                    if (iVar3 != 0) {
                      switch(*(undefined4 *)((long)ppcVar14 + 0x14)) {
                      case 0:
                        goto switchD_001086b8_caseD_0;
                      case 1:
                        goto switchD_00108824_caseD_1;
                      case 2:
                        goto switchD_00108824_caseD_2;
                      case 3:
                        goto switchD_00108824_caseD_3;
                      default:
                        goto switchD_001086b8_caseD_4;
                      }
                    }
                    piVar4 = FUN_00109734(param_1);
                    uVar9 = 0x36;
                    goto LAB_001082d8;
                  }
                  if (iVar3 != 0x32) {
                    if (iVar3 == 0x33) {
                      if (**(char **)(param_1 + 0x18) != '_') goto switchD_001086b8_caseD_1;
                      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                      piVar4 = (int *)FUN_00108fe0(param_1,'E');
                      goto LAB_001082d0;
                    }
switchD_001086b8_caseD_4:
                    pcVar10 = *(char **)(param_1 + 0x18);
                    goto LAB_00108648;
                  }
                  switch(piVar7[2]) {
                  case 0:
switchD_001086b8_caseD_0:
                    uVar9 = 0x35;
                    goto LAB_0010862c;
                  case 1:
                    goto switchD_001086b8_caseD_1;
                  case 2:
                    pcVar10 = (char *)0x0;
switchD_00108824_caseD_2:
                    if (((**(char ***)(piVar7 + 2))[1] == 'c') &&
                       ((cVar2 = ***(char ***)(piVar7 + 2), (byte)(cVar2 + 0x8eU) < 2 ||
                        ((byte)(cVar2 + 0x9dU) < 2)))) {
                      local_20 = FUN_00109734(param_1);
                    }
                    else {
                      local_20 = FUN_0010c44c(param_1);
                    }
                    iVar3 = strcmp(pcVar10,"cl");
                    if (iVar3 == 0) {
                      piVar4 = (int *)FUN_00108fe0(param_1,'E');
                    }
                    else {
                      iVar3 = strcmp(pcVar10,"dt");
                      if ((iVar3 == 0) || (iVar3 = strcmp(pcVar10,"pt"), iVar3 == 0)) {
                        piVar4 = FUN_0010b0e0(param_1);
                        if (**(char **)(param_1 + 0x18) == 'I') {
                          lVar5 = FUN_00107af4(param_1);
                          piVar4 = (int *)FUN_00106b30(param_1,4,(long)piVar4,lVar5);
                        }
                      }
                      else {
                        piVar4 = FUN_0010c44c(param_1);
                      }
                    }
                    piVar4 = (int *)FUN_00106b30(param_1,0x38,(long)local_20,(long)piVar4);
                    uVar9 = 0x37;
                    goto LAB_001082d8;
                  case 3:
                    pcVar10 = (char *)0x0;
switchD_00108824_caseD_3:
                    iVar3 = strcmp(pcVar10,"qu");
                    if (iVar3 == 0) {
                      local_20 = FUN_0010c44c(param_1);
                      piVar4 = FUN_0010c44c(param_1);
                      piVar8 = FUN_0010c44c(param_1);
LAB_00108a0c:
                      lVar5 = FUN_00106b30(param_1,0x3b,(long)piVar4,(long)piVar8);
                      piVar4 = (int *)FUN_00106b30(param_1,0x3a,(long)local_20,lVar5);
                      uVar9 = 0x39;
                      goto LAB_001082d8;
                    }
                    if ((*pcVar10 != 'n') || ((pcVar10[1] != 'a' && (pcVar10[1] != 'w'))))
                    goto switchD_001086b8_caseD_4;
                    local_20 = (int *)FUN_00108fe0(param_1,'_');
                    piVar4 = FUN_00109734(param_1);
                    pcVar10 = *(char **)(param_1 + 0x18);
                    cVar2 = *pcVar10;
                    if (cVar2 == 'E') {
                      piVar8 = (int *)0x0;
                      *(char **)(param_1 + 0x18) = pcVar10 + 1;
                      goto LAB_00108a0c;
                    }
                    if (cVar2 == 'p') {
                      if (pcVar10[1] == 'i') {
                        *(char **)(param_1 + 0x18) = pcVar10 + 2;
                        piVar8 = (int *)FUN_00108fe0(param_1,'E');
                        goto LAB_00108a0c;
                      }
                    }
                    else {
                      if (cVar2 != 'i') {
                        piVar7 = (int *)0x0;
                        goto LAB_001082ec;
                      }
                      if (pcVar10[1] == 'l') {
                        piVar8 = FUN_0010c44c(param_1);
                        goto LAB_00108a0c;
                      }
                    }
                    piVar7 = (int *)0x0;
LAB_00108324:
                    if (((cVar2 != 't') && (cVar2 != 'i')) || (pcVar10[1] != 'l'))
                    goto LAB_00108344;
                    piVar4 = (int *)0x0;
                    if (cVar2 == 't') {
                      piVar4 = FUN_00109734(param_1);
                    }
                    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 2;
                    lVar5 = FUN_00108fe0(param_1,'E');
                    piVar4 = (int *)FUN_00106b30(param_1,0x30,(long)piVar4,lVar5);
                    break;
                  default:
                    goto switchD_001086b8_caseD_4;
                  }
                }
              }
              else {
                if ((*pcVar10 != 'n') || ((pcVar10[1] != 'a' && (pcVar10[1] != 'w')))) break;
                local_18 = (int *)FUN_00108fe0(param_1,'_');
                piVar7 = FUN_00109734(param_1);
                pcVar10 = *(char **)(param_1 + 0x18);
                cVar2 = *pcVar10;
                if (cVar2 != 'E') {
                  if (cVar2 == 'p') {
                    piVar4 = (int *)0x0;
                    if (pcVar10[1] == 'i') {
                      *(char **)(param_1 + 0x18) = pcVar10 + 2;
                      piVar4 = (int *)FUN_00108fe0(param_1,'E');
                      goto switchD_00108738_caseD_4;
                    }
                  }
                  else {
                    piVar4 = (int *)0x0;
                    if ((cVar2 == 'i') && (pcVar10[1] == 'l')) {
                      piVar4 = FUN_0010c44c(param_1);
                      goto switchD_00108738_caseD_4;
                    }
                  }
                  goto LAB_00107cfc;
                }
                piVar4 = (int *)0x0;
                *(char **)(param_1 + 0x18) = pcVar10 + 1;
              }
switchD_00108738_caseD_4:
              lVar5 = FUN_00106b30(param_1,0x3b,(long)piVar7,(long)piVar4);
              lVar5 = FUN_00106b30(param_1,0x3a,(long)local_18,lVar5);
              piVar4 = (int *)FUN_00106b30(param_1,0x39,(long)piVar6,lVar5);
              pcVar10 = *(char **)(param_1 + 0x18);
              goto LAB_00107cfc;
            }
          }
          else if (iVar3 == 0x33) {
            if (**(char **)(param_1 + 0x18) == '_') {
              *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
              piVar4 = (int *)FUN_00108fe0(param_1,'E');
              goto LAB_0010802c;
            }
switchD_00107fb8_caseD_1:
            piVar4 = FUN_0010c44c(param_1);
            goto LAB_0010802c;
          }
        }
switchD_00107fb8_caseD_4:
        pcVar10 = *(char **)(param_1 + 0x18);
      }
LAB_00107d5c:
      piVar4 = (int *)0x0;
    }
LAB_00107cfc:
    *(undefined4 *)(param_1 + 0x54) = uVar1;
    if (*pcVar10 != 'E') {
      return 0;
    }
    *(char **)(param_1 + 0x18) = pcVar10 + 1;
  }
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  lVar5 = FUN_00106b30(param_1,0x2f,(long)piVar4,0);
  *plVar11 = lVar5;
  if (lVar5 == 0) {
    return 0;
  }
  pcVar13 = *(char **)(param_1 + 0x18);
  plVar11 = (long *)(lVar5 + 0x10);
  cVar2 = *pcVar13;
  if (cVar2 == 'E') {
    *(undefined8 *)(param_1 + 0x48) = uVar12;
    *(char **)(param_1 + 0x18) = pcVar13 + 1;
    return local_8;
  }
  goto LAB_00107b64;
switchD_00108824_caseD_1:
  cVar2 = *pcVar10;
  if (((cVar2 == 'm') || (cVar2 == 'p')) && (pcVar10[1] == cVar2)) {
    if (**(char **)(param_1 + 0x18) != '_') {
      piVar4 = FUN_0010c44c(param_1);
      piVar4 = (int *)FUN_00106b30(param_1,0x38,(long)piVar4,(long)piVar4);
      uVar9 = 0x36;
      goto LAB_001082d8;
    }
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  }
switchD_001086b8_caseD_1:
  piVar4 = FUN_0010c44c(param_1);
LAB_001082d0:
  uVar9 = 0x36;
LAB_001082d8:
  piVar7 = (int *)FUN_00106b30(param_1,uVar9,(long)piVar7,(long)piVar4);
  pcVar10 = *(char **)(param_1 + 0x18);
  cVar2 = *pcVar10;
  goto LAB_001082ec;
switchD_001087a0_caseD_1:
  cVar2 = *pcVar10;
  if (((cVar2 == 'm') || (cVar2 == 'p')) && (pcVar10[1] == cVar2)) {
    if (**(char **)(param_1 + 0x18) != '_') {
      piVar4 = FUN_0010c44c(param_1);
      piVar4 = (int *)FUN_00106b30(param_1,0x38,(long)piVar4,(long)piVar4);
      goto LAB_0010838c;
    }
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  }
  goto switchD_00108738_caseD_1;
}



long FUN_00108fe0(long param_1,char param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  long *plVar10;
  char **ppcVar11;
  long local_8;
  
  pcVar9 = *(char **)(param_1 + 0x18);
  plVar10 = &local_8;
  local_8 = 0;
  if (*pcVar9 == param_2) {
    *(char **)(param_1 + 0x18) = pcVar9 + 1;
    lVar6 = FUN_00106b30(param_1,0x2e,0,0);
    return lVar6;
  }
  do {
    uVar1 = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x54) = 1;
    cVar2 = *pcVar9;
    if (cVar2 == 'L') {
      piVar4 = (int *)FUN_0010c2d4(param_1);
LAB_001091a4:
      *(undefined4 *)(param_1 + 0x54) = uVar1;
      if (piVar4 == (int *)0x0) {
        return 0;
      }
    }
    else {
      if (cVar2 == 'T') {
        piVar4 = (int *)FUN_0010791c(param_1);
        goto LAB_001091a4;
      }
      if (cVar2 == 's') {
        if (pcVar9[1] == 'r') {
          *(char **)(param_1 + 0x18) = pcVar9 + 2;
          piVar4 = FUN_00109734(param_1);
          piVar5 = FUN_0010b0e0(param_1);
          if (**(char **)(param_1 + 0x18) == 'I') {
            lVar6 = FUN_00107af4(param_1);
            piVar5 = (int *)FUN_00106b30(param_1,4,(long)piVar5,lVar6);
          }
          piVar4 = (int *)FUN_00106b30(param_1,1,(long)piVar4,(long)piVar5);
        }
        else {
          if (pcVar9[1] != 'p') goto LAB_00109094;
          *(char **)(param_1 + 0x18) = pcVar9 + 2;
          piVar4 = FUN_0010c44c(param_1);
          piVar4 = (int *)FUN_00106b30(param_1,0x4a,(long)piVar4,0);
        }
        goto LAB_001091a4;
      }
      if (cVar2 == 'f') {
        if (pcVar9[1] != 'p') goto LAB_00109094;
        *(char **)(param_1 + 0x18) = pcVar9 + 2;
        if (pcVar9[2] == 'T') {
          lVar6 = 0;
          *(char **)(param_1 + 0x18) = pcVar9 + 3;
        }
        else {
          lVar6 = FUN_001077ec(param_1);
          iVar3 = (int)lVar6 + 1;
          if (iVar3 == 0) goto switchD_00109338_caseD_4;
          lVar6 = (long)iVar3;
        }
        iVar3 = *(int *)(param_1 + 0x28);
        if (*(int *)(param_1 + 0x2c) <= iVar3) goto switchD_00109338_caseD_4;
        *(int *)(param_1 + 0x28) = iVar3 + 1;
        piVar4 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar3 * 0x18);
        if (piVar4 == (int *)0x0) goto switchD_00109338_caseD_4;
        *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar3 * 0x18) = 6;
        *(long *)(piVar4 + 2) = lVar6;
      }
      else {
        if (9 < (byte)(cVar2 - 0x30U)) {
          if (cVar2 == 'o') {
            if (pcVar9[1] == 'n') {
              *(char **)(param_1 + 0x18) = pcVar9 + 2;
              goto LAB_00109108;
            }
          }
          else if (((cVar2 == 't') || (cVar2 == 'i')) && (pcVar9[1] == 'l')) {
            piVar4 = (int *)0x0;
            if (cVar2 == 't') {
              piVar4 = FUN_00109734(param_1);
              pcVar9 = *(char **)(param_1 + 0x18);
            }
            *(char **)(param_1 + 0x18) = pcVar9 + 2;
            lVar6 = FUN_00108fe0(param_1,'E');
            piVar4 = (int *)FUN_00106b30(param_1,0x30,(long)piVar4,lVar6);
            goto LAB_001091a4;
          }
LAB_00109094:
          piVar4 = (int *)FUN_0010aeec(param_1);
          if (piVar4 == (int *)0x0) goto switchD_00109338_caseD_4;
          iVar3 = *piVar4;
          if (iVar3 == 0x31) {
            ppcVar11 = *(char ***)(piVar4 + 2);
            pcVar9 = *ppcVar11;
            *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(ppcVar11 + 2) + -2;
            iVar3 = strcmp(pcVar9,"st");
            if (iVar3 != 0) {
              switch(*(undefined4 *)((long)ppcVar11 + 0x14)) {
              case 0:
                goto switchD_00109338_caseD_0;
              case 1:
                goto switchD_00109360_caseD_1;
              case 2:
                goto switchD_00109360_caseD_2;
              case 3:
                goto switchD_00109360_caseD_3;
              default:
                goto switchD_00109338_caseD_4;
              }
            }
            piVar5 = FUN_00109734(param_1);
          }
          else {
            if (iVar3 == 0x32) {
              switch(piVar4[2]) {
              case 0:
switchD_00109338_caseD_0:
                piVar4 = (int *)FUN_00106b30(param_1,0x35,(long)piVar4,0);
                goto LAB_001091a4;
              case 1:
                goto switchD_00109338_caseD_1;
              case 2:
                pcVar9 = (char *)0x0;
switchD_00109360_caseD_2:
                if (((**(char ***)(piVar4 + 2))[1] == 'c') &&
                   ((cVar2 = ***(char ***)(piVar4 + 2), (byte)(cVar2 + 0x8eU) < 2 ||
                    ((byte)(cVar2 + 0x9dU) < 2)))) {
                  piVar5 = FUN_00109734(param_1);
                }
                else {
                  piVar5 = FUN_0010c44c(param_1);
                }
                iVar3 = strcmp(pcVar9,"cl");
                if (iVar3 == 0) {
                  piVar7 = (int *)FUN_00108fe0(param_1,'E');
                }
                else {
                  iVar3 = strcmp(pcVar9,"dt");
                  if ((iVar3 == 0) || (iVar3 = strcmp(pcVar9,"pt"), iVar3 == 0)) {
                    piVar7 = FUN_0010b0e0(param_1);
                    if (**(char **)(param_1 + 0x18) == 'I') {
                      lVar6 = FUN_00107af4(param_1);
                      piVar7 = (int *)FUN_00106b30(param_1,4,(long)piVar7,lVar6);
                    }
                  }
                  else {
                    piVar7 = FUN_0010c44c(param_1);
                  }
                }
                lVar6 = FUN_00106b30(param_1,0x38,(long)piVar5,(long)piVar7);
                piVar4 = (int *)FUN_00106b30(param_1,0x37,(long)piVar4,lVar6);
                goto LAB_001091a4;
              case 3:
                pcVar9 = (char *)0x0;
switchD_00109360_caseD_3:
                iVar3 = strcmp(pcVar9,"qu");
                if (iVar3 == 0) {
                  piVar5 = FUN_0010c44c(param_1);
                  piVar7 = FUN_0010c44c(param_1);
                  piVar8 = FUN_0010c44c(param_1);
                }
                else {
                  if ((*pcVar9 != 'n') || ((pcVar9[1] != 'a' && (pcVar9[1] != 'w'))))
                  goto switchD_00109338_caseD_4;
                  piVar5 = (int *)FUN_00108fe0(param_1,'_');
                  piVar7 = FUN_00109734(param_1);
                  pcVar9 = *(char **)(param_1 + 0x18);
                  cVar2 = *pcVar9;
                  if (cVar2 == 'E') {
                    piVar8 = (int *)0x0;
                    *(char **)(param_1 + 0x18) = pcVar9 + 1;
                  }
                  else if (cVar2 == 'p') {
                    if (pcVar9[1] != 'i') goto switchD_00109338_caseD_4;
                    *(char **)(param_1 + 0x18) = pcVar9 + 2;
                    piVar8 = (int *)FUN_00108fe0(param_1,'E');
                  }
                  else {
                    if ((cVar2 != 'i') || (pcVar9[1] != 'l')) {
switchD_00109338_caseD_4:
                      *(undefined4 *)(param_1 + 0x54) = uVar1;
                      return 0;
                    }
                    piVar8 = FUN_0010c44c(param_1);
                  }
                }
                lVar6 = FUN_00106b30(param_1,0x3b,(long)piVar7,(long)piVar8);
                lVar6 = FUN_00106b30(param_1,0x3a,(long)piVar5,lVar6);
                piVar4 = (int *)FUN_00106b30(param_1,0x39,(long)piVar4,lVar6);
                goto LAB_001091a4;
              default:
                goto switchD_00109338_caseD_4;
              }
            }
            if (iVar3 != 0x33) goto switchD_00109338_caseD_4;
            if (**(char **)(param_1 + 0x18) == '_') {
              *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
              piVar5 = (int *)FUN_00108fe0(param_1,'E');
              goto LAB_001090dc;
            }
switchD_00109338_caseD_1:
            piVar5 = FUN_0010c44c(param_1);
          }
LAB_001090dc:
          piVar4 = (int *)FUN_00106b30(param_1,0x36,(long)piVar4,(long)piVar5);
          goto LAB_001091a4;
        }
LAB_00109108:
        piVar4 = FUN_0010b0e0(param_1);
        if (piVar4 == (int *)0x0) goto switchD_00109338_caseD_4;
        if (**(char **)(param_1 + 0x18) == 'I') {
          lVar6 = FUN_00107af4(param_1);
          piVar4 = (int *)FUN_00106b30(param_1,4,(long)piVar4,lVar6);
          goto LAB_001091a4;
        }
      }
      *(undefined4 *)(param_1 + 0x54) = uVar1;
    }
    lVar6 = FUN_00106b30(param_1,0x2e,(long)piVar4,0);
    *plVar10 = lVar6;
    if (lVar6 == 0) {
      return 0;
    }
    pcVar9 = *(char **)(param_1 + 0x18);
    plVar10 = (long *)(lVar6 + 0x10);
    if (*pcVar9 == param_2) {
      *(char **)(param_1 + 0x18) = pcVar9 + 1;
      return local_8;
    }
  } while( true );
switchD_00109360_caseD_1:
  cVar2 = *pcVar9;
  if (((cVar2 == 'm') || (cVar2 == 'p')) && (pcVar9[1] == cVar2)) {
    if (**(char **)(param_1 + 0x18) != '_') {
      piVar5 = FUN_0010c44c(param_1);
      piVar5 = (int *)FUN_00106b30(param_1,0x38,(long)piVar5,(long)piVar5);
      goto LAB_001090dc;
    }
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  }
  goto switchD_00109338_caseD_1;
}



int * FUN_00109734(long param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  byte bVar7;
  char cVar8;
  code *UNRECOVERED_JUMPTABLE_00;
  uint uVar9;
  int iVar10;
  int **ppiVar11;
  int *piVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  int *piVar16;
  ushort uVar17;
  int *piVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  char *pcVar22;
  int *local_8;
  
  pbVar20 = *(byte **)(param_1 + 0x18);
  bVar7 = *pbVar20;
  if ((bVar7 == 0x56 || bVar7 == 0x72) || (uVar9 = (uint)bVar7, uVar9 == 0x4b)) {
    ppiVar11 = FUN_00106c30(param_1,&local_8,0);
    if (ppiVar11 == (int **)0x0) {
      return (int *)0x0;
    }
    if (**(char **)(param_1 + 0x18) == 'F') {
      piVar12 = (int *)FUN_0010cab4(param_1);
      *ppiVar11 = piVar12;
    }
    else {
      piVar12 = FUN_00109734(param_1);
      *ppiVar11 = piVar12;
    }
    if (piVar12 == (int *)0x0) {
      return (int *)0x0;
    }
    if (*piVar12 - 0x1fU < 2) {
      piVar18 = *(int **)(piVar12 + 2);
      *(int **)(piVar12 + 2) = local_8;
      local_8 = *ppiVar11;
      *ppiVar11 = piVar18;
    }
    if (local_8 == (int *)0x0) {
      return (int *)0x0;
    }
    iVar10 = *(int *)(param_1 + 0x38);
    if (*(int *)(param_1 + 0x3c) <= iVar10) {
      return (int *)0x0;
    }
    *(int **)(*(long *)(param_1 + 0x30) + (long)iVar10 * 8) = local_8;
    *(int *)(param_1 + 0x38) = iVar10 + 1;
    return local_8;
  }
  switch(uVar9) {
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x4e:
  case 0x5a:
    local_8 = FUN_0010b664(param_1);
    break;
  default:
    goto switchD_001097b0_caseD_3a;
  case 0x41:
    pbVar19 = pbVar20 + 1;
    *(byte **)(param_1 + 0x18) = pbVar19;
    if (pbVar20[1] == 0x5f) {
      piVar12 = (int *)0x0;
    }
    else {
      if ((byte)(pbVar20[1] - 0x30) < 10) {
        pbVar20 = pbVar20 + 2;
        do {
          pbVar21 = pbVar20;
          *(byte **)(param_1 + 0x18) = pbVar21;
          pbVar20 = pbVar21 + 1;
        } while ((byte)(*pbVar21 - 0x30) < 10);
        piVar12 = (int *)FUN_00106bd0(param_1,(long)pbVar19,(int)pbVar21 - (int)pbVar19);
joined_r0x0010a20c:
        if (piVar12 == (int *)0x0) goto LAB_00109958;
        pbVar19 = *(byte **)(param_1 + 0x18);
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 0x54);
        *(undefined4 *)(param_1 + 0x54) = 1;
        bVar7 = pbVar20[1];
        if (bVar7 == 0x4c) {
          piVar12 = (int *)FUN_0010c2d4(param_1);
LAB_0010a208:
          *(undefined4 *)(param_1 + 0x54) = uVar2;
          goto joined_r0x0010a20c;
        }
        if (bVar7 == 0x54) {
          piVar12 = (int *)FUN_0010791c(param_1);
          goto LAB_0010a208;
        }
        if (bVar7 == 0x73) {
          if (pbVar20[2] == 0x72) {
            *(byte **)(param_1 + 0x18) = pbVar20 + 3;
            piVar12 = FUN_00109734(param_1);
            piVar18 = FUN_0010b0e0(param_1);
            if (**(char **)(param_1 + 0x18) == 'I') {
              lVar13 = FUN_00107af4(param_1);
              lVar13 = FUN_00106b30(param_1,4,(long)piVar18,lVar13);
              piVar12 = (int *)FUN_00106b30(param_1,1,(long)piVar12,lVar13);
            }
            else {
              piVar12 = (int *)FUN_00106b30(param_1,1,(long)piVar12,(long)piVar18);
            }
          }
          else {
            if (pbVar20[2] != 0x70) goto LAB_0010a1ac;
            *(byte **)(param_1 + 0x18) = pbVar20 + 3;
            piVar12 = FUN_0010c44c(param_1);
            piVar12 = (int *)FUN_00106b30(param_1,0x4a,(long)piVar12,0);
          }
          goto LAB_0010a208;
        }
        if (bVar7 != 0x66) {
          if ((byte)(bVar7 - 0x30) < 10) {
LAB_0010a280:
            piVar12 = FUN_0010b0e0(param_1);
            if (piVar12 != (int *)0x0) {
              pbVar19 = *(byte **)(param_1 + 0x18);
              if (*pbVar19 != 0x49) {
                *(undefined4 *)(param_1 + 0x54) = uVar2;
                goto LAB_00109948;
              }
              lVar13 = FUN_00107af4(param_1);
              piVar12 = (int *)FUN_00106b30(param_1,4,(long)piVar12,lVar13);
              goto LAB_0010a208;
            }
          }
          else {
            if (bVar7 == 0x6f) {
              if (pbVar20[2] == 0x6e) {
                *(byte **)(param_1 + 0x18) = pbVar20 + 3;
                goto LAB_0010a280;
              }
            }
            else if (((bVar7 == 0x74) || (bVar7 == 0x69)) && (pbVar20[2] == 0x6c)) {
              piVar12 = (int *)0x0;
              if (bVar7 == 0x74) {
                piVar12 = FUN_00109734(param_1);
              }
              *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 2;
              lVar13 = FUN_00108fe0(param_1,'E');
              piVar12 = (int *)FUN_00106b30(param_1,0x30,(long)piVar12,lVar13);
              goto LAB_0010a208;
            }
LAB_0010a1ac:
            piVar12 = (int *)FUN_0010aeec(param_1);
            if (piVar12 != (int *)0x0) {
              iVar10 = *piVar12;
              if (iVar10 == 0x31) {
                pcVar22 = **(char ***)(piVar12 + 2);
                *(int *)(param_1 + 0x50) =
                     *(int *)(param_1 + 0x50) + *(int *)(*(char ***)(piVar12 + 2) + 2) + -2;
                iVar10 = strcmp(pcVar22,"st");
                if (iVar10 == 0) {
                  piVar18 = FUN_00109734(param_1);
LAB_0010a1f4:
                  piVar12 = (int *)FUN_00106b30(param_1,0x36,(long)piVar12,(long)piVar18);
                  goto LAB_0010a208;
                }
                switch(*(undefined4 *)(*(long *)(piVar12 + 2) + 0x14)) {
                case 0:
                  goto switchD_0010a544_caseD_0;
                case 1:
                  cVar8 = *pcVar22;
                  if (((cVar8 == 'm') || (cVar8 == 'p')) && (pcVar22[1] == cVar8)) {
                    if (**(char **)(param_1 + 0x18) != '_') {
                      piVar18 = FUN_0010c44c(param_1);
                      piVar18 = (int *)FUN_00106b30(param_1,0x38,(long)piVar18,(long)piVar18);
                      goto LAB_0010a1f4;
                    }
                    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                  }
                  goto switchD_0010a544_caseD_1;
                case 2:
                  goto switchD_0010a770_caseD_2;
                case 3:
                  goto switchD_0010a770_caseD_3;
                }
              }
              else if (iVar10 == 0x32) {
                switch(piVar12[2]) {
                case 0:
switchD_0010a544_caseD_0:
                  piVar12 = (int *)FUN_00106b30(param_1,0x35,(long)piVar12,0);
                  goto LAB_0010a208;
                case 1:
                  goto switchD_0010a544_caseD_1;
                case 2:
                  pcVar22 = (char *)0x0;
switchD_0010a770_caseD_2:
                  if (((**(char ***)(piVar12 + 2))[1] == 'c') &&
                     ((cVar8 = ***(char ***)(piVar12 + 2), (byte)(cVar8 + 0x8eU) < 2 ||
                      ((byte)(cVar8 + 0x9dU) < 2)))) {
                    piVar18 = FUN_00109734(param_1);
                  }
                  else {
                    piVar18 = FUN_0010c44c(param_1);
                  }
                  iVar10 = strcmp(pcVar22,"cl");
                  if (iVar10 == 0) {
                    piVar15 = (int *)FUN_00108fe0(param_1,'E');
                  }
                  else {
                    iVar10 = strcmp(pcVar22,"dt");
                    if ((iVar10 == 0) || (iVar10 = strcmp(pcVar22,"pt"), iVar10 == 0)) {
                      piVar15 = FUN_0010b0e0(param_1);
                      if (**(char **)(param_1 + 0x18) == 'I') {
                        lVar13 = FUN_00107af4(param_1);
                        piVar15 = (int *)FUN_00106b30(param_1,4,(long)piVar15,lVar13);
                      }
                    }
                    else {
                      piVar15 = FUN_0010c44c(param_1);
                    }
                  }
                  lVar13 = FUN_00106b30(param_1,0x38,(long)piVar18,(long)piVar15);
                  piVar12 = (int *)FUN_00106b30(param_1,0x37,(long)piVar12,lVar13);
                  goto LAB_0010a208;
                case 3:
                  pcVar22 = (char *)0x0;
switchD_0010a770_caseD_3:
                  iVar10 = strcmp(pcVar22,"qu");
                  if (iVar10 == 0) {
                    piVar18 = FUN_0010c44c(param_1);
                    piVar15 = FUN_0010c44c(param_1);
                    piVar16 = FUN_0010c44c(param_1);
LAB_0010a5ec:
                    lVar13 = FUN_00106b30(param_1,0x3b,(long)piVar15,(long)piVar16);
                    lVar13 = FUN_00106b30(param_1,0x3a,(long)piVar18,lVar13);
                    piVar12 = (int *)FUN_00106b30(param_1,0x39,(long)piVar12,lVar13);
                    goto LAB_0010a208;
                  }
                  if ((*pcVar22 == 'n') && ((pcVar22[1] == 'a' || (pcVar22[1] == 'w')))) {
                    piVar18 = (int *)FUN_00108fe0(param_1,'_');
                    piVar15 = FUN_00109734(param_1);
                    pcVar22 = *(char **)(param_1 + 0x18);
                    cVar8 = *pcVar22;
                    if (cVar8 == 'E') {
                      piVar16 = (int *)0x0;
                      *(char **)(param_1 + 0x18) = pcVar22 + 1;
                      goto LAB_0010a5ec;
                    }
                    if (cVar8 == 'p') {
                      if (pcVar22[1] == 'i') {
                        *(char **)(param_1 + 0x18) = pcVar22 + 2;
                        piVar16 = (int *)FUN_00108fe0(param_1,'E');
                        goto LAB_0010a5ec;
                      }
                    }
                    else if ((cVar8 == 'i') && (pcVar22[1] == 'l')) {
                      piVar16 = FUN_0010c44c(param_1);
                      goto LAB_0010a5ec;
                    }
                  }
                }
              }
              else if (iVar10 == 0x33) {
                if (**(char **)(param_1 + 0x18) == '_') {
                  *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                  piVar18 = (int *)FUN_00108fe0(param_1,'E');
                  goto LAB_0010a1f4;
                }
switchD_0010a544_caseD_1:
                piVar18 = FUN_0010c44c(param_1);
                goto LAB_0010a1f4;
              }
            }
          }
switchD_0010a544_caseD_4:
          *(undefined4 *)(param_1 + 0x54) = uVar2;
          goto LAB_00109958;
        }
        if (pbVar20[2] != 0x70) goto LAB_0010a1ac;
        *(byte **)(param_1 + 0x18) = pbVar20 + 3;
        if (pbVar20[3] == 0x54) {
          iVar10 = 0;
          *(byte **)(param_1 + 0x18) = pbVar20 + 4;
        }
        else {
          lVar13 = FUN_001077ec(param_1);
          iVar10 = (int)lVar13 + 1;
          if (iVar10 == 0) goto switchD_0010a544_caseD_4;
        }
        iVar6 = *(int *)(param_1 + 0x28);
        if (*(int *)(param_1 + 0x2c) <= iVar6) goto switchD_0010a544_caseD_4;
        *(int *)(param_1 + 0x28) = iVar6 + 1;
        piVar12 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar6 * 0x18);
        if (piVar12 == (int *)0x0) goto switchD_0010a544_caseD_4;
        *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar6 * 0x18) = 6;
        *(long *)(piVar12 + 2) = (long)iVar10;
        *(undefined4 *)(param_1 + 0x54) = uVar2;
        pbVar19 = *(byte **)(param_1 + 0x18);
      }
LAB_00109948:
      if (*pbVar19 != 0x5f) goto LAB_00109958;
    }
    *(byte **)(param_1 + 0x18) = pbVar19 + 1;
    piVar18 = FUN_00109734(param_1);
    local_8 = (int *)FUN_00106b30(param_1,0x2a,(long)piVar12,(long)piVar18);
    break;
  case 0x43:
    *(byte **)(param_1 + 0x18) = pbVar20 + 1;
    piVar12 = FUN_00109734(param_1);
    local_8 = (int *)FUN_00106b30(param_1,0x25,(long)piVar12,0);
    break;
  case 0x44:
    *(byte **)(param_1 + 0x18) = pbVar20 + 1;
    if (pbVar20[1] == 0) {
      return (int *)0x0;
    }
    *(byte **)(param_1 + 0x18) = pbVar20 + 2;
    switch(pbVar20[1]) {
    case 0x46:
      iVar10 = *(int *)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x2c) <= iVar10) {
        uRam0000000000000000 = 0;
                    // WARNING: Treating indirect jump as call
        UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1000,0x10a26c);
        piVar12 = (int *)(*UNRECOVERED_JUMPTABLE_00)();
        return piVar12;
      }
      *(int *)(param_1 + 0x28) = iVar10 + 1;
      local_8 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18);
      *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18) = 0x2c;
      bVar1 = (byte)(pbVar20[2] - 0x30) < 10;
      *(ushort *)(local_8 + 4) = (ushort)bVar1;
      if (bVar1) {
        FUN_001071e4((byte **)(param_1 + 0x18));
      }
      piVar12 = local_8;
      piVar18 = FUN_00109734(param_1);
      *(int **)(piVar12 + 2) = piVar18;
      if (*(long *)(local_8 + 2) == 0) {
        return (int *)0x0;
      }
      FUN_001071e4((byte **)(param_1 + 0x18));
      pcVar22 = *(char **)(param_1 + 0x18);
      uVar17 = 0;
      if (*pcVar22 != '\0') {
        *(char **)(param_1 + 0x18) = pcVar22 + 1;
        uVar17 = (ushort)(*pcVar22 == 's');
      }
      *(ushort *)((long)local_8 + 0x12) = uVar17;
      return local_8;
    default:
      goto switchD_001097b0_caseD_3a;
    case 0x54:
    case 0x74:
      uVar2 = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x54) = 1;
      bVar7 = pbVar20[2];
      if (bVar7 == 0x4c) {
        piVar12 = (int *)FUN_0010c2d4(param_1);
      }
      else if (bVar7 == 0x54) {
        piVar12 = (int *)FUN_0010791c(param_1);
      }
      else if (bVar7 == 0x73) {
        if (pbVar20[3] == 0x72) {
          *(byte **)(param_1 + 0x18) = pbVar20 + 4;
          piVar12 = FUN_00109734(param_1);
          piVar18 = FUN_0010b0e0(param_1);
          if (**(char **)(param_1 + 0x18) == 'I') {
            lVar13 = FUN_00107af4(param_1);
            lVar13 = FUN_00106b30(param_1,4,(long)piVar18,lVar13);
            piVar12 = (int *)FUN_00106b30(param_1,1,(long)piVar12,lVar13);
          }
          else {
            piVar12 = (int *)FUN_00106b30(param_1,1,(long)piVar12,(long)piVar18);
          }
        }
        else {
          if (pbVar20[3] != 0x70) goto LAB_00109f90;
          *(byte **)(param_1 + 0x18) = pbVar20 + 4;
          piVar12 = FUN_0010c44c(param_1);
          piVar12 = (int *)FUN_00106b30(param_1,0x4a,(long)piVar12,0);
        }
      }
      else if (bVar7 == 0x66) {
        if (pbVar20[3] != 0x70) goto LAB_00109f90;
        *(byte **)(param_1 + 0x18) = pbVar20 + 4;
        if (pbVar20[4] == 0x54) {
          iVar10 = 0;
          *(byte **)(param_1 + 0x18) = pbVar20 + 5;
        }
        else {
          lVar13 = FUN_001077ec(param_1);
          iVar10 = (int)lVar13 + 1;
          if (iVar10 == 0) goto LAB_0010a800;
        }
        iVar6 = *(int *)(param_1 + 0x28);
        if (*(int *)(param_1 + 0x2c) <= iVar6) goto LAB_0010a800;
        *(int *)(param_1 + 0x28) = iVar6 + 1;
        piVar18 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar6 * 0x18);
        piVar12 = (int *)0x0;
        if (piVar18 != (int *)0x0) {
          *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar6 * 0x18) = 6;
          *(long *)(piVar18 + 2) = (long)iVar10;
          piVar12 = piVar18;
        }
      }
      else {
        if ((byte)(bVar7 - 0x30) < 10) {
LAB_0010a398:
          piVar12 = FUN_0010b0e0(param_1);
          if (piVar12 != (int *)0x0) {
            if (**(char **)(param_1 + 0x18) == 'I') {
              lVar13 = FUN_00107af4(param_1);
              piVar12 = (int *)FUN_00106b30(param_1,4,(long)piVar12,lVar13);
            }
            goto switchD_0010aa04_caseD_4;
          }
        }
        else {
          if (bVar7 == 0x6f) {
            if (pbVar20[3] == 0x6e) {
              *(byte **)(param_1 + 0x18) = pbVar20 + 4;
              goto LAB_0010a398;
            }
          }
          else if (((bVar7 == 0x74) || (bVar7 == 0x69)) && (pbVar20[3] == 0x6c)) {
            piVar12 = (int *)0x0;
            if (bVar7 == 0x74) {
              piVar12 = FUN_00109734(param_1);
            }
            *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 2;
            lVar13 = FUN_00108fe0(param_1,'E');
            piVar12 = (int *)FUN_00106b30(param_1,0x30,(long)piVar12,lVar13);
            goto switchD_0010aa04_caseD_4;
          }
LAB_00109f90:
          piVar18 = (int *)FUN_0010aeec(param_1);
          if (piVar18 != (int *)0x0) {
            iVar10 = *piVar18;
            if (iVar10 == 0x31) {
              pcVar22 = **(char ***)(piVar18 + 2);
              *(int *)(param_1 + 0x50) =
                   *(int *)(param_1 + 0x50) + *(int *)(*(char ***)(piVar18 + 2) + 2) + -2;
              iVar10 = strcmp(pcVar22,"st");
              if (iVar10 != 0) {
                piVar12 = (int *)0x0;
                switch(*(undefined4 *)(*(long *)(piVar18 + 2) + 0x14)) {
                case 0:
                  goto switchD_0010aa04_caseD_0;
                case 1:
                  goto switchD_0010a7ec_caseD_1;
                case 2:
                  goto switchD_0010a7ec_caseD_2;
                case 3:
                  goto switchD_0010a7ec_caseD_3;
                default:
                  goto switchD_0010aa04_caseD_4;
                }
              }
              piVar12 = FUN_00109734(param_1);
            }
            else {
              if (iVar10 == 0x32) {
                piVar12 = (int *)0x0;
                switch(piVar18[2]) {
                case 0:
switchD_0010aa04_caseD_0:
                  piVar12 = (int *)FUN_00106b30(param_1,0x35,(long)piVar18,0);
                  break;
                case 1:
                  goto switchD_0010aa04_caseD_1;
                case 2:
                  pcVar22 = (char *)0x0;
switchD_0010a7ec_caseD_2:
                  if (((**(char ***)(piVar18 + 2))[1] == 'c') &&
                     ((cVar8 = ***(char ***)(piVar18 + 2), (byte)(cVar8 + 0x8eU) < 2 ||
                      ((byte)(cVar8 + 0x9dU) < 2)))) {
                    piVar12 = FUN_00109734(param_1);
                  }
                  else {
                    piVar12 = FUN_0010c44c(param_1);
                  }
                  iVar10 = strcmp(pcVar22,"cl");
                  if (iVar10 == 0) {
                    piVar15 = (int *)FUN_00108fe0(param_1,'E');
                  }
                  else {
                    iVar10 = strcmp(pcVar22,"dt");
                    if ((iVar10 == 0) || (iVar10 = strcmp(pcVar22,"pt"), iVar10 == 0)) {
                      piVar15 = FUN_0010b0e0(param_1);
                      if (**(char **)(param_1 + 0x18) == 'I') {
                        lVar13 = FUN_00107af4(param_1);
                        piVar15 = (int *)FUN_00106b30(param_1,4,(long)piVar15,lVar13);
                      }
                    }
                    else {
                      piVar15 = FUN_0010c44c(param_1);
                    }
                  }
                  lVar13 = FUN_00106b30(param_1,0x38,(long)piVar12,(long)piVar15);
                  piVar12 = (int *)FUN_00106b30(param_1,0x37,(long)piVar18,lVar13);
                  break;
                case 3:
                  pcVar22 = (char *)0x0;
switchD_0010a7ec_caseD_3:
                  iVar10 = strcmp(pcVar22,"qu");
                  if (iVar10 == 0) {
                    piVar12 = FUN_0010c44c(param_1);
                    piVar15 = FUN_0010c44c(param_1);
                    piVar16 = FUN_0010c44c(param_1);
                  }
                  else {
                    if ((*pcVar22 != 'n') || ((pcVar22[1] != 'a' && (pcVar22[1] != 'w'))))
                    goto LAB_0010a800;
                    piVar12 = (int *)FUN_00108fe0(param_1,'_');
                    piVar15 = FUN_00109734(param_1);
                    pcVar22 = *(char **)(param_1 + 0x18);
                    cVar8 = *pcVar22;
                    if (cVar8 != 'E') {
                      if (cVar8 == 'p') {
                        if (pcVar22[1] == 'i') {
                          *(char **)(param_1 + 0x18) = pcVar22 + 2;
                          piVar16 = (int *)FUN_00108fe0(param_1,'E');
                          goto LAB_0010aba4;
                        }
                      }
                      else if ((cVar8 == 'i') && (pcVar22[1] == 'l')) {
                        piVar16 = FUN_0010c44c(param_1);
                        goto LAB_0010aba4;
                      }
                      goto LAB_0010a800;
                    }
                    piVar16 = (int *)0x0;
                    *(char **)(param_1 + 0x18) = pcVar22 + 1;
                  }
LAB_0010aba4:
                  lVar13 = FUN_00106b30(param_1,0x3b,(long)piVar15,(long)piVar16);
                  lVar13 = FUN_00106b30(param_1,0x3a,(long)piVar12,lVar13);
                  piVar12 = (int *)FUN_00106b30(param_1,0x39,(long)piVar18,lVar13);
                }
                goto switchD_0010aa04_caseD_4;
              }
              if (iVar10 != 0x33) goto LAB_0010a800;
              if (**(char **)(param_1 + 0x18) == '_') {
                *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                piVar12 = (int *)FUN_00108fe0(param_1,'E');
                goto LAB_00109fd8;
              }
switchD_0010aa04_caseD_1:
              piVar12 = FUN_0010c44c(param_1);
            }
LAB_00109fd8:
            piVar12 = (int *)FUN_00106b30(param_1,0x36,(long)piVar18,(long)piVar12);
            goto switchD_0010aa04_caseD_4;
          }
        }
LAB_0010a800:
        piVar12 = (int *)0x0;
      }
switchD_0010aa04_caseD_4:
      *(undefined4 *)(param_1 + 0x54) = uVar2;
      local_8 = (int *)FUN_00106b30(param_1,0x42,(long)piVar12,0);
      if (local_8 == (int *)0x0) {
        return (int *)0x0;
      }
      pcVar22 = *(char **)(param_1 + 0x18);
      if (*pcVar22 == '\0') {
        return (int *)0x0;
      }
      *(char **)(param_1 + 0x18) = pcVar22 + 1;
      if (*pcVar22 != 'E') {
        return (int *)0x0;
      }
      goto LAB_00109898;
    case 0x61:
      piVar12 = (int *)FUN_00106bd0(param_1,(long)&DAT_001185a0,4);
      return piVar12;
    case 100:
      iVar10 = *(int *)(param_1 + 0x28);
      if (iVar10 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar10 + 1;
        piVar12 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18);
        if (piVar12 != (int *)0x0) {
          *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18) = 0x27;
          *(undefined ***)(piVar12 + 2) = &PTR_s_decimal64_0012d0b0;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 9;
          return piVar12;
        }
      }
      break;
    case 0x65:
      iVar10 = *(int *)(param_1 + 0x28);
      if (iVar10 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar10 + 1;
        piVar12 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18);
        if (piVar12 != (int *)0x0) {
          *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18) = 0x27;
          *(undefined ***)(piVar12 + 2) = &PTR_s_decimal128_0012d0d0;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 10;
          return piVar12;
        }
      }
      break;
    case 0x66:
      iVar10 = *(int *)(param_1 + 0x28);
      if (iVar10 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar10 + 1;
        piVar12 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18);
        if (piVar12 != (int *)0x0) {
          *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18) = 0x27;
          *(undefined ***)(piVar12 + 2) = &PTR_s_decimal32_0012d090;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 9;
          return piVar12;
        }
      }
      break;
    case 0x68:
      iVar10 = *(int *)(param_1 + 0x28);
      if (iVar10 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar10 + 1;
        piVar12 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18);
        if (piVar12 != (int *)0x0) {
          *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18) = 0x27;
          *(undefined ***)(piVar12 + 2) = &PTR_DAT_0012d0f0;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 4;
          return piVar12;
        }
      }
      break;
    case 0x69:
      iVar10 = *(int *)(param_1 + 0x28);
      if (iVar10 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar10 + 1;
        piVar12 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18);
        if (piVar12 != (int *)0x0) {
          *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18) = 0x27;
          *(undefined ***)(piVar12 + 2) = &PTR_s_char32_t_0012d130;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 8;
          return piVar12;
        }
      }
      break;
    case 0x6e:
      iVar10 = *(int *)(param_1 + 0x28);
      if (iVar10 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar10 + 1;
        piVar12 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18);
        if (piVar12 != (int *)0x0) {
          *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18) = 0x27;
          *(undefined ***)(piVar12 + 2) = &PTR_s_decltype_nullptr__0012d150;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0x11;
          return piVar12;
        }
      }
      break;
    case 0x70:
      piVar12 = FUN_00109734(param_1);
      local_8 = (int *)FUN_00106b30(param_1,0x4a,(long)piVar12,0);
      goto LAB_00109894;
    case 0x73:
      iVar10 = *(int *)(param_1 + 0x28);
      if (iVar10 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar10 + 1;
        piVar12 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18);
        if (piVar12 != (int *)0x0) {
          *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18) = 0x27;
          *(undefined ***)(piVar12 + 2) = &PTR_s_char16_t_0012d110;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 8;
          return piVar12;
        }
      }
      break;
    case 0x76:
      local_8 = (int *)FUN_0010cbe4(param_1);
      goto LAB_00109894;
    }
LAB_0010a0d8:
    local_8 = (int *)0x0;
                    // WARNING: Treating indirect jump as call
    UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1000,0x10a0e8);
    piVar12 = (int *)(*UNRECOVERED_JUMPTABLE_00)(uRam0000000000000008);
    return piVar12;
  case 0x46:
    local_8 = (int *)FUN_0010cab4(param_1);
    break;
  case 0x47:
    *(byte **)(param_1 + 0x18) = pbVar20 + 1;
    piVar12 = FUN_00109734(param_1);
    local_8 = (int *)FUN_00106b30(param_1,0x26,(long)piVar12,0);
    break;
  case 0x4d:
    *(byte **)(param_1 + 0x18) = pbVar20 + 1;
    piVar12 = FUN_00109734(param_1);
    if ((piVar12 == (int *)0x0) || (piVar18 = FUN_00109734(param_1), piVar18 == (int *)0x0)) {
LAB_00109958:
      local_8 = (int *)0x0;
    }
    else {
      local_8 = (int *)FUN_00106b30(param_1,0x2b,(long)piVar12,(long)piVar18);
    }
    break;
  case 0x4f:
    *(byte **)(param_1 + 0x18) = pbVar20 + 1;
    piVar12 = FUN_00109734(param_1);
    local_8 = (int *)FUN_00106b30(param_1,0x24,(long)piVar12,0);
    break;
  case 0x50:
    *(byte **)(param_1 + 0x18) = pbVar20 + 1;
    piVar12 = FUN_00109734(param_1);
    local_8 = (int *)FUN_00106b30(param_1,0x22,(long)piVar12,0);
    break;
  case 0x52:
    *(byte **)(param_1 + 0x18) = pbVar20 + 1;
    piVar12 = FUN_00109734(param_1);
    local_8 = (int *)FUN_00106b30(param_1,0x23,(long)piVar12,0);
    break;
  case 0x53:
    bVar7 = pbVar20[1];
    if (((9 < (byte)(bVar7 - 0x30)) && (bVar7 != 0x5f)) && (0x19 < (byte)(bVar7 + 0xbf))) {
      local_8 = FUN_0010b664(param_1);
      if (local_8 == (int *)0x0) {
        return (int *)0x0;
      }
      if (*local_8 == 0x18) {
        return local_8;
      }
      goto LAB_00109898;
    }
    local_8 = (int *)FUN_00106de0(param_1,0);
    if (**(char **)(param_1 + 0x18) != 'I') {
      return local_8;
    }
LAB_00109b40:
    piVar12 = local_8;
    lVar13 = FUN_00107af4(param_1);
    local_8 = (int *)FUN_00106b30(param_1,4,(long)piVar12,lVar13);
    break;
  case 0x54:
    local_8 = (int *)FUN_0010791c(param_1);
    pcVar22 = *(char **)(param_1 + 0x18);
    if (*pcVar22 == 'I') {
      if (*(int *)(param_1 + 0x58) == 0) {
        if (local_8 == (int *)0x0) {
          return (int *)0x0;
        }
        iVar10 = *(int *)(param_1 + 0x38);
        if (*(int *)(param_1 + 0x3c) <= iVar10) {
          return (int *)0x0;
        }
        *(int **)(*(long *)(param_1 + 0x30) + (long)iVar10 * 8) = local_8;
        *(int *)(param_1 + 0x38) = iVar10 + 1;
        goto LAB_00109b40;
      }
      uVar2 = *(undefined4 *)(param_1 + 0x28);
      uVar3 = *(undefined4 *)(param_1 + 0x38);
      uVar4 = *(undefined4 *)(param_1 + 0x40);
      uVar5 = *(undefined4 *)(param_1 + 0x50);
      lVar13 = FUN_00107af4(param_1);
      if (**(char **)(param_1 + 0x18) == 'I') {
        if (local_8 == (int *)0x0) {
          return (int *)0x0;
        }
        iVar10 = *(int *)(param_1 + 0x38);
        if (*(int *)(param_1 + 0x3c) <= iVar10) {
          return (int *)0x0;
        }
        *(int **)(*(long *)(param_1 + 0x30) + (long)iVar10 * 8) = local_8;
        *(int *)(param_1 + 0x38) = iVar10 + 1;
        local_8 = (int *)FUN_00106b30(param_1,4,(long)local_8,lVar13);
      }
      else {
        *(char **)(param_1 + 0x18) = pcVar22;
        *(undefined4 *)(param_1 + 0x28) = uVar2;
        *(undefined4 *)(param_1 + 0x38) = uVar3;
        *(undefined4 *)(param_1 + 0x40) = uVar4;
        *(undefined4 *)(param_1 + 0x50) = uVar5;
      }
    }
    break;
  case 0x55:
    *(byte **)(param_1 + 0x18) = pbVar20 + 1;
    local_8 = (int *)FUN_00107744(param_1);
    piVar12 = FUN_00109734(param_1);
    local_8 = (int *)FUN_00106b30(param_1,0x21,(long)piVar12,(long)local_8);
    break;
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x73:
  case 0x74:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
    iVar10 = *(int *)(param_1 + 0x28);
    uVar14 = -(ulong)(uVar9 - 0x61 >> 0x1f) & 0xffffffe000000000 | (ulong)(uVar9 - 0x61) << 5;
    if (iVar10 < *(int *)(param_1 + 0x2c)) {
      *(int *)(param_1 + 0x28) = iVar10 + 1;
      piVar12 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18);
      if (piVar12 != (int *)0x0) {
        *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18) = 0x27;
        *(ulong *)(piVar12 + 2) = (long)&PTR_s_signed_char_0012cd50 + uVar14;
        iVar10 = *(int *)(&DAT_0012cd58 + uVar14);
        *(byte **)(param_1 + 0x18) = pbVar20 + 1;
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar10;
        return piVar12;
      }
    }
    goto LAB_0010a0d8;
  case 0x75:
    *(byte **)(param_1 + 0x18) = pbVar20 + 1;
    lVar13 = FUN_00107744(param_1);
    local_8 = (int *)FUN_00106b30(param_1,0x28,lVar13,0);
  }
LAB_00109894:
  if (local_8 != (int *)0x0) {
LAB_00109898:
    iVar10 = *(int *)(param_1 + 0x38);
    if (iVar10 < *(int *)(param_1 + 0x3c)) {
      *(int **)(*(long *)(param_1 + 0x30) + (long)iVar10 * 8) = local_8;
      *(int *)(param_1 + 0x38) = iVar10 + 1;
      return local_8;
    }
  }
switchD_001097b0_caseD_3a:
  return (int *)0x0;
switchD_0010a7ec_caseD_1:
  cVar8 = *pcVar22;
  if (((cVar8 == 'm') || (cVar8 == 'p')) && (pcVar22[1] == cVar8)) {
    if (**(char **)(param_1 + 0x18) != '_') {
      piVar12 = FUN_0010c44c(param_1);
      piVar12 = (int *)FUN_00106b30(param_1,0x38,(long)piVar12,(long)piVar12);
      goto LAB_00109fd8;
    }
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  }
  goto switchD_0010aa04_caseD_1;
}



long FUN_0010addc(long param_1)

{
  char cVar1;
  long lVar2;
  int *piVar3;
  char *pcVar4;
  long *plVar5;
  long local_8;
  
  pcVar4 = *(char **)(param_1 + 0x18);
  local_8 = 0;
  cVar1 = *pcVar4;
  if ((cVar1 != 'E' && cVar1 != '\0') && (plVar5 = &local_8, cVar1 != '.')) {
    while (((cVar1 != 'O' && (cVar1 != 'R')) || (pcVar4[1] != 'E'))) {
      piVar3 = FUN_00109734(param_1);
      if (piVar3 == (int *)0x0) {
        return 0;
      }
      lVar2 = FUN_00106b30(param_1,0x2e,(long)piVar3,0);
      *plVar5 = lVar2;
      plVar5 = (long *)(lVar2 + 0x10);
      if (lVar2 == 0) {
        return 0;
      }
      pcVar4 = *(char **)(param_1 + 0x18);
      cVar1 = *pcVar4;
      if ((cVar1 == 'E' || cVar1 == '\0') || (cVar1 == '.')) break;
    }
    if (local_8 != 0) {
      if (*(long *)(local_8 + 0x10) != 0) {
        return local_8;
      }
      if (**(int **)(local_8 + 8) == 0x27) {
        lVar2 = *(long *)(*(int **)(local_8 + 8) + 2);
        if (*(int *)(lVar2 + 0x1c) == 9) {
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) - *(int *)(lVar2 + 8);
          *(undefined8 *)(local_8 + 8) = 0;
          return local_8;
        }
        return local_8;
      }
      return local_8;
    }
  }
  return 0;
}



long FUN_0010aeec(long param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  int *piVar6;
  long lVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  byte bVar12;
  
  pbVar8 = *(byte **)(param_1 + 0x18);
  if (*pbVar8 == 0) {
    bVar12 = 0;
    bVar11 = 0;
  }
  else {
    *(byte **)(param_1 + 0x18) = pbVar8 + 1;
    bVar11 = *pbVar8;
    if (pbVar8[1] == 0) {
      bVar12 = 0;
    }
    else {
      *(byte **)(param_1 + 0x18) = pbVar8 + 2;
      bVar12 = pbVar8[1];
      if (bVar11 == 0x76) {
        uVar5 = bVar12 - 0x30;
        if ((uVar5 & 0xff) < 10) {
          lVar7 = FUN_00107744(param_1);
          iVar9 = *(int *)(param_1 + 0x28);
          if (*(int *)(param_1 + 0x2c) <= iVar9) {
            return 0;
          }
          *(int *)(param_1 + 0x28) = iVar9 + 1;
          lVar2 = *(long *)(param_1 + 0x20) + (long)iVar9 * 0x18;
          if (lVar7 == 0) {
            return 0;
          }
          if (lVar2 == 0) {
            return 0;
          }
          *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar9 * 0x18) = 0x32;
          *(uint *)(lVar2 + 8) = uVar5;
          *(long *)(lVar2 + 0x10) = lVar7;
          return lVar2;
        }
      }
      else if ((bVar12 == 0x76) && (bVar11 == 99)) {
        uVar3 = *(undefined4 *)(param_1 + 0x58);
        *(uint *)(param_1 + 0x58) = (uint)(*(int *)(param_1 + 0x54) == 0);
        piVar6 = FUN_00109734(param_1);
        if (*(int *)(param_1 + 0x58) == 0) {
          lVar7 = FUN_00106b30(param_1,0x33,(long)piVar6,0);
          *(undefined4 *)(param_1 + 0x58) = uVar3;
        }
        else {
          lVar7 = FUN_00106b30(param_1,0x34,(long)piVar6,0);
          *(undefined4 *)(param_1 + 0x58) = uVar3;
        }
        return lVar7;
      }
    }
  }
  iVar10 = 0x3d;
  iVar9 = 0;
  do {
    iVar1 = iVar9 + (iVar10 - iVar9) / 2;
    bVar4 = *(&PTR_DAT_0012d2f8)[(long)iVar1 * 3];
    if (bVar11 == bVar4) {
      bVar4 = (&PTR_DAT_0012d2f8)[(long)iVar1 * 3][1];
      if (bVar12 == bVar4) {
        iVar9 = *(int *)(param_1 + 0x28);
        if (*(int *)(param_1 + 0x2c) <= iVar9) {
          return 0;
        }
        *(int *)(param_1 + 0x28) = iVar9 + 1;
        lVar7 = *(long *)(param_1 + 0x20) + (long)iVar9 * 0x18;
        if (lVar7 != 0) {
          *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar9 * 0x18) = 0x31;
          *(undefined ***)(lVar7 + 8) = &PTR_DAT_0012d2f8 + (long)iVar1 * 3;
          return lVar7;
        }
        return 0;
      }
      if (bVar4 <= bVar12) goto LAB_0010af84;
    }
    else if (bVar4 <= bVar11) {
LAB_0010af84:
      iVar9 = iVar1 + 1;
      iVar1 = iVar10;
    }
    iVar10 = iVar1;
    if (iVar9 == iVar10) {
      return 0;
    }
  } while( true );
}



int * FUN_0010b0e0(long param_1)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  char cVar11;
  byte *pbVar12;
  int *local_8;
  
  pcVar9 = *(char **)(param_1 + 0x18);
  cVar11 = *pcVar9;
  if ((byte)(cVar11 - 0x30U) < 10) {
    local_8 = (int *)FUN_00107744(param_1);
    pcVar8 = *(char **)(param_1 + 0x18);
    cVar11 = *pcVar8;
    goto joined_r0x0010b238;
  }
  if ((byte)(cVar11 + 0x9fU) < 0x1a) {
    local_8 = (int *)FUN_0010aeec(param_1);
    if ((local_8 != (int *)0x0) && (*local_8 == 0x31)) {
      pcVar9 = **(char ***)(local_8 + 2);
      *(int *)(param_1 + 0x50) =
           *(int *)(param_1 + 0x50) + *(int *)(*(char ***)(local_8 + 2) + 2) + 7;
      iVar4 = strcmp(pcVar9,"li");
      if (iVar4 == 0) {
        lVar7 = FUN_00107744(param_1);
        local_8 = (int *)FUN_00106b30(param_1,0x36,(long)local_8,lVar7);
      }
    }
    pcVar8 = *(char **)(param_1 + 0x18);
    cVar11 = *pcVar8;
    goto joined_r0x0010b238;
  }
  if (1 < (byte)(cVar11 + 0xbdU)) {
    if (cVar11 == 'L') {
      *(char **)(param_1 + 0x18) = pcVar9 + 1;
      local_8 = (int *)FUN_00107744(param_1);
      if (local_8 == (int *)0x0) {
        return (int *)0x0;
      }
      uVar10 = FUN_00107878(param_1);
      if ((int)uVar10 == 0) {
        return (int *)0x0;
      }
      cVar11 = **(char **)(param_1 + 0x18);
      pcVar8 = *(char **)(param_1 + 0x18);
      goto joined_r0x0010b238;
    }
    if (cVar11 != 'U') {
      return (int *)0x0;
    }
    if (pcVar9[1] == 'l') {
      pcVar8 = pcVar9 + 1;
      *(char **)(param_1 + 0x18) = pcVar8;
      cVar11 = pcVar9[1];
      if (cVar11 == 'l') {
        *(char **)(param_1 + 0x18) = pcVar9 + 2;
        lVar7 = FUN_0010addc(param_1);
        pcVar8 = *(char **)(param_1 + 0x18);
        if (lVar7 == 0) goto LAB_0010b46c;
        cVar11 = *pcVar8;
        if (cVar11 == 'E') {
          *(char **)(param_1 + 0x18) = pcVar8 + 1;
          if (pcVar8[1] == '_') {
            pcVar9 = pcVar8 + 2;
            iVar4 = 0;
            *(char **)(param_1 + 0x18) = pcVar9;
          }
          else {
            if (pcVar8[1] == 'n') {
              return (int *)0x0;
            }
            local_8 = (int *)0x0;
            lVar6 = FUN_001071e4((byte **)(param_1 + 0x18));
            pcVar8 = *(char **)(param_1 + 0x18);
            cVar11 = *pcVar8;
            if (cVar11 != '_') goto joined_r0x0010b238;
            iVar4 = (int)lVar6 + 1;
            pcVar9 = pcVar8 + 1;
            *(char **)(param_1 + 0x18) = pcVar9;
            if (iVar4 < 0) {
              cVar11 = pcVar8[1];
              pcVar8 = pcVar9;
              local_8 = (int *)0x0;
              goto joined_r0x0010b238;
            }
          }
          iVar1 = *(int *)(param_1 + 0x28);
          if (iVar1 < *(int *)(param_1 + 0x2c)) {
            *(int *)(param_1 + 0x28) = iVar1 + 1;
            local_8 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar1 * 0x18);
            if (local_8 != (int *)0x0) {
              *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar1 * 0x18) = 0x45;
              *(long *)(local_8 + 2) = lVar7;
              local_8[4] = iVar4;
              iVar4 = *(int *)(param_1 + 0x38);
              if (iVar4 < *(int *)(param_1 + 0x3c)) goto LAB_0010b3c0;
            }
          }
          cVar11 = *pcVar9;
          local_8 = (int *)0x0;
          pcVar8 = pcVar9;
          goto joined_r0x0010b238;
        }
      }
    }
    else {
      if (pcVar9[1] != 't') {
        return (int *)0x0;
      }
      pcVar8 = pcVar9 + 1;
      *(char **)(param_1 + 0x18) = pcVar8;
      cVar11 = pcVar9[1];
      if (cVar11 == 't') {
        *(char **)(param_1 + 0x18) = pcVar9 + 2;
        lVar7 = FUN_001077ec(param_1);
        if ((-1 < lVar7) && (iVar4 = *(int *)(param_1 + 0x28), iVar4 < *(int *)(param_1 + 0x2c))) {
          *(int *)(param_1 + 0x28) = iVar4 + 1;
          local_8 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 0x18);
          if (local_8 != (int *)0x0) {
            *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 0x18) = 0x47;
            *(long *)(local_8 + 2) = lVar7;
            iVar4 = *(int *)(param_1 + 0x38);
            if (iVar4 < *(int *)(param_1 + 0x3c)) {
LAB_0010b3c0:
              *(int **)(*(long *)(param_1 + 0x30) + (long)iVar4 * 8) = local_8;
              *(int *)(param_1 + 0x38) = iVar4 + 1;
              cVar11 = **(char **)(param_1 + 0x18);
              pcVar8 = *(char **)(param_1 + 0x18);
              goto joined_r0x0010b238;
            }
          }
        }
        pcVar8 = *(char **)(param_1 + 0x18);
LAB_0010b46c:
        cVar11 = *pcVar8;
        local_8 = (int *)0x0;
        goto joined_r0x0010b238;
      }
    }
    local_8 = (int *)0x0;
    goto joined_r0x0010b238;
  }
  piVar5 = *(int **)(param_1 + 0x48);
  if ((piVar5 == (int *)0x0) || ((*piVar5 != 0 && (*piVar5 != 0x18)))) {
    if (cVar11 == 'C') goto LAB_0010b5b0;
    if (cVar11 != 'D') {
      return (int *)0x0;
    }
LAB_0010b49c:
    switch(pcVar9[1]) {
    case '0':
      iVar4 = 1;
      break;
    case '1':
      iVar4 = 2;
      break;
    case '2':
      iVar4 = 3;
      break;
    default:
switchD_0010b4c0_caseD_33:
      return (int *)0x0;
    case '4':
      iVar4 = 4;
      break;
    case '5':
      iVar4 = 5;
    }
    iVar1 = *(int *)(param_1 + 0x28);
    pcVar8 = pcVar9 + 2;
    *(char **)(param_1 + 0x18) = pcVar8;
    if (iVar1 < *(int *)(param_1 + 0x2c)) {
      *(int *)(param_1 + 0x28) = iVar1 + 1;
      local_8 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar1 * 0x18);
      if ((local_8 != (int *)0x0) && (piVar5 != (int *)0x0)) {
        *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar1 * 0x18) = 8;
        local_8[2] = iVar4;
        *(int **)(local_8 + 4) = piVar5;
        cVar11 = pcVar9[2];
        goto joined_r0x0010b238;
      }
    }
  }
  else {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + piVar5[4];
    cVar11 = *pcVar9;
    if (cVar11 != 'C') {
      if (cVar11 != 'D') {
        local_8 = (int *)0x0;
        pcVar8 = pcVar9;
        goto joined_r0x0010b238;
      }
      goto LAB_0010b49c;
    }
LAB_0010b5b0:
    switch(pcVar9[1]) {
    case '1':
      iVar4 = 1;
      break;
    case '2':
      iVar4 = 2;
      break;
    case '3':
      iVar4 = 3;
      break;
    case '4':
      iVar4 = 4;
      break;
    case '5':
      iVar4 = 5;
      break;
    default:
      goto switchD_0010b4c0_caseD_33;
    }
    iVar1 = *(int *)(param_1 + 0x28);
    pcVar8 = pcVar9 + 2;
    *(char **)(param_1 + 0x18) = pcVar8;
    if (iVar1 < *(int *)(param_1 + 0x2c)) {
      *(int *)(param_1 + 0x28) = iVar1 + 1;
      local_8 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar1 * 0x18);
      if ((local_8 != (int *)0x0) && (piVar5 != (int *)0x0)) {
        *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar1 * 0x18) = 7;
        local_8[2] = iVar4;
        *(int **)(local_8 + 4) = piVar5;
        cVar11 = pcVar9[2];
        goto joined_r0x0010b238;
      }
    }
  }
  pcVar8 = pcVar9 + 2;
  cVar11 = *pcVar8;
  local_8 = (int *)0x0;
joined_r0x0010b238:
  if (cVar11 != 'B') {
    return local_8;
  }
  do {
    *(char **)(param_1 + 0x18) = pcVar8 + 1;
    bVar3 = false;
    bVar2 = pcVar8[1];
    if (bVar2 == 0x6e) {
      *(char **)(param_1 + 0x18) = pcVar8 + 2;
      bVar3 = true;
      bVar2 = pcVar8[2];
      if ((byte)(bVar2 - 0x30) < 10) goto LAB_0010b198;
LAB_0010b268:
      lVar7 = 0;
    }
    else {
      if (9 < (byte)(bVar2 - 0x30)) goto LAB_0010b268;
LAB_0010b198:
      pbVar12 = *(byte **)(param_1 + 0x18);
      lVar7 = 0;
      do {
        pbVar12 = pbVar12 + 1;
        uVar10 = (ulong)bVar2;
        *(byte **)(param_1 + 0x18) = pbVar12;
        bVar2 = *pbVar12;
        lVar7 = lVar7 * 10 + uVar10 + -0x30;
      } while ((byte)(bVar2 - 0x30) < 10);
      if ((lVar7 < 1) || (bVar3)) goto LAB_0010b268;
      lVar7 = FUN_00107524(param_1,(int)lVar7);
      *(long *)(param_1 + 0x48) = lVar7;
    }
    local_8 = (int *)FUN_00106b30(param_1,0x4b,(long)local_8,lVar7);
    pcVar8 = *(char **)(param_1 + 0x18);
    if (*pcVar8 != 'B') {
      return local_8;
    }
  } while( true );
}



int * FUN_0010b664(long param_1)

{
  int *piVar1;
  uint *puVar2;
  char *pcVar3;
  int **ppiVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  undefined *puVar12;
  char cVar13;
  int *local_8;
  
  puVar12 = *(undefined **)(param_1 + 0x18);
  switch(*puVar12) {
  case 0x4e:
    *(undefined **)(param_1 + 0x18) = puVar12 + 1;
    ppiVar4 = FUN_00106c30(param_1,&local_8,1);
    if (ppiVar4 == (int **)0x0) {
      return (int *)0x0;
    }
    pcVar3 = *(char **)(param_1 + 0x18);
    cVar13 = *pcVar3;
    if (cVar13 == 'O') {
      if (cVar13 == 'R') goto LAB_0010bac0;
      uVar10 = 0x20;
      iVar11 = *(int *)(param_1 + 0x50) + 3;
    }
    else {
      piVar1 = (int *)0x0;
      if (cVar13 != 'R') {
        piVar9 = (int *)0x0;
        goto LAB_0010b7e0;
      }
LAB_0010bac0:
      uVar10 = 0x1f;
      iVar11 = *(int *)(param_1 + 0x50) + 2;
    }
    *(int *)(param_1 + 0x50) = iVar11;
    *(char **)(param_1 + 0x18) = pcVar3 + 1;
    piVar9 = (int *)0x0;
    piVar1 = (int *)FUN_00106b30(param_1,uVar10,0,0);
    pcVar3 = *(char **)(param_1 + 0x18);
    cVar13 = *pcVar3;
LAB_0010b7e0:
    do {
      if (cVar13 == '\0') {
LAB_0010ba68:
        *ppiVar4 = (int *)0x0;
        return (int *)0x0;
      }
      pcVar7 = pcVar3;
      if (cVar13 == 'D') {
        if ((pcVar3[1] & 0xdfU) != 0x54) {
          piVar8 = FUN_0010b0e0(param_1);
          goto LAB_0010ba50;
        }
        piVar8 = FUN_00109734(param_1);
        goto LAB_0010ba50;
      }
      do {
        if ((((byte)(cVar13 - 0x30U) < 10) || ((byte)(cVar13 + 0x9fU) < 0x1a)) ||
           ((cVar13 == 'C' || cVar13 == 'U' || (cVar13 == 'L')))) {
          piVar8 = FUN_0010b0e0(param_1);
          if (piVar9 != (int *)0x0) goto LAB_0010b9cc;
LAB_0010b9e0:
          if (cVar13 == 'S') goto LAB_0010ba1c;
        }
        else {
          if (cVar13 == 'S') {
            piVar8 = (int *)FUN_00106de0(param_1,1);
            if (piVar9 != (int *)0x0) {
LAB_0010b9cc:
              uVar10 = 1;
LAB_0010b9d0:
              piVar8 = (int *)FUN_00106b30(param_1,uVar10,(long)piVar9,(long)piVar8);
              goto LAB_0010b9e0;
            }
            pcVar3 = *(char **)(param_1 + 0x18);
            cVar13 = *pcVar3;
            piVar9 = piVar8;
            goto LAB_0010b7e0;
          }
          if (cVar13 == 'I') {
            if (piVar9 != (int *)0x0) {
              piVar8 = (int *)FUN_00107af4(param_1);
              uVar10 = 4;
              goto LAB_0010b9d0;
            }
            goto LAB_0010ba68;
          }
          if (cVar13 != 'T') {
            if (cVar13 == 'E') {
              *ppiVar4 = piVar9;
              if (piVar9 == (int *)0x0) {
                return (int *)0x0;
              }
              if (piVar1 != (int *)0x0) {
                *(int **)(piVar1 + 2) = local_8;
                local_8 = piVar1;
              }
              if (**(char **)(param_1 + 0x18) == 'E') {
                *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                return local_8;
              }
              return (int *)0x0;
            }
            if ((cVar13 != 'M') || (piVar9 == (int *)0x0)) goto LAB_0010ba68;
            pcVar3 = pcVar7 + 1;
            *(char **)(param_1 + 0x18) = pcVar3;
            cVar13 = pcVar7[1];
            goto LAB_0010b7e0;
          }
          piVar8 = (int *)FUN_0010791c(param_1);
LAB_0010ba50:
          if (piVar9 != (int *)0x0) goto LAB_0010b9cc;
        }
        pcVar7 = *(char **)(param_1 + 0x18);
        cVar13 = *pcVar7;
        piVar9 = piVar8;
      } while (cVar13 == 'E');
      if ((piVar8 == (int *)0x0) ||
         (iVar11 = *(int *)(param_1 + 0x38), *(int *)(param_1 + 0x3c) <= iVar11)) goto LAB_0010ba68;
      *(int **)(*(long *)(param_1 + 0x30) + (long)iVar11 * 8) = piVar8;
      *(int *)(param_1 + 0x38) = iVar11 + 1;
LAB_0010ba1c:
      pcVar3 = *(char **)(param_1 + 0x18);
      cVar13 = *pcVar3;
      piVar9 = piVar8;
    } while( true );
  default:
    piVar1 = FUN_0010b0e0(param_1);
    if (**(char **)(param_1 + 0x18) == 'I') {
      if (piVar1 == (int *)0x0) {
        return (int *)0x0;
      }
      iVar11 = *(int *)(param_1 + 0x38);
      if (*(int *)(param_1 + 0x3c) <= iVar11) {
        return (int *)0x0;
      }
      *(int **)(*(long *)(param_1 + 0x30) + (long)iVar11 * 8) = piVar1;
      *(int *)(param_1 + 0x38) = iVar11 + 1;
      lVar6 = FUN_00107af4(param_1);
      piVar1 = (int *)FUN_00106b30(param_1,4,(long)piVar1,lVar6);
    }
    break;
  case 0x53:
    if (puVar12[1] == 't') {
      *(undefined **)(param_1 + 0x18) = puVar12 + 2;
      lVar6 = FUN_00106bd0(param_1,(long)&DAT_001185c0,3);
      piVar1 = FUN_0010b0e0(param_1);
      piVar1 = (int *)FUN_00106b30(param_1,1,lVar6,(long)piVar1);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 3;
      if (**(char **)(param_1 + 0x18) != 'I') {
        return piVar1;
      }
      if (piVar1 == (int *)0x0) {
        return (int *)0x0;
      }
      iVar11 = *(int *)(param_1 + 0x38);
      if (*(int *)(param_1 + 0x3c) <= iVar11) {
        return (int *)0x0;
      }
      *(int **)(*(long *)(param_1 + 0x30) + (long)iVar11 * 8) = piVar1;
      *(int *)(param_1 + 0x38) = iVar11 + 1;
    }
    else {
      piVar1 = (int *)FUN_00106de0(param_1,0);
      if (**(char **)(param_1 + 0x18) != 'I') {
        return piVar1;
      }
    }
    lVar6 = FUN_00107af4(param_1);
    piVar1 = (int *)FUN_00106b30(param_1,4,(long)piVar1,lVar6);
    break;
  case 0x55:
    piVar1 = FUN_0010b0e0(param_1);
    return piVar1;
  case 0x5a:
    *(undefined **)(param_1 + 0x18) = puVar12 + 1;
    puVar2 = FUN_0010bc10(param_1,0);
    pcVar3 = *(char **)(param_1 + 0x18);
    if (*pcVar3 != 'E') {
      return (int *)0x0;
    }
    *(char **)(param_1 + 0x18) = pcVar3 + 1;
    if (pcVar3[1] == 's') {
      *(char **)(param_1 + 0x18) = pcVar3 + 2;
      uVar5 = FUN_00107878(param_1);
      if ((int)uVar5 == 0) {
        return (int *)0x0;
      }
      piVar1 = (int *)FUN_00106bd0(param_1,(long)"string literal",0xe);
    }
    else if (pcVar3[1] == 'd') {
      *(char **)(param_1 + 0x18) = pcVar3 + 2;
      lVar6 = FUN_001077ec(param_1);
      if ((int)lVar6 < 0) {
        return (int *)0x0;
      }
      piVar9 = FUN_0010b664(param_1);
      if ((((piVar9 != (int *)0x0) && (*piVar9 != 0x45)) && (*piVar9 != 0x47)) &&
         (uVar5 = FUN_00107878(param_1), (int)uVar5 == 0)) {
        return (int *)0x0;
      }
      iVar11 = *(int *)(param_1 + 0x28);
      piVar1 = (int *)0x0;
      if (iVar11 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar11 + 1;
        piVar1 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar11 * 0x18);
        if (piVar1 != (int *)0x0) {
          *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar11 * 0x18) = 0x46;
          piVar1[4] = (int)lVar6;
          *(int **)(piVar1 + 2) = piVar9;
        }
      }
    }
    else {
      piVar1 = FUN_0010b664(param_1);
      if (((piVar1 != (int *)0x0) && (*piVar1 != 0x45)) &&
         ((*piVar1 != 0x47 && (uVar5 = FUN_00107878(param_1), (int)uVar5 == 0)))) {
        return (int *)0x0;
      }
    }
    piVar1 = (int *)FUN_00106b30(param_1,2,(long)puVar2,(long)piVar1);
    return piVar1;
  }
  return piVar1;
}



uint * FUN_0010bc10(long param_1,int param_2)

{
  uint **ppuVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  long lVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  int *piVar12;
  uint *puVar13;
  long lVar14;
  char *pcVar15;
  
  pcVar11 = *(char **)(param_1 + 0x18);
  if ((*pcVar11 != 'T') && (*pcVar11 != 'G')) {
    puVar7 = (uint *)FUN_0010b664(param_1);
    if ((puVar7 != (uint *)0x0) && ((param_2 != 0 && ((*(uint *)(param_1 + 0x10) & 1) == 0)))) {
      for (; *puVar7 - 0x1c < 5; puVar7 = *(uint **)(puVar7 + 2)) {
      }
      if (*puVar7 == 2) {
        piVar12 = *(int **)(puVar7 + 4);
        iVar2 = *piVar12;
        while (iVar2 - 0x1cU < 5) {
          piVar12 = *(int **)(piVar12 + 2);
          iVar2 = *piVar12;
        }
        *(int **)(puVar7 + 4) = piVar12;
      }
      return puVar7;
    }
    cVar3 = **(char **)(param_1 + 0x18);
    if (cVar3 == 'E' || cVar3 == '\0') {
      return puVar7;
    }
    puVar13 = puVar7;
    if (puVar7 == (uint *)0x0) {
      return (uint *)0x0;
    }
    do {
      uVar6 = *puVar13;
      if (uVar6 == 4) {
        puVar13 = *(uint **)(puVar13 + 2);
        goto joined_r0x0010bd58;
      }
    } while (((3 < uVar6) && (uVar6 - 0x1c < 5)) &&
            (ppuVar1 = (uint **)(puVar13 + 2), puVar13 = *ppuVar1, *ppuVar1 != (uint *)0x0));
LAB_0010bcac:
    if (cVar3 == 'J') goto LAB_0010c1fc;
    piVar12 = (int *)0x0;
    goto LAB_0010bd9c;
  }
  iVar2 = *(int *)(param_1 + 0x50);
  *(int *)(param_1 + 0x50) = iVar2 + 0x14;
  if (*pcVar11 == 'T') {
    *(char **)(param_1 + 0x18) = pcVar11 + 1;
    if (pcVar11[1] == '\0') {
      return (uint *)0x0;
    }
    *(char **)(param_1 + 0x18) = pcVar11 + 2;
    switch(pcVar11[1]) {
    case 'C':
      piVar12 = FUN_00109734(param_1);
      lVar8 = FUN_001071e4((byte **)(param_1 + 0x18));
      if (lVar8 < 0) {
        return (uint *)0x0;
      }
      if (**(char **)(param_1 + 0x18) != '_') {
        return (uint *)0x0;
      }
      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
      puVar7 = (uint *)FUN_00109734(param_1);
      uVar10 = 0xb;
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 5;
      break;
    default:
      return (uint *)0x0;
    case 'F':
      puVar7 = (uint *)FUN_00109734(param_1);
      uVar10 = 0xe;
      piVar12 = (int *)0x0;
      break;
    case 'H':
      puVar7 = (uint *)FUN_0010b664(param_1);
      uVar10 = 0x14;
      piVar12 = (int *)0x0;
      break;
    case 'I':
      puVar7 = (uint *)FUN_00109734(param_1);
      uVar10 = 0xc;
      piVar12 = (int *)0x0;
      break;
    case 'J':
      puVar7 = (uint *)FUN_00109734(param_1);
      uVar10 = 0x12;
      piVar12 = (int *)0x0;
      break;
    case 'S':
      puVar7 = (uint *)FUN_00109734(param_1);
      uVar10 = 0xd;
      piVar12 = (int *)0x0;
      break;
    case 'T':
      *(int *)(param_1 + 0x50) = iVar2 + 10;
      puVar7 = (uint *)FUN_00109734(param_1);
      uVar10 = 10;
      piVar12 = (int *)0x0;
      break;
    case 'V':
      *(int *)(param_1 + 0x50) = iVar2 + 0xf;
      puVar7 = (uint *)FUN_00109734(param_1);
      uVar10 = 9;
      piVar12 = (int *)0x0;
      break;
    case 'W':
      puVar7 = (uint *)FUN_0010b664(param_1);
      uVar10 = 0x15;
      piVar12 = (int *)0x0;
      break;
    case 'c':
      uVar9 = FUN_00107a08(param_1,0);
      if ((int)uVar9 == 0) {
        return (uint *)0x0;
      }
      uVar9 = FUN_00107a08(param_1,0);
      if ((int)uVar9 == 0) {
        return (uint *)0x0;
      }
      puVar7 = FUN_0010bc10(param_1,0);
      uVar10 = 0x11;
      piVar12 = (int *)0x0;
      break;
    case 'h':
      uVar9 = FUN_00107a08(param_1,0x68);
      if ((int)uVar9 == 0) {
        return (uint *)0x0;
      }
      puVar7 = FUN_0010bc10(param_1,0);
      uVar10 = 0xf;
      piVar12 = (int *)0x0;
      break;
    case 'v':
      uVar9 = FUN_00107a08(param_1,0x76);
      if ((int)uVar9 == 0) {
        return (uint *)0x0;
      }
      puVar7 = FUN_0010bc10(param_1,0);
      uVar10 = 0x10;
      piVar12 = (int *)0x0;
    }
    goto LAB_0010bdd0;
  }
  if (*pcVar11 != 'G') {
    return (uint *)0x0;
  }
  *(char **)(param_1 + 0x18) = pcVar11 + 1;
  if (pcVar11[1] == '\0') {
    return (uint *)0x0;
  }
  *(char **)(param_1 + 0x18) = pcVar11 + 2;
  switch(pcVar11[1]) {
  case 'A':
    puVar7 = FUN_0010bc10(param_1,0);
    uVar10 = 0x17;
    piVar12 = (int *)0x0;
    break;
  default:
    return (uint *)0x0;
  case 'R':
    puVar7 = (uint *)FUN_0010b664(param_1);
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar2 < *(int *)(param_1 + 0x2c)) {
      *(int *)(param_1 + 0x28) = iVar2 + 1;
      piVar12 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 0x18);
      if (piVar12 == (int *)0x0) goto LAB_0010c2b8;
      *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 0x18) = 0x41;
      lVar8 = FUN_001071e4((byte **)(param_1 + 0x18));
      *(long *)(piVar12 + 2) = lVar8;
    }
    else {
LAB_0010c2b8:
      piVar12 = (int *)0x0;
    }
    uVar10 = 0x16;
    break;
  case 'T':
    if ((pcVar11[2] == '\0') || (*(char **)(param_1 + 0x18) = pcVar11 + 3, pcVar11[2] != 'n')) {
      puVar7 = FUN_0010bc10(param_1,0);
      uVar10 = 0x48;
      piVar12 = (int *)0x0;
    }
    else {
      puVar7 = FUN_0010bc10(param_1,0);
      uVar10 = 0x49;
      piVar12 = (int *)0x0;
    }
    break;
  case 'V':
    puVar7 = (uint *)FUN_0010b664(param_1);
    uVar10 = 0x13;
    piVar12 = (int *)0x0;
    break;
  case 'r':
    lVar8 = FUN_001071e4((byte **)(param_1 + 0x18));
    if (lVar8 < 2) {
      return (uint *)0x0;
    }
    pcVar11 = *(char **)(param_1 + 0x18);
    if (*pcVar11 == '\0') {
      return (uint *)0x0;
    }
    pcVar15 = pcVar11 + 1;
    *(char **)(param_1 + 0x18) = pcVar15;
    if (*pcVar11 != '_') {
      return (uint *)0x0;
    }
    lVar8 = lVar8 + -1;
    puVar13 = (uint *)0x0;
    do {
      if (*pcVar15 == '\0') {
        return (uint *)0x0;
      }
      lVar14 = 0;
      if (*pcVar15 == '$') {
        bVar4 = pcVar15[1];
        uVar6 = (uint)bVar4;
        if (bVar4 == 0x53) {
          uVar6 = 0x2f;
        }
        else if (bVar4 == 0x5f) {
          uVar6 = 0x2e;
        }
        else if (bVar4 != 0x24) {
          return (uint *)0x0;
        }
        iVar2 = *(int *)(param_1 + 0x28);
        if (*(int *)(param_1 + 0x2c) <= iVar2) {
LAB_0010c2c0:
          *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 2;
          return (uint *)0x0;
        }
        *(int *)(param_1 + 0x28) = iVar2 + 1;
        puVar7 = (uint *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 0x18);
        if (puVar7 == (uint *)0x0) goto LAB_0010c2c0;
        *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 0x18) = 0x40;
        lVar5 = -2;
        puVar7[2] = uVar6;
        pcVar15 = (char *)(*(long *)(param_1 + 0x18) + 2);
        *(char **)(param_1 + 0x18) = pcVar15;
      }
      else {
        do {
          lVar14 = lVar14 + 1;
          if ((lVar8 <= lVar14) || (pcVar15[lVar14] == '\0')) break;
        } while (pcVar15[lVar14] != '$');
        lVar5 = -lVar14;
        puVar7 = (uint *)FUN_00106bd0(param_1,(long)pcVar15,(int)lVar14);
        pcVar15 = (char *)(*(long *)(param_1 + 0x18) + lVar14);
        *(char **)(param_1 + 0x18) = pcVar15;
        if (puVar7 == (uint *)0x0) {
          return (uint *)0x0;
        }
      }
      lVar8 = lVar8 + lVar5;
      if ((puVar13 != (uint *)0x0) &&
         (puVar7 = (uint *)FUN_00106b30(param_1,0x3f,(long)puVar13,(long)puVar7),
         puVar7 == (uint *)0x0)) {
        return (uint *)0x0;
      }
      puVar13 = puVar7;
    } while (0 < lVar8);
    uVar10 = 0x3e;
    piVar12 = (int *)0x0;
  }
  goto LAB_0010bdd0;
joined_r0x0010bd58:
  if (puVar13 == (uint *)0x0) goto LAB_0010bd84;
  uVar6 = *puVar13;
  if (8 < uVar6) {
    if (uVar6 == 0x34) goto LAB_0010bcac;
    goto LAB_0010bd84;
  }
  if (6 < uVar6) goto LAB_0010bcac;
  if (1 < uVar6 - 1) goto LAB_0010bd84;
  puVar13 = *(uint **)(puVar13 + 4);
  goto joined_r0x0010bd58;
LAB_0010bd84:
  if (cVar3 == 'J') {
LAB_0010c1fc:
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  }
  piVar12 = FUN_00109734(param_1);
  if (piVar12 == (int *)0x0) {
LAB_0010c2b0:
    piVar12 = (int *)0x0;
  }
  else {
LAB_0010bd9c:
    lVar8 = FUN_0010addc(param_1);
    if (lVar8 == 0) goto LAB_0010c2b0;
    piVar12 = (int *)FUN_00106b30(param_1,0x29,(long)piVar12,lVar8);
  }
  uVar10 = 3;
LAB_0010bdd0:
  puVar7 = (uint *)FUN_00106b30(param_1,uVar10,(long)puVar7,(long)piVar12);
  return puVar7;
}



long FUN_0010c2d4(long param_1)

{
  char cVar1;
  int *piVar2;
  long lVar3;
  uint *puVar4;
  char cVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  
  pcVar8 = *(char **)(param_1 + 0x18);
  if (*pcVar8 != 'L') {
    return 0;
  }
  pcVar6 = pcVar8 + 1;
  *(char **)(param_1 + 0x18) = pcVar6;
  cVar1 = pcVar8[1];
  if (cVar1 == 'Z') {
    cVar5 = 'Z';
    if (cVar1 == '_') goto LAB_0010c3fc;
  }
  else {
    if (cVar1 != '_') {
      piVar2 = FUN_00109734(param_1);
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      if ((*piVar2 == 0x27) && (*(int *)(*(long *)(piVar2 + 2) + 0x1c) != 0)) {
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) - *(int *)(*(long *)(piVar2 + 2) + 8);
      }
      pcVar6 = *(char **)(param_1 + 0x18);
      uVar9 = 0x3c;
      cVar1 = *pcVar6;
      pcVar8 = pcVar6;
      if (cVar1 == 'n') {
        pcVar8 = pcVar6 + 1;
        *(char **)(param_1 + 0x18) = pcVar8;
        uVar9 = 0x3d;
        cVar1 = pcVar6[1];
      }
      pcVar6 = pcVar8;
      if (cVar1 == 'E') {
        iVar7 = 0;
      }
      else {
        do {
          if (cVar1 == '\0') {
            return 0;
          }
          pcVar6 = pcVar6 + 1;
          *(char **)(param_1 + 0x18) = pcVar6;
          cVar1 = *pcVar6;
        } while (cVar1 != 'E');
        iVar7 = (int)pcVar6 - (int)pcVar8;
      }
      lVar3 = FUN_00106bd0(param_1,(long)pcVar8,iVar7);
      puVar4 = (uint *)FUN_00106b30(param_1,uVar9,(long)piVar2,lVar3);
      pcVar6 = *(char **)(param_1 + 0x18);
      cVar5 = *pcVar6;
      goto LAB_0010c3ac;
    }
LAB_0010c3fc:
    pcVar6 = pcVar8 + 2;
    *(char **)(param_1 + 0x18) = pcVar6;
    cVar5 = pcVar8[2];
  }
  puVar4 = (uint *)0x0;
  if (cVar5 == 'Z') {
    *(char **)(param_1 + 0x18) = pcVar6 + 1;
    puVar4 = FUN_0010bc10(param_1,0);
    pcVar6 = *(char **)(param_1 + 0x18);
    cVar5 = *pcVar6;
  }
LAB_0010c3ac:
  if (cVar5 != 'E') {
    return 0;
  }
  *(char **)(param_1 + 0x18) = pcVar6 + 1;
  return (long)puVar4;
}



int * FUN_0010c44c(long param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  char *pcVar9;
  char **ppcVar10;
  
  pcVar9 = *(char **)(param_1 + 0x18);
  cVar1 = *pcVar9;
  if (cVar1 == 'L') {
    piVar3 = (int *)FUN_0010c2d4(param_1);
    return piVar3;
  }
  if (cVar1 == 'T') {
    piVar3 = (int *)FUN_0010791c(param_1);
    return piVar3;
  }
  if (cVar1 == 's') {
    if (pcVar9[1] == 'r') {
      *(char **)(param_1 + 0x18) = pcVar9 + 2;
      piVar3 = FUN_00109734(param_1);
      piVar4 = FUN_0010b0e0(param_1);
      if (**(char **)(param_1 + 0x18) == 'I') {
        lVar5 = FUN_00107af4(param_1);
        piVar4 = (int *)FUN_00106b30(param_1,4,(long)piVar4,lVar5);
      }
      uVar8 = 1;
      goto LAB_0010c53c;
    }
    if (pcVar9[1] == 'p') {
      *(char **)(param_1 + 0x18) = pcVar9 + 2;
      piVar3 = FUN_0010c44c(param_1);
      uVar8 = 0x4a;
      lVar5 = 0;
      goto LAB_0010c678;
    }
  }
  else if (cVar1 == 'f') {
    if (pcVar9[1] == 'p') {
      *(char **)(param_1 + 0x18) = pcVar9 + 2;
      if (pcVar9[2] == 'T') {
        lVar5 = 0;
        *(char **)(param_1 + 0x18) = pcVar9 + 3;
      }
      else {
        lVar5 = FUN_001077ec(param_1);
        iVar2 = (int)lVar5 + 1;
        lVar5 = (long)iVar2;
        if (iVar2 == 0) {
          return (int *)0x0;
        }
      }
      iVar2 = *(int *)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x2c) <= iVar2) {
        return (int *)0x0;
      }
      *(int *)(param_1 + 0x28) = iVar2 + 1;
      piVar3 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 0x18);
      if (piVar3 == (int *)0x0) {
        return (int *)0x0;
      }
      *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 0x18) = 6;
      *(long *)(piVar3 + 2) = lVar5;
      return piVar3;
    }
  }
  else {
    if ((byte)(cVar1 - 0x30U) < 10) {
LAB_0010c498:
      piVar3 = FUN_0010b0e0(param_1);
      if (piVar3 == (int *)0x0) {
        return (int *)0x0;
      }
      if (**(char **)(param_1 + 0x18) != 'I') {
        return piVar3;
      }
      lVar5 = FUN_00107af4(param_1);
      uVar8 = 4;
      goto LAB_0010c678;
    }
    if (cVar1 == 'o') {
      if (pcVar9[1] == 'n') {
        *(char **)(param_1 + 0x18) = pcVar9 + 2;
        goto LAB_0010c498;
      }
    }
    else if (((cVar1 == 't') || (cVar1 == 'i')) && (pcVar9[1] == 'l')) {
      piVar3 = (int *)0x0;
      if (cVar1 == 't') {
        piVar3 = FUN_00109734(param_1);
        pcVar9 = *(char **)(param_1 + 0x18);
      }
      *(char **)(param_1 + 0x18) = pcVar9 + 2;
      lVar5 = FUN_00108fe0(param_1,'E');
      uVar8 = 0x30;
      goto LAB_0010c678;
    }
  }
  piVar3 = (int *)FUN_0010aeec(param_1);
  if (piVar3 == (int *)0x0) {
    return (int *)0x0;
  }
  iVar2 = *piVar3;
  if (iVar2 == 0x31) {
    ppcVar10 = *(char ***)(piVar3 + 2);
    pcVar9 = *ppcVar10;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(ppcVar10 + 2) + -2;
    iVar2 = strcmp(pcVar9,"st");
    if (iVar2 != 0) {
      switch(*(undefined4 *)((long)ppcVar10 + 0x14)) {
      case 0:
        goto switchD_0010c6e0_caseD_0;
      case 1:
        goto switchD_0010c764_caseD_1;
      case 2:
        goto switchD_0010c764_caseD_2;
      case 3:
        goto switchD_0010c764_caseD_3;
      default:
        goto switchD_0010c6e0_caseD_4;
      }
    }
    piVar4 = FUN_00109734(param_1);
  }
  else {
    if (iVar2 == 0x32) {
      switch(piVar3[2]) {
      case 0:
switchD_0010c6e0_caseD_0:
        uVar8 = 0x35;
        lVar5 = 0;
LAB_0010c678:
        piVar3 = (int *)FUN_00106b30(param_1,uVar8,(long)piVar3,lVar5);
        return piVar3;
      case 1:
        goto switchD_0010c6e0_caseD_1;
      case 2:
        pcVar9 = (char *)0x0;
switchD_0010c764_caseD_2:
        if (((**(char ***)(piVar3 + 2))[1] == 'c') &&
           ((cVar1 = ***(char ***)(piVar3 + 2), (byte)(cVar1 + 0x8eU) < 2 ||
            ((byte)(cVar1 + 0x9dU) < 2)))) {
          piVar4 = FUN_00109734(param_1);
        }
        else {
          piVar4 = FUN_0010c44c(param_1);
        }
        iVar2 = strcmp(pcVar9,"cl");
        if (iVar2 == 0) {
          piVar6 = (int *)FUN_00108fe0(param_1,'E');
        }
        else {
          iVar2 = strcmp(pcVar9,"dt");
          if ((iVar2 == 0) || (iVar2 = strcmp(pcVar9,"pt"), iVar2 == 0)) {
            piVar6 = FUN_0010b0e0(param_1);
            if (**(char **)(param_1 + 0x18) == 'I') {
              lVar5 = FUN_00107af4(param_1);
              piVar6 = (int *)FUN_00106b30(param_1,4,(long)piVar6,lVar5);
            }
          }
          else {
            piVar6 = FUN_0010c44c(param_1);
          }
        }
        piVar4 = (int *)FUN_00106b30(param_1,0x38,(long)piVar4,(long)piVar6);
        uVar8 = 0x37;
        goto LAB_0010c53c;
      case 3:
        pcVar9 = (char *)0x0;
switchD_0010c764_caseD_3:
        iVar2 = strcmp(pcVar9,"qu");
        if (iVar2 == 0) {
          piVar4 = FUN_0010c44c(param_1);
          piVar6 = FUN_0010c44c(param_1);
          piVar7 = FUN_0010c44c(param_1);
        }
        else {
          if (*pcVar9 != 'n') {
            return (int *)0x0;
          }
          if ((pcVar9[1] != 'a') && (pcVar9[1] != 'w')) {
            return (int *)0x0;
          }
          piVar4 = (int *)FUN_00108fe0(param_1,'_');
          piVar6 = FUN_00109734(param_1);
          pcVar9 = *(char **)(param_1 + 0x18);
          cVar1 = *pcVar9;
          if (cVar1 == 'E') {
            piVar7 = (int *)0x0;
            *(char **)(param_1 + 0x18) = pcVar9 + 1;
          }
          else if (cVar1 == 'p') {
            if (pcVar9[1] != 'i') {
              return (int *)0x0;
            }
            *(char **)(param_1 + 0x18) = pcVar9 + 2;
            piVar7 = (int *)FUN_00108fe0(param_1,'E');
          }
          else {
            if ((cVar1 != 'i') || (pcVar9[1] != 'l')) {
switchD_0010c6e0_caseD_4:
              return (int *)0x0;
            }
            piVar7 = FUN_0010c44c(param_1);
          }
        }
        lVar5 = FUN_00106b30(param_1,0x3b,(long)piVar6,(long)piVar7);
        piVar4 = (int *)FUN_00106b30(param_1,0x3a,(long)piVar4,lVar5);
        uVar8 = 0x39;
        goto LAB_0010c53c;
      default:
        goto switchD_0010c6e0_caseD_4;
      }
    }
    if (iVar2 != 0x33) {
      return (int *)0x0;
    }
    if (**(char **)(param_1 + 0x18) == '_') {
      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
      piVar4 = (int *)FUN_00108fe0(param_1,'E');
      goto LAB_0010c530;
    }
switchD_0010c6e0_caseD_1:
    piVar4 = FUN_0010c44c(param_1);
  }
LAB_0010c530:
  uVar8 = 0x36;
LAB_0010c53c:
  piVar3 = (int *)FUN_00106b30(param_1,uVar8,(long)piVar3,(long)piVar4);
  return piVar3;
switchD_0010c764_caseD_1:
  cVar1 = *pcVar9;
  if (((cVar1 == 'm') || (cVar1 == 'p')) && (pcVar9[1] == cVar1)) {
    if (**(char **)(param_1 + 0x18) != '_') {
      piVar4 = FUN_0010c44c(param_1);
      piVar4 = (int *)FUN_00106b30(param_1,0x38,(long)piVar4,(long)piVar4);
      goto LAB_0010c530;
    }
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  }
  goto switchD_0010c6e0_caseD_1;
}



long FUN_0010cab4(long param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  undefined4 uVar6;
  char *pcVar7;
  
  pcVar7 = *(char **)(param_1 + 0x18);
  if (*pcVar7 != 'F') {
    return 0;
  }
  pcVar1 = pcVar7 + 1;
  *(char **)(param_1 + 0x18) = pcVar1;
  cVar2 = pcVar7[1];
  if (cVar2 == 'Y') {
    pcVar1 = pcVar7 + 2;
    *(char **)(param_1 + 0x18) = pcVar1;
    cVar2 = pcVar7[2];
  }
  if (cVar2 == 'J') {
    *(char **)(param_1 + 0x18) = pcVar1 + 1;
  }
  piVar4 = FUN_00109734(param_1);
  if ((piVar4 == (int *)0x0) || (lVar5 = FUN_0010addc(param_1), lVar5 == 0)) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_00106b30(param_1,0x29,(long)piVar4,lVar5);
  }
  pcVar7 = *(char **)(param_1 + 0x18);
  cVar2 = *pcVar7;
  if (cVar2 == 'O') {
    if (cVar2 == 'R') goto LAB_0010cbcc;
    uVar6 = 0x20;
    iVar3 = *(int *)(param_1 + 0x50) + 3;
  }
  else {
    if (cVar2 != 'R') {
      if (cVar2 != 'E') {
        return 0;
      }
      goto LAB_0010cb54;
    }
LAB_0010cbcc:
    uVar6 = 0x1f;
    iVar3 = *(int *)(param_1 + 0x50) + 2;
  }
  *(int *)(param_1 + 0x50) = iVar3;
  *(char **)(param_1 + 0x18) = pcVar7 + 1;
  lVar5 = FUN_00106b30(param_1,uVar6,lVar5,0);
  pcVar7 = *(char **)(param_1 + 0x18);
  if (*pcVar7 != 'E') {
    return 0;
  }
LAB_0010cb54:
  *(char **)(param_1 + 0x18) = pcVar7 + 1;
  return lVar5;
}


/*
Unable to decompile 'FUN_0010cbe4'
Cause: 
Low-level Error: Could not finish collapsing block structure
*/


void FUN_0010f318(char *param_1,uint param_2,long *param_3,byte param_4,byte param_5,byte param_6,
                 byte param_7,byte param_8,undefined8 param_9,undefined8 param_10,
                 undefined8 param_11,undefined8 param_12,undefined8 param_13,undefined8 param_14)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long **pplVar7;
  int *piVar8;
  long lVar9;
  byte *pbVar10;
  size_t sVar11;
  long **pplVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  long *plVar19;
  long ***ppplVar20;
  long ***ppplVar21;
  uint *puVar22;
  undefined uVar23;
  undefined8 uVar24;
  long ***ppplVar25;
  int *piVar26;
  byte **ppbVar27;
  code *pcVar28;
  long ***ppplVar29;
  undefined uVar30;
  undefined uVar31;
  byte bVar32;
  long **pplVar33;
  undefined uVar34;
  long **pplVar35;
  undefined uVar36;
  long ****pppplVar37;
  undefined8 unaff_x19;
  int iVar38;
  undefined8 unaff_x20;
  undefined8 *puVar39;
  uint *puVar40;
  size_t sVar41;
  undefined8 unaff_x21;
  ulong uVar42;
  byte *pbVar43;
  uint uVar44;
  undefined8 unaff_x22;
  ulong uVar45;
  long *plVar46;
  ulong uVar47;
  undefined8 unaff_x23;
  int *piVar48;
  undefined8 uVar49;
  char *pcVar50;
  long *plVar51;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  long ***local_90;
  long *local_88;
  long **local_80;
  long *local_78;
  long local_70;
  long ***local_68 [2];
  long *local_58;
  long local_50;
  long ***local_48;
  long ****local_40;
  long *local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  long ***local_28;
  long ****local_20;
  long *local_18;
  ulong local_10;
  long ***local_8;
  
  uVar45 = (ulong)param_8;
  plVar46 = (long *)(ulong)param_7;
  uVar47 = (ulong)param_6;
  pplVar33 = (long **)(ulong)param_5;
  ppplVar25 = (long ***)(ulong)param_4;
  uVar42 = (ulong)param_2;
  if (param_3 == (long *)0x0) goto LAB_0010f394;
  if (*(int *)(param_1 + 0x130) != 0) {
    return;
  }
  iVar5 = *(int *)param_3;
  switch(iVar5) {
  case 0:
    if ((param_2 >> 2 & 1) == 0) {
      iVar5 = *(int *)(param_3 + 2);
      lVar9 = param_3[1];
      if ((long)iVar5 != 0) {
        lVar17 = 0;
        lVar16 = *(long *)(param_1 + 0x100);
        do {
          cVar3 = *(char *)(lVar9 + lVar17);
          if (lVar16 == 0xff) {
            param_1[0xff] = '\0';
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            lVar6 = 1;
            lVar16 = 0;
            *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          }
          else {
            lVar6 = lVar16 + 1;
          }
          *(long *)(param_1 + 0x100) = lVar6;
          lVar17 = lVar17 + 1;
          param_1[lVar16] = cVar3;
          param_1[0x108] = cVar3;
          lVar16 = lVar6;
        } while (iVar5 != lVar17);
      }
    }
    else {
      pbVar10 = (byte *)param_3[1];
      pbVar2 = pbVar10 + *(int *)(param_3 + 2);
      while (pbVar10 < pbVar2) {
        bVar32 = *pbVar10;
        if (((3 < (long)pbVar2 - (long)pbVar10) && (bVar32 == 0x5f)) &&
           ((pbVar10[1] == 0x5f &&
            ((bVar32 = 0x5f, pbVar10[2] == 0x55 && (pbVar43 = pbVar10 + 3, pbVar43 < pbVar2)))))) {
          uVar47 = 0;
          do {
            bVar32 = *pbVar43;
            uVar14 = (uint)bVar32;
            uVar44 = uVar14 - 0x30;
            if (9 < (uVar44 & 0xff)) {
              if ((uVar14 - 0x41 & 0xff) < 6) {
                uVar44 = uVar14 - 0x37;
              }
              else {
                if (5 < (uVar14 - 0x61 & 0xff)) {
                  if (((pbVar43 < pbVar2) && (bVar32 == 0x5f)) && (uVar47 < 0x100)) {
                    lVar9 = *(long *)(param_1 + 0x100);
                    if (lVar9 == 0xff) {
                      param_1[0xff] = '\0';
                      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
                      *(undefined8 *)(param_1 + 0x100) = 0;
                      lVar9 = 0;
                      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
                    }
                    *(long *)(param_1 + 0x100) = lVar9 + 1;
                    param_1[lVar9] = (char)uVar47;
                    param_1[0x108] = (char)uVar47;
                    goto LAB_00111a14;
                  }
                  break;
                }
                uVar44 = bVar32 - 0x57;
              }
            }
            pbVar43 = pbVar43 + 1;
            uVar47 = (long)(int)uVar44 + uVar47 * 0x10;
          } while (pbVar43 != pbVar2);
          bVar32 = 0x5f;
        }
        lVar9 = *(long *)(param_1 + 0x100);
        if (lVar9 == 0xff) {
          param_1[0xff] = '\0';
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar17 = 1;
          lVar9 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
        else {
          lVar17 = lVar9 + 1;
        }
        *(long *)(param_1 + 0x100) = lVar17;
        param_1[lVar9] = bVar32;
        param_1[0x108] = bVar32;
        pbVar43 = pbVar10;
LAB_00111a14:
        pbVar10 = pbVar43 + 1;
      }
    }
    break;
  case 1:
  case 2:
    FUN_0010f318(param_1,param_2,(long *)param_3[1],param_4,param_5,param_6,param_7,param_8,
                 unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
    lVar9 = *(long *)(param_1 + 0x100);
    if ((param_2 >> 2 & 1) == 0) {
      if (lVar9 == 0xff) {
        pcVar28 = *(code **)(param_1 + 0x110);
        param_1[0xff] = '\0';
        (*pcVar28)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        param_4 = (byte)pcVar28;
        lVar17 = 1;
        *param_1 = ':';
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
LAB_0010f468:
        lVar9 = lVar17 + 1;
      }
      else {
        lVar17 = lVar9 + 1;
        *(long *)(param_1 + 0x100) = lVar17;
        param_1[lVar9] = ':';
        param_1[0x108] = ':';
        if (lVar17 != 0xff) goto LAB_0010f468;
        pcVar28 = *(code **)(param_1 + 0x110);
        param_1[0xff] = '\0';
        (*pcVar28)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        param_4 = (byte)pcVar28;
        lVar9 = 1;
        lVar17 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      *(long *)(param_1 + 0x100) = lVar9;
      param_1[lVar17] = ':';
      param_1[0x108] = ':';
    }
    else {
      if (lVar9 == 0xff) {
        pcVar28 = *(code **)(param_1 + 0x110);
        param_1[0xff] = '\0';
        (*pcVar28)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        param_4 = (byte)pcVar28;
        lVar17 = 1;
        lVar9 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar17 = lVar9 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar17;
      param_1[lVar9] = '.';
      param_1[0x108] = '.';
    }
    plVar46 = (long *)param_3[2];
    if (*(int *)plVar46 == 0x46) {
      FUN_00107470(param_1,"{default arg#");
      FUN_00107678(param_1,(long)(*(int *)(plVar46 + 2) + 1));
      FUN_00107470(param_1,"}::");
      plVar46 = (long *)plVar46[1];
    }
    FUN_0010f318(param_1,param_2,plVar46,param_4,param_5,param_6,param_7,param_8,unaff_x29,unaff_x30
                 ,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
    break;
  case 3:
    uVar24 = *(undefined8 *)(param_1 + 0x128);
    *(undefined8 *)(param_1 + 0x128) = 0;
    plVar51 = (long *)param_3[1];
    if (plVar51 != (long *)0x0) {
      iVar5 = *(int *)plVar51;
      ppplVar25 = *(long ****)(param_1 + 0x120);
      local_80 = (long **)0x0;
      *(long ****)(param_1 + 0x128) = &local_80;
      local_78 = plVar51;
      local_70._0_4_ = 0;
      local_68[0] = ppplVar25;
      if (iVar5 - 0x1cU < 5) {
        plVar51 = (long *)plVar51[1];
        if (plVar51 != (long *)0x0) {
          iVar5 = *(int *)plVar51;
          local_68[1] = &local_80;
          *(long *****)(param_1 + 0x128) = local_68 + 1;
          local_58 = plVar51;
          local_50._0_4_ = 0;
          local_48 = ppplVar25;
          if (4 < iVar5 - 0x1cU) {
            uVar45 = 2;
            goto LAB_00112984;
          }
          plVar51 = (long *)plVar51[1];
          if (plVar51 != (long *)0x0) {
            iVar5 = *(int *)plVar51;
            param_4 = (byte)(iVar5 - 0x1cU);
            local_40 = local_68 + 1;
            local_38 = plVar51;
            *(long *****)(param_1 + 0x128) = &local_48 + 1;
            local_30 = 0;
            local_28 = ppplVar25;
            if (4 < iVar5 - 0x1cU) {
              uVar45 = 3;
              goto LAB_00112984;
            }
            plVar51 = (long *)plVar51[1];
            if (plVar51 != (long *)0x0) {
              iVar5 = *(int *)plVar51;
              param_4 = (byte)(iVar5 - 0x1cU);
              local_20 = &local_48 + 1;
              local_18 = plVar51;
              *(long *****)(param_1 + 0x128) = &local_28 + 1;
              local_10 = local_10 & 0xffffffff00000000;
              local_8 = ppplVar25;
              if (4 < iVar5 - 0x1cU) {
                uVar45 = 4;
                goto LAB_00112984;
              }
            }
          }
        }
      }
      else {
        uVar45 = 1;
LAB_00112984:
        if (iVar5 == 4) {
          *(long *****)(param_1 + 0x120) = &local_90;
          local_90 = ppplVar25;
          local_88 = plVar51;
          goto LAB_00112aa4;
        }
        if (iVar5 != 2) goto LAB_00112aa4;
        plVar46 = (long *)plVar51[2];
        if (*(int *)plVar46 == 0x46) {
          plVar46 = (long *)plVar46[1];
        }
        if (4 < *(int *)plVar46 - 0x1cU) goto LAB_00112aa4;
        iVar5 = (int)uVar45;
        if (iVar5 != 4) {
          uVar47 = (ulong)(iVar5 - 1);
          pppplVar37 = (long ****)(uVar45 * 0x20);
          ppplVar29 = &local_80 + uVar45 * 4;
          *(long ****)(param_1 + 0x128) = ppplVar29;
          ppplVar21 = &local_80 + uVar47 * 4;
          uVar42 = (ulong)(iVar5 + 1U);
          plVar19 = (&local_78)[uVar47 * 4];
          *ppplVar29 = *ppplVar21;
          (&local_78)[uVar45 * 4] = plVar19;
          ppplVar20 = local_68[uVar47 * 4];
          (&local_70)[uVar45 * 4] = (&local_70)[uVar47 * 4];
          local_68[uVar45 * 4] = ppplVar20;
          (&local_80)[uVar45 * 4] = (long **)ppplVar21;
          (&local_78)[uVar47 * 4] = plVar46;
          *(undefined4 *)(&local_70 + uVar47 * 4) = 0;
          local_68[uVar47 * 4] = ppplVar25;
          plVar19 = (long *)plVar46[1];
          uVar47 = uVar42;
          if (4 < *(int *)plVar19 - 0x1cU) {
LAB_00112aa0:
            param_8 = (byte)pppplVar37;
            param_4 = (byte)ppplVar29;
            uVar45 = uVar47;
LAB_00112aa4:
            FUN_0010f318(param_1,param_2,(long *)param_3[2],param_4,(char)ppplVar25,(char)uVar47,
                         (char)plVar46,param_8,unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,
                         unaff_x23);
            if (*(int *)plVar51 == 4) {
              *(long ****)(param_1 + 0x120) = local_90;
            }
            iVar5 = (int)uVar45;
            uVar44 = iVar5 - 1;
            if (*(int *)(&local_70 + (ulong)uVar44 * 4) == 0) {
              FUN_0010716c(param_1,0x20);
              FUN_00112d24(param_1,param_2,(undefined4 *)(&local_78)[(ulong)uVar44 * 4]);
            }
            if (uVar44 != 0) {
              uVar44 = iVar5 - 2;
              if (*(int *)(&local_70 + (ulong)uVar44 * 4) == 0) {
                FUN_0010716c(param_1,0x20);
                FUN_00112d24(param_1,param_2,(undefined4 *)(&local_78)[(ulong)uVar44 * 4]);
              }
              if (uVar44 != 0) {
                uVar44 = iVar5 - 3;
                if (*(int *)(&local_70 + (ulong)uVar44 * 4) == 0) {
                  FUN_0010716c(param_1,0x20);
                  FUN_00112d24(param_1,param_2,(undefined4 *)(&local_78)[(ulong)uVar44 * 4]);
                }
                if ((uVar44 != 0) && ((int)local_70 == 0)) {
                  FUN_0010716c(param_1,0x20);
                  FUN_00112d24(param_1,param_2,(undefined4 *)local_78);
                  *(undefined8 *)(param_1 + 0x128) = uVar24;
                  return;
                }
              }
            }
            *(undefined8 *)(param_1 + 0x128) = uVar24;
            return;
          }
          if (iVar5 + 1U != 4) {
            pppplVar37 = (long ****)(uVar42 * 0x20);
            uVar47 = (ulong)(iVar5 + 2U);
            ppplVar21 = &local_80 + uVar42 * 4;
            *(long ****)(param_1 + 0x128) = ppplVar21;
            plVar46 = (&local_78)[uVar45 * 4];
            *ppplVar21 = *ppplVar29;
            (&local_78)[uVar42 * 4] = plVar46;
            ppplVar21 = local_68[uVar45 * 4];
            (&local_70)[uVar42 * 4] = (&local_70)[uVar45 * 4];
            local_68[uVar42 * 4] = ppplVar21;
            (&local_80)[uVar42 * 4] = (long **)ppplVar29;
            (&local_78)[uVar45 * 4] = plVar19;
            *(undefined4 *)(&local_70 + uVar45 * 4) = 0;
            local_68[uVar45 * 4] = ppplVar25;
            plVar46 = (long *)plVar19[1];
            if (4 < *(int *)plVar46 - 0x1cU) goto LAB_00112aa0;
            if (iVar5 + 2U != 4) {
              local_10 = CONCAT44(uStack_2c,local_30);
              local_18 = local_38;
              pppplVar37 = &local_48 + 1;
              local_8 = local_28;
              *(long *****)(param_1 + 0x128) = &local_28 + 1;
              local_30 = 0;
              if (4 < *(int *)plVar46[1] - 0x1cU) {
                uVar47 = 4;
                ppplVar29 = local_28;
                local_38 = plVar46;
                local_28 = ppplVar25;
                local_20 = pppplVar37;
                goto LAB_00112aa0;
              }
            }
          }
        }
      }
    }
    *(undefined4 *)(param_1 + 0x130) = 1;
    break;
  case 4:
    uVar24 = *(undefined8 *)(param_1 + 0x160);
    uVar49 = *(undefined8 *)(param_1 + 0x128);
    *(long **)(param_1 + 0x160) = param_3;
    *(undefined8 *)(param_1 + 0x128) = 0;
    plVar46 = (long *)param_3[1];
    if (((((param_2 >> 2 & 1) == 0) || (*(int *)plVar46 != 0)) || (*(int *)(plVar46 + 2) != 6)) ||
       (iVar5 = strncmp((char *)plVar46[1],"JArray",6), iVar5 != 0)) {
      FUN_0010f318(param_1,param_2,plVar46,param_4,param_5,param_6,param_7,param_8,unaff_x29,
                   unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
      if (param_1[0x108] == '<') {
        FUN_0010716c(param_1,0x20);
      }
      lVar9 = *(long *)(param_1 + 0x100);
      if (lVar9 == 0xff) {
        pcVar28 = *(code **)(param_1 + 0x110);
        param_1[0xff] = '\0';
        (*pcVar28)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        param_4 = (byte)pcVar28;
        lVar17 = 1;
        lVar9 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar17 = lVar9 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar17;
      param_1[lVar9] = '<';
      param_1[0x108] = '<';
      FUN_0010f318(param_1,param_2,(long *)param_3[2],param_4,param_5,param_6,param_7,param_8,
                   unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
      if (param_1[0x108] == '>') {
        FUN_0010716c(param_1,0x20);
      }
      lVar9 = *(long *)(param_1 + 0x100);
      if (lVar9 == 0xff) {
        param_1[0xff] = '\0';
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar17 = 1;
        lVar9 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar17 = lVar9 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar17;
      param_1[lVar9] = '>';
      param_1[0x108] = '>';
    }
    else {
      FUN_0010f318(param_1,param_2,(long *)param_3[2],param_4,param_5,param_6,param_7,param_8,
                   unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
      FUN_00107470(param_1,"[]");
    }
    *(undefined8 *)(param_1 + 0x128) = uVar49;
    *(undefined8 *)(param_1 + 0x160) = uVar24;
    break;
  case 5:
    plVar46 = (long *)FUN_0010726c((long)param_1,(ulong *)(param_3 + 1));
    if (plVar46 != (long *)0x0) {
      if (*(int *)plVar46 != 0x2f) {
LAB_00110530:
        puVar39 = *(undefined8 **)(param_1 + 0x120);
        uVar24 = *puVar39;
        *(undefined8 *)(param_1 + 0x120) = uVar24;
        FUN_0010f318(param_1,param_2,plVar46,(char)uVar24,param_5,param_6,param_7,param_8,unaff_x29,
                     unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
        *(undefined8 **)(param_1 + 0x120) = puVar39;
        return;
      }
      iVar5 = *(int *)(param_1 + 0x134);
      while (0 < iVar5) {
        plVar46 = (long *)plVar46[2];
        iVar5 = iVar5 + -1;
        if ((plVar46 == (long *)0x0) || (*(int *)plVar46 != 0x2f)) goto LAB_0010f394;
      }
      if ((iVar5 == 0) && (plVar46 = (long *)plVar46[1], plVar46 != (long *)0x0)) goto LAB_00110530;
    }
    goto LAB_0010f394;
  case 6:
    lVar17 = param_3[1];
    lVar9 = *(long *)(param_1 + 0x100);
    if (lVar17 != 0) {
      if (lVar9 == 0xff) {
        param_1[0xff] = '\0';
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = '{';
        lVar9 = 2;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        param_1[1] = 'p';
LAB_0011140c:
        lVar16 = lVar9 + 1;
        *(long *)(param_1 + 0x100) = lVar16;
        param_1[lVar9] = 'a';
        param_1[0x108] = 'a';
        if (lVar16 == 0xff) {
          param_1[0xff] = '\0';
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *param_1 = 'r';
          lVar9 = 2;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          param_1[1] = 'm';
        }
        else {
LAB_00111428:
          lVar6 = lVar16 + 1;
          *(long *)(param_1 + 0x100) = lVar6;
          param_1[lVar16] = 'r';
          param_1[0x108] = 'r';
          if (lVar6 != 0xff) goto LAB_00111444;
          param_1[0xff] = '\0';
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *param_1 = 'm';
          lVar9 = 1;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
      }
      else {
        lVar16 = lVar9 + 1;
        *(long *)(param_1 + 0x100) = lVar16;
        param_1[lVar9] = '{';
        param_1[0x108] = '{';
        if (lVar16 == 0xff) {
          param_1[0xff] = '\0';
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *param_1 = 'p';
          lVar16 = 2;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          param_1[1] = 'a';
          goto LAB_00111428;
        }
        lVar9 = lVar9 + 2;
        *(long *)(param_1 + 0x100) = lVar9;
        param_1[lVar16] = 'p';
        param_1[0x108] = 'p';
        if (lVar9 != 0xff) goto LAB_0011140c;
        param_1[0xff] = '\0';
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 'a';
        lVar6 = 2;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        param_1[1] = 'r';
LAB_00111444:
        lVar9 = lVar6 + 1;
        *(long *)(param_1 + 0x100) = lVar9;
        param_1[lVar6] = 'm';
        param_1[0x108] = 'm';
        if (lVar9 == 0xff) {
          param_1[0xff] = '\0';
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar16 = 1;
          lVar9 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          goto LAB_00111464;
        }
      }
      lVar16 = lVar9 + 1;
LAB_00111464:
      *(long *)(param_1 + 0x100) = lVar16;
      param_1[lVar9] = '#';
      param_1[0x108] = '#';
      sVar41 = 0;
      sprintf((char *)&local_80,"%ld",lVar17);
      sVar11 = strlen((char *)&local_80);
      lVar9 = *(long *)(param_1 + 0x100);
      lVar17 = lVar9;
      if (sVar11 != 0) {
        do {
          cVar3 = *(char *)((long)&local_80 + sVar41);
          if (lVar17 == 0xff) {
            param_1[0xff] = '\0';
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            lVar9 = 1;
            lVar17 = 0;
            *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          }
          else {
            lVar9 = lVar17 + 1;
          }
          *(long *)(param_1 + 0x100) = lVar9;
          sVar41 = sVar41 + 1;
          param_1[lVar17] = cVar3;
          param_1[0x108] = cVar3;
          lVar17 = lVar9;
        } while (sVar41 != sVar11);
      }
      if (lVar9 == 0xff) {
        param_1[0xff] = '\0';
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar17 = 1;
        lVar9 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar17 = lVar9 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar17;
      param_1[lVar9] = '}';
      param_1[0x108] = '}';
      return;
    }
    if (lVar9 == 0xff) {
      param_1[0xff] = '\0';
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *param_1 = 't';
      lVar9 = 2;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      param_1[1] = 'h';
LAB_0010fd94:
      lVar17 = lVar9 + 1;
      *(long *)(param_1 + 0x100) = lVar17;
      param_1[lVar9] = 'i';
      param_1[0x108] = 'i';
      if (lVar17 != 0xff) goto LAB_0010fdb0;
      param_1[0xff] = '\0';
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar9 = 1;
      lVar17 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar17 = lVar9 + 1;
      *(long *)(param_1 + 0x100) = lVar17;
      param_1[lVar9] = 't';
      param_1[0x108] = 't';
      if (lVar17 == 0xff) {
        param_1[0xff] = '\0';
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 'h';
        lVar17 = 2;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        param_1[1] = 'i';
      }
      else {
        lVar9 = lVar9 + 2;
        *(long *)(param_1 + 0x100) = lVar9;
        param_1[lVar17] = 'h';
        param_1[0x108] = 'h';
        if (lVar9 != 0xff) goto LAB_0010fd94;
        param_1[0xff] = '\0';
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 'i';
        lVar17 = 1;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
LAB_0010fdb0:
      lVar9 = lVar17 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar9;
    param_1[lVar17] = 's';
    param_1[0x108] = 's';
    break;
  case 7:
    FUN_0010f318(param_1,param_2,(long *)param_3[2],param_4,param_5,param_6,param_7,param_8,
                 unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
    break;
  case 8:
    lVar9 = *(long *)(param_1 + 0x100);
    if (lVar9 == 0xff) {
      pcVar28 = *(code **)(param_1 + 0x110);
      param_1[0xff] = '\0';
      (*pcVar28)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      param_4 = (byte)pcVar28;
      lVar17 = 1;
      lVar9 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar17 = lVar9 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar17;
    param_1[lVar9] = '~';
    param_1[0x108] = '~';
    FUN_0010f318(param_1,param_2,(long *)param_3[2],param_4,param_5,param_6,param_7,param_8,
                 unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
    break;
  case 9:
    pcVar50 = "vtable for ";
    lVar9 = *(long *)(param_1 + 0x100);
    do {
      cVar3 = *pcVar50;
      if (lVar9 == 0xff) {
        ppplVar25 = *(long ****)(param_1 + 0x110);
        param_1[0xff] = '\0';
        (*(code *)ppplVar25)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar17 = 1;
        lVar9 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar17 = lVar9 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar17;
      pcVar50 = pcVar50 + 1;
      param_1[lVar9] = cVar3;
      param_1[0x108] = cVar3;
      lVar9 = lVar17;
    } while (pcVar50 != "");
    FUN_0010f318(param_1,param_2,(long *)param_3[1],(char)ppplVar25,(char)pplVar33,(char)uVar47,
                 (char)plVar46,(char)uVar45,unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,
                 unaff_x23);
    break;
  case 10:
    pcVar50 = "VTT for ";
    lVar9 = *(long *)(param_1 + 0x100);
    do {
      cVar3 = *pcVar50;
      if (lVar9 == 0xff) {
        ppplVar25 = *(long ****)(param_1 + 0x110);
        param_1[0xff] = '\0';
        (*(code *)ppplVar25)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar17 = 1;
        lVar9 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar17 = lVar9 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar17;
      pcVar50 = pcVar50 + 1;
      param_1[lVar9] = cVar3;
      param_1[0x108] = cVar3;
      lVar9 = lVar17;
    } while (pcVar50 != "");
    FUN_0010f318(param_1,param_2,(long *)param_3[1],(char)ppplVar25,(char)pplVar33,(char)uVar47,
                 (char)plVar46,(char)uVar45,unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,
                 unaff_x23);
    break;
  case 0xb:
    lVar9 = 0;
    lVar17 = *(long *)(param_1 + 0x100);
    do {
      cVar3 = "construction vtable for "[lVar9];
      if (lVar17 == 0xff) {
        ppplVar25 = *(long ****)(param_1 + 0x110);
        param_1[0xff] = '\0';
        (*(code *)ppplVar25)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar16 = 1;
        lVar17 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar16 = lVar17 + 1;
      }
      uVar36 = (undefined)uVar45;
      uVar34 = SUB81(plVar46,0);
      uVar30 = (undefined)uVar47;
      *(long *)(param_1 + 0x100) = lVar16;
      lVar9 = lVar9 + 1;
      param_1[lVar17] = cVar3;
      param_1[0x108] = cVar3;
      lVar17 = lVar16;
    } while (lVar9 != 0x18);
    FUN_0010f318(param_1,param_2,(long *)param_3[1],(char)ppplVar25,(char)pplVar33,uVar30,uVar34,
                 uVar36,unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
    lVar9 = *(long *)(param_1 + 0x100);
    if (lVar9 == 0xff) {
      pcVar28 = *(code **)(param_1 + 0x110);
      param_1[0xff] = '\0';
      (*pcVar28)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      pcVar18 = (code *)0x2;
      *param_1 = '-';
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      param_1[1] = 'i';
LAB_001111e0:
      uVar23 = SUB81(pcVar28,0);
      pcVar28 = pcVar18 + 1;
      *(code **)(param_1 + 0x100) = pcVar28;
      param_1[(long)pcVar18] = 'n';
      param_1[0x108] = 'n';
      if (pcVar28 != (code *)0xff) goto LAB_001111fc;
      pcVar28 = *(code **)(param_1 + 0x110);
      param_1[0xff] = '\0';
      (*pcVar28)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      uVar31 = SUB81(pcVar18,0);
      uVar23 = SUB81(pcVar28,0);
      pcVar18 = (code *)0x1;
      pcVar28 = (code *)0x0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      pcVar28 = (code *)(lVar9 + 1);
      *(code **)(param_1 + 0x100) = pcVar28;
      param_1[lVar9] = '-';
      param_1[0x108] = '-';
      if (pcVar28 == (code *)0xff) {
        pcVar18 = *(code **)(param_1 + 0x110);
        param_1[0xff] = '\0';
        (*pcVar18)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        uVar23 = SUB81(pcVar28,0);
        *param_1 = 'i';
        pcVar28 = (code *)0x2;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        param_1[1] = 'n';
      }
      else {
        pcVar18 = (code *)(lVar9 + 2);
        *(code **)(param_1 + 0x100) = pcVar18;
        param_1[(long)pcVar28] = 'i';
        param_1[0x108] = 'i';
        if (pcVar18 != (code *)0xff) goto LAB_001111e0;
        pcVar28 = *(code **)(param_1 + 0x110);
        param_1[0xff] = '\0';
        (*pcVar28)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        uVar23 = SUB81(pcVar28,0);
        *param_1 = 'n';
        pcVar28 = (code *)0x1;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
LAB_001111fc:
      uVar31 = SUB81(pcVar18,0);
      pcVar18 = pcVar28 + 1;
    }
    *(code **)(param_1 + 0x100) = pcVar18;
    param_1[(long)pcVar28] = '-';
    param_1[0x108] = '-';
    FUN_0010f318(param_1,param_2,(long *)param_3[2],uVar23,uVar31,uVar30,uVar34,uVar36,unaff_x29,
                 unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
    break;
  case 0xc:
    pcVar50 = "typeinfo for ";
    lVar9 = *(long *)(param_1 + 0x100);
    do {
      cVar3 = *pcVar50;
      if (lVar9 == 0xff) {
        ppplVar25 = *(long ****)(param_1 + 0x110);
        param_1[0xff] = '\0';
        (*(code *)ppplVar25)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar17 = 1;
        lVar9 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar17 = lVar9 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar17;
      pcVar50 = pcVar50 + 1;
      param_1[lVar9] = cVar3;
      param_1[0x108] = cVar3;
      lVar9 = lVar17;
    } while (pcVar50 != "");
    FUN_0010f318(param_1,param_2,(long *)param_3[1],(char)ppplVar25,(char)pplVar33,(char)uVar47,
                 (char)plVar46,(char)uVar45,unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,
                 unaff_x23);
    break;
  case 0xd:
    lVar9 = 0;
    lVar17 = *(long *)(param_1 + 0x100);
    do {
      cVar3 = "typeinfo name for "[lVar9];
      if (lVar17 == 0xff) {
        ppplVar25 = *(long ****)(param_1 + 0x110);
        param_1[0xff] = '\0';
        (*(code *)ppplVar25)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar16 = 1;
        lVar17 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar16 = lVar17 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar16;
      lVar9 = lVar9 + 1;
      param_1[lVar17] = cVar3;
      param_1[0x108] = cVar3;
      lVar17 = lVar16;
    } while (lVar9 != 0x12);
    FUN_0010f318(param_1,param_2,(long *)param_3[1],(char)ppplVar25,(char)pplVar33,(char)uVar47,
                 (char)plVar46,(char)uVar45,unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,
                 unaff_x23);
    break;
  case 0xe:
    pcVar50 = "typeinfo fn for ";
    lVar9 = *(long *)(param_1 + 0x100);
    do {
      cVar3 = *pcVar50;
      if (lVar9 == 0xff) {
        ppplVar25 = *(long ****)(param_1 + 0x110);
        param_1[0xff] = '\0';
        (*(code *)ppplVar25)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar17 = 1;
        lVar9 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar17 = lVar9 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar17;
      pcVar50 = pcVar50 + 1;
      param_1[lVar9] = cVar3;
      param_1[0x108] = cVar3;
      lVar9 = lVar17;
    } while (pcVar50 != "");
    FUN_0010f318(param_1,param_2,(long *)param_3[1],(char)ppplVar25,(char)pplVar33,(char)uVar47,
                 (char)plVar46,(char)uVar45,unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,
                 unaff_x23);
    break;
  case 0xf:
    lVar9 = 0;
    lVar17 = *(long *)(param_1 + 0x100);
    do {
      cVar3 = "non-virtual thunk to "[lVar9];
      if (lVar17 == 0xff) {
        ppplVar25 = *(long ****)(param_1 + 0x110);
        param_1[0xff] = '\0';
        (*(code *)ppplVar25)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar16 = 1;
        lVar17 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar16 = lVar17 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar16;
      lVar9 = lVar9 + 1;
      param_1[lVar17] = cVar3;
      param_1[0x108] = cVar3;
      lVar17 = lVar16;
    } while (lVar9 != 0x15);
    FUN_0010f318(param_1,param_2,(long *)param_3[1],(char)ppplVar25,(char)pplVar33,(char)uVar47,
                 (char)plVar46,(char)uVar45,unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,
                 unaff_x23);
    break;
  case 0x10:
    lVar9 = 0;
    lVar17 = *(long *)(param_1 + 0x100);
    do {
      cVar3 = "virtual thunk to "[lVar9];
      if (lVar17 == 0xff) {
        ppplVar25 = *(long ****)(param_1 + 0x110);
        param_1[0xff] = '\0';
        (*(code *)ppplVar25)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar16 = 1;
        lVar17 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar16 = lVar17 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar16;
      lVar9 = lVar9 + 1;
      param_1[lVar17] = cVar3;
      param_1[0x108] = cVar3;
      lVar17 = lVar16;
    } while (lVar9 != 0x11);
    FUN_0010f318(param_1,param_2,(long *)param_3[1],(char)ppplVar25,(char)pplVar33,(char)uVar47,
                 (char)plVar46,(char)uVar45,unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,
                 unaff_x23);
    break;
  case 0x11:
    lVar9 = 0;
    lVar17 = *(long *)(param_1 + 0x100);
    do {
      cVar3 = "covariant return thunk to "[lVar9];
      if (lVar17 == 0xff) {
        ppplVar25 = *(long ****)(param_1 + 0x110);
        param_1[0xff] = '\0';
        (*(code *)ppplVar25)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar16 = 1;
        lVar17 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar16 = lVar17 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar16;
      lVar9 = lVar9 + 1;
      param_1[lVar17] = cVar3;
      param_1[0x108] = cVar3;
      lVar17 = lVar16;
    } while (lVar9 != 0x1a);
    FUN_0010f318(param_1,param_2,(long *)param_3[1],(char)ppplVar25,(char)pplVar33,(char)uVar47,
                 (char)plVar46,(char)uVar45,unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,
                 unaff_x23);
    break;
  case 0x12:
    pcVar50 = "java Class for ";
    lVar9 = *(long *)(param_1 + 0x100);
    do {
      cVar3 = *pcVar50;
      if (lVar9 == 0xff) {
        ppplVar25 = *(long ****)(param_1 + 0x110);
        param_1[0xff] = '\0';
        (*(code *)ppplVar25)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar17 = 1;
        lVar9 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar17 = lVar9 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar17;
      pcVar50 = pcVar50 + 1;
      param_1[lVar9] = cVar3;
      param_1[0x108] = cVar3;
      lVar9 = lVar17;
    } while (pcVar50 != "");
    FUN_0010f318(param_1,param_2,(long *)param_3[1],(char)ppplVar25,(char)pplVar33,(char)uVar47,
                 (char)plVar46,(char)uVar45,unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,
                 unaff_x23);
    break;
  case 0x13:
    FUN_00107470(param_1,"guard variable for ");
    FUN_0010f318(param_1,param_2,(long *)param_3[1],param_4,param_5,param_6,param_7,param_8,
                 unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
    break;
  case 0x14:
    FUN_00107470(param_1,"TLS init function for ");
    FUN_0010f318(param_1,param_2,(long *)param_3[1],param_4,param_5,param_6,param_7,param_8,
                 unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
    break;
  case 0x15:
    FUN_00107470(param_1,"TLS wrapper function for ");
    FUN_0010f318(param_1,param_2,(long *)param_3[1],param_4,param_5,param_6,param_7,param_8,
                 unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
    break;
  case 0x16:
    FUN_00107470(param_1,"reference temporary #");
    FUN_0010f318(param_1,param_2,(long *)param_3[2],param_4,param_5,param_6,param_7,param_8,
                 unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
    FUN_00107470(param_1," for ");
    FUN_0010f318(param_1,param_2,(long *)param_3[1],param_4,param_5,param_6,param_7,param_8,
                 unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
    break;
  case 0x17:
    FUN_00107470(param_1,"hidden alias for ");
    FUN_0010f318(param_1,param_2,(long *)param_3[1],param_4,param_5,param_6,param_7,param_8,
                 unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
    break;
  case 0x18:
    iVar5 = *(int *)(param_3 + 2);
    lVar9 = param_3[1];
    if ((long)iVar5 != 0) {
      lVar17 = 0;
      lVar16 = *(long *)(param_1 + 0x100);
      do {
        cVar3 = *(char *)(lVar9 + lVar17);
        if (lVar16 == 0xff) {
          param_1[0xff] = '\0';
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar6 = 1;
          lVar16 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
        else {
          lVar6 = lVar16 + 1;
        }
        *(long *)(param_1 + 0x100) = lVar6;
        lVar17 = lVar17 + 1;
        param_1[lVar16] = cVar3;
        param_1[0x108] = cVar3;
        lVar16 = lVar6;
      } while (iVar5 != lVar17);
    }
    break;
  case 0x19:
  case 0x1a:
  case 0x1b:
    pplVar7 = *(long ***)(param_1 + 0x128);
    pplVar33 = pplVar7;
    if (pplVar7 == (long **)0x0) {
      pplVar7 = (long **)0x0;
      bVar4 = false;
    }
    else {
      do {
        if (*(int *)(pplVar33 + 2) == 0) {
          uVar44 = *(int *)pplVar33[1] - 0x19;
          ppplVar25 = (long ***)(ulong)uVar44;
          param_4 = (byte)uVar44;
          if (2 < uVar44) break;
          if (iVar5 == *(int *)pplVar33[1]) {
            FUN_0010f318(param_1,param_2,(long *)param_3[1],param_4,(char)pplVar7,param_6,param_7,
                         param_8,unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
            return;
          }
        }
        param_4 = (byte)ppplVar25;
        pplVar33 = (long **)*pplVar33;
      } while (pplVar33 != (long **)0x0);
      bVar4 = false;
    }
    goto LAB_0010fc14;
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x25:
  case 0x26:
    pplVar7 = *(long ***)(param_1 + 0x128);
    bVar4 = false;
LAB_0010fc14:
    local_68[0] = *(long ****)(param_1 + 0x120);
    *(long ****)(param_1 + 0x128) = &local_80;
    local_80 = pplVar7;
    local_78 = param_3;
LAB_0010fc30:
    uVar30 = SUB81(pplVar7,0);
    plVar46 = (long *)local_78[1];
LAB_0010fc34:
    plVar51 = local_78;
    local_70._0_4_ = 0;
    FUN_0010f318(param_1,param_2,plVar46,param_4,uVar30,param_6,param_7,param_8,unaff_x29,unaff_x30,
                 unaff_x19,unaff_x20,unaff_x21,unaff_x23);
    if ((int)local_70 == 0) {
      FUN_00112d24(param_1,param_2,(undefined4 *)plVar51);
    }
    *(long ***)(param_1 + 0x128) = local_80;
    if (bVar4) {
      *(undefined8 *)(param_1 + 0x120) = unaff_x22;
    }
    break;
  case 0x23:
  case 0x24:
    plVar46 = (long *)param_3[1];
    bVar4 = false;
    iVar5 = *(int *)plVar46;
    pplVar7 = pplVar33;
    if (iVar5 == 5) {
      uVar44 = *(uint *)(param_1 + 0x148);
      uVar47 = (ulong)uVar44;
      pplVar35 = *(long ***)(param_1 + 0x140);
      if ((int)uVar44 < 1) {
LAB_001116dc:
        if (*(int *)(param_1 + 0x14c) <= (int)uVar44) {
LAB_00112c08:
          *(undefined4 *)(param_1 + 0x130) = 1;
          return;
        }
        uVar45 = -(ulong)(uVar44 >> 0x1f) & 0xfffffff000000000 | uVar47 << 4;
        plVar51 = *(long **)(param_1 + 0x120);
        uVar47 = (ulong)(uVar44 + 1);
        *(uint *)(param_1 + 0x148) = uVar44 + 1;
        *(long **)((long)pplVar35 + uVar45) = plVar46;
        pplVar12 = (long **)((long)pplVar35 + uVar45 + 8);
        pplVar7 = pplVar33;
        if (plVar51 != (long *)0x0) {
          uVar44 = *(uint *)(param_1 + 0x158);
          if ((int)uVar44 < *(int *)(param_1 + 0x15c)) {
            uVar14 = *(int *)(param_1 + 0x15c) + 1;
            pplVar35 = (long **)(ulong)uVar14;
            uVar47 = -(ulong)(uVar44 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar44 << 4;
            pplVar33 = pplVar12;
            uVar44 = uVar44 + 1;
            do {
              uVar13 = uVar44;
              param_8 = (byte)uVar13;
              pplVar12 = (long **)(*(long *)(param_1 + 0x150) + uVar47);
              pplVar12[1] = (long *)plVar51[1];
              *pplVar33 = (long *)pplVar12;
              plVar51 = (long *)*plVar51;
              if (plVar51 == (long *)0x0) {
                *(uint *)(param_1 + 0x158) = uVar13;
                plVar51 = (long *)0x0;
                pplVar7 = pplVar12;
                goto LAB_00111760;
              }
              uVar47 = uVar47 + 0x10;
              pplVar33 = pplVar12;
              uVar44 = uVar13 + 1;
            } while (uVar13 + 1 != uVar14);
            *(uint *)(param_1 + 0x158) = uVar13;
          }
          goto LAB_00112c08;
        }
LAB_00111760:
        param_7 = (byte)pplVar35;
        param_6 = (byte)uVar47;
        param_4 = (byte)plVar51;
        *pplVar12 = (long *)0x0;
        bVar4 = false;
        plVar46 = (long *)FUN_0010726c((long)param_1,(ulong *)(plVar46 + 1));
        if (plVar46 == (long *)0x0) goto LAB_0010f394;
LAB_00111920:
        iVar5 = *(int *)plVar46;
        if (iVar5 != 0x2f) goto LAB_0010fc70;
        iVar5 = *(int *)(param_1 + 0x134);
        while (0 < iVar5) {
          plVar46 = (long *)plVar46[2];
          iVar5 = iVar5 + -1;
          if ((plVar46 == (long *)0x0) || (*(int *)plVar46 != 0x2f)) goto LAB_0010f38c;
        }
        if ((iVar5 == 0) && (plVar46 = (long *)plVar46[1], plVar46 != (long *)0x0)) {
          iVar5 = *(int *)plVar46;
          goto LAB_0010fc70;
        }
LAB_0010f38c:
        if (!bVar4) goto LAB_0010f394;
      }
      else {
        pplVar7 = pplVar35;
        if (plVar46 != *pplVar35) {
          do {
            pplVar7 = pplVar7 + 2;
            if (pplVar7 == pplVar35 + ((ulong)(uVar44 - 1) + 1) * 2) goto LAB_001116dc;
            pplVar33 = pplVar7;
          } while (plVar46 != *pplVar7);
        }
        plVar51 = pplVar7[1];
        unaff_x22 = *(undefined8 *)(param_1 + 0x120);
        *(long **)(param_1 + 0x120) = plVar51;
        bVar4 = true;
        plVar46 = (long *)FUN_0010726c((long)param_1,(ulong *)(plVar46 + 1));
        param_7 = (byte)pplVar35;
        param_6 = (byte)uVar47;
        param_4 = (byte)plVar51;
        if (plVar46 != (long *)0x0) goto LAB_00111920;
      }
      *(undefined8 *)(param_1 + 0x120) = unaff_x22;
LAB_0010f394:
      *(undefined4 *)(param_1 + 0x130) = 1;
      return;
    }
LAB_0010fc70:
    uVar30 = SUB81(pplVar7,0);
    if ((iVar5 == 0x23) || (*(int *)param_3 == iVar5)) {
      pplVar7 = *(long ***)(param_1 + 0x128);
      param_3 = plVar46;
      goto LAB_0010fc14;
    }
    if (iVar5 != 0x24) {
      pplVar7 = *(long ***)(param_1 + 0x128);
      goto LAB_0010fc14;
    }
    plVar46 = (long *)plVar46[1];
    local_80 = *(long ***)(param_1 + 0x128);
    local_68[0] = *(long ****)(param_1 + 0x120);
    *(long ****)(param_1 + 0x128) = &local_80;
    local_78 = param_3;
    if (plVar46 == (long *)0x0) goto LAB_0010fc30;
    goto LAB_0010fc34;
  case 0x27:
    if ((param_2 >> 2 & 1) == 0) {
      lVar9 = (long)*(int *)((long *)param_3[1] + 1);
      lVar17 = *(long *)param_3[1];
      if (lVar9 != 0) {
        lVar16 = 0;
        lVar6 = *(long *)(param_1 + 0x100);
        do {
          cVar3 = *(char *)(lVar17 + lVar16);
          if (lVar6 == 0xff) {
            param_1[0xff] = '\0';
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            lVar15 = 1;
            lVar6 = 0;
            *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          }
          else {
            lVar15 = lVar6 + 1;
          }
          *(long *)(param_1 + 0x100) = lVar15;
          lVar16 = lVar16 + 1;
          param_1[lVar6] = cVar3;
          param_1[0x108] = cVar3;
          lVar6 = lVar15;
        } while (lVar9 != lVar16);
      }
    }
    else {
      lVar9 = (long)*(int *)(param_3[1] + 0x18);
      lVar17 = *(long *)(param_3[1] + 0x10);
      if (lVar9 != 0) {
        lVar16 = 0;
        lVar6 = *(long *)(param_1 + 0x100);
        do {
          cVar3 = *(char *)(lVar17 + lVar16);
          if (lVar6 == 0xff) {
            param_1[0xff] = '\0';
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            lVar15 = 1;
            lVar6 = 0;
            *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          }
          else {
            lVar15 = lVar6 + 1;
          }
          *(long *)(param_1 + 0x100) = lVar15;
          lVar16 = lVar16 + 1;
          param_1[lVar6] = cVar3;
          param_1[0x108] = cVar3;
          lVar6 = lVar15;
        } while (lVar9 != lVar16);
      }
    }
    break;
  case 0x28:
    FUN_0010f318(param_1,param_2,(long *)param_3[1],param_4,param_5,param_6,param_7,param_8,
                 unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
    break;
  case 0x29:
    if ((param_2 >> 5 & 1) == 0) {
      if ((param_3[1] != 0) && ((param_2 >> 6 & 1) == 0)) {
        local_80 = *(long ***)(param_1 + 0x128);
        *(long ****)(param_1 + 0x128) = &local_80;
        local_68[0] = *(long ****)(param_1 + 0x120);
        local_70._0_4_ = 0;
        local_78 = param_3;
        FUN_0010f318(param_1,param_2 & 0xffffff9f,(long *)param_3[1],(char)local_68[0],
                     (char)local_80,param_6,param_7,param_8,unaff_x29,unaff_x30,unaff_x19,unaff_x20,
                     unaff_x21,unaff_x23);
        *(long ***)(param_1 + 0x128) = local_80;
        if ((int)local_70 != 0) {
          return;
        }
        FUN_0010716c(param_1,0x20);
      }
      FUN_00113b80(param_1,param_2 & 0xffffff9f,param_3 + 2,*(long ***)(param_1 + 0x128));
    }
    else {
      pplVar33 = *(long ***)(param_1 + 0x128);
      FUN_00113b80(param_1,param_2 & 0xffffff9f,param_3 + 2,pplVar33);
      if ((long *)param_3[1] != (long *)0x0) {
        FUN_0010f318(param_1,param_2 & 0xffffff9f,(long *)param_3[1],(char)pplVar33,param_5,param_6,
                     param_7,param_8,unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
      }
    }
    break;
  case 0x2a:
    pplVar33 = *(long ***)(param_1 + 0x128);
    local_68[0] = *(long ****)(param_1 + 0x120);
    *(long ****)(param_1 + 0x128) = &local_80;
    local_70._0_4_ = 0;
    local_80 = pplVar33;
    if ((pplVar33 == (long **)0x0) || (2 < *(int *)pplVar33[1] - 0x19U)) {
      local_78 = param_3;
      FUN_0010f318(param_1,param_2,(long *)param_3[2],param_4,(char)&local_80,param_6,param_7,
                   param_8,unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
      *(long ***)(param_1 + 0x128) = pplVar33;
      if ((int)local_70 != 0) {
        return;
      }
    }
    else {
      pplVar7 = pplVar33;
      ppplVar29 = &local_80;
      uVar45 = 1;
      do {
        ppplVar21 = ppplVar29;
        uVar42 = uVar45;
        if (*(int *)(pplVar7 + 2) == 0) {
          if (3 < (uint)uVar45) {
            *(undefined4 *)(param_1 + 0x130) = 1;
            return;
          }
          uVar47 = uVar45 * 0x20;
          uVar42 = (ulong)((uint)uVar45 + 1);
          ppplVar21 = &local_80 + uVar45 * 4;
          plVar46 = pplVar7[1];
          *ppplVar21 = (long **)*pplVar7;
          (&local_78)[uVar45 * 4] = plVar46;
          ppplVar25 = (long ***)pplVar7[3];
          (&local_70)[uVar45 * 4] = (long)pplVar7[2];
          local_68[uVar45 * 4] = ppplVar25;
          (&local_80)[uVar45 * 4] = (long **)ppplVar29;
          *(long ****)(param_1 + 0x128) = ppplVar21;
          *(undefined4 *)(pplVar7 + 2) = 1;
        }
        pplVar7 = (long **)*pplVar7;
      } while ((pplVar7 != (long **)0x0) &&
              (ppplVar29 = ppplVar21, uVar45 = uVar42, *(int *)((long *)pplVar7)[1] - 0x19U < 3));
      local_78 = param_3;
      FUN_0010f318(param_1,param_2,(long *)param_3[2],(char)ppplVar25,(char)ppplVar21,(char)uVar47,1
                   ,param_8,unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
      *(long ***)(param_1 + 0x128) = pplVar33;
      if ((int)local_70 != 0) {
        return;
      }
      if ((int)uVar42 != 1) {
        do {
          uVar44 = (int)uVar42 - 1;
          uVar42 = (ulong)uVar44;
          FUN_00112d24(param_1,param_2,(undefined4 *)(&local_78)[uVar42 * 4]);
        } while (uVar44 != 1);
        pplVar33 = *(long ***)(param_1 + 0x128);
      }
    }
    FUN_001138b8(param_1,param_2,param_3 + 1,(long *)pplVar33);
    break;
  case 0x2b:
  case 0x2d:
    local_80 = *(long ***)(param_1 + 0x128);
    *(long ****)(param_1 + 0x128) = &local_80;
    local_68[0] = *(long ****)(param_1 + 0x120);
    local_70._0_4_ = 0;
    local_78 = param_3;
    FUN_0010f318(param_1,param_2,(long *)param_3[2],(char)local_68[0],(char)local_80,param_6,param_7
                 ,param_8,unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
    if ((int)local_70 == 0) {
      FUN_00112d24(param_1,param_2,(undefined4 *)param_3);
    }
    *(long ***)(param_1 + 0x128) = local_80;
    break;
  case 0x2c:
    if (*(short *)((long)param_3 + 0x12) != 0) {
      lVar9 = *(long *)(param_1 + 0x100);
      if (lVar9 == 0xff) {
        pcVar28 = *(code **)(param_1 + 0x110);
        param_1[0xff] = '\0';
        (*pcVar28)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        pcVar18 = (code *)0x2;
        *param_1 = '_';
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        param_1[1] = 'S';
LAB_00111618:
        param_4 = (byte)pcVar28;
        pcVar28 = pcVar18 + 1;
        *(code **)(param_1 + 0x100) = pcVar28;
        param_1[(long)pcVar18] = 'a';
        param_1[0x108] = 'a';
        if (pcVar28 == (code *)0xff) {
          pcVar28 = *(code **)(param_1 + 0x110);
          param_1[0xff] = '\0';
          (*pcVar28)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          param_5 = (byte)pcVar18;
          param_4 = (byte)pcVar28;
          *param_1 = 't';
          pcVar18 = (code *)0x1;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          goto LAB_00111650;
        }
LAB_00111634:
        param_5 = (byte)pcVar18;
        pcVar18 = pcVar28 + 1;
        *(code **)(param_1 + 0x100) = pcVar18;
        param_1[(long)pcVar28] = 't';
        param_1[0x108] = 't';
        if (pcVar18 != (code *)0xff) goto LAB_00111650;
        pcVar28 = *(code **)(param_1 + 0x110);
        param_1[0xff] = '\0';
        (*pcVar28)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        param_4 = (byte)pcVar28;
        pcVar28 = (code *)0x1;
        pcVar18 = (code *)0x0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        pcVar28 = (code *)(lVar9 + 1);
        *(code **)(param_1 + 0x100) = pcVar28;
        param_1[lVar9] = '_';
        param_1[0x108] = '_';
        if (pcVar28 == (code *)0xff) {
          pcVar18 = *(code **)(param_1 + 0x110);
          param_1[0xff] = '\0';
          (*pcVar18)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          param_4 = (byte)pcVar28;
          *param_1 = 'S';
          pcVar28 = (code *)0x2;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          param_1[1] = 'a';
          goto LAB_00111634;
        }
        pcVar18 = (code *)(lVar9 + 2);
        *(code **)(param_1 + 0x100) = pcVar18;
        param_1[(long)pcVar28] = 'S';
        param_1[0x108] = 'S';
        if (pcVar18 != (code *)0xff) goto LAB_00111618;
        pcVar28 = *(code **)(param_1 + 0x110);
        param_1[0xff] = '\0';
        (*pcVar28)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        param_5 = (byte)pcVar18;
        param_4 = (byte)pcVar28;
        *param_1 = 'a';
        pcVar18 = (code *)0x2;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        param_1[1] = 't';
LAB_00111650:
        pcVar28 = pcVar18 + 1;
      }
      *(code **)(param_1 + 0x100) = pcVar28;
      param_1[(long)pcVar18] = ' ';
      param_1[0x108] = ' ';
    }
    if ((undefined *)((long *)param_3[1])[1] == &UNK_0012ce50) {
      lVar9 = *(long *)(param_1 + 0x100);
    }
    else {
      FUN_0010f318(param_1,param_2,(long *)param_3[1],param_4,param_5,param_6,param_7,param_8,
                   unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
      lVar17 = *(long *)(param_1 + 0x100);
      if (lVar17 == 0xff) {
        param_1[0xff] = '\0';
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar9 = 1;
        lVar17 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar9 = lVar17 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar9;
      param_1[lVar17] = ' ';
      param_1[0x108] = ' ';
    }
    if (*(short *)(param_3 + 2) == 0) {
      if (lVar9 == 0xff) {
        param_1[0xff] = '\0';
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar9 = 2;
        *param_1 = '_';
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        param_1[1] = 'F';
LAB_00111334:
        lVar17 = lVar9 + 1;
        *(long *)(param_1 + 0x100) = lVar17;
        param_1[lVar9] = 'r';
        param_1[0x108] = 'r';
        if (lVar17 == 0xff) {
          param_1[0xff] = '\0';
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *param_1 = 'a';
          lVar9 = 2;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          param_1[1] = 'c';
        }
        else {
LAB_00111350:
          lVar16 = lVar17 + 1;
          *(long *)(param_1 + 0x100) = lVar16;
          param_1[lVar17] = 'a';
          param_1[0x108] = 'a';
          if (lVar16 != 0xff) goto LAB_0011136c;
          param_1[0xff] = '\0';
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *param_1 = 'c';
          lVar9 = 1;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
      }
      else {
        lVar17 = lVar9 + 1;
        *(long *)(param_1 + 0x100) = lVar17;
        param_1[lVar9] = '_';
        param_1[0x108] = '_';
        if (lVar17 == 0xff) {
          param_1[0xff] = '\0';
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *param_1 = 'F';
          lVar17 = 2;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          param_1[1] = 'r';
          goto LAB_00111350;
        }
        lVar9 = lVar9 + 2;
        *(long *)(param_1 + 0x100) = lVar9;
        param_1[lVar17] = 'F';
        param_1[0x108] = 'F';
        if (lVar9 != 0xff) goto LAB_00111334;
        param_1[0xff] = '\0';
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 'r';
        lVar16 = 2;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        param_1[1] = 'a';
LAB_0011136c:
        lVar9 = lVar16 + 1;
        *(long *)(param_1 + 0x100) = lVar9;
        param_1[lVar16] = 'c';
        param_1[0x108] = 'c';
        if (lVar9 == 0xff) {
          param_1[0xff] = '\0';
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar17 = 1;
          lVar9 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          goto LAB_0011138c;
        }
      }
      lVar17 = lVar9 + 1;
LAB_0011138c:
      *(long *)(param_1 + 0x100) = lVar17;
      param_1[lVar9] = 't';
      param_1[0x108] = 't';
      return;
    }
    if (lVar9 == 0xff) {
      param_1[0xff] = '\0';
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar9 = 2;
      *param_1 = '_';
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      param_1[1] = 'A';
LAB_001108a8:
      lVar17 = lVar9 + 1;
      *(long *)(param_1 + 0x100) = lVar17;
      param_1[lVar9] = 'c';
      param_1[0x108] = 'c';
      if (lVar17 == 0xff) {
        param_1[0xff] = '\0';
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 'c';
        lVar9 = 2;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        param_1[1] = 'u';
      }
      else {
LAB_001108c4:
        lVar16 = lVar17 + 1;
        *(long *)(param_1 + 0x100) = lVar16;
        param_1[lVar17] = 'c';
        param_1[0x108] = 'c';
        if (lVar16 != 0xff) goto LAB_001108e0;
        param_1[0xff] = '\0';
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 'u';
        lVar9 = 1;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
LAB_001108fc:
      lVar17 = lVar9 + 1;
    }
    else {
      lVar17 = lVar9 + 1;
      *(long *)(param_1 + 0x100) = lVar17;
      param_1[lVar9] = '_';
      param_1[0x108] = '_';
      if (lVar17 == 0xff) {
        param_1[0xff] = '\0';
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 'A';
        lVar17 = 2;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        param_1[1] = 'c';
        goto LAB_001108c4;
      }
      lVar9 = lVar9 + 2;
      *(long *)(param_1 + 0x100) = lVar9;
      param_1[lVar17] = 'A';
      param_1[0x108] = 'A';
      if (lVar9 != 0xff) goto LAB_001108a8;
      param_1[0xff] = '\0';
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *param_1 = 'c';
      lVar16 = 2;
      param_1[1] = 'c';
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
LAB_001108e0:
      lVar9 = lVar16 + 1;
      *(long *)(param_1 + 0x100) = lVar9;
      param_1[lVar16] = 'u';
      param_1[0x108] = 'u';
      if (lVar9 != 0xff) goto LAB_001108fc;
      param_1[0xff] = '\0';
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar17 = 1;
      lVar9 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    *(long *)(param_1 + 0x100) = lVar17;
    param_1[lVar9] = 'm';
    param_1[0x108] = 'm';
    break;
  case 0x2e:
  case 0x2f:
    if ((long *)param_3[1] != (long *)0x0) {
      FUN_0010f318(param_1,param_2,(long *)param_3[1],param_4,param_5,param_6,param_7,param_8,
                   unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
    }
    if (param_3[2] != 0) {
      uVar45 = *(ulong *)(param_1 + 0x100);
      uVar47 = uVar45;
      if (0xfd < uVar45) {
        param_1[uVar45] = '\0';
        uVar47 = 0;
        pcVar28 = *(code **)(param_1 + 0x110);
        (*pcVar28)(param_1,uVar45,*(undefined8 *)(param_1 + 0x118));
        param_4 = (byte)pcVar28;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      param_1[uVar47] = ',';
      *(ulong *)(param_1 + 0x100) = uVar47 + 2;
      param_1[uVar47 + 1] = ' ';
      param_1[0x108] = ' ';
      lVar9 = *(long *)(param_1 + 0x138);
      FUN_0010f318(param_1,param_2,(long *)param_3[2],param_4,param_5,param_6,param_7,param_8,
                   unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
      if ((*(long *)(param_1 + 0x138) == lVar9) && (*(long *)(param_1 + 0x100) == uVar47 + 2)) {
        *(ulong *)(param_1 + 0x100) = uVar47;
      }
    }
    break;
  case 0x30:
    plVar46 = (long *)param_3[2];
    if ((long *)param_3[1] != (long *)0x0) {
      FUN_0010f318(param_1,param_2,(long *)param_3[1],param_4,param_5,param_6,param_7,param_8,
                   unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
    }
    lVar9 = *(long *)(param_1 + 0x100);
    if (lVar9 == 0xff) {
      pcVar28 = *(code **)(param_1 + 0x110);
      param_1[0xff] = '\0';
      (*pcVar28)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      param_4 = (byte)pcVar28;
      lVar17 = 1;
      lVar9 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar17 = lVar9 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar17;
    param_1[lVar9] = '{';
    param_1[0x108] = '{';
    FUN_0010f318(param_1,param_2,plVar46,param_4,param_5,param_6,param_7,param_8,unaff_x29,unaff_x30
                 ,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
    lVar9 = *(long *)(param_1 + 0x100);
    if (lVar9 == 0xff) {
      param_1[0xff] = '\0';
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar17 = 1;
      lVar9 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar17 = lVar9 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar17;
    param_1[lVar9] = '}';
    param_1[0x108] = '}';
    break;
  case 0x31:
    lVar17 = param_3[1];
    pcVar50 = "operator";
    iVar5 = *(int *)(lVar17 + 0x10);
    lVar9 = *(long *)(param_1 + 0x100);
    do {
      cVar3 = *pcVar50;
      if (lVar9 == 0xff) {
        param_1[0xff] = '\0';
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar16 = 1;
        lVar9 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar16 = lVar9 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar16;
      pcVar50 = pcVar50 + 1;
      param_1[lVar9] = cVar3;
      param_1[0x108] = cVar3;
      lVar9 = lVar16;
    } while (pcVar50 != "");
    pcVar50 = *(char **)(lVar17 + 8);
    if ((byte)(*pcVar50 + 0x9fU) < 0x1a) {
      if (lVar16 == 0xff) {
        param_1[0xff] = '\0';
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar16 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      *(long *)(param_1 + 0x100) = lVar16 + 1;
      param_1[lVar16] = ' ';
      param_1[0x108] = ' ';
      pcVar50 = *(char **)(lVar17 + 8);
    }
    lVar9 = (long)iVar5;
    if (pcVar50[lVar9 + -1] == ' ') {
      lVar9 = (long)(iVar5 + -1);
    }
    if (lVar9 != 0) {
      pcVar1 = pcVar50 + lVar9;
      lVar9 = *(long *)(param_1 + 0x100);
      do {
        cVar3 = *pcVar50;
        if (lVar9 == 0xff) {
          param_1[0xff] = '\0';
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar17 = 1;
          lVar9 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
        else {
          lVar17 = lVar9 + 1;
        }
        *(long *)(param_1 + 0x100) = lVar17;
        pcVar50 = pcVar50 + 1;
        param_1[lVar9] = cVar3;
        param_1[0x108] = cVar3;
        lVar9 = lVar17;
      } while (pcVar50 != pcVar1);
    }
    break;
  case 0x32:
    lVar9 = 0;
    lVar17 = *(long *)(param_1 + 0x100);
    do {
      cVar3 = "operator "[lVar9];
      if (lVar17 == 0xff) {
        ppplVar25 = *(long ****)(param_1 + 0x110);
        param_1[0xff] = '\0';
        (*(code *)ppplVar25)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar16 = 1;
        lVar17 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar16 = lVar17 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar16;
      lVar9 = lVar9 + 1;
      param_1[lVar17] = cVar3;
      param_1[0x108] = cVar3;
      lVar17 = lVar16;
    } while (lVar9 != 9);
    FUN_0010f318(param_1,param_2,(long *)param_3[2],(char)ppplVar25,(char)pplVar33,(char)uVar47,
                 (char)plVar46,(char)uVar45,unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,
                 unaff_x23);
    break;
  default:
    *(undefined4 *)(param_1 + 0x130) = 1;
    break;
  case 0x34:
    lVar9 = 0;
    lVar17 = *(long *)(param_1 + 0x100);
    do {
      cVar3 = "operator "[lVar9];
      if (lVar17 == 0xff) {
        ppplVar25 = *(long ****)(param_1 + 0x110);
        param_1[0xff] = '\0';
        (*(code *)ppplVar25)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar16 = 1;
        lVar17 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar16 = lVar17 + 1;
      }
      uVar31 = (undefined)uVar45;
      uVar23 = SUB81(plVar46,0);
      uVar36 = (undefined)uVar47;
      uVar34 = SUB81(pplVar33,0);
      uVar30 = SUB81(ppplVar25,0);
      *(long *)(param_1 + 0x100) = lVar16;
      lVar9 = lVar9 + 1;
      param_1[lVar17] = cVar3;
      param_1[0x108] = cVar3;
      lVar17 = lVar16;
    } while (lVar9 != 9);
    if (*(long **)(param_1 + 0x160) != (long *)0x0) {
      local_80 = *(long ***)(param_1 + 0x120);
      *(long ****)(param_1 + 0x120) = &local_80;
      local_78 = *(long **)(param_1 + 0x160);
    }
    plVar46 = (long *)param_3[1];
    if (*(int *)plVar46 == 4) {
      FUN_0010f318(param_1,param_2,(long *)plVar46[1],uVar30,uVar34,uVar36,uVar23,uVar31,unaff_x29,
                   unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
      if (*(long *)(param_1 + 0x160) != 0) {
        *(long ***)(param_1 + 0x120) = local_80;
      }
      if (param_1[0x108] == '<') {
        lVar9 = *(long *)(param_1 + 0x100);
        if (lVar9 == 0xff) {
          pcVar28 = *(code **)(param_1 + 0x110);
          param_1[0xff] = '\0';
          (*pcVar28)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          uVar30 = SUB81(pcVar28,0);
          *(undefined8 *)(param_1 + 0x100) = 0;
          lVar9 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
        *(long *)(param_1 + 0x100) = lVar9 + 1;
        param_1[lVar9] = ' ';
        param_1[0x108] = ' ';
      }
      lVar9 = *(long *)(param_1 + 0x100);
      if (lVar9 == 0xff) {
        pcVar28 = *(code **)(param_1 + 0x110);
        param_1[0xff] = '\0';
        (*pcVar28)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        uVar30 = SUB81(pcVar28,0);
        lVar9 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      *(long *)(param_1 + 0x100) = lVar9 + 1;
      param_1[lVar9] = '<';
      param_1[0x108] = '<';
      FUN_0010f318(param_1,param_2,*(long **)(param_3[1] + 0x10),uVar30,uVar34,uVar36,uVar23,uVar31,
                   unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
      if (param_1[0x108] == '>') {
        lVar9 = *(long *)(param_1 + 0x100);
        if (lVar9 == 0xff) {
          param_1[0xff] = '\0';
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(undefined8 *)(param_1 + 0x100) = 0;
          lVar9 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
        *(long *)(param_1 + 0x100) = lVar9 + 1;
        param_1[lVar9] = ' ';
        param_1[0x108] = ' ';
      }
      lVar9 = *(long *)(param_1 + 0x100);
      if (lVar9 == 0xff) {
        param_1[0xff] = '\0';
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar9 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      *(long *)(param_1 + 0x100) = lVar9 + 1;
      param_1[lVar9] = '>';
      param_1[0x108] = '>';
    }
    else {
      FUN_0010f318(param_1,param_2,plVar46,uVar30,uVar34,uVar36,uVar23,uVar31,unaff_x29,unaff_x30,
                   unaff_x19,unaff_x20,unaff_x21,unaff_x23);
      if (*(long *)(param_1 + 0x160) != 0) {
        *(long ***)(param_1 + 0x120) = local_80;
      }
    }
    break;
  case 0x35:
    FUN_00113e30(param_1,uVar42,(int *)param_3[1]);
    break;
  case 0x36:
    piVar8 = (int *)param_3[1];
    plVar46 = (long *)param_3[2];
    if (*piVar8 == 0x31) {
      pcVar50 = **(char ***)(piVar8 + 2);
      iVar5 = strcmp(pcVar50,"ad");
      if (iVar5 == 0) {
        uVar44 = *(uint *)plVar46;
        if (uVar44 != 3) goto LAB_001117a8;
        if ((*(int *)(long *)plVar46[1] == 1) && (*(int *)plVar46[2] == 0x29)) {
          plVar46 = (long *)plVar46[1];
        }
      }
      else {
        uVar44 = *(uint *)plVar46;
LAB_001117a8:
        if (uVar44 == 0x38) {
          FUN_00113f04((long)param_1,param_2,(uint *)plVar46[1]);
          FUN_00113e30(param_1,uVar42,piVar8);
          return;
        }
      }
      FUN_00113e30(param_1,uVar42,piVar8);
      iVar5 = strcmp(pcVar50,"gs");
      if (iVar5 == 0) {
        FUN_0010f318(param_1,param_2,plVar46,param_4,param_5,param_6,param_7,param_8,unaff_x29,
                     unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
        return;
      }
      iVar5 = strcmp(pcVar50,"st");
      if (iVar5 == 0) {
        FUN_0010716c(param_1,0x28);
        FUN_0010f318(param_1,param_2,plVar46,param_4,param_5,param_6,param_7,param_8,unaff_x29,
                     unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
        lVar9 = *(long *)(param_1 + 0x100);
        if (lVar9 == 0xff) {
          param_1[0xff] = '\0';
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar9 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
        *(long *)(param_1 + 0x100) = lVar9 + 1;
        param_1[lVar9] = ')';
        param_1[0x108] = ')';
        return;
      }
    }
    else if (*piVar8 == 0x33) {
      lVar9 = *(long *)(param_1 + 0x100);
      if (lVar9 == 0xff) {
        pcVar28 = *(code **)(param_1 + 0x110);
        param_1[0xff] = '\0';
        (*pcVar28)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        param_4 = (byte)pcVar28;
        lVar9 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      *(long *)(param_1 + 0x100) = lVar9 + 1;
      param_1[lVar9] = '(';
      param_1[0x108] = '(';
      FUN_0010f318(param_1,param_2,*(long **)(piVar8 + 2),param_4,param_5,param_6,param_7,param_8,
                   unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
      FUN_0010716c(param_1,0x29);
    }
    else {
      FUN_00113e30(param_1,uVar42,piVar8);
    }
    FUN_00113f04((long)param_1,param_2,(uint *)plVar46);
    break;
  case 0x37:
    piVar8 = (int *)param_3[2];
    if (*piVar8 != 0x38) goto LAB_0010f394;
    piVar26 = (int *)param_3[1];
    ppbVar27 = *(byte ***)(piVar26 + 2);
    pbVar10 = *ppbVar27;
    bVar32 = pbVar10[1];
    if (bVar32 == 99) {
      bVar32 = *pbVar10;
      param_6 = bVar32 + 0x8e;
      if ((param_6 < 2) || (bVar32 = bVar32 + 0x9d, bVar32 < 2)) {
        FUN_00113e30(param_1,uVar42,piVar26);
        uVar30 = SUB81(ppbVar27,0);
        FUN_0010716c(param_1,0x3c);
        FUN_0010f318(param_1,param_2,*(long **)(param_3[2] + 8),uVar30,bVar32,param_6,param_7,
                     param_8,unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
        FUN_00107470(param_1,">(");
        FUN_0010f318(param_1,param_2,*(long **)(param_3[2] + 0x10),uVar30,bVar32,param_6,param_7,
                     param_8,unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
        FUN_0010716c(param_1,0x29);
        return;
      }
    }
    if (((*piVar26 == 0x31) && (*(int *)(ppbVar27 + 2) == 1)) && (*ppbVar27[1] == 0x3e)) {
      FUN_0010716c(param_1,0x28);
      piVar8 = (int *)param_3[2];
      pbVar10 = **(byte ***)(param_3[1] + 8);
    }
    uVar30 = SUB81(ppbVar27,0);
    iVar5 = strcmp((char *)pbVar10,"cl");
    puVar22 = *(uint **)(piVar8 + 2);
    if ((iVar5 == 0) && (*puVar22 == 3)) {
      if (**(int **)(puVar22 + 4) != 0x29) {
        *(undefined4 *)(param_1 + 0x130) = 1;
      }
      FUN_00113f04((long)param_1,param_2,*(uint **)(puVar22 + 2));
    }
    else {
      FUN_00113f04((long)param_1,param_2,puVar22);
    }
    piVar8 = (int *)param_3[1];
    pcVar50 = **(char ***)(piVar8 + 2);
    iVar5 = strcmp(pcVar50,"ix");
    if (iVar5 == 0) {
      FUN_0010716c(param_1,0x5b);
      FUN_0010f318(param_1,param_2,*(long **)(param_3[2] + 0x10),uVar30,bVar32,param_6,param_7,
                   param_8,unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
      FUN_0010716c(param_1,0x5d);
    }
    else {
      iVar5 = strcmp(pcVar50,"cl");
      if (iVar5 != 0) {
        FUN_00113e30(param_1,uVar42,piVar8);
      }
      FUN_00113f04((long)param_1,param_2,*(uint **)(param_3[2] + 0x10));
    }
    if (((*(int *)param_3[1] == 0x31) &&
        (lVar9 = *(long *)((int *)param_3[1] + 2), *(int *)(lVar9 + 0x10) == 1)) &&
       (**(char **)(lVar9 + 8) == '>')) {
      FUN_0010716c(param_1,0x29);
    }
    break;
  case 0x38:
    *(undefined4 *)(param_1 + 0x130) = 1;
    break;
  case 0x39:
    piVar8 = (int *)param_3[2];
    if ((*piVar8 != 0x3a) || (piVar26 = *(int **)(piVar8 + 4), *piVar26 != 0x3b)) goto LAB_0010f394;
    piVar48 = (int *)param_3[1];
    puVar22 = *(uint **)(piVar8 + 2);
    plVar46 = *(long **)(piVar26 + 2);
    puVar40 = *(uint **)(piVar26 + 4);
    iVar5 = strcmp(**(char ***)(piVar48 + 2),"qu");
    uVar30 = SUB81(piVar26,0);
    if (iVar5 == 0) {
      FUN_00113f04((long)param_1,param_2,puVar22);
      FUN_00113e30(param_1,uVar42,piVar48);
      FUN_00113f04((long)param_1,param_2,(uint *)plVar46);
      FUN_00107470(param_1," : ");
      FUN_00113f04((long)param_1,param_2,puVar40);
    }
    else {
      FUN_00107470(param_1,"new ");
      if (*(long *)(puVar22 + 2) != 0) {
        FUN_00113f04((long)param_1,param_2,puVar22);
        FUN_0010716c(param_1,0x20);
      }
      FUN_0010f318(param_1,param_2,plVar46,uVar30,param_5,param_6,param_7,param_8,unaff_x29,
                   unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
      if (puVar40 != (uint *)0x0) {
        FUN_00113f04((long)param_1,param_2,puVar40);
      }
    }
    break;
  case 0x3a:
  case 0x3b:
    *(undefined4 *)(param_1 + 0x130) = 1;
    break;
  case 0x3c:
  case 0x3d:
    uVar44 = 0;
    if ((*(int *)param_3[1] == 0x27) &&
       (uVar44 = *(uint *)(*(long *)((int *)param_3[1] + 2) + 0x1c), uVar44 != 0)) {
      if (uVar44 < 7) {
        if (*(int *)param_3[2] == 0) {
          if (iVar5 == 0x3d) {
            FUN_0010716c(param_1,0x2d);
          }
          FUN_0010f318(param_1,param_2,(long *)param_3[2],param_4,param_5,param_6,param_7,param_8,
                       unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
          switch(uVar44) {
          case 2:
            FUN_0010716c(param_1,0x75);
            return;
          case 3:
            FUN_0010716c(param_1,0x6c);
            return;
          case 4:
            FUN_00107470(param_1,"ul");
            return;
          case 5:
            FUN_00107470(param_1,"ll");
            return;
          case 6:
            FUN_00107470(param_1,"ull");
            return;
          default:
            return;
          }
        }
      }
      else if ((((uVar44 == 7) && (piVar8 = (int *)param_3[2], *piVar8 == 0)) && (piVar8[4] == 1))
              && (iVar5 == 0x3c)) {
        if (**(char **)(piVar8 + 2) == '0') {
          FUN_00107470(param_1,"false");
          return;
        }
        if (**(char **)(piVar8 + 2) == '1') {
          FUN_00107470(param_1,"true");
          return;
        }
      }
    }
    lVar9 = *(long *)(param_1 + 0x100);
    if (lVar9 == 0xff) {
      pcVar28 = *(code **)(param_1 + 0x110);
      param_1[0xff] = '\0';
      (*pcVar28)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      param_4 = (byte)pcVar28;
      lVar17 = 1;
      lVar9 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar17 = lVar9 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar17;
    param_1[lVar9] = '(';
    param_1[0x108] = '(';
    FUN_0010f318(param_1,param_2,(long *)param_3[1],param_4,param_5,param_6,param_7,param_8,
                 unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
    lVar9 = *(long *)(param_1 + 0x100);
    if (lVar9 == 0xff) {
      pcVar28 = *(code **)(param_1 + 0x110);
      param_1[0xff] = '\0';
      (*pcVar28)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      param_4 = (byte)pcVar28;
      lVar17 = 1;
      lVar9 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar17 = lVar9 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar17;
    param_1[lVar9] = ')';
    param_1[0x108] = ')';
    if (*(int *)param_3 == 0x3d) {
      FUN_0010716c(param_1,0x2d);
    }
    if (uVar44 == 8) {
      FUN_0010716c(param_1,0x5b);
      FUN_0010f318(param_1,param_2,(long *)param_3[2],param_4,param_5,param_6,param_7,param_8,
                   unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
      FUN_0010716c(param_1,0x5d);
    }
    else {
      FUN_0010f318(param_1,param_2,(long *)param_3[2],param_4,param_5,param_6,param_7,param_8,
                   unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
    }
    break;
  case 0x3e:
    pcVar50 = "java resource ";
    lVar9 = *(long *)(param_1 + 0x100);
    do {
      cVar3 = *pcVar50;
      if (lVar9 == 0xff) {
        ppplVar25 = *(long ****)(param_1 + 0x110);
        param_1[0xff] = '\0';
        (*(code *)ppplVar25)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar17 = 1;
        lVar9 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar17 = lVar9 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar17;
      pcVar50 = pcVar50 + 1;
      param_1[lVar9] = cVar3;
      param_1[0x108] = cVar3;
      lVar9 = lVar17;
    } while (pcVar50 != "");
    FUN_0010f318(param_1,param_2,(long *)param_3[1],(char)ppplVar25,(char)pplVar33,(char)uVar47,
                 (char)plVar46,(char)uVar45,unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,
                 unaff_x23);
    break;
  case 0x3f:
    FUN_0010f318(param_1,param_2,(long *)param_3[1],param_4,param_5,param_6,param_7,param_8,
                 unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
    FUN_0010f318(param_1,param_2,(long *)param_3[2],param_4,param_5,param_6,param_7,param_8,
                 unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
    break;
  case 0x40:
    lVar9 = *(long *)(param_1 + 0x100);
    cVar3 = *(char *)(param_3 + 1);
    if (lVar9 == 0xff) {
      param_1[0xff] = '\0';
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar17 = 1;
      lVar9 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar17 = lVar9 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar17;
    param_1[lVar9] = cVar3;
    param_1[0x108] = cVar3;
    break;
  case 0x41:
    sprintf((char *)&local_80,"%ld",param_3[1]);
    sVar41 = strlen((char *)&local_80);
    if (sVar41 != 0) {
      sVar11 = 0;
      lVar9 = *(long *)(param_1 + 0x100);
      do {
        cVar3 = *(char *)((long)&local_80 + sVar11);
        if (lVar9 == 0xff) {
          param_1[0xff] = '\0';
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar17 = 1;
          lVar9 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
        else {
          lVar17 = lVar9 + 1;
        }
        *(long *)(param_1 + 0x100) = lVar17;
        sVar11 = sVar11 + 1;
        param_1[lVar9] = cVar3;
        param_1[0x108] = cVar3;
        lVar9 = lVar17;
      } while (sVar11 != sVar41);
    }
    break;
  case 0x42:
    pcVar50 = "decltype (";
    lVar9 = *(long *)(param_1 + 0x100);
    do {
      cVar3 = *pcVar50;
      if (lVar9 == 0xff) {
        ppplVar25 = *(long ****)(param_1 + 0x110);
        param_1[0xff] = '\0';
        (*(code *)ppplVar25)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar17 = 1;
        lVar9 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar17 = lVar9 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar17;
      pcVar50 = pcVar50 + 1;
      param_1[lVar9] = cVar3;
      param_1[0x108] = cVar3;
      lVar9 = lVar17;
    } while (pcVar50 != "");
    FUN_0010f318(param_1,param_2,(long *)param_3[1],(char)ppplVar25,(char)pplVar33,(char)uVar47,
                 (char)plVar46,(char)uVar45,unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,
                 unaff_x23);
    lVar9 = *(long *)(param_1 + 0x100);
    if (lVar9 == 0xff) {
      param_1[0xff] = '\0';
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar17 = 1;
      lVar9 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar17 = lVar9 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar17;
    param_1[lVar9] = ')';
    param_1[0x108] = ')';
    break;
  case 0x43:
    lVar9 = 0;
    lVar17 = *(long *)(param_1 + 0x100);
    do {
      cVar3 = "global constructors keyed to "[lVar9];
      if (lVar17 == 0xff) {
        ppplVar25 = *(long ****)(param_1 + 0x110);
        param_1[0xff] = '\0';
        (*(code *)ppplVar25)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar16 = 1;
        lVar17 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar16 = lVar17 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar16;
      lVar9 = lVar9 + 1;
      param_1[lVar17] = cVar3;
      param_1[0x108] = cVar3;
      lVar17 = lVar16;
    } while (lVar9 != 0x1d);
    FUN_0010f318(param_1,param_2,(long *)param_3[1],(char)ppplVar25,(char)pplVar33,(char)uVar47,
                 (char)plVar46,(char)uVar45,unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,
                 unaff_x23);
    break;
  case 0x44:
    lVar9 = 0;
    lVar17 = *(long *)(param_1 + 0x100);
    do {
      cVar3 = "global destructors keyed to "[lVar9];
      if (lVar17 == 0xff) {
        ppplVar25 = *(long ****)(param_1 + 0x110);
        param_1[0xff] = '\0';
        (*(code *)ppplVar25)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar16 = 1;
        lVar17 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar16 = lVar17 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar16;
      lVar9 = lVar9 + 1;
      param_1[lVar17] = cVar3;
      param_1[0x108] = cVar3;
      lVar17 = lVar16;
    } while (lVar9 != 0x1c);
    FUN_0010f318(param_1,param_2,(long *)param_3[1],(char)ppplVar25,(char)pplVar33,(char)uVar47,
                 (char)plVar46,(char)uVar45,unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,
                 unaff_x23);
    break;
  case 0x45:
    pcVar50 = "{lambda(";
    lVar9 = *(long *)(param_1 + 0x100);
    do {
      cVar3 = *pcVar50;
      if (lVar9 == 0xff) {
        ppplVar25 = *(long ****)(param_1 + 0x110);
        param_1[0xff] = '\0';
        (*(code *)ppplVar25)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar17 = 1;
        lVar9 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar17 = lVar9 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar17;
      pcVar50 = pcVar50 + 1;
      param_1[lVar9] = cVar3;
      param_1[0x108] = cVar3;
      lVar9 = lVar17;
    } while (pcVar50 != "");
    FUN_0010f318(param_1,param_2,(long *)param_3[1],(char)ppplVar25,(char)pplVar33,(char)uVar47,
                 (char)plVar46,(char)uVar45,unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,
                 unaff_x23);
    lVar9 = *(long *)(param_1 + 0x100);
    if (lVar9 == 0xff) {
      param_1[0xff] = '\0';
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar17 = 1;
      *param_1 = ')';
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
LAB_00111080:
      lVar9 = lVar17 + 1;
    }
    else {
      lVar17 = lVar9 + 1;
      *(long *)(param_1 + 0x100) = lVar17;
      param_1[lVar9] = ')';
      param_1[0x108] = ')';
      if (lVar17 != 0xff) goto LAB_00111080;
      param_1[0xff] = '\0';
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar9 = 1;
      lVar17 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    *(long *)(param_1 + 0x100) = lVar9;
    param_1[lVar17] = '#';
    param_1[0x108] = '#';
    sVar41 = 0;
    sprintf((char *)&local_80,"%ld",(long)(*(int *)(param_3 + 2) + 1));
    sVar11 = strlen((char *)&local_80);
    lVar9 = *(long *)(param_1 + 0x100);
    lVar17 = lVar9;
    if (sVar11 != 0) {
      do {
        cVar3 = *(char *)((long)&local_80 + sVar41);
        if (lVar17 == 0xff) {
          param_1[0xff] = '\0';
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar9 = 1;
          lVar17 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
        else {
          lVar9 = lVar17 + 1;
        }
        *(long *)(param_1 + 0x100) = lVar9;
        sVar41 = sVar41 + 1;
        param_1[lVar17] = cVar3;
        param_1[0x108] = cVar3;
        lVar17 = lVar9;
      } while (sVar41 != sVar11);
    }
    if (lVar9 == 0xff) {
      param_1[0xff] = '\0';
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar17 = 1;
      lVar9 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar17 = lVar9 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar17;
    param_1[lVar9] = '}';
    param_1[0x108] = '}';
    break;
  case 0x47:
    pcVar50 = "{unnamed type#";
    lVar9 = *(long *)(param_1 + 0x100);
    do {
      cVar3 = *pcVar50;
      if (lVar9 == 0xff) {
        param_1[0xff] = '\0';
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar17 = 1;
        lVar9 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar17 = lVar9 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar17;
      pcVar50 = pcVar50 + 1;
      param_1[lVar9] = cVar3;
      param_1[0x108] = cVar3;
      lVar9 = lVar17;
    } while (pcVar50 != "");
    sVar41 = 0;
    sprintf((char *)&local_80,"%ld",param_3[1] + 1);
    sVar11 = strlen((char *)&local_80);
    lVar9 = *(long *)(param_1 + 0x100);
    lVar17 = lVar9;
    if (sVar11 != 0) {
      do {
        cVar3 = *(char *)((long)&local_80 + sVar41);
        if (lVar17 == 0xff) {
          param_1[0xff] = '\0';
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar9 = 1;
          lVar17 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
        else {
          lVar9 = lVar17 + 1;
        }
        *(long *)(param_1 + 0x100) = lVar9;
        sVar41 = sVar41 + 1;
        param_1[lVar17] = cVar3;
        param_1[0x108] = cVar3;
        lVar17 = lVar9;
      } while (sVar41 != sVar11);
    }
    if (lVar9 == 0xff) {
      param_1[0xff] = '\0';
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar17 = 1;
      lVar9 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar17 = lVar9 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar17;
    param_1[lVar9] = '}';
    param_1[0x108] = '}';
    break;
  case 0x48:
    lVar9 = 0;
    lVar17 = *(long *)(param_1 + 0x100);
    do {
      cVar3 = "transaction clone for "[lVar9];
      if (lVar17 == 0xff) {
        ppplVar25 = *(long ****)(param_1 + 0x110);
        param_1[0xff] = '\0';
        (*(code *)ppplVar25)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar16 = 1;
        lVar17 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar16 = lVar17 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar16;
      lVar9 = lVar9 + 1;
      param_1[lVar17] = cVar3;
      param_1[0x108] = cVar3;
      lVar17 = lVar16;
    } while (lVar9 != 0x16);
    FUN_0010f318(param_1,param_2,(long *)param_3[1],(char)ppplVar25,(char)pplVar33,(char)uVar47,
                 (char)plVar46,(char)uVar45,unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,
                 unaff_x23);
    break;
  case 0x49:
    lVar9 = 0;
    lVar17 = *(long *)(param_1 + 0x100);
    do {
      cVar3 = "non-transaction clone for "[lVar9];
      if (lVar17 == 0xff) {
        ppplVar25 = *(long ****)(param_1 + 0x110);
        param_1[0xff] = '\0';
        (*(code *)ppplVar25)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar16 = 1;
        lVar17 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar16 = lVar17 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar16;
      lVar9 = lVar9 + 1;
      param_1[lVar17] = cVar3;
      param_1[0x108] = cVar3;
      lVar17 = lVar16;
    } while (lVar9 != 0x1a);
    FUN_0010f318(param_1,param_2,(long *)param_3[1],(char)ppplVar25,(char)pplVar33,(char)uVar47,
                 (char)plVar46,(char)uVar45,unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,
                 unaff_x23);
    break;
  case 0x4a:
    iVar5 = 0;
    piVar8 = FUN_001072e8((long)param_1,(undefined4 *)param_3[1]);
    if (piVar8 == (int *)0x0) {
      FUN_00113f04((long)param_1,param_2,(uint *)param_3[1]);
      FUN_00107470(param_1,"...");
    }
    else {
      do {
        if ((*piVar8 != 0x2f) || (*(long *)(piVar8 + 2) == 0)) {
          plVar51 = (long *)param_3[1];
          if (iVar5 == 0) {
            return;
          }
          goto LAB_00110328;
        }
        piVar8 = *(int **)(piVar8 + 4);
        iVar5 = iVar5 + 1;
      } while (piVar8 != (int *)0x0);
      plVar51 = (long *)param_3[1];
LAB_00110328:
      iVar38 = 0;
      do {
        *(int *)(param_1 + 0x134) = iVar38;
        FUN_0010f318(param_1,param_2,plVar51,(char)ppplVar25,(char)pplVar33,(char)uVar47,
                     (char)plVar46,(char)uVar45,unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,
                     unaff_x23);
        if (iVar38 < iVar5 + -1) {
          lVar9 = *(long *)(param_1 + 0x100);
          if (lVar9 == 0xff) {
            ppplVar25 = *(long ****)(param_1 + 0x110);
            param_1[0xff] = '\0';
            (*(code *)ppplVar25)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            *param_1 = ',';
            lVar17 = 1;
            *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
LAB_00110378:
            lVar9 = lVar17 + 1;
          }
          else {
            lVar17 = lVar9 + 1;
            *(long *)(param_1 + 0x100) = lVar17;
            param_1[lVar9] = ',';
            param_1[0x108] = ',';
            if (lVar17 != 0xff) goto LAB_00110378;
            ppplVar25 = *(long ****)(param_1 + 0x110);
            param_1[0xff] = '\0';
            (*(code *)ppplVar25)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            lVar9 = 1;
            lVar17 = 0;
            *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          }
          *(long *)(param_1 + 0x100) = lVar9;
          param_1[lVar17] = ' ';
          param_1[0x108] = ' ';
        }
        iVar38 = iVar38 + 1;
      } while (iVar38 != iVar5);
    }
    break;
  case 0x4b:
    FUN_0010f318(param_1,param_2,(long *)param_3[1],param_4,param_5,param_6,param_7,param_8,
                 unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
    lVar9 = *(long *)(param_1 + 0x100);
    if (lVar9 == 0xff) {
      param_1[0xff] = '\0';
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *param_1 = '[';
      lVar9 = 2;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      param_1[1] = 'a';
LAB_001103f0:
      pcVar28 = (code *)(lVar9 + 1);
      *(code **)(param_1 + 0x100) = pcVar28;
      param_1[lVar9] = 'b';
      param_1[0x108] = 'b';
      if (pcVar28 == (code *)0xff) {
        pcVar18 = *(code **)(param_1 + 0x110);
        param_1[0xff] = '\0';
        (*pcVar18)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        param_5 = (byte)pcVar18;
        *param_1 = 'i';
        pcVar18 = (code *)0x1;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        goto LAB_00110428;
      }
LAB_0011040c:
      pcVar18 = pcVar28 + 1;
      *(code **)(param_1 + 0x100) = pcVar18;
      param_1[(long)pcVar28] = 'i';
      param_1[0x108] = 'i';
      if (pcVar18 != (code *)0xff) goto LAB_00110428;
      pcVar28 = *(code **)(param_1 + 0x110);
      param_1[0xff] = '\0';
      (*pcVar28)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      uVar30 = SUB81(pcVar28,0);
      pcVar28 = (code *)0x1;
      pcVar18 = (code *)0x0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar17 = lVar9 + 1;
      *(long *)(param_1 + 0x100) = lVar17;
      param_1[lVar9] = '[';
      param_1[0x108] = '[';
      if (lVar17 == 0xff) {
        pcVar28 = *(code **)(param_1 + 0x110);
        param_1[0xff] = '\0';
        (*pcVar28)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        param_5 = (byte)pcVar28;
        *param_1 = 'a';
        pcVar28 = (code *)0x2;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        param_1[1] = 'b';
        goto LAB_0011040c;
      }
      lVar9 = lVar9 + 2;
      *(long *)(param_1 + 0x100) = lVar9;
      param_1[lVar17] = 'a';
      param_1[0x108] = 'a';
      if (lVar9 != 0xff) goto LAB_001103f0;
      pcVar28 = *(code **)(param_1 + 0x110);
      param_1[0xff] = '\0';
      (*pcVar28)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *param_1 = 'b';
      pcVar18 = (code *)0x2;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      param_1[1] = 'i';
LAB_00110428:
      uVar30 = SUB81(pcVar28,0);
      pcVar28 = pcVar18 + 1;
    }
    *(code **)(param_1 + 0x100) = pcVar28;
    param_1[(long)pcVar18] = ':';
    param_1[0x108] = ':';
    FUN_0010f318(param_1,param_2,(long *)param_3[2],uVar30,param_5,param_6,param_7,param_8,unaff_x29
                 ,unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
    lVar9 = *(long *)(param_1 + 0x100);
    if (lVar9 == 0xff) {
      param_1[0xff] = '\0';
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar17 = 1;
      lVar9 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar17 = lVar9 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar17;
    param_1[lVar9] = ']';
    param_1[0x108] = ']';
    break;
  case 0x4c:
    pcVar50 = " [clone ";
    FUN_0010f318(param_1,param_2,(long *)param_3[1],param_4,param_5,param_6,param_7,param_8,
                 unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
    lVar9 = *(long *)(param_1 + 0x100);
    do {
      cVar3 = *pcVar50;
      if (lVar9 == 0xff) {
        ppplVar25 = *(long ****)(param_1 + 0x110);
        param_1[0xff] = '\0';
        (*(code *)ppplVar25)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar17 = 1;
        lVar9 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar17 = lVar9 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar17;
      pcVar50 = pcVar50 + 1;
      param_1[lVar9] = cVar3;
      param_1[0x108] = cVar3;
      lVar9 = lVar17;
    } while (pcVar50 != "");
    FUN_0010f318(param_1,param_2,(long *)param_3[2],(char)ppplVar25,(char)pplVar33,(char)uVar47,
                 (char)plVar46,(char)uVar45,unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,
                 unaff_x23);
    lVar9 = *(long *)(param_1 + 0x100);
    if (lVar9 == 0xff) {
      param_1[0xff] = '\0';
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar17 = 1;
      lVar9 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar17 = lVar9 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar17;
    param_1[lVar9] = ']';
    param_1[0x108] = ']';
  }
  return;
}



void FUN_00112d24(undefined *param_1,uint param_2,undefined4 *param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined uVar5;
  code *in_x3;
  code *pcVar6;
  undefined uVar7;
  undefined8 in_x4;
  undefined in_w5;
  undefined in_w6;
  undefined in_w7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  char *pcVar8;
  undefined8 unaff_x21;
  undefined8 unaff_x23;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  
  uVar7 = (undefined)in_x4;
  uVar5 = SUB81(in_x3,0);
  switch(*param_3) {
  case 3:
    param_3 = *(undefined4 **)(param_3 + 2);
  default:
LAB_00112d60:
    FUN_0010f318(param_1,param_2,(long *)param_3,uVar5,uVar7,in_w5,in_w6,in_w7,in_stack_00000000,
                 in_stack_00000008,in_stack_00000010,in_stack_00000018,in_stack_00000020,
                 in_stack_00000030);
    return;
  case 0x19:
  case 0x1c:
    lVar2 = 0;
    lVar3 = *(long *)(param_1 + 0x100);
    do {
      cVar1 = " restrict"[lVar2];
      if (lVar3 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar4 = 1;
        lVar3 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar4 = lVar3 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar4;
      lVar2 = lVar2 + 1;
      param_1[lVar3] = cVar1;
      param_1[0x108] = cVar1;
      lVar3 = lVar4;
    } while (lVar2 != 9);
    break;
  case 0x1a:
  case 0x1d:
    lVar2 = 0;
    lVar3 = *(long *)(param_1 + 0x100);
    do {
      cVar1 = " volatile"[lVar2];
      if (lVar3 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar4 = 1;
        lVar3 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar4 = lVar3 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar4;
      lVar2 = lVar2 + 1;
      param_1[lVar3] = cVar1;
      param_1[0x108] = cVar1;
      lVar3 = lVar4;
    } while (lVar2 != 9);
    break;
  case 0x1b:
  case 0x1e:
    lVar2 = *(long *)(param_1 + 0x100);
    if (lVar2 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *param_1 = 0x20;
      lVar2 = 2;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      param_1[1] = 99;
LAB_00112f2c:
      lVar3 = lVar2 + 1;
      *(long *)(param_1 + 0x100) = lVar3;
      param_1[lVar2] = 0x6f;
      param_1[0x108] = 0x6f;
      if (lVar3 == 0xff) {
        param_1[0xff] = 0;
        uVar5 = 0x74;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x6e;
        lVar3 = 2;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        param_1[1] = 0x73;
      }
      else {
LAB_00112f48:
        lVar2 = lVar3 + 1;
        *(long *)(param_1 + 0x100) = lVar2;
        param_1[lVar3] = 0x6e;
        param_1[0x108] = 0x6e;
        if (lVar2 != 0xff) goto LAB_00112f64;
        uVar5 = 0x74;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x73;
        lVar3 = 1;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      goto LAB_00113048;
    }
    lVar3 = lVar2 + 1;
    *(long *)(param_1 + 0x100) = lVar3;
    param_1[lVar2] = 0x20;
    param_1[0x108] = 0x20;
    if (lVar3 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *param_1 = 99;
      lVar3 = 2;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      param_1[1] = 0x6f;
      goto LAB_00112f48;
    }
    lVar2 = lVar2 + 2;
    *(long *)(param_1 + 0x100) = lVar2;
    param_1[lVar3] = 99;
    param_1[0x108] = 99;
    if (lVar2 != 0xff) goto LAB_00112f2c;
    param_1[0xff] = 0;
    (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    *param_1 = 0x6f;
    lVar2 = 2;
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    param_1[1] = 0x6e;
LAB_00112f64:
    lVar3 = lVar2 + 1;
    *(long *)(param_1 + 0x100) = lVar3;
    param_1[lVar2] = 0x73;
    param_1[0x108] = 0x73;
    uVar5 = 0x74;
    if (lVar3 != 0xff) goto LAB_00113048;
    goto LAB_00112f80;
  case 0x1f:
    lVar3 = *(long *)(param_1 + 0x100);
    if (lVar3 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar2 = 1;
      lVar3 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar2 = lVar3 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar2;
    param_1[lVar3] = 0x20;
    param_1[0x108] = 0x20;
    goto LAB_00112fd0;
  case 0x20:
    lVar3 = *(long *)(param_1 + 0x100);
    if (lVar3 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar2 = 1;
      lVar3 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar2 = lVar3 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar2;
    param_1[lVar3] = 0x20;
    param_1[0x108] = 0x20;
    goto LAB_00113020;
  case 0x21:
    lVar2 = *(long *)(param_1 + 0x100);
    if (lVar2 == 0xff) {
      pcVar6 = *(code **)(param_1 + 0x110);
      param_1[0xff] = 0;
      (*pcVar6)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      uVar5 = SUB81(pcVar6,0);
      lVar3 = 1;
      lVar2 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar3 = lVar2 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar3;
    param_1[lVar2] = 0x20;
    param_1[0x108] = 0x20;
    param_3 = *(undefined4 **)(param_3 + 4);
    goto LAB_00112d60;
  case 0x22:
    if ((param_2 >> 2 & 1) == 0) {
      lVar2 = *(long *)(param_1 + 0x100);
      if (lVar2 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar3 = 1;
        lVar2 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar3 = lVar2 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar3;
      param_1[lVar2] = 0x2a;
      param_1[0x108] = 0x2a;
    }
    break;
  case 0x23:
    lVar2 = *(long *)(param_1 + 0x100);
LAB_00112fd0:
    if (lVar2 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar3 = 1;
      lVar2 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar3 = lVar2 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar3;
    param_1[lVar2] = 0x26;
    param_1[0x108] = 0x26;
    break;
  case 0x24:
    lVar2 = *(long *)(param_1 + 0x100);
LAB_00113020:
    if (lVar2 == 0xff) {
      uVar5 = 0x26;
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar3 = 1;
      *param_1 = 0x26;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar3 = lVar2 + 1;
      *(long *)(param_1 + 0x100) = lVar3;
      param_1[lVar2] = 0x26;
      param_1[0x108] = 0x26;
      uVar5 = 0x26;
      if (lVar3 == 0xff) {
LAB_00112f80:
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,lVar3,*(undefined8 *)(param_1 + 0x118));
        lVar2 = 1;
        lVar3 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        goto LAB_0011304c;
      }
    }
LAB_00113048:
    lVar2 = lVar3 + 1;
LAB_0011304c:
    *(long *)(param_1 + 0x100) = lVar2;
    param_1[lVar3] = uVar5;
    param_1[0x108] = uVar5;
    return;
  case 0x25:
    pcVar8 = "complex ";
    lVar2 = *(long *)(param_1 + 0x100);
    do {
      cVar1 = *pcVar8;
      if (lVar2 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar3 = 1;
        lVar2 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar3 = lVar2 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar3;
      pcVar8 = pcVar8 + 1;
      param_1[lVar2] = cVar1;
      param_1[0x108] = cVar1;
      lVar2 = lVar3;
    } while (pcVar8 != "");
    break;
  case 0x26:
    pcVar8 = "imaginary ";
    lVar2 = *(long *)(param_1 + 0x100);
    do {
      cVar1 = *pcVar8;
      if (lVar2 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar3 = 1;
        lVar2 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar3 = lVar2 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar3;
      pcVar8 = pcVar8 + 1;
      param_1[lVar2] = cVar1;
      param_1[0x108] = cVar1;
      lVar2 = lVar3;
    } while (pcVar8 != "");
    break;
  case 0x2b:
    if (param_1[0x108] != '(') {
      lVar2 = *(long *)(param_1 + 0x100);
      if (lVar2 == 0xff) {
        pcVar6 = *(code **)(param_1 + 0x110);
        param_1[0xff] = 0;
        (*pcVar6)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        uVar5 = SUB81(pcVar6,0);
        lVar3 = 1;
        lVar2 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar3 = lVar2 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar3;
      param_1[lVar2] = 0x20;
      param_1[0x108] = 0x20;
    }
    FUN_0010f318(param_1,param_2,*(long **)(param_3 + 2),uVar5,uVar7,in_w5,in_w6,in_w7,unaff_x29,
                 unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
    lVar2 = *(long *)(param_1 + 0x100);
    if (lVar2 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar2 = 2;
      *param_1 = 0x3a;
      param_1[1] = 0x3a;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
LAB_00113234:
      lVar3 = lVar2 + 1;
    }
    else {
      lVar3 = lVar2 + 1;
      *(long *)(param_1 + 0x100) = lVar3;
      param_1[lVar2] = 0x3a;
      param_1[0x108] = 0x3a;
      if (lVar3 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x3a;
        lVar2 = 1;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        goto LAB_00113234;
      }
      lVar2 = lVar2 + 2;
      *(long *)(param_1 + 0x100) = lVar2;
      param_1[lVar3] = 0x3a;
      param_1[0x108] = 0x3a;
      if (lVar2 != 0xff) goto LAB_00113234;
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar3 = 1;
      lVar2 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    *(long *)(param_1 + 0x100) = lVar3;
    param_1[lVar2] = 0x2a;
    param_1[0x108] = 0x2a;
    break;
  case 0x2d:
    pcVar8 = " __vector(";
    lVar2 = *(long *)(param_1 + 0x100);
    do {
      cVar1 = *pcVar8;
      if (lVar2 == 0xff) {
        in_x3 = *(code **)(param_1 + 0x110);
        param_1[0xff] = 0;
        (*in_x3)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar3 = 1;
        lVar2 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar3 = lVar2 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar3;
      pcVar8 = pcVar8 + 1;
      param_1[lVar2] = cVar1;
      param_1[0x108] = cVar1;
      lVar2 = lVar3;
    } while (pcVar8 != "");
    FUN_0010f318(param_1,param_2,*(long **)(param_3 + 2),(char)in_x3,(char)in_x4,in_w5,in_w6,in_w7,
                 unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
    lVar2 = *(long *)(param_1 + 0x100);
    if (lVar2 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar3 = 1;
      lVar2 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar3 = lVar2 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar3;
    param_1[lVar2] = 0x29;
    param_1[0x108] = 0x29;
  }
  return;
}



void FUN_001135a4(char *param_1,uint param_2,long **param_3,int param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  undefined in_w4;
  undefined in_w5;
  undefined in_w6;
  undefined in_w7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 unaff_x23;
  undefined8 uVar9;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  pcVar6 = (code *)(ulong)(uint)param_4;
  if (param_3 != (long **)0x0) {
    iVar2 = *(int *)(param_1 + 0x130);
    while (iVar2 == 0) {
      if (*(int *)(param_3 + 2) == 0) {
        plVar5 = param_3[1];
        iVar2 = *(int *)plVar5;
        if ((param_4 != 0) || (4 < iVar2 - 0x1cU)) {
          *(undefined4 *)(param_3 + 2) = 1;
          uVar9 = *(undefined8 *)(param_1 + 0x120);
          *(long **)(param_1 + 0x120) = param_3[3];
          if (iVar2 == 0x29) {
            FUN_00113b80(param_1,param_2,plVar5 + 2,(long **)*param_3);
            *(undefined8 *)(param_1 + 0x120) = uVar9;
            return;
          }
          if (iVar2 == 0x2a) {
            FUN_001138b8(param_1,param_2,plVar5 + 1,*param_3);
            *(undefined8 *)(param_1 + 0x120) = uVar9;
            return;
          }
          if (iVar2 == 2) {
            uVar7 = *(undefined8 *)(param_1 + 0x128);
            *(undefined8 *)(param_1 + 0x128) = 0;
            FUN_0010f318(param_1,param_2,(long *)plVar5[1],(char)pcVar6,in_w4,in_w5,in_w6,in_w7,
                         unaff_x29,unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
            *(undefined8 *)(param_1 + 0x128) = uVar7;
            lVar3 = *(long *)(param_1 + 0x100);
            if ((param_2 >> 2 & 1) != 0) {
              if (lVar3 == 0xff) {
                pcVar6 = *(code **)(param_1 + 0x110);
                param_1[0xff] = '\0';
                (*pcVar6)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
                lVar4 = 1;
                lVar3 = 0;
                *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
              }
              else {
                lVar4 = lVar3 + 1;
              }
              *(long *)(param_1 + 0x100) = lVar4;
              param_1[lVar3] = '.';
              param_1[0x108] = '.';
              goto LAB_00113738;
            }
            if (lVar3 == 0xff) {
              pcVar6 = *(code **)(param_1 + 0x110);
              param_1[0xff] = '\0';
              (*pcVar6)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
              lVar4 = 1;
              *param_1 = ':';
              *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
LAB_0011370c:
              lVar3 = lVar4 + 1;
            }
            else {
              lVar4 = lVar3 + 1;
              *(long *)(param_1 + 0x100) = lVar4;
              param_1[lVar3] = ':';
              param_1[0x108] = ':';
              if (lVar4 != 0xff) goto LAB_0011370c;
              pcVar6 = *(code **)(param_1 + 0x110);
              param_1[0xff] = '\0';
              (*pcVar6)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
              lVar3 = 1;
              lVar4 = 0;
              *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
            }
            *(long *)(param_1 + 0x100) = lVar3;
            param_1[lVar4] = ':';
            param_1[0x108] = ':';
LAB_00113738:
            plVar5 = (long *)param_3[1][2];
            iVar2 = *(int *)plVar5;
            if (iVar2 != 0x46) goto LAB_00113758;
            pcVar8 = "{default arg#";
            lVar3 = *(long *)(param_1 + 0x100);
            do {
              cVar1 = *pcVar8;
              if (lVar3 == 0xff) {
                pcVar6 = *(code **)(param_1 + 0x110);
                param_1[0xff] = '\0';
                (*pcVar6)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
                lVar4 = 1;
                lVar3 = 0;
                *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
              }
              else {
                lVar4 = lVar3 + 1;
              }
              *(long *)(param_1 + 0x100) = lVar4;
              pcVar8 = pcVar8 + 1;
              param_1[lVar3] = cVar1;
              param_1[0x108] = cVar1;
              lVar3 = lVar4;
            } while (pcVar8 != "");
            FUN_00107678(param_1,(long)(*(int *)(plVar5 + 2) + 1));
            FUN_00107470(param_1,"}::");
            do {
              plVar5 = (long *)plVar5[1];
              iVar2 = *(int *)plVar5;
LAB_00113758:
            } while (iVar2 - 0x1cU < 5);
            FUN_0010f318(param_1,param_2,plVar5,(char)pcVar6,in_w4,in_w5,in_w6,in_w7,unaff_x29,
                         unaff_x30,unaff_x19,unaff_x20,unaff_x21,unaff_x23);
            *(undefined8 *)(param_1 + 0x120) = uVar9;
            return;
          }
          FUN_00112d24(param_1,param_2,(undefined4 *)plVar5);
          *(undefined8 *)(param_1 + 0x120) = uVar9;
        }
      }
      param_3 = (long **)*param_3;
      if (param_3 == (long **)0x0) {
        return;
      }
      iVar2 = *(int *)(param_1 + 0x130);
    }
  }
  return;
}



void FUN_001138b8(undefined *param_1,uint param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined uVar4;
  code *pcVar5;
  undefined in_w4;
  undefined in_w5;
  undefined in_w6;
  undefined in_w7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 in_stack_fffffffffffffff0;
  
  plVar1 = param_4;
  if (param_4 != (long *)0x0) {
    do {
      if (*(int *)(plVar1 + 2) == 0) {
        if (*(int *)plVar1[1] == 0x2a) {
          uVar4 = 0;
          FUN_001135a4(param_1,param_2,(long **)param_4,0);
          lVar3 = *(long *)(param_1 + 0x100);
          goto joined_r0x00113a20;
        }
        lVar3 = *(long *)(param_1 + 0x100);
        if (lVar3 == 0xff) {
          pcVar5 = *(code **)(param_1 + 0x110);
          param_1[0xff] = 0;
          (*pcVar5)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          in_w5 = SUB81(pcVar5,0);
          lVar2 = 1;
          *param_1 = 0x20;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
LAB_001139bc:
          in_w4 = (undefined)lVar3;
          lVar3 = lVar2 + 1;
        }
        else {
          lVar2 = lVar3 + 1;
          *(long *)(param_1 + 0x100) = lVar2;
          param_1[lVar3] = 0x20;
          param_1[0x108] = 0x20;
          if (lVar2 != 0xff) goto LAB_001139bc;
          pcVar5 = *(code **)(param_1 + 0x110);
          param_1[0xff] = 0;
          (*pcVar5)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          in_w4 = SUB81(pcVar5,0);
          lVar3 = 1;
          lVar2 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
        *(long *)(param_1 + 0x100) = lVar3;
        param_1[lVar2] = 0x28;
        param_1[0x108] = 0x28;
        uVar4 = 0;
        FUN_001135a4(param_1,param_2,(long **)param_4,0);
        lVar3 = *(long *)(param_1 + 0x100);
        lVar2 = lVar3 + 1;
        if (lVar3 == 0xff) {
          pcVar5 = *(code **)(param_1 + 0x110);
          param_1[0xff] = 0;
          (*pcVar5)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          uVar4 = SUB81(pcVar5,0);
          lVar2 = 1;
          lVar3 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
        *(long *)(param_1 + 0x100) = lVar2;
        param_1[lVar3] = 0x29;
        param_1[0x108] = 0x29;
        goto LAB_00113904;
      }
      plVar1 = (long *)*plVar1;
    } while (plVar1 != (long *)0x0);
    plVar1 = (long *)0x0;
    FUN_001135a4(param_1,param_2,(long **)param_4,0);
  }
  uVar4 = SUB81(plVar1,0);
  lVar2 = *(long *)(param_1 + 0x100);
LAB_00113904:
  if (lVar2 == 0xff) {
    pcVar5 = *(code **)(param_1 + 0x110);
    param_1[0xff] = 0;
    (*pcVar5)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    uVar4 = SUB81(pcVar5,0);
    lVar3 = 1;
    lVar2 = 0;
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
  }
  else {
    lVar3 = lVar2 + 1;
  }
  *(long *)(param_1 + 0x100) = lVar3;
  param_1[lVar2] = 0x20;
  param_1[0x108] = 0x20;
joined_r0x00113a20:
  if (lVar3 == 0xff) {
    pcVar5 = *(code **)(param_1 + 0x110);
    param_1[0xff] = 0;
    (*pcVar5)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    uVar4 = SUB81(pcVar5,0);
    *param_1 = 0x5b;
    param_1[0x108] = 0x5b;
    lVar2 = 1;
    plVar1 = (long *)*param_3;
    *(undefined8 *)(param_1 + 0x100) = 1;
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    if (plVar1 == (long *)0x0) goto LAB_0011395c;
LAB_00113944:
    FUN_0010f318(param_1,param_2,plVar1,uVar4,in_w4,in_w5,in_w6,in_w7,unaff_x29,unaff_x30,unaff_x19,
                 unaff_x20,unaff_x21,in_stack_fffffffffffffff0);
    lVar2 = *(long *)(param_1 + 0x100);
  }
  else {
    lVar2 = lVar3 + 1;
    *(long *)(param_1 + 0x100) = lVar2;
    param_1[lVar3] = 0x5b;
    param_1[0x108] = 0x5b;
    plVar1 = (long *)*param_3;
    if (plVar1 != (long *)0x0) goto LAB_00113944;
  }
  if (lVar2 == 0xff) {
    param_1[0xff] = 0;
    (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    *(undefined8 *)(param_1 + 0x100) = 1;
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    *param_1 = 0x5d;
    param_1[0x108] = 0x5d;
    return;
  }
LAB_0011395c:
  *(long *)(param_1 + 0x100) = lVar2 + 1;
  param_1[lVar2] = 0x5d;
  param_1[0x108] = 0x5d;
  return;
}



void FUN_00113b80(char *param_1,uint param_2,long *param_3,long **param_4)

{
  int iVar1;
  byte bVar2;
  long **pplVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined uVar7;
  code *pcVar8;
  undefined in_w4;
  undefined in_w5;
  undefined in_w6;
  undefined in_w7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x23;
  undefined8 uVar9;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  if (param_4 != (long **)0x0) {
    iVar1 = *(int *)(param_4 + 2);
    pplVar3 = param_4;
joined_r0x00113bac:
    if (iVar1 == 0) {
      switch(*(undefined4 *)pplVar3[1]) {
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x21:
      case 0x25:
      case 0x26:
      case 0x2b:
        bVar2 = param_1[0x108];
LAB_00113c90:
        if (bVar2 == 0x20) goto LAB_00113cfc;
        lVar5 = *(long *)(param_1 + 0x100);
        if (lVar5 == 0xff) {
          param_1[0xff] = '\0';
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar4 = 1;
          lVar5 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
        else {
          lVar4 = lVar5 + 1;
        }
        *(long *)(param_1 + 0x100) = lVar4;
        param_1[lVar5] = ' ';
        param_1[0x108] = ' ';
        if (lVar4 != 0xff) goto LAB_00113d08;
LAB_00113cc0:
        param_1[0xff] = '\0';
        (**(code **)(param_1 + 0x110))(param_1,lVar4,*(undefined8 *)(param_1 + 0x118));
        lVar5 = 1;
        lVar4 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        break;
      default:
        pplVar3 = (long **)*pplVar3;
        if (pplVar3 != (long **)0x0) goto code_r0x00113be8;
        goto LAB_00113bf0;
      case 0x22:
      case 0x23:
      case 0x24:
        bVar2 = param_1[0x108];
        if ((bVar2 & 0xfd) != 0x28) goto LAB_00113c90;
LAB_00113cfc:
        lVar4 = *(long *)(param_1 + 0x100);
        if (lVar4 == 0xff) goto LAB_00113cc0;
LAB_00113d08:
        lVar5 = lVar4 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar5;
      param_1[lVar4] = '(';
      param_1[0x108] = '(';
      uVar9 = *(undefined8 *)(param_1 + 0x128);
      *(undefined8 *)(param_1 + 0x128) = 0;
      uVar7 = 0;
      FUN_001135a4(param_1,param_2,param_4,0);
      lVar4 = *(long *)(param_1 + 0x100);
      if (lVar4 == 0xff) {
        pcVar8 = *(code **)(param_1 + 0x110);
        param_1[0xff] = '\0';
        (*pcVar8)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        uVar7 = SUB81(pcVar8,0);
        lVar5 = 1;
        lVar4 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar5 = lVar4 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar5;
      param_1[lVar4] = ')';
      param_1[0x108] = ')';
      goto joined_r0x00113c14;
    }
  }
LAB_00113bf0:
  uVar9 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x128) = 0;
  uVar7 = 0;
  FUN_001135a4(param_1,param_2,param_4,0);
  lVar5 = *(long *)(param_1 + 0x100);
joined_r0x00113c14:
  if (lVar5 == 0xff) {
    pcVar8 = *(code **)(param_1 + 0x110);
    param_1[0xff] = '\0';
    (*pcVar8)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    uVar7 = SUB81(pcVar8,0);
    *param_1 = '(';
    param_1[0x108] = '(';
    lVar4 = 1;
    plVar6 = (long *)*param_3;
    *(undefined8 *)(param_1 + 0x100) = 1;
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    if (plVar6 != (long *)0x0) goto LAB_00113c34;
  }
  else {
    lVar4 = lVar5 + 1;
    *(long *)(param_1 + 0x100) = lVar4;
    param_1[lVar5] = '(';
    param_1[0x108] = '(';
    plVar6 = (long *)*param_3;
    if (plVar6 != (long *)0x0) {
LAB_00113c34:
      FUN_0010f318(param_1,param_2,plVar6,uVar7,in_w4,in_w5,in_w6,in_w7,unaff_x29,unaff_x30,
                   unaff_x19,unaff_x20,unaff_x21,unaff_x23);
      lVar4 = *(long *)(param_1 + 0x100);
    }
    if (lVar4 == 0xff) {
      param_1[0xff] = '\0';
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar5 = 1;
      lVar4 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      goto LAB_00113c50;
    }
  }
  lVar5 = lVar4 + 1;
LAB_00113c50:
  *(long *)(param_1 + 0x100) = lVar5;
  param_1[lVar4] = ')';
  param_1[0x108] = ')';
  FUN_001135a4(param_1,param_2,param_4,1);
  *(undefined8 *)(param_1 + 0x128) = uVar9;
  return;
code_r0x00113be8:
  iVar1 = *(int *)(pplVar3 + 2);
  goto joined_r0x00113bac;
}



void FUN_00113e30(undefined *param_1,undefined8 param_2,int *param_3)

{
  undefined uVar1;
  long lVar2;
  undefined in_w3;
  undefined in_w5;
  undefined in_w6;
  undefined in_w7;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  
  if (*param_3 != 0x31) {
    FUN_0010f318(param_1,(uint)param_2,(long *)param_3,in_w3,(char)*param_3,in_w5,in_w6,in_w7,
                 in_stack_00000000,in_stack_00000008,in_stack_00000010,in_stack_00000018,
                 in_stack_00000020,in_stack_00000030);
    return;
  }
  lVar4 = (long)*(int *)(*(long *)(param_3 + 2) + 0x10);
  lVar5 = *(long *)(*(long *)(param_3 + 2) + 8);
  if (lVar4 != 0) {
    lVar3 = 0;
    lVar2 = *(long *)(param_1 + 0x100);
    do {
      while (uVar1 = *(undefined *)(lVar5 + lVar3), lVar2 == 0xff) {
        lVar3 = lVar3 + 1;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(undefined8 *)(param_1 + 0x100) = 1;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        *param_1 = uVar1;
        param_1[0x108] = uVar1;
        lVar2 = 1;
        if (lVar4 == lVar3) {
          return;
        }
      }
      *(long *)(param_1 + 0x100) = lVar2 + 1;
      lVar3 = lVar3 + 1;
      param_1[lVar2] = uVar1;
      param_1[0x108] = uVar1;
      lVar2 = lVar2 + 1;
    } while (lVar4 != lVar3);
  }
  return;
}



void FUN_00113f04(long param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined uVar2;
  long lVar3;
  long lVar4;
  undefined uVar5;
  code *pcVar6;
  undefined uVar7;
  undefined in_w6;
  undefined in_w7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  
  uVar1 = *param_3;
  uVar7 = (undefined)uVar1;
  uVar2 = uVar1 == 0x30;
  uVar5 = (bool)uVar2 || uVar1 < 2;
  if ((!(bool)uVar2 && uVar1 >= 2) && (uVar1 != 6)) {
    lVar4 = *(long *)(param_1 + 0x100);
    if (lVar4 == 0xff) {
      pcVar6 = *(code **)(param_1 + 0x110);
      *(undefined *)(param_1 + 0xff) = 0;
      (*pcVar6)(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      uVar5 = SUB81(pcVar6,0);
      lVar3 = 1;
      lVar4 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar3 = lVar4 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar3;
    *(undefined *)(param_1 + lVar4) = 0x28;
    *(undefined *)(param_1 + 0x108) = 0x28;
    FUN_0010f318((char *)param_1,param_2,(long *)param_3,uVar5,uVar7,uVar2,in_w6,in_w7,unaff_x29,
                 unaff_x30,unaff_x19,unaff_x20,unaff_x21,in_stack_00000000);
    lVar4 = *(long *)(param_1 + 0x100);
    if (lVar4 == 0xff) {
      *(undefined *)(param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar3 = 1;
      lVar4 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar3 = lVar4 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar3;
    *(undefined *)(param_1 + lVar4) = 0x29;
    *(undefined *)(param_1 + 0x108) = 0x29;
    return;
  }
  FUN_0010f318((char *)param_1,param_2,(long *)param_3,uVar5,uVar7,uVar2,in_w6,in_w7,
               in_stack_00000000,in_stack_00000008,in_stack_00000010,in_stack_00000018,
               in_stack_00000020,in_stack_00000030);
  return;
}



bool FUN_0011400c(char *param_1,undefined *param_2,undefined8 param_3)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  uint uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  size_t sVar12;
  uint *puVar13;
  long *plVar14;
  long lVar15;
  undefined4 uVar16;
  char *pcVar17;
  undefined in_w6;
  undefined in_w7;
  char *local_1c8;
  char *local_1c0;
  uint local_1b8;
  char *local_1b0;
  undefined *local_1a8;
  undefined4 local_1a0;
  int local_19c;
  undefined *local_198;
  undefined4 local_190;
  int local_18c;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  char acStack_168 [256];
  long local_68;
  undefined local_60;
  code *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  undefined4 local_20;
  uint local_1c;
  undefined *local_18;
  undefined4 local_10;
  uint local_c;
  undefined8 local_8;
  
  cVar9 = *param_1;
  if ((cVar9 == '_') && (param_1[1] == 'Z')) {
    iVar11 = 1;
  }
  else {
    iVar11 = 0;
    iVar10 = strncmp(param_1,"_GLOBAL_",8);
    if ((iVar10 == 0) && ((cVar2 = param_1[8], cVar2 == '_' || cVar2 == '.' || (cVar2 == '$')))) {
      cVar2 = param_1[9];
      if (((cVar2 == 'I') || (iVar11 = 0, cVar2 == 'D')) &&
         ((iVar11 = 0, param_1[10] == '_' && (iVar11 = 2, cVar2 != 'I')))) {
        iVar11 = 3;
      }
    }
  }
  sVar12 = strlen(param_1);
  local_18c = (int)sVar12;
  local_19c = local_18c << 1;
  local_1c0 = param_1 + sVar12;
  lVar3 = -((long)local_19c * 0x18 + 0x10);
  local_1a8 = &stack0xfffffffffffffde0 + lVar3;
  local_1b8 = 0x11;
  lVar4 = -((-(sVar12 >> 0x1f & 1) & 0xfffffff800000000 | (sVar12 & 0xffffffff) << 3) + 0x16 &
           0xfffffffffffffff0);
  local_198 = &stack0xfffffffffffffde0 + lVar4 + lVar3;
  local_1a0 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_174 = 0;
  local_170 = 0;
  local_1c8 = param_1;
  if (iVar11 == 1) {
    if (cVar9 != '_') {
      return false;
    }
    if (param_1[1] != 'Z') {
      return false;
    }
    local_1b0 = param_1 + 2;
    plVar14 = (long *)FUN_0010bc10((long)&local_1c8,1);
    if ((local_1b8 & 1) == 0) {
LAB_0011442c:
      cVar9 = *local_1b0;
    }
    else {
      while (pcVar1 = local_1b0, cVar9 = *local_1b0, cVar9 == '.') {
        cVar9 = local_1b0[1];
        if (((byte)(cVar9 + 0x9fU) < 0x1a) || (cVar9 == '_')) {
          cVar9 = local_1b0[2];
          pcVar17 = local_1b0 + 2;
          if (0x19 < (byte)(cVar9 + 0x9fU)) goto LAB_00114420;
          do {
            do {
              pcVar17 = pcVar17 + 1;
              cVar9 = *pcVar17;
            } while ((byte)(cVar9 + 0x9fU) < 0x1a);
LAB_00114420:
          } while (cVar9 == '_');
        }
        else {
          if (9 < (byte)(cVar9 - 0x30U)) goto LAB_0011442c;
          cVar9 = *local_1b0;
          pcVar17 = local_1b0;
        }
        while (cVar9 == '.') {
          while( true ) {
            if (9 < (byte)(pcVar17[1] - 0x30U)) goto LAB_001143b0;
            cVar9 = pcVar17[2];
            pcVar17 = pcVar17 + 2;
            if (9 < (byte)(cVar9 - 0x30U)) break;
            do {
              pcVar17 = pcVar17 + 1;
            } while ((byte)(*pcVar17 - 0x30U) < 10);
            if (*pcVar17 != '.') goto LAB_001143b0;
          }
        }
LAB_001143b0:
        iVar10 = (int)local_1b0;
        local_1b0 = pcVar17;
        lVar15 = FUN_00106bd0((long)&local_1c8,(long)pcVar1,(int)pcVar17 - iVar10);
        plVar14 = (long *)FUN_00106b30((long)&local_1c8,0x4c,(long)plVar14,lVar15);
      }
    }
  }
  else if (iVar11 == 0) {
    local_1b0 = param_1;
    local_1a8 = &stack0xfffffffffffffde0 + lVar3;
    local_198 = &stack0xfffffffffffffde0 + lVar4 + lVar3;
    plVar14 = (long *)FUN_00109734((long)&local_1c8);
    cVar9 = *local_1b0;
  }
  else {
    pcVar1 = param_1 + 0xb;
    uVar16 = 0x43;
    if (iVar11 != 2) {
      uVar16 = 0x44;
    }
    if ((param_1[0xb] == '_') && (param_1[0xc] == 'Z')) {
      local_1b0 = param_1 + 0xd;
      local_1a8 = &stack0xfffffffffffffde0 + lVar3;
      local_198 = &stack0xfffffffffffffde0 + lVar4 + lVar3;
      puVar13 = FUN_0010bc10((long)&local_1c8,0);
    }
    else {
      local_1b0 = pcVar1;
      local_1a8 = &stack0xfffffffffffffde0 + lVar3;
      local_198 = &stack0xfffffffffffffde0 + lVar4 + lVar3;
      sVar12 = strlen(pcVar1);
      puVar13 = (uint *)FUN_00106bd0((long)&local_1c8,(long)pcVar1,(int)sVar12);
    }
    plVar14 = (long *)FUN_00106b30((long)&local_1c8,uVar16,(long)puVar13,0);
    pcVar1 = local_1b0;
    sVar12 = strlen(local_1b0);
    local_1b0 = pcVar1 + sVar12;
    cVar9 = pcVar1[sVar12];
  }
  if ((cVar9 == '\0') && (plVar14 != (long *)0x0)) {
    local_68 = 0;
    local_60 = 0;
    local_48 = 0;
    local_40 = 0;
    local_34 = 0;
    local_30 = 0;
    local_38 = 0;
    local_28 = (undefined *)0x0;
    local_20 = 0;
    local_1c = 0;
    local_18 = (undefined *)0x0;
    local_10 = 0;
    local_c = 0;
    local_58 = (code *)param_2;
    local_50 = param_3;
    FUN_001070a0((int *)&local_c,(int *)&local_1c,(undefined4 *)plVar14);
    uVar8 = local_c;
    local_8 = 0;
    local_c = local_1c * local_c;
    lVar15 = -((-(ulong)(local_1c >> 0x1f) & 0xfffffff000000000 | (ulong)local_1c << 4) + 0x10);
    lVar5 = -((-(ulong)(local_c >> 0x1f) & 0xfffffff000000000 | (ulong)local_c << 4) + 0x10);
    local_28 = &stack0xfffffffffffffde0 + lVar15 + lVar4 + lVar3;
    local_18 = &stack0xfffffffffffffde0 + lVar5 + lVar15 + lVar4 + lVar3;
    FUN_0010f318(acStack_168,0x11,plVar14,
                 (char)&stack0xfffffffffffffde0 + (char)lVar15 + (char)lVar4 + (char)lVar3 +
                 (char)lVar5,
                 (char)&stack0xfffffffffffffde0 + (char)lVar4 + (char)lVar3 + (char)lVar15,
                 (char)uVar8,in_w6,in_w7,
                 *(undefined8 *)(&stack0xfffffffffffffde0 + lVar5 + lVar15 + lVar4 + lVar3),
                 *(undefined8 *)(&stack0xfffffffffffffde8 + lVar5 + lVar15 + lVar4 + lVar3),
                 *(undefined8 *)(&stack0xfffffffffffffdf0 + lVar5 + lVar15 + lVar4 + lVar3),
                 *(undefined8 *)(&stack0xfffffffffffffdf8 + lVar5 + lVar15 + lVar4 + lVar3),
                 *(undefined8 *)(&stack0xfffffffffffffe00 + lVar5 + lVar15 + lVar4 + lVar3),
                 *(undefined8 *)(&stack0xfffffffffffffe10 + lVar5 + lVar15 + lVar4 + lVar3));
    uVar7 = local_50;
    pcVar6 = local_58;
    lVar3 = local_68;
    acStack_168[local_68] = '\0';
    (*pcVar6)(acStack_168,lVar3,uVar7);
    return local_38 == 0;
  }
  return false;
}



char * __cxa_demangle(char *param_1,char *param_2,ulong *param_3,undefined4 *param_4)

{
  bool bVar1;
  size_t sVar2;
  char *__src;
  ulong uVar3;
  char *local_20;
  undefined8 local_18;
  ulong local_10;
  int local_8;
  
  if ((param_1 == (char *)0x0) || ((param_2 != (char *)0x0 && (param_3 == (ulong *)0x0)))) {
    if (param_4 == (undefined4 *)0x0) {
      return (char *)0x0;
    }
    *param_4 = 0xfffffffd;
  }
  else {
    local_20 = (char *)0x0;
    local_18 = 0;
    local_10 = 0;
    local_8 = 0;
    bVar1 = FUN_0011400c(param_1,FUN_00107380,&local_20);
    __src = local_20;
    if (bVar1) {
      uVar3 = 1;
      if (local_8 == 0) {
        uVar3 = local_10;
      }
      if (local_20 != (char *)0x0) {
        if (param_2 == (char *)0x0) {
          if (param_3 != (ulong *)0x0) {
            *param_3 = uVar3;
          }
        }
        else {
          sVar2 = strlen(local_20);
          if (sVar2 < *param_3) {
            memcpy(param_2,__src,sVar2 + 1);
            free(__src);
            __src = param_2;
          }
          else {
            free(param_2);
            *param_3 = uVar3;
          }
        }
        if (param_4 == (undefined4 *)0x0) {
          return __src;
        }
        *param_4 = 0;
        return __src;
      }
      if (param_4 == (undefined4 *)0x0) {
        return (char *)0x0;
      }
      if (uVar3 == 1) {
        *param_4 = 0xffffffff;
        return (char *)0x0;
      }
    }
    else {
      free(local_20);
      if (param_4 == (undefined4 *)0x0) {
        return (char *)0x0;
      }
    }
    *param_4 = 0xfffffffe;
  }
  return (char *)0x0;
}



undefined4 __gcclibcxx_demangle_callback(char *param_1,undefined *param_2,undefined8 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  
  if ((param_1 == (char *)0x0) || (param_2 == (undefined *)0x0)) {
    uVar2 = 0xfffffffd;
  }
  else {
    bVar1 = FUN_0011400c(param_1,param_2,param_3);
    uVar2 = 0xfffffffe;
    if (bVar1) {
      uVar2 = 0;
    }
  }
  return uVar2;
}



long __cxa_current_exception_type(void)

{
  long **pplVar1;
  long *plVar2;
  long lVar3;
  
  pplVar1 = (long **)__cxa_get_globals();
  plVar2 = *pplVar1;
  if (plVar2 == (long *)0x0) {
    lVar3 = 0;
  }
  else {
    if ((plVar2[10] & 1U) != 0) {
      plVar2 = (long *)(*plVar2 + -0x70);
    }
    lVar3 = *plVar2;
  }
  return lVar3;
}



void FUN_00114618(byte *param_1,ulong *param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  do {
    bVar1 = *param_1;
    uVar2 = uVar4 & 0x3f;
    uVar4 = (ulong)((int)uVar4 + 7);
    uVar3 = uVar3 | ((ulong)bVar1 & 0x7f) << uVar2;
    param_1 = param_1 + 1;
  } while ((char)bVar1 < '\0');
  *param_2 = uVar3;
  return;
}



void FUN_00114640(byte *param_1,ulong *param_2)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = 0;
  uVar5 = 0;
  do {
    bVar2 = *param_1;
    uVar3 = uVar5 & 0x3f;
    uVar1 = (int)uVar5 + 7;
    uVar5 = (ulong)uVar1;
    uVar4 = uVar4 | ((ulong)bVar2 & 0x7f) << uVar3;
    param_1 = param_1 + 1;
  } while ((char)bVar2 < '\0');
  if ((uVar1 < 0x40) && ((bVar2 >> 6 & 1) != 0)) {
    uVar4 = -1L << (uVar5 & 0x3f) | uVar4;
  }
  *param_2 = uVar4;
  return;
}



ulong ** FUN_00114680(byte param_1,ulong **param_2,ulong **param_3,ulong **param_4)

{
  ulong **ppuVar1;
  ulong **local_8;
  
  if (param_1 == 0x50) {
    local_8 = (ulong **)((long)param_3 + 7U & 0xfffffffffffffff8);
    ppuVar1 = local_8 + 1;
    local_8 = (ulong **)*local_8;
  }
  else {
    switch(param_1 & 0xf) {
    case 0:
    case 4:
    case 0xc:
      ppuVar1 = param_3 + 1;
      local_8 = (ulong **)*param_3;
      break;
    case 1:
      ppuVar1 = (ulong **)FUN_00114618((byte *)param_3,(ulong *)&local_8);
      break;
    case 2:
      ppuVar1 = (ulong **)((long)param_3 + 2);
      local_8 = (ulong **)(ulong)*(ushort *)param_3;
      break;
    case 3:
      ppuVar1 = (ulong **)((long)param_3 + 4);
      local_8 = (ulong **)(ulong)*(uint *)param_3;
      break;
    default:
                    // WARNING: Subroutine does not return
      abort();
    case 9:
      ppuVar1 = (ulong **)FUN_00114640((byte *)param_3,(ulong *)&local_8);
      break;
    case 10:
      ppuVar1 = (ulong **)((long)param_3 + 2);
      local_8 = (ulong **)(long)*(short *)param_3;
      break;
    case 0xb:
      ppuVar1 = (ulong **)((long)param_3 + 4);
      local_8 = (ulong **)(long)*(int *)param_3;
    }
    if (local_8 != (ulong **)0x0) {
      if ((param_1 & 0x70) != 0x10) {
        param_3 = param_2;
      }
      local_8 = (ulong **)((long)local_8 + (long)param_3);
      if ((char)param_1 < '\0') {
        local_8 = (ulong **)*local_8;
      }
    }
  }
  *param_4 = (ulong *)local_8;
  return ppuVar1;
}



void FUN_00114770(void)

{
  DAT_0013fca0 = 8;
  DAT_0013fca1 = 8;
  DAT_0013fca2 = 8;
  DAT_0013fca3 = 8;
  DAT_0013fca4 = 8;
  DAT_0013fca5 = 8;
  DAT_0013fca6 = 8;
  DAT_0013fca7 = 8;
  DAT_0013fca8 = 8;
  DAT_0013fca9 = 8;
  DAT_0013fcaa = 8;
  DAT_0013fcab = 8;
  DAT_0013fcac = 8;
  DAT_0013fcad = 8;
  DAT_0013fcae = 8;
  DAT_0013fcaf = 8;
  DAT_0013fcb0 = 8;
  DAT_0013fcb1 = 8;
  DAT_0013fcb2 = 8;
  DAT_0013fcb3 = 8;
  DAT_0013fcb4 = 8;
  DAT_0013fcb5 = 8;
  DAT_0013fcb6 = 8;
  DAT_0013fcb7 = 8;
  DAT_0013fcb8 = 8;
  DAT_0013fcb9 = 8;
  DAT_0013fcba = 8;
  DAT_0013fcbb = 8;
  DAT_0013fcbc = 8;
  DAT_0013fcbd = 8;
  DAT_0013fcbe = 8;
  DAT_0013fcbf = 8;
  DAT_0013fce0 = 8;
  DAT_0013fce1 = 8;
  DAT_0013fce2 = 8;
  DAT_0013fce3 = 8;
  DAT_0013fce4 = 8;
  DAT_0013fce5 = 8;
  DAT_0013fce6 = 8;
  DAT_0013fce7 = 8;
  DAT_0013fce8 = 8;
  DAT_0013fce9 = 8;
  DAT_0013fcea = 8;
  DAT_0013fceb = 8;
  DAT_0013fcec = 8;
  DAT_0013fced = 8;
  DAT_0013fcee = 8;
  DAT_0013fcef = 8;
  DAT_0013fcf0 = 8;
  DAT_0013fcf1 = 8;
  DAT_0013fcf2 = 8;
  DAT_0013fcf3 = 8;
  DAT_0013fcf4 = 8;
  DAT_0013fcf5 = 8;
  DAT_0013fcf6 = 8;
  DAT_0013fcf7 = 8;
  DAT_0013fcf8 = 8;
  DAT_0013fcf9 = 8;
  DAT_0013fcfa = 8;
  DAT_0013fcfb = 8;
  DAT_0013fcfc = 8;
  DAT_0013fcfd = 8;
  DAT_0013fcfe = 8;
  DAT_0013fcff = 8;
  DAT_0013fd00 = 8;
  return;
}



void FUN_00114884(long param_1,undefined8 param_2,undefined8 *param_3)

{
  if (DAT_0013fcbf == '\b') {
    *param_3 = param_2;
    if ((*(ulong *)(param_1 + 0x340) >> 0x3e & 1) != 0) {
      *(undefined *)(param_1 + 0x377) = 0;
    }
    *(undefined8 **)(param_1 + 0xf8) = param_3;
    return;
  }
                    // WARNING: Subroutine does not return
  abort();
}



undefined8 * _Unwind_GetGR(long param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x62) {
    puVar1 = *(undefined8 **)(param_1 + (long)param_2 * 8);
    if (((*(ulong *)(param_1 + 0x340) >> 0x3e & 1) == 0) ||
       (*(char *)(param_1 + param_2 + 0x358) == '\0')) {
      if ((&DAT_0013fca0)[param_2] != '\b') goto LAB_001148d0;
      puVar1 = (undefined8 *)*puVar1;
    }
    return puVar1;
  }
LAB_001148d0:
                    // WARNING: Subroutine does not return
  abort();
}



long FUN_00114918(long param_1,long param_2)

{
  void **__dest;
  undefined8 *puVar1;
  void **__src;
  long lVar2;
  undefined8 uStack_8;
  
  if ((((*(ulong *)(param_2 + 0x340) >> 0x3e & 1) == 0) || (*(char *)(param_2 + 0x377) == '\0')) &&
     (*(long *)(param_2 + 0xf8) == 0)) {
    FUN_00114884(param_2,*(undefined8 *)(param_2 + 0x310),&uStack_8);
  }
  lVar2 = 0;
  while( true ) {
    __dest = *(void ***)(param_1 + lVar2 * 8);
    __src = *(void ***)(param_2 + lVar2 * 8);
    if (*(char *)(param_1 + lVar2 + 0x358) != '\0') break;
    if ((*(char *)(param_2 + lVar2 + 0x358) == '\0') || (__dest == (void **)0x0)) {
      if ((__dest != (void **)0x0 && __src != (void **)0x0) && (__src != __dest)) {
        memcpy(__dest,__src,(ulong)(byte)(&DAT_0013fca0)[lVar2]);
      }
    }
    else {
      if ((&DAT_0013fca0)[lVar2] != '\b') break;
      *__dest = __src;
    }
    lVar2 = lVar2 + 1;
    if (lVar2 == 0x61) {
      if ((((*(ulong *)(param_1 + 0x340) >> 0x3e & 1) == 0) ||
          (lVar2 = 0, *(char *)(param_1 + 0x377) == '\0')) &&
         (lVar2 = 0, *(long *)(param_1 + 0xf8) == 0)) {
        puVar1 = _Unwind_GetGR(param_2,0x1f);
        lVar2 = (long)puVar1 + (*(long *)(param_2 + 0x350) - *(long *)(param_1 + 0x310));
      }
      return lVar2;
    }
  }
                    // WARNING: Subroutine does not return
  abort();
}



undefined8 _Unwind_GetCFA(long param_1)

{
  return *(undefined8 *)(param_1 + 0x310);
}



void _Unwind_SetGR(long param_1,int param_2,undefined8 param_3)

{
  if (0x61 < param_2) {
LAB_00114a3c:
                    // WARNING: Subroutine does not return
    abort();
  }
  if (((*(ulong *)(param_1 + 0x340) >> 0x3e & 1) == 0) ||
     (*(char *)(param_1 + param_2 + 0x358) == '\0')) {
    if ((&DAT_0013fca0)[param_2] != '\b') goto LAB_00114a3c;
    **(undefined8 **)(param_1 + (long)param_2 * 8) = param_3;
  }
  else {
    *(undefined8 *)(param_1 + (long)param_2 * 8) = param_3;
  }
  return;
}



undefined8 _Unwind_GetIP(long param_1)

{
  return *(undefined8 *)(param_1 + 0x318);
}



undefined8 _Unwind_GetIPInfo(long param_1,uint *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x318);
  *param_2 = (uint)((ulong)*(undefined8 *)(param_1 + 0x340) >> 0x3f);
  return uVar1;
}



void _Unwind_SetIP(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x318) = param_2;
  return;
}



undefined8 _Unwind_GetLanguageSpecificData(long param_1)

{
  return *(undefined8 *)(param_1 + 800);
}



undefined8 _Unwind_GetRegionStart(long param_1)

{
  return *(undefined8 *)(param_1 + 0x338);
}



undefined8 _Unwind_FindEnclosingFunction(long param_1)

{
  uint *puVar1;
  ulong *apuStack_18 [2];
  undefined8 local_8;
  
  puVar1 = _Unwind_Find_FDE((ulong *)(param_1 + -1),apuStack_18);
  if (puVar1 == (uint *)0x0) {
    local_8 = 0;
  }
  return local_8;
}



undefined8 _Unwind_GetDataRelBase(long param_1)

{
  return *(undefined8 *)(param_1 + 0x330);
}



undefined8 _Unwind_GetTextRelBase(long param_1)

{
  return *(undefined8 *)(param_1 + 0x328);
}



undefined8 FUN_00114af0(byte param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  if (param_1 != 0xff) {
    bVar1 = param_1 & 0x70;
    if (bVar1 == 0x20) {
      uVar2 = _Unwind_GetTextRelBase(param_2);
      return uVar2;
    }
    if (bVar1 < 0x21) {
      if (((param_1 & 0x70) != 0) && (bVar1 != 0x10)) {
LAB_00114b58:
                    // WARNING: Subroutine does not return
        abort();
      }
    }
    else {
      if (bVar1 == 0x40) {
        uVar2 = _Unwind_GetRegionStart(param_2);
        return uVar2;
      }
      if (bVar1 != 0x50) {
        if (bVar1 == 0x30) {
          uVar2 = _Unwind_GetDataRelBase(param_2);
          return uVar2;
        }
        goto LAB_00114b58;
      }
    }
  }
  return 0;
}



void FUN_00114b68(ulong **param_1,ulong **param_2,long param_3,void *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  ulong **ppuVar4;
  void *pvVar5;
  long lVar6;
  ulong *puVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined4 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong local_18;
  ulong *local_10;
  ulong *local_8;
  
  *(undefined8 *)((long)param_4 + 0x620) = 0;
  puVar3 = &stack0xffffffffffffff70;
  puVar15 = (undefined *)0x0;
LAB_00114bb0:
  while( true ) {
    while( true ) {
      ppuVar4 = param_1;
      if ((param_2 <= ppuVar4) ||
         (uVar11 = *(ulong *)((long)param_4 + 0x648),
         (ulong)(*(long *)(param_3 + 0x318) - (*(long *)(param_3 + 0x340) >> 0x3f)) <= uVar11)) {
        return;
      }
      bVar1 = *(byte *)ppuVar4;
      uVar9 = (ulong)bVar1;
      param_1 = (ulong **)((long)ppuVar4 + 1);
      bVar2 = bVar1 & 0xc0;
      if (bVar2 != 0x40) break;
      *(ulong *)((long)param_4 + 0x648) = uVar11 + (uVar9 & 0x3f) * *(long *)((long)param_4 + 0x660)
      ;
    }
    if (bVar2 == 0x80) break;
    if (bVar2 != 0xc0) goto code_r0x00114c30;
    *(undefined4 *)((long)param_4 + (uVar9 & 0x3f) * 0x10 + 8) = 0;
  }
  local_18 = uVar9 & 0x3f;
  goto LAB_00114cd0;
code_r0x00114c30:
  switch(bVar1) {
  case 0:
    goto LAB_00114bb0;
  case 1:
    bVar2 = *(byte *)((long)param_4 + 0x670);
    ppuVar4 = (ulong **)FUN_00114af0(bVar2,param_3);
    param_1 = FUN_00114680(bVar2,ppuVar4,param_1,&local_8);
    *(ulong **)((long)param_4 + 0x648) = local_8;
    goto LAB_00114bb0;
  case 2:
    *(ulong *)((long)param_4 + 0x648) =
         uVar11 + (ulong)*(byte *)((long)ppuVar4 + 1) * *(long *)((long)param_4 + 0x660);
    param_1 = (ulong **)((long)ppuVar4 + 2);
    goto LAB_00114bb0;
  case 3:
    *(ulong *)((long)param_4 + 0x648) =
         uVar11 + (ulong)*(ushort *)((long)ppuVar4 + 1) * *(long *)((long)param_4 + 0x660);
    param_1 = (ulong **)((long)ppuVar4 + 3);
    goto LAB_00114bb0;
  case 4:
    *(ulong *)((long)param_4 + 0x648) =
         uVar11 + (ulong)*(uint *)((long)ppuVar4 + 1) * *(long *)((long)param_4 + 0x660);
    param_1 = (ulong **)((long)ppuVar4 + 5);
    goto LAB_00114bb0;
  case 5:
    param_1 = (ulong **)FUN_00114618((byte *)param_1,&local_18);
LAB_00114cd0:
    param_1 = (ulong **)FUN_00114618((byte *)param_1,(ulong *)&local_10);
    lVar10 = *(long *)((long)param_4 + 0x658);
    puVar7 = local_10;
    break;
  case 6:
  case 8:
    param_1 = (ulong **)FUN_00114618((byte *)param_1,&local_18);
    if (local_18 < 0x62) {
      *(undefined4 *)((long)param_4 + local_18 * 0x10 + 8) = 0;
    }
    goto LAB_00114bb0;
  case 7:
    param_1 = (ulong **)FUN_00114618((byte *)param_1,&local_18);
    if (local_18 < 0x62) {
      *(undefined4 *)((long)param_4 + local_18 * 0x10 + 8) = 6;
    }
    goto LAB_00114bb0;
  case 9:
    pbVar8 = (byte *)FUN_00114618((byte *)param_1,&local_18);
    param_1 = (ulong **)FUN_00114618(pbVar8,(ulong *)&local_8);
    if (0x61 < local_18) goto LAB_00114bb0;
    lVar6 = local_18 * 0x10;
    *(undefined4 *)((long)param_4 + lVar6 + 8) = 2;
    puVar7 = local_8;
    goto LAB_0011502c;
  case 10:
    if (puVar15 == (undefined *)0x0) {
      puVar14 = puVar3 + -0x660;
      puVar3 = puVar3 + -0x660;
    }
    else {
      puVar14 = puVar3;
      puVar3 = puVar15;
      puVar15 = *(undefined **)(puVar15 + 0x620);
    }
    pvVar5 = memcpy(puVar3,param_4,0x648);
    *(void **)((long)param_4 + 0x620) = pvVar5;
    puVar3 = puVar14;
    goto LAB_00114bb0;
  case 0xb:
    puVar14 = *(undefined **)((long)param_4 + 0x620);
    memcpy(param_4,puVar14,0x648);
    *(undefined **)(puVar14 + 0x620) = puVar15;
    puVar15 = puVar14;
    goto LAB_00114bb0;
  case 0xc:
    pbVar8 = (byte *)FUN_00114618((byte *)param_1,(ulong *)&local_10);
    *(ulong **)((long)param_4 + 0x630) = local_10;
    param_1 = (ulong **)FUN_00114618(pbVar8,(ulong *)&local_10);
    *(ulong **)((long)param_4 + 0x628) = local_10;
    goto LAB_00114e14;
  case 0xd:
    param_1 = (ulong **)FUN_00114618((byte *)param_1,(ulong *)&local_10);
    *(ulong **)((long)param_4 + 0x630) = local_10;
LAB_00114e14:
    *(undefined4 *)((long)param_4 + 0x640) = 1;
    goto LAB_00114bb0;
  case 0xe:
    param_1 = (ulong **)FUN_00114618((byte *)param_1,(ulong *)&local_10);
    puVar7 = local_10;
    goto LAB_00114ee0;
  case 0xf:
    *(ulong ***)((long)param_4 + 0x638) = param_1;
    *(undefined4 *)((long)param_4 + 0x640) = 2;
    goto LAB_00114f90;
  case 0x10:
    param_1 = (ulong **)FUN_00114618((byte *)param_1,&local_18);
    if (0x61 < local_18) goto LAB_00114f90;
    uVar13 = 3;
    goto LAB_00114f88;
  case 0x11:
    pbVar8 = (byte *)FUN_00114618((byte *)param_1,&local_18);
    param_1 = (ulong **)FUN_00114640(pbVar8,(ulong *)&local_8);
    lVar10 = *(long *)((long)param_4 + 0x658);
    puVar7 = local_8;
    break;
  case 0x12:
    pbVar8 = (byte *)FUN_00114618((byte *)param_1,(ulong *)&local_10);
    *(ulong **)((long)param_4 + 0x630) = local_10;
    param_1 = (ulong **)FUN_00114640(pbVar8,(ulong *)&local_8);
    *(undefined4 *)((long)param_4 + 0x640) = 1;
    goto LAB_00114ed4;
  case 0x13:
    param_1 = (ulong **)FUN_00114640((byte *)param_1,(ulong *)&local_8);
LAB_00114ed4:
    puVar7 = (ulong *)((long)local_8 * *(long *)((long)param_4 + 0x658));
LAB_00114ee0:
    *(ulong **)((long)param_4 + 0x628) = puVar7;
    goto LAB_00114bb0;
  case 0x14:
    pbVar8 = (byte *)FUN_00114618((byte *)param_1,&local_18);
    param_1 = (ulong **)FUN_00114618(pbVar8,(ulong *)&local_10);
    lVar10 = *(long *)((long)param_4 + 0x658);
    puVar7 = local_10;
    goto LAB_00114f40;
  case 0x15:
    pbVar8 = (byte *)FUN_00114618((byte *)param_1,&local_18);
    param_1 = (ulong **)FUN_00114640(pbVar8,(ulong *)&local_8);
    lVar10 = *(long *)((long)param_4 + 0x658);
    puVar7 = local_8;
LAB_00114f40:
    if (0x61 < local_18) goto LAB_00114bb0;
    lVar6 = local_18 * 0x10;
    *(undefined4 *)((long)param_4 + lVar6 + 8) = 4;
    puVar7 = (ulong *)((long)puVar7 * lVar10);
    goto LAB_0011502c;
  case 0x16:
    param_1 = (ulong **)FUN_00114618((byte *)param_1,&local_18);
    if (0x61 < local_18) goto LAB_00114f90;
    uVar13 = 5;
LAB_00114f88:
    *(undefined4 *)((long)param_4 + local_18 * 0x10 + 8) = uVar13;
    *(ulong ***)((long)param_4 + local_18 * 0x10) = param_1;
LAB_00114f90:
    lVar10 = FUN_00114618((byte *)param_1,(ulong *)&local_10);
    param_1 = (ulong **)(lVar10 + (long)local_10);
    goto LAB_00114bb0;
  default:
    goto switchD_00114c3c_caseD_17;
  case 0x2d:
    lVar10 = 0x10;
    local_18 = 0x10;
    lVar6 = 0;
    plVar12 = (long *)((long)param_4 + 0x100);
    do {
      *(undefined4 *)(plVar12 + 1) = 1;
      lVar10 = lVar10 + 1;
      *plVar12 = lVar6;
      lVar6 = lVar6 + 8;
      plVar12 = plVar12 + 2;
    } while (lVar10 != 0x20);
    goto LAB_00114bb0;
  case 0x2e:
    param_1 = (ulong **)FUN_00114618((byte *)param_1,(ulong *)&local_10);
    *(ulong **)(param_3 + 0x350) = local_10;
    goto LAB_00114bb0;
  case 0x2f:
    pbVar8 = (byte *)FUN_00114618((byte *)param_1,&local_18);
    param_1 = (ulong **)FUN_00114618(pbVar8,(ulong *)&local_10);
    lVar10 = *(long *)((long)param_4 + 0x658);
    if (0x61 < local_18) goto LAB_00114bb0;
    lVar6 = local_18 * 0x10;
    *(undefined4 *)((long)param_4 + lVar6 + 8) = 1;
    puVar7 = (ulong *)-(lVar10 * (long)local_10);
    goto LAB_0011502c;
  }
  if (0x61 < local_18) goto LAB_00114bb0;
  lVar6 = local_18 * 0x10;
  *(undefined4 *)((long)param_4 + lVar6 + 8) = 1;
  puVar7 = (ulong *)((long)puVar7 * lVar10);
LAB_0011502c:
  *(ulong **)((long)param_4 + lVar6) = puVar7;
  goto LAB_00114bb0;
switchD_00114c3c_caseD_17:
                    // WARNING: Subroutine does not return
  abort();
}



undefined8 FUN_00115060(long param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  uint *puVar4;
  long lVar5;
  int *piVar6;
  size_t sVar7;
  long *plVar8;
  byte *pbVar9;
  ulong **ppuVar10;
  ulong **ppuVar11;
  undefined8 uVar12;
  ulong uVar13;
  int iVar14;
  long *plVar15;
  long lVar16;
  uint *puVar17;
  char *pcVar18;
  ulong **ppuVar20;
  ulong local_18;
  ulong local_10;
  ulong *local_8;
  char *pcVar19;
  
  memset(param_2,0,0x680);
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  if (*(long *)(param_1 + 0x318) == 0) {
    return 5;
  }
  puVar4 = _Unwind_Find_FDE((ulong *)(*(long *)(param_1 + 0x318) +
                                     (-1 - (*(long *)(param_1 + 0x340) >> 0x3f))),
                            (ulong **)(param_1 + 0x328));
  if (puVar4 == (uint *)0x0) {
    if (**(int **)(param_1 + 0x318) != -0x2d7fee98) {
      return 5;
    }
    if ((*(int **)(param_1 + 0x318))[1] != -0x2bffffff) {
      return 5;
    }
    lVar16 = *(long *)(param_1 + 0x310);
    param_2[0xc6] = 0x1f;
    *(undefined4 *)(param_2 + 200) = 1;
    lVar1 = lVar16 + 0x130;
    param_2[0xc5] = 0x130;
    lVar5 = 8;
    plVar8 = param_2;
    do {
      *(undefined4 *)(plVar8 + 1) = 1;
      *plVar8 = lVar5;
      lVar5 = lVar5 + 8;
      plVar8 = plVar8 + 2;
    } while (lVar5 != 0x100);
    for (piVar6 = (int *)(lVar16 + 0x250); *piVar6 != 0;
        piVar6 = (int *)((long)piVar6 + (ulong)(uint)piVar6[1])) {
      if (*piVar6 == 0x46508001) {
        plVar8 = param_2 + 0x80;
        do {
          *(undefined4 *)(plVar8 + 1) = 1;
          plVar15 = plVar8 + 2;
          *plVar8 = (long)piVar6 + ((-0x3f0 - lVar1) - (long)param_2) + (long)plVar8;
          plVar8 = plVar15;
        } while (plVar15 != param_2 + 0xc0);
      }
    }
    *(undefined *)((long)param_2 + 0x673) = 1;
    param_2[0x3e] = (lVar16 + 0x230) - lVar1;
    *(undefined4 *)(param_2 + 0x3f) = 1;
    *(undefined4 *)(param_2 + 0xc1) = 4;
    param_2[0xc0] = *(long *)(lVar16 + 0x238) - lVar1;
    param_2[0xcd] = 0x60;
LAB_0011545c:
    uVar12 = 0;
  }
  else {
    puVar17 = (uint *)((long)puVar4 + (4 - (long)(int)puVar4[1]));
    param_2[0xc9] = *(long *)(param_1 + 0x338);
    pcVar19 = (char *)((long)puVar17 + 9);
    sVar7 = strlen(pcVar19);
    plVar15 = (long *)(pcVar19 + sVar7 + 1);
    plVar8 = plVar15;
    if ((*(char *)((long)puVar17 + 9) == 'e') && (*(char *)((long)puVar17 + 10) == 'h')) {
      plVar8 = plVar15 + 1;
      pcVar19 = (char *)((long)puVar17 + 0xb);
      param_2[0xcf] = *plVar15;
    }
    if (*(byte *)(puVar17 + 2) < 4) {
LAB_00115238:
      pbVar9 = (byte *)FUN_00114618((byte *)plVar8,&local_18);
      param_2[0xcc] = local_18;
      pbVar9 = (byte *)FUN_00114640(pbVar9,&local_10);
      param_2[0xcb] = local_10;
      if (*(char *)(puVar17 + 2) == '\x01') {
        ppuVar10 = (ulong **)(pbVar9 + 1);
        uVar13 = (ulong)*pbVar9;
      }
      else {
        ppuVar10 = (ulong **)FUN_00114618(pbVar9,&local_18);
        uVar13 = local_18;
      }
      param_2[0xcd] = uVar13;
      *(undefined *)((long)param_2 + 0x671) = 0xff;
      ppuVar20 = (ulong **)0x0;
      if (*pcVar19 == 'z') {
        pcVar19 = pcVar19 + 1;
        ppuVar10 = (ulong **)FUN_00114618((byte *)ppuVar10,&local_18);
        *(undefined *)((long)param_2 + 0x672) = 1;
        ppuVar20 = (ulong **)((long)ppuVar10 + local_18);
      }
      while( true ) {
        pcVar18 = pcVar19 + 1;
        cVar3 = *pcVar19;
        if (cVar3 == '\0') break;
        pcVar19 = pcVar18;
        if (cVar3 == 'L') {
          *(byte *)((long)param_2 + 0x671) = *(byte *)ppuVar10;
LAB_001152f4:
          ppuVar10 = (ulong **)((long)ppuVar10 + 1);
        }
        else {
          if (cVar3 == 'R') {
            *(byte *)(param_2 + 0xce) = *(byte *)ppuVar10;
            goto LAB_001152f4;
          }
          if (cVar3 == 'P') {
            bVar2 = *(byte *)ppuVar10;
            ppuVar11 = (ulong **)FUN_00114af0(bVar2,param_1);
            ppuVar10 = FUN_00114680(bVar2,ppuVar11,(ulong **)((long)ppuVar10 + 1),&local_8);
            param_2[0xca] = (long)local_8;
          }
          else {
            ppuVar11 = ppuVar20;
            if (cVar3 != 'S') goto LAB_00115364;
            *(undefined *)((long)param_2 + 0x673) = 1;
          }
        }
      }
      ppuVar11 = ppuVar10;
      if (ppuVar20 != (ulong **)0x0) {
        ppuVar11 = ppuVar20;
      }
LAB_00115364:
      if (ppuVar11 != (ulong **)0x0) {
        FUN_00114b68(ppuVar11,(ulong **)((long)puVar17 + (ulong)*puVar17 + 4),param_1,param_2);
        if (*(byte *)(param_2 + 0xce) == 0xff) {
          iVar14 = 0;
        }
        else {
          switch(*(byte *)(param_2 + 0xce) & 7) {
          case 0:
          case 4:
            iVar14 = 8;
            break;
          default:
                    // WARNING: Subroutine does not return
            abort();
          case 2:
            iVar14 = 2;
            break;
          case 3:
            iVar14 = 4;
          }
        }
        ppuVar20 = (ulong **)0x0;
        ppuVar10 = (ulong **)((long)puVar4 + (ulong)(uint)(iVar14 << 1) + 8);
        if (*(char *)((long)param_2 + 0x672) != '\0') {
          ppuVar10 = (ulong **)FUN_00114618((byte *)ppuVar10,(ulong *)&local_8);
          ppuVar20 = (ulong **)((long)ppuVar10 + (long)local_8);
        }
        bVar2 = *(byte *)((long)param_2 + 0x671);
        if (bVar2 != 0xff) {
          ppuVar11 = (ulong **)FUN_00114af0(bVar2,param_1);
          ppuVar10 = FUN_00114680(bVar2,ppuVar11,ppuVar10,&local_8);
          *(ulong **)(param_1 + 800) = local_8;
        }
        if (ppuVar20 == (ulong **)0x0) {
          ppuVar20 = ppuVar10;
        }
        FUN_00114b68(ppuVar20,(ulong **)((long)puVar4 + (ulong)*puVar4 + 4),param_1,param_2);
        goto LAB_0011545c;
      }
    }
    else if ((*(byte *)plVar8 == 8) && (*(byte *)((long)plVar8 + 1) == 0)) {
      plVar8 = (long *)((long)plVar8 + 2);
      goto LAB_00115238;
    }
    uVar12 = 3;
  }
  return uVar12;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

ulong * FUN_00115484(ulong **param_1,ulong **param_2,long param_3,ulong *param_4)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong *puVar8;
  ulong **ppuVar9;
  ulong **ppuVar10;
  ulong *puVar11;
  uint uVar12;
  uint uVar13;
  int local_220;
  ulong *local_218;
  ulong local_210;
  ulong *local_208;
  ulong *local_200 [64];
  uint uVar14;
  
  local_200[0] = param_4;
  uVar12 = 1;
LAB_001154d4:
  ppuVar10 = param_1;
  if (param_2 <= ppuVar10) {
    if (uVar12 != 0) {
      return local_200[(int)(uVar12 - 1)];
    }
switchD_00115890_caseD_3:
                    // WARNING: Subroutine does not return
    abort();
  }
  bVar1 = *(byte *)ppuVar10;
  param_1 = (ulong **)((long)ppuVar10 + 1);
  uVar13 = (uint)bVar1;
  uVar14 = (uint)bVar1;
  if (bVar1 < 0x21) {
    if (bVar1 < 0x1f) {
      if (uVar14 == 0x10) {
        param_1 = (ulong **)FUN_00114618((byte *)param_1,(ulong *)&local_218);
        puVar4 = local_218;
      }
      else if (uVar14 < 0x11) {
        if (uVar14 == 10) {
          puVar4 = (ulong *)(ulong)*(ushort *)((long)ppuVar10 + 1);
LAB_001156e0:
          param_1 = (ulong **)((long)ppuVar10 + 3);
        }
        else if (uVar14 < 0xb) {
          if (uVar13 == 6) goto LAB_0011581c;
          if (uVar13 < 7) {
            if (bVar1 != 3) goto switchD_00115890_caseD_3;
            param_1 = (ulong **)((long)ppuVar10 + 9);
            puVar4 = *(ulong **)((long)ppuVar10 + 1);
          }
          else {
            param_1 = (ulong **)((long)ppuVar10 + 2);
            if (uVar13 == 8) {
              puVar4 = (ulong *)(ulong)*(byte *)((long)ppuVar10 + 1);
            }
            else {
              if (uVar13 != 9) goto switchD_00115890_caseD_3;
              puVar4 = (ulong *)(long)(char)*(byte *)((long)ppuVar10 + 1);
            }
          }
        }
        else {
          if (uVar14 == 0xd) {
            puVar4 = (ulong *)(long)*(int *)((long)ppuVar10 + 1);
          }
          else {
            if (0xd < uVar14) {
              param_1 = (ulong **)((long)ppuVar10 + 9);
              if ((bVar1 == 0xe) || (bVar1 == 0xf)) {
                puVar4 = *(ulong **)((long)ppuVar10 + 1);
                goto LAB_001159f4;
              }
              goto switchD_00115890_caseD_3;
            }
            if (bVar1 == 0xb) {
              puVar4 = (ulong *)(long)*(short *)((long)ppuVar10 + 1);
              goto LAB_001156e0;
            }
            if (bVar1 != 0xc) goto switchD_00115890_caseD_3;
            puVar4 = (ulong *)(ulong)*(uint *)((long)ppuVar10 + 1);
          }
          param_1 = (ulong **)((long)ppuVar10 + 5);
        }
      }
      else if (uVar14 == 0x15) {
        local_210 = (ulong)*(byte *)((long)ppuVar10 + 1);
        param_1 = (ulong **)((long)ppuVar10 + 2);
        if ((long)(int)(uVar12 - 1) <= (long)local_210) goto switchD_00115890_caseD_3;
        puVar4 = local_200[(long)(int)(uVar12 - 1) - local_210];
      }
      else {
        if (0x15 < uVar14) {
          if (uVar14 == 0x19) goto LAB_0011581c;
          if (0x19 < uVar14) goto LAB_001158e0;
          iVar7 = uVar12 - 1;
          iVar2 = uVar12 - 2;
          if (uVar14 == 0x16) {
            if ((int)uVar12 < 2) goto switchD_00115890_caseD_3;
            puVar4 = local_200[iVar7];
            local_200[iVar7] = local_200[iVar2];
            local_200[iVar2] = puVar4;
          }
          else {
            if ((uVar14 != 0x17) || ((int)uVar12 < 3)) goto switchD_00115890_caseD_3;
            puVar4 = local_200[iVar7];
            puVar11 = local_200[(int)(uVar12 - 3)];
            local_200[iVar7] = local_200[iVar2];
            local_200[iVar2] = puVar11;
            local_200[(int)(uVar12 - 3)] = puVar4;
          }
          goto LAB_001154d4;
        }
        if (uVar14 == 0x12) {
          if (uVar12 == 0) goto switchD_00115890_caseD_3;
          iVar7 = uVar12 - 1;
        }
        else {
          if (uVar14 < 0x12) {
            param_1 = (ulong **)FUN_00114640((byte *)param_1,(ulong *)&local_208);
            puVar4 = local_208;
            goto LAB_001159f4;
          }
          if (uVar14 == 0x13) {
            if (uVar12 == 0) goto switchD_00115890_caseD_3;
            uVar12 = uVar12 - 1;
            goto LAB_001154d4;
          }
          if ((uVar14 != 0x14) || ((int)uVar12 < 2)) goto switchD_00115890_caseD_3;
          iVar7 = uVar12 - 2;
        }
        puVar4 = local_200[iVar7];
      }
    }
    else {
LAB_0011581c:
      if (uVar12 == 0) goto switchD_00115890_caseD_3;
      uVar12 = uVar12 - 1;
      ppuVar9 = (ulong **)local_200[(int)uVar12];
      if (uVar13 == 0x1f) {
        puVar4 = (ulong *)-(long)ppuVar9;
      }
      else if (uVar13 < 0x20) {
        if (uVar13 == 6) {
switchD_00115890_caseD_8:
          puVar4 = *ppuVar9;
        }
        else {
          if (bVar1 != 0x19) goto switchD_00115890_caseD_3;
          puVar4 = (ulong *)(((ulong)ppuVar9 ^ (long)ppuVar9 >> 0x3f) - ((long)ppuVar9 >> 0x3f));
        }
      }
      else if (uVar13 == 0x23) {
        param_1 = (ulong **)FUN_00114618((byte *)param_1,(ulong *)&local_218);
        puVar4 = (ulong *)((long)ppuVar9 + (long)local_218);
      }
      else if (uVar13 == 0x94) {
        param_1 = (ulong **)((long)ppuVar10 + 2);
        switch(*(byte *)((long)ppuVar10 + 1)) {
        case 1:
          puVar4 = (ulong *)(ulong)*(byte *)ppuVar9;
          break;
        case 2:
          puVar4 = (ulong *)(ulong)*(ushort *)ppuVar9;
          break;
        default:
          goto switchD_00115890_caseD_3;
        case 4:
          puVar4 = (ulong *)(ulong)*(uint *)ppuVar9;
          break;
        case 8:
          goto switchD_00115890_caseD_8;
        }
      }
      else {
        if (uVar13 != 0x20) goto switchD_00115890_caseD_3;
        puVar4 = (ulong *)~(ulong)ppuVar9;
      }
    }
  }
  else if (uVar14 < 0x50) {
    if (0x2f < uVar13) {
      puVar4 = (ulong *)(ulong)(uVar13 - 0x30);
      goto LAB_001159f4;
    }
    if (0x27 < uVar13) {
      if (uVar14 < 0x2f) {
        if (0x28 < uVar14) goto LAB_001158e0;
        if (uVar12 == 0) goto switchD_00115890_caseD_3;
        uVar12 = uVar12 - 1;
        param_1 = (ulong **)((long)ppuVar10 + 3);
        if (local_200[(int)uVar12] != (ulong *)0x0) {
          param_1 = (ulong **)
                    ((long)(ulong **)((long)ppuVar10 + 3) + (long)*(short *)((long)ppuVar10 + 1));
        }
      }
      else {
        param_1 = (ulong **)((long)ppuVar10 + (long)*(short *)((long)ppuVar10 + 1) + 3);
      }
      goto LAB_001154d4;
    }
    if ((uVar14 < 0x24) && (0x22 < uVar14)) goto LAB_0011581c;
LAB_001158e0:
    if ((int)uVar12 < 2) goto switchD_00115890_caseD_3;
    uVar13 = uVar12 - 2;
    puVar8 = local_200[(int)uVar13];
    puVar11 = local_200[(int)(uVar12 - 1)];
    uVar12 = uVar13;
    switch(bVar1) {
    case 0x1a:
      puVar4 = (ulong *)((ulong)puVar11 & (ulong)puVar8);
      break;
    case 0x1b:
      puVar4 = (ulong *)0x0;
      if (puVar11 != (ulong *)0x0) {
        puVar4 = (ulong *)((long)puVar8 / (long)puVar11);
      }
      break;
    case 0x1c:
      puVar4 = (ulong *)((long)puVar8 - (long)puVar11);
      break;
    case 0x1d:
      uVar3 = 0;
      if (puVar11 != (ulong *)0x0) {
        uVar3 = (ulong)puVar8 / (ulong)puVar11;
      }
      puVar4 = (ulong *)((long)puVar8 - uVar3 * (long)puVar11);
      break;
    case 0x1e:
      puVar4 = (ulong *)((long)puVar11 * (long)puVar8);
      break;
    default:
      goto switchD_00115890_caseD_3;
    case 0x21:
      puVar4 = (ulong *)((ulong)puVar11 | (ulong)puVar8);
      break;
    case 0x22:
      puVar4 = (ulong *)((long)puVar11 + (long)puVar8);
      break;
    case 0x24:
      puVar4 = (ulong *)((long)puVar8 << ((ulong)puVar11 & 0x3f));
      break;
    case 0x25:
      puVar4 = (ulong *)((ulong)puVar8 >> ((ulong)puVar11 & 0x3f));
      break;
    case 0x26:
      puVar4 = (ulong *)((long)puVar8 >> ((ulong)puVar11 & 0x3f));
      break;
    case 0x27:
      puVar4 = (ulong *)((ulong)puVar11 ^ (ulong)puVar8);
      break;
    case 0x29:
      puVar4 = (ulong *)(ulong)(puVar8 == puVar11);
      break;
    case 0x2a:
      puVar4 = (ulong *)(ulong)((long)puVar11 <= (long)puVar8);
      break;
    case 0x2b:
      puVar4 = (ulong *)(ulong)((long)puVar11 < (long)puVar8);
      break;
    case 0x2c:
      puVar4 = (ulong *)(ulong)((long)puVar8 <= (long)puVar11);
      break;
    case 0x2d:
      puVar4 = (ulong *)(ulong)((long)puVar8 < (long)puVar11);
      break;
    case 0x2e:
      puVar4 = (ulong *)(ulong)(puVar8 != puVar11);
    }
  }
  else {
    if (uVar14 != 0x90) {
      if (uVar14 < 0x91) {
        if (bVar1 < 0x70) {
          iVar7 = uVar13 - 0x50;
          goto LAB_00115748;
        }
        param_1 = (ulong **)FUN_00114640((byte *)param_1,&local_210);
        puVar6 = _Unwind_GetGR(param_3,uVar14 - 0x70);
      }
      else {
        if (uVar14 == 0x94) goto LAB_0011581c;
        if (0x94 < uVar14) {
          if (uVar14 != 0x96) {
            if (uVar14 == 0xf1) {
              bVar1 = *(byte *)((long)ppuVar10 + 1);
              ppuVar9 = (ulong **)FUN_00114af0(bVar1,param_3);
              param_1 = FUN_00114680(bVar1,ppuVar9,(ulong **)((long)ppuVar10 + 2),&local_208);
              puVar4 = local_208;
              goto LAB_001159f4;
            }
            goto switchD_00115890_caseD_3;
          }
          goto LAB_001154d4;
        }
        if (bVar1 != 0x92) goto switchD_00115890_caseD_3;
        pbVar5 = (byte *)FUN_00114618((byte *)param_1,(ulong *)&local_220);
        param_1 = (ulong **)FUN_00114640(pbVar5,&local_210);
        puVar6 = _Unwind_GetGR(param_3,local_220);
      }
      puVar4 = (ulong *)((long)puVar6 + local_210);
      goto LAB_001159f4;
    }
    param_1 = (ulong **)FUN_00114618((byte *)param_1,(ulong *)&local_220);
    iVar7 = local_220;
LAB_00115748:
    puVar4 = _Unwind_GetGR(param_3,iVar7);
  }
LAB_001159f4:
  if (0x3f < uVar12) goto switchD_00115890_caseD_3;
  local_200[(int)uVar12] = puVar4;
  uVar12 = uVar12 + 1;
  goto LAB_001154d4;
}



void FUN_00115a38(void *param_1,byte **param_2)

{
  ulong uVar1;
  ulong **ppuVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  int iVar6;
  long lVar7;
  undefined *puVar8;
  byte **ppbVar9;
  undefined8 uStack_3d0;
  ulong local_3c8;
  ulong *apuStack_3c0 [31];
  long local_2c8;
  ulong local_80;
  char acStack_68 [31];
  char local_49;
  
  memcpy(apuStack_3c0,param_1,0x3c0);
  if ((((local_80 >> 0x3e & 1) == 0) || (local_49 == '\0')) && (local_2c8 == 0)) {
    FUN_00114884((long)apuStack_3c0,*(undefined8 *)((long)param_1 + 0x310),&uStack_3d0);
  }
  if ((*(ulong *)((long)param_1 + 0x340) >> 0x3e & 1) != 0) {
    *(undefined *)((long)param_1 + 0x377) = 0;
  }
  iVar6 = *(int *)(param_2 + 200);
  *(undefined8 *)((long)param_1 + 0xf8) = 0;
  if (iVar6 == 1) {
    puVar4 = _Unwind_GetGR((long)apuStack_3c0,*(int *)(param_2 + 0xc6));
    puVar3 = (ulong *)((long)puVar4 + (long)param_2[0xc5]);
  }
  else {
    if (iVar6 != 2) {
LAB_00115b80:
                    // WARNING: Subroutine does not return
      abort();
    }
    ppuVar2 = (ulong **)FUN_00114618(param_2[199],&local_3c8);
    puVar3 = FUN_00115484(ppuVar2,(ulong **)((long)ppuVar2 + local_3c8),(long)apuStack_3c0,
                          (ulong *)0x0);
  }
  *(ulong **)((long)param_1 + 0x310) = puVar3;
  puVar8 = (undefined *)((long)param_1 + 0x358);
  lVar7 = 0;
  ppbVar9 = param_2;
  do {
    switch(*(undefined4 *)(ppbVar9 + 1)) {
    case 1:
      puVar5 = (ulong *)((long)puVar3 + (long)*ppbVar9);
      break;
    case 2:
      iVar6 = (int)*ppbVar9;
      if (acStack_68[iVar6] != '\0') {
        puVar5 = _Unwind_GetGR((long)apuStack_3c0,iVar6);
        goto LAB_00115b70;
      }
      puVar5 = apuStack_3c0[iVar6];
      break;
    case 3:
      ppuVar2 = (ulong **)FUN_00114618(*ppbVar9,&local_3c8);
      puVar5 = FUN_00115484(ppuVar2,(ulong **)((long)ppuVar2 + local_3c8),(long)apuStack_3c0,puVar3)
      ;
      break;
    case 4:
      puVar5 = (ulong *)((long)puVar3 + (long)*ppbVar9);
      goto LAB_00115b70;
    case 5:
      ppuVar2 = (ulong **)FUN_00114618(*ppbVar9,&local_3c8);
      puVar5 = FUN_00115484(ppuVar2,(ulong **)((long)ppuVar2 + local_3c8),(long)apuStack_3c0,puVar3)
      ;
LAB_00115b70:
      if ((byte)(&DAT_0013fca0)[lVar7] < 9) {
        *puVar8 = 1;
        goto LAB_00115bf0;
      }
      goto LAB_00115b80;
    default:
      goto switchD_00115b48_caseD_5;
    }
    if ((*(ulong *)((long)param_1 + 0x340) >> 0x3e & 1) != 0) {
      *puVar8 = 0;
    }
LAB_00115bf0:
    *(ulong **)((long)param_1 + lVar7 * 8) = puVar5;
switchD_00115b48_caseD_5:
    lVar7 = lVar7 + 1;
    ppbVar9 = ppbVar9 + 2;
    puVar8 = puVar8 + 1;
    if (lVar7 == 0x62) {
      uVar1 = *(ulong *)((long)param_1 + 0x340) & 0x7fffffffffffffff;
      if (*(char *)((long)param_2 + 0x673) != '\0') {
        uVar1 = *(ulong *)((long)param_1 + 0x340) | 0x8000000000000000;
      }
      *(ulong *)((long)param_1 + 0x340) = uVar1;
      return;
    }
  } while( true );
}



void FUN_00115c44(void *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 unaff_x30;
  undefined8 uStack_688;
  byte *apbStack_680 [197];
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_40;
  
  memset(param_1,0,0x3c0);
  *(undefined8 *)((long)param_1 + 0x318) = unaff_x30;
  *(undefined8 *)((long)param_1 + 0x340) = 0x4000000000000000;
  uVar2 = FUN_00115060((long)param_1,(long *)apbStack_680);
  if ((int)uVar2 == 0) {
    iVar1 = pthread_once((pthread_once_t *)&DAT_0013fd04,FUN_00114770);
    if ((iVar1 != 0) && (DAT_0013fca0 == '\0')) {
      FUN_00114770();
    }
    FUN_00114884((long)param_1,param_2,&uStack_688);
    local_58 = 0;
    local_40 = 1;
    local_50 = 0x1f;
    FUN_00115a38(param_1,apbStack_680);
    *(undefined8 *)((long)param_1 + 0x318) = param_3;
    return;
  }
                    // WARNING: Subroutine does not return
  abort();
}



void FUN_00115d20(void *param_1,byte **param_2)

{
  undefined8 *puVar1;
  
  FUN_00115a38(param_1,param_2);
  if (*(int *)(param_2 + (long)param_2[0xcd] * 2 + 1) == 6) {
    *(undefined8 *)((long)param_1 + 0x318) = 0;
  }
  else {
    puVar1 = _Unwind_GetGR((long)param_1,(int)param_2[0xcd]);
    *(undefined8 **)((long)param_1 + 0x318) = puVar1;
  }
  return;
}



undefined8 FUN_00115d6c(undefined8 *param_1,void *param_2)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  byte *apbStack_680 [202];
  code *local_30;
  
  do {
    uVar1 = FUN_00115060((long)param_2,(long *)apbStack_680);
    lVar2 = _Unwind_GetCFA((long)param_2);
    uVar3 = 4;
    if (lVar2 + (*(long *)((long)param_2 + 0x340) >> 0x3f) != param_1[3]) {
      uVar3 = 0;
    }
    if ((int)uVar1 != 0) {
      return 2;
    }
    if (local_30 != (code *)0x0) {
      uVar1 = (*local_30)(1,uVar3 | 2,*param_1,param_1,param_2);
      if ((int)uVar1 == 7) {
        return uVar1;
      }
      if ((int)uVar1 != 8) {
        return 2;
      }
    }
    if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
      abort();
    }
    FUN_00115d20(param_2,apbStack_680);
  } while( true );
}



ulong FUN_00115e2c(undefined8 *param_1,void *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  byte *apbStack_680 [202];
  code *local_30;
  
  pcVar5 = (code *)param_1[2];
  uVar6 = param_1[3];
  while( true ) {
    uVar3 = FUN_00115060((long)param_2,(long *)apbStack_680);
    if (((int)uVar3 != 5) && ((int)uVar3 != 0)) {
      return 2;
    }
    iVar4 = (int)(uVar3 & 0xffffffff);
    uVar7 = 10;
    if (iVar4 == 5) {
      uVar7 = 0x1a;
    }
    iVar1 = (*pcVar5)(1,uVar7,*param_1,param_1,param_2,uVar6);
    if (iVar1 != 0) break;
    if (iVar4 == 5) {
      return uVar3 & 0xffffffff;
    }
    if (local_30 != (code *)0x0) {
      uVar2 = (*local_30)(1,10,*param_1,param_1,param_2);
      if (uVar2 == 7) {
        return (ulong)uVar2;
      }
      if (uVar2 != 8) {
        return 2;
      }
    }
    FUN_00115d20(param_2,apbStack_680);
  }
  return 2;
}



long __frame_state_for(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  char *pcVar6;
  undefined auStack_a40 [792];
  long local_728;
  undefined8 local_700;
  undefined8 local_6f0;
  long local_680;
  undefined8 local_678 [196];
  undefined8 local_58;
  undefined2 local_50;
  int local_40;
  undefined2 local_18;
  undefined8 local_8;
  
  local_728 = param_1 + 1;
  memset(auStack_a40,0,0x3c0);
  local_700 = 0x4000000000000000;
  uVar2 = FUN_00115060((long)auStack_a40,&local_680);
  lVar5 = 0;
  if (((int)uVar2 == 0) && (local_40 != 2)) {
    puVar3 = local_678;
    pcVar6 = (char *)(param_2 + 0x334);
    puVar4 = (undefined8 *)(param_2 + 0x20);
    do {
      cVar1 = *(char *)puVar3;
      *pcVar6 = cVar1;
      if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
        *puVar4 = puVar3[-1];
      }
      else {
        *puVar4 = 0;
      }
      puVar3 = puVar3 + 2;
      pcVar6 = pcVar6 + 1;
      puVar4 = puVar4 + 1;
    } while (puVar3 != &local_58);
    *(undefined8 *)(param_2 + 0x10) = local_58;
    *(undefined2 *)(param_2 + 0x330) = local_50;
    *(undefined2 *)(param_2 + 0x332) = local_18;
    *(undefined8 *)(param_2 + 0x18) = local_6f0;
    *(undefined8 *)(param_2 + 8) = local_8;
    lVar5 = param_2;
  }
  return lVar5;
}



void FUN_0011600c(void)

{
  return;
}



undefined  [16] _Unwind_RaiseException(undefined8 *param_1,undefined8 param_2)

{
  undefined auVar1 [16];
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 unaff_x30;
  undefined auStack_e00 [960];
  undefined auStack_a40 [832];
  long local_700;
  byte *apbStack_680 [202];
  code *local_30;
  
  FUN_00115c44(auStack_e00,&stack0x00000000,unaff_x30);
  memcpy(auStack_a40,auStack_e00,0x3c0);
  do {
    uVar3 = FUN_00115060((long)auStack_a40,(long *)apbStack_680);
    if (((int)uVar3 == 5) || ((int)uVar3 != 0)) goto LAB_00116148;
    if (local_30 != (code *)0x0) {
      iVar2 = (*local_30)(1,1,*param_1,param_1,auStack_a40);
      if (iVar2 == 6) {
        param_1[2] = 0;
        lVar4 = _Unwind_GetCFA((long)auStack_a40);
        param_1[3] = lVar4 + (local_700 >> 0x3f);
        memcpy(auStack_a40,auStack_e00,0x3c0);
        uVar3 = FUN_00115d6c(param_1,auStack_a40);
        if ((int)uVar3 == 7) {
          FUN_00114918((long)auStack_e00,(long)auStack_a40);
          FUN_0011600c();
        }
LAB_00116148:
        auVar1._8_8_ = param_2;
        auVar1._0_8_ = param_1;
        return auVar1;
      }
      if (iVar2 != 8) goto LAB_00116148;
    }
    FUN_00115d20(auStack_a40,apbStack_680);
  } while( true );
}



undefined  [16] _Unwind_ForcedUnwind(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auVar1 [16];
  ulong uVar2;
  undefined8 unaff_x30;
  undefined auStack_780 [960];
  undefined auStack_3c0 [960];
  
  FUN_00115c44(auStack_780,&stack0x00000000,unaff_x30);
  memcpy(auStack_3c0,auStack_780,0x3c0);
  param_1[2] = param_2;
  param_1[3] = param_3;
  uVar2 = FUN_00115e2c(param_1,auStack_3c0);
  if ((int)uVar2 == 7) {
    FUN_00114918((long)auStack_780,(long)auStack_3c0);
    FUN_0011600c();
  }
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



undefined  [16] _Unwind_Resume(undefined8 *param_1,undefined8 param_2)

{
  undefined auVar1 [16];
  int iVar2;
  ulong uVar4;
  undefined8 unaff_x30;
  undefined auStack_780 [960];
  undefined auStack_3c0 [960];
  undefined8 uVar3;
  
  FUN_00115c44(auStack_780,&stack0x00000000,unaff_x30);
  memcpy(auStack_3c0,auStack_780,0x3c0);
  if (param_1[2] == 0) {
    uVar3 = FUN_00115d6c(param_1,auStack_3c0);
    iVar2 = (int)uVar3;
  }
  else {
    uVar4 = FUN_00115e2c(param_1,auStack_3c0);
    iVar2 = (int)uVar4;
  }
  if (iVar2 != 7) {
                    // WARNING: Subroutine does not return
    abort();
  }
  FUN_00114918((long)auStack_780,(long)auStack_3c0);
  FUN_0011600c();
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



undefined  [16] _Unwind_Resume_or_Rethrow(undefined8 *param_1,undefined8 param_2)

{
  undefined auVar1 [16];
  ulong uVar2;
  undefined8 unaff_x30;
  undefined auStack_780 [960];
  undefined auStack_3c0 [960];
  
  if (param_1[2] == 0) {
    _Unwind_RaiseException(param_1,0);
  }
  else {
    FUN_00115c44(auStack_780,&stack0x00000000,unaff_x30);
    memcpy(auStack_3c0,auStack_780,0x3c0);
    uVar2 = FUN_00115e2c(param_1,auStack_3c0);
    if ((int)uVar2 != 7) {
                    // WARNING: Subroutine does not return
      abort();
    }
    FUN_00114918((long)auStack_780,(long)auStack_3c0);
    FUN_0011600c();
  }
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



void _Unwind_DeleteException(long param_1)

{
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(1,param_1);
  }
  return;
}



undefined8 _Unwind_Backtrace(undefined *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 unaff_x30;
  undefined auStack_a40 [960];
  byte *apbStack_680 [208];
  
  FUN_00115c44(auStack_a40,&stack0x00000000,unaff_x30);
  while( true ) {
    uVar3 = FUN_00115060((long)auStack_a40,(long *)apbStack_680);
    iVar1 = (int)uVar3;
    if (((iVar1 != 5) && (iVar1 != 0)) ||
       (iVar2 = (*(code *)param_1)(auStack_a40,param_2), iVar2 != 0)) break;
    if (iVar1 == 5) {
      return 5;
    }
    FUN_00115d20(auStack_a40,apbStack_680);
  }
  return 3;
}



void FUN_00116564(byte *param_1,ulong *param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  do {
    bVar1 = *param_1;
    uVar2 = uVar4 & 0x3f;
    uVar4 = (ulong)((int)uVar4 + 7);
    uVar3 = uVar3 | ((ulong)bVar1 & 0x7f) << uVar2;
    param_1 = param_1 + 1;
  } while ((char)bVar1 < '\0');
  *param_2 = uVar3;
  return;
}



void FUN_0011658c(byte *param_1,ulong *param_2)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = 0;
  uVar5 = 0;
  do {
    bVar2 = *param_1;
    uVar3 = uVar5 & 0x3f;
    uVar1 = (int)uVar5 + 7;
    uVar5 = (ulong)uVar1;
    uVar4 = uVar4 | ((ulong)bVar2 & 0x7f) << uVar3;
    param_1 = param_1 + 1;
  } while ((char)bVar2 < '\0');
  if ((uVar1 < 0x40) && ((bVar2 >> 6 & 1) != 0)) {
    uVar4 = -1L << (uVar5 & 0x3f) | uVar4;
  }
  *param_2 = uVar4;
  return;
}



int FUN_001165cc(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  
  iVar1 = -(uint)(*(ulong *)(param_2 + 8) < *(ulong *)(param_3 + 8));
  if (*(ulong *)(param_3 + 8) < *(ulong *)(param_2 + 8)) {
    iVar1 = 1;
  }
  return iVar1;
}



void FUN_001165e8(undefined8 param_1,undefined *param_2,long param_3,ulong param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  iVar3 = (int)param_4;
  while( true ) {
    uVar1 = iVar3 * 2 + 1;
    uVar5 = (ulong)uVar1;
    if (param_5 <= (int)uVar1) {
      return;
    }
    uVar2 = iVar3 * 2 + 2;
    if ((int)uVar2 < param_5) {
      uVar5 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3;
      iVar3 = (*(code *)param_2)(param_1,*(undefined8 *)(param_3 + uVar5),
                                 *(undefined8 *)(param_3 + uVar5 + 8));
      if (iVar3 < 0) {
        uVar1 = uVar2;
      }
      uVar5 = (ulong)uVar1;
    }
    uVar6 = -(param_4 >> 0x1f & 1) & 0xfffffff800000000 | (param_4 & 0xffffffff) << 3;
    uVar7 = -(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3;
    iVar3 = (*(code *)param_2)(param_1,*(undefined8 *)(param_3 + uVar6),
                               *(undefined8 *)(param_3 + uVar7));
    if (-1 < iVar3) break;
    uVar4 = *(undefined8 *)(param_3 + uVar6);
    *(undefined8 *)(param_3 + uVar6) = *(undefined8 *)(param_3 + uVar7);
    *(undefined8 *)(param_3 + uVar7) = uVar4;
    iVar3 = (int)uVar5;
    param_4 = uVar5;
  }
  return;
}



void FUN_001166a8(undefined8 param_1,undefined *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar6 = *(ulong *)(param_3 + 8);
  lVar2 = param_3 + 0x10;
  uVar7 = uVar6 >> 1;
  while( true ) {
    uVar3 = (int)uVar7 - 1;
    uVar7 = (ulong)uVar3;
    iVar5 = (int)uVar6;
    if ((int)uVar3 < 0) break;
    FUN_001165e8(param_1,param_2,lVar2,(ulong)uVar3,iVar5);
  }
  lVar8 = 0;
  iVar5 = iVar5 + -1;
  lVar1 = lVar2 + (long)iVar5 * 8;
  for (; 0 < iVar5; iVar5 = iVar5 + -1) {
    uVar4 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(lVar1 + lVar8);
    *(undefined8 *)(lVar1 + lVar8) = uVar4;
    lVar8 = lVar8 + -8;
    FUN_001165e8(param_1,param_2,lVar2,0,iVar5);
  }
  return;
}



undefined8 FUN_0011675c(byte param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0xff) {
    uVar1 = 0;
  }
  else {
    switch(param_1 & 7) {
    case 0:
    case 4:
      uVar1 = 8;
      break;
    default:
                    // WARNING: Subroutine does not return
      abort();
    case 2:
      uVar1 = 2;
      break;
    case 3:
      uVar1 = 4;
    }
  }
  return uVar1;
}



undefined8 FUN_001167bc(byte param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  
  if (param_1 != 0xff) {
    bVar1 = param_1 & 0x70;
    if (bVar1 == 0x20) {
      return *(undefined8 *)(param_2 + 8);
    }
    if (bVar1 < 0x21) {
      bVar2 = bVar1 == 0x10;
      if ((param_1 & 0x70) == 0) {
        return 0;
      }
    }
    else {
      if (bVar1 == 0x30) {
        return *(undefined8 *)(param_2 + 0x10);
      }
      bVar2 = bVar1 == 0x50;
    }
    if (!bVar2) {
                    // WARNING: Subroutine does not return
      abort();
    }
  }
  return 0;
}



undefined8 FUN_0011681c(byte param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  
  if (param_1 != 0xff) {
    bVar1 = param_1 & 0x70;
    if (bVar1 == 0x20) {
      return *(undefined8 *)(param_2 + 8);
    }
    if (bVar1 < 0x21) {
      bVar2 = bVar1 == 0x10;
      if ((param_1 & 0x70) == 0) {
        return 0;
      }
    }
    else {
      if (bVar1 == 0x30) {
        return *(undefined8 *)(param_2 + 0x10);
      }
      bVar2 = bVar1 == 0x50;
    }
    if (!bVar2) {
                    // WARNING: Subroutine does not return
      abort();
    }
  }
  return 0;
}



ulong ** FUN_0011687c(byte param_1,ulong **param_2,ulong **param_3,ulong **param_4)

{
  ulong **ppuVar1;
  ulong **local_8;
  
  if (param_1 == 0x50) {
    local_8 = (ulong **)((long)param_3 + 7U & 0xfffffffffffffff8);
    ppuVar1 = local_8 + 1;
    local_8 = (ulong **)*local_8;
  }
  else {
    switch(param_1 & 0xf) {
    case 0:
    case 4:
    case 0xc:
      ppuVar1 = param_3 + 1;
      local_8 = (ulong **)*param_3;
      break;
    case 1:
      ppuVar1 = (ulong **)FUN_00116564((byte *)param_3,(ulong *)&local_8);
      break;
    case 2:
      ppuVar1 = (ulong **)((long)param_3 + 2);
      local_8 = (ulong **)(ulong)*(ushort *)param_3;
      break;
    case 3:
      ppuVar1 = (ulong **)((long)param_3 + 4);
      local_8 = (ulong **)(ulong)*(uint *)param_3;
      break;
    default:
                    // WARNING: Subroutine does not return
      abort();
    case 9:
      ppuVar1 = (ulong **)FUN_0011658c((byte *)param_3,(ulong *)&local_8);
      break;
    case 10:
      ppuVar1 = (ulong **)((long)param_3 + 2);
      local_8 = (ulong **)(long)*(short *)param_3;
      break;
    case 0xb:
      ppuVar1 = (ulong **)((long)param_3 + 4);
      local_8 = (ulong **)(long)*(int *)param_3;
    }
    if (local_8 != (ulong **)0x0) {
      if ((param_1 & 0x70) != 0x10) {
        param_3 = param_2;
      }
      local_8 = (ulong **)((long)local_8 + (long)param_3);
      if ((char)param_1 < '\0') {
        local_8 = (ulong **)*local_8;
      }
    }
  }
  *param_4 = (ulong *)local_8;
  return ppuVar1;
}



int FUN_0011696c(long param_1,long param_2,long param_3)

{
  int iVar1;
  byte bVar2;
  ulong **ppuVar3;
  ulong *local_10;
  ulong *local_8;
  
  bVar2 = (byte)(*(ushort *)(param_1 + 0x20) >> 3);
  ppuVar3 = (ulong **)FUN_001167bc(bVar2,param_1);
  FUN_0011687c(bVar2,ppuVar3,(ulong **)(param_2 + 8),&local_10);
  FUN_0011687c((byte)(*(ushort *)(param_1 + 0x20) >> 3),ppuVar3,(ulong **)(param_3 + 8),&local_8);
  iVar1 = -(uint)(local_10 < local_8);
  if (local_8 < local_10) {
    iVar1 = 1;
  }
  return iVar1;
}



byte FUN_001169fc(long param_1)

{
  char cVar1;
  byte bVar2;
  size_t sVar3;
  byte *pbVar4;
  ulong **ppuVar5;
  char *pcVar6;
  ulong *puStack_18;
  ulong uStack_10;
  ulong uStack_8;
  
  pcVar6 = (char *)(param_1 + 9);
  sVar3 = strlen(pcVar6);
  pbVar4 = (byte *)(pcVar6 + sVar3 + 1);
  if (3 < *(byte *)(param_1 + 8)) {
    if (pcVar6[sVar3 + 1] != '\b') {
      return 0xff;
    }
    if (pbVar4[1] != 0) {
      return 0xff;
    }
    pbVar4 = pbVar4 + 2;
  }
  if (*(char *)(param_1 + 9) == 'z') {
    pbVar4 = (byte *)FUN_00116564(pbVar4,&uStack_10);
    pbVar4 = (byte *)FUN_0011658c(pbVar4,&uStack_8);
    if (*(char *)(param_1 + 8) == '\x01') {
      pbVar4 = pbVar4 + 1;
    }
    else {
      pbVar4 = (byte *)FUN_00116564(pbVar4,&uStack_10);
    }
    ppuVar5 = (ulong **)FUN_00116564(pbVar4,&uStack_10);
    for (pcVar6 = (char *)(param_1 + 10); cVar1 = *pcVar6, cVar1 != 'R'; pcVar6 = pcVar6 + 1) {
      if (cVar1 == 'P') {
        ppuVar5 = FUN_0011687c(*(byte *)ppuVar5 & 0x7f,(ulong **)0x0,(ulong **)((long)ppuVar5 + 1),
                               &puStack_18);
      }
      else {
        if (cVar1 != 'L') goto LAB_00116a54;
        ppuVar5 = (ulong **)((long)ppuVar5 + 1);
      }
    }
    bVar2 = *(byte *)ppuVar5;
  }
  else {
LAB_00116a54:
    bVar2 = 0;
  }
  return bVar2;
}



uint * FUN_00116af8(long param_1,uint *param_2,long param_3)

{
  ulong *puVar1;
  byte bVar2;
  ulong **ppuVar4;
  long lVar5;
  ulong **ppuVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong *local_10;
  ulong *local_8;
  ushort uVar3;
  
  uVar3 = *(ushort *)(param_1 + 0x20) >> 3 & 0xff;
  ppuVar4 = (ulong **)FUN_001167bc((byte)uVar3,param_1);
  lVar5 = 0;
  do {
    if (*param_2 == 0) {
      return (uint *)0x0;
    }
    if (param_2[1] != 0) {
      lVar9 = lVar5;
      if (((*(byte *)(param_1 + 0x20) >> 2 & 1) != 0) &&
         (lVar9 = (long)param_2 + (4 - (long)(int)param_2[1]), lVar9 != lVar5)) {
        bVar2 = FUN_001169fc(lVar9);
        uVar3 = (ushort)bVar2;
        ppuVar4 = (ulong **)FUN_001167bc(bVar2,param_1);
      }
      if (uVar3 == 0) {
        local_10 = *(ulong **)(param_2 + 2);
        local_8 = *(ulong **)(param_2 + 4);
        puVar1 = local_10;
      }
      else {
        bVar2 = (byte)uVar3;
        ppuVar6 = FUN_0011687c(bVar2,ppuVar4,(ulong **)(param_2 + 2),&local_10);
        FUN_0011687c(bVar2 & 0xf,(ulong **)0x0,ppuVar6,&local_8);
        uVar7 = FUN_0011675c(bVar2);
        uVar8 = 0xffffffffffffffff;
        if ((uVar7 & 0xffffffff) < 8) {
          uVar8 = (1L << ((uVar7 & 7) << 3)) - 1;
        }
        puVar1 = (ulong *)(uVar8 & (ulong)local_10);
      }
      lVar5 = lVar9;
      if ((puVar1 != (ulong *)0x0) && ((ulong *)(param_3 - (long)local_10) < local_8)) {
        return param_2;
      }
    }
    param_2 = (uint *)((long)param_2 + (ulong)*param_2 + 4);
  } while( true );
}



byte FUN_00116c58(long param_1)

{
  byte bVar1;
  
  bVar1 = FUN_001169fc((param_1 + 4) - (long)*(int *)(param_1 + 4));
  return bVar1;
}



undefined8 FUN_00116c68(ulong *param_1,ulong param_2,ulong *param_3)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  ulong **ppuVar5;
  ulong **ppuVar6;
  ulong uVar7;
  uint *puVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  int *piVar14;
  int *piVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong *puVar18;
  int *piVar19;
  int *piVar20;
  ulong uVar21;
  ulong *local_40;
  ulong *local_38;
  ulong *local_30;
  ulong local_28;
  ulong local_20;
  ulong *local_18;
  undefined8 local_10;
  
  piVar14 = (int *)param_1[2];
  uVar17 = *param_1;
  if ((param_2 < 0x30) || (*(int *)(param_3 + 5) == 0)) {
    if (param_2 < 0x1a) {
      return 0xffffffff;
    }
  }
  else {
    if ((param_1[4] == DAT_0012e028) && (param_1[5] == DAT_0013fd10)) {
      puVar18 = DAT_0013fd18;
      puVar12 = (ulong *)0x0;
      puVar16 = (ulong *)0x0;
      while (puVar9 = puVar18, puVar9 != (ulong *)0x0) {
        if ((*puVar9 <= *param_3) && (*param_3 < puVar9[1])) {
          uVar17 = puVar9[2];
          piVar15 = (int *)puVar9[3];
          if (puVar9 != DAT_0013fd18) {
            puVar16[5] = puVar9[5];
            puVar9[5] = (ulong)DAT_0013fd18;
            DAT_0013fd18 = puVar9;
          }
          goto LAB_00116e74;
        }
        puVar12 = puVar9;
        if ((*puVar9 | puVar9[1]) == 0) break;
        puVar18 = (ulong *)puVar9[5];
        if (puVar18 != (ulong *)0x0) {
          puVar16 = puVar9;
        }
      }
      goto LAB_00116d90;
    }
    puVar10 = &DAT_0013fd50;
    DAT_0012e028 = param_1[4];
    DAT_0013fd10 = param_1[5];
    do {
      puVar10[-6] = 0;
      puVar10[-5] = 0;
      puVar10[-1] = puVar10;
      puVar10 = puVar10 + 6;
    } while (puVar10 != (undefined8 *)0x13fed0);
    DAT_0013fe98 = 0;
    DAT_0013fd18 = &DAT_0013fd20;
    *(undefined4 *)(param_3 + 5) = 0;
  }
  puVar16 = (ulong *)0x0;
  puVar12 = (ulong *)0x0;
LAB_00116d90:
  uVar21 = (ulong)*(ushort *)(param_1 + 3);
  uVar7 = 0;
  uVar13 = 0;
  bVar3 = false;
  piVar19 = (int *)0x0;
  piVar15 = (int *)0x0;
  while (uVar21 = uVar21 - 1, uVar21 != 0xffffffffffffffff) {
    iVar2 = *piVar14;
    piVar20 = piVar15;
    if (iVar2 == 1) {
      uVar11 = uVar17 + *(long *)(piVar14 + 4);
      if ((uVar11 <= *param_3) && (*param_3 < uVar11 + *(long *)(piVar14 + 10))) {
        bVar3 = true;
        uVar7 = uVar11 + *(long *)(piVar14 + 10);
        uVar13 = uVar11;
      }
    }
    else {
      piVar20 = piVar14;
      if ((iVar2 != 0x6474e550) && (piVar20 = piVar15, iVar2 == 2)) {
        piVar19 = piVar14;
      }
    }
    piVar14 = piVar14 + 0xe;
    piVar15 = piVar20;
  }
  if (!bVar3) {
    return 0;
  }
  if (param_2 >= 0x30) {
    if ((puVar16 != (ulong *)0x0) && (puVar12 != (ulong *)0x0)) {
      puVar16[5] = puVar12[5];
      puVar12[5] = (ulong)DAT_0013fd18;
      DAT_0013fd18 = puVar12;
    }
    puVar12 = DAT_0013fd18;
    DAT_0013fd18[2] = uVar17;
    puVar12[3] = (ulong)piVar15;
    puVar12[4] = (ulong)piVar19;
    *puVar12 = uVar13;
    puVar12[1] = uVar7;
  }
LAB_00116e74:
  if (piVar15 == (int *)0x0) {
    return 0;
  }
  lVar1 = uVar17 + *(long *)(piVar15 + 4);
  if (*(char *)(uVar17 + *(long *)(piVar15 + 4)) != '\x01') {
    return 1;
  }
  bVar4 = *(byte *)(lVar1 + 1);
  ppuVar5 = (ulong **)FUN_0011681c(bVar4,(long)param_3);
  ppuVar5 = FUN_0011687c(bVar4,ppuVar5,(ulong **)(lVar1 + 4),&local_40);
  bVar4 = *(byte *)(lVar1 + 2);
  if ((bVar4 != 0xff) && (*(char *)(lVar1 + 3) == ';')) {
    ppuVar6 = (ulong **)FUN_0011681c(bVar4,(long)param_3);
    ppuVar5 = FUN_0011687c(bVar4,ppuVar6,ppuVar5,&local_38);
    if (local_38 == (ulong *)0x0) {
      return 1;
    }
    if (((ulong)ppuVar5 & 3) == 0) {
      uVar17 = *param_3;
      if (uVar17 < (ulong)(lVar1 + *(int *)ppuVar5)) {
        return 1;
      }
      uVar7 = (long)local_38 - 1;
      if (uVar17 < (ulong)(lVar1 + *(int *)(ppuVar5 + uVar7))) {
        uVar13 = 0;
        uVar21 = uVar7;
        do {
          uVar11 = uVar21;
          if (uVar11 <= uVar13) {
                    // WARNING: Subroutine does not return
            abort();
          }
          uVar7 = uVar11 + uVar13 >> 1;
          uVar21 = uVar7;
        } while ((uVar17 < (ulong)(lVar1 + *(int *)(ppuVar5 + uVar7))) ||
                (uVar13 = uVar7 + 1, uVar21 = uVar11,
                (ulong)(lVar1 + *(int *)(ppuVar5 + uVar7 + 1)) <= uVar17));
      }
      uVar17 = lVar1 + *(int *)((long)ppuVar5 + uVar7 * 8 + 4);
      bVar4 = FUN_00116c58(uVar17);
      uVar13 = FUN_0011675c(bVar4);
      FUN_0011687c(bVar4 & 0xf,(ulong **)0x0,(ulong **)(uVar17 + (uVar13 & 0xffffffff) + 8),
                   &local_30);
      iVar2 = *(int *)(ppuVar5 + uVar7);
      if (*param_3 < (ulong)(lVar1 + iVar2 + (long)local_30)) {
        param_3[4] = uVar17;
      }
      param_3[3] = lVar1 + iVar2;
      return 1;
    }
  }
  local_28 = param_3[1];
  local_20 = param_3[2];
  local_10 = 4;
  local_30 = (ulong *)0x0;
  local_18 = local_40;
  puVar8 = FUN_00116af8((long)&local_30,(uint *)local_40,*param_3);
  param_3[4] = (ulong)puVar8;
  if (puVar8 != (uint *)0x0) {
    bVar4 = FUN_00116c58((long)puVar8);
    ppuVar5 = (ulong **)FUN_0011681c(bVar4,(long)param_3);
    FUN_0011687c(bVar4,ppuVar5,(ulong **)(param_3[4] + 8),&local_38);
    param_3[3] = (ulong)local_38;
  }
  return 1;
}



int FUN_00117088(long param_1,long param_2,long param_3)

{
  int iVar1;
  byte bVar2;
  ulong **ppuVar3;
  ulong *local_10;
  ulong *local_8;
  
  bVar2 = FUN_00116c58(param_2);
  ppuVar3 = (ulong **)FUN_001167bc(bVar2,param_1);
  FUN_0011687c(bVar2,ppuVar3,(ulong **)(param_2 + 8),&local_10);
  bVar2 = FUN_00116c58(param_3);
  ppuVar3 = (ulong **)FUN_001167bc(bVar2,param_1);
  FUN_0011687c(bVar2,ppuVar3,(ulong **)(param_3 + 8),&local_8);
  iVar1 = -(uint)(local_10 < local_8);
  if (local_8 < local_10) {
    iVar1 = 1;
  }
  return iVar1;
}



long FUN_00117124(ulong **param_1,uint *param_2)

{
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong **ppuVar9;
  ulong *local_8;
  
  ppuVar9 = (ulong **)0x0;
  uVar3 = 0;
  lVar8 = 0;
  lVar4 = 0;
  do {
    if (*param_2 == 0) {
      return lVar8;
    }
    if (param_2[1] != 0) {
      lVar7 = (long)param_2 + (4 - (long)(int)param_2[1]);
      if (lVar7 != lVar4) {
        bVar2 = FUN_001169fc(lVar7);
        uVar3 = (ushort)bVar2;
        if (uVar3 == 0xff) {
          return -1;
        }
        ppuVar9 = (ulong **)FUN_001167bc(bVar2,(long)param_1);
        uVar1 = *(ushort *)(param_1 + 4);
        lVar4 = lVar7;
        if ((uVar1 & 0x7f8) == 0x7f8) {
          *(ushort *)(param_1 + 4) = uVar1 & 0xf800 | uVar1 & 7 | (ushort)bVar2 << 3;
        }
        else if ((uVar1 >> 3 & 0xff) != uVar3) {
          *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 4;
        }
      }
      FUN_0011687c((byte)uVar3,ppuVar9,(ulong **)(param_2 + 2),&local_8);
      uVar5 = FUN_0011675c((byte)uVar3);
      uVar6 = 0xffffffffffffffff;
      if ((uVar5 & 0xffffffff) < 8) {
        uVar6 = (1L << ((uVar5 & 7) << 3)) - 1;
      }
      if (((uVar6 & (ulong)local_8) != 0) && (lVar8 = lVar8 + 1, local_8 < *param_1)) {
        *param_1 = local_8;
      }
    }
    param_2 = (uint *)((long)param_2 + (ulong)*param_2 + 4);
  } while( true );
}



void FUN_00117284(long param_1,long *param_2,uint *param_3)

{
  byte bVar1;
  ulong **ppuVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong *local_8;
  ushort uVar2;
  
  uVar2 = *(ushort *)(param_1 + 0x20) >> 3 & 0xff;
  ppuVar3 = (ulong **)FUN_001167bc((byte)uVar2,param_1);
  lVar4 = 0;
  for (; *param_3 != 0; param_3 = (uint *)((long)param_3 + (ulong)*param_3 + 4)) {
    if (param_3[1] != 0) {
      lVar8 = lVar4;
      if (((*(byte *)(param_1 + 0x20) >> 2 & 1) != 0) &&
         (lVar8 = (long)param_3 + (4 - (long)(int)param_3[1]), lVar8 != lVar4)) {
        bVar1 = FUN_001169fc(lVar8);
        uVar2 = (ushort)bVar1;
        ppuVar3 = (ulong **)FUN_001167bc(bVar1,param_1);
      }
      if (uVar2 == 0) {
        uVar5 = *(ulong *)(param_3 + 2);
      }
      else {
        FUN_0011687c((byte)uVar2,ppuVar3,(ulong **)(param_3 + 2),&local_8);
        uVar6 = FUN_0011675c((byte)uVar2);
        uVar5 = 0xffffffffffffffff;
        if ((uVar6 & 0xffffffff) < 8) {
          uVar5 = (1L << ((uVar6 & 7) << 3)) - 1;
        }
        uVar5 = uVar5 & (ulong)local_8;
      }
      lVar4 = lVar8;
      if ((uVar5 != 0) && (lVar8 = *param_2, lVar8 != 0)) {
        lVar7 = *(long *)(lVar8 + 8);
        *(long *)(lVar8 + 8) = lVar7 + 1;
        *(uint **)(lVar8 + (lVar7 + 2) * 8) = param_3;
      }
    }
  }
  return;
}



uint * FUN_001173b8(ulong **param_1,ulong *param_2)

{
  void *pvVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong **ppuVar6;
  ulong **ppuVar7;
  uint *puVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  long lVar12;
  uint **ppuVar13;
  size_t __size;
  ulong uVar14;
  ulong **ppuVar15;
  ulong **ppuVar16;
  code *pcVar17;
  ulong uVar18;
  long lVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong **ppuVar22;
  ulong *local_18;
  ulong **local_10;
  void *local_8;
  
  if ((*(byte *)(param_1 + 4) & 1) != 0) goto LAB_001173e4;
  puVar20 = (ulong *)(ulong)(*(uint *)(param_1 + 4) >> 0xb);
  if (puVar20 == (ulong *)0x0) {
    if ((*(byte *)(param_1 + 4) >> 1 & 1) == 0) {
      puVar20 = (ulong *)FUN_00117124(param_1,(uint *)param_1[3]);
      if (puVar20 != (ulong *)0xffffffffffffffff) goto LAB_0011745c;
LAB_0011741c:
      param_1[4] = (ulong *)0x0;
      *(undefined2 *)(param_1 + 4) = 0x7f8;
      param_1[3] = (ulong *)&DAT_0013fea8;
    }
    else {
      for (ppuVar13 = (uint **)param_1[3]; *ppuVar13 != (uint *)0x0; ppuVar13 = ppuVar13 + 1) {
        lVar5 = FUN_00117124(param_1,*ppuVar13);
        if (lVar5 == -1) goto LAB_0011741c;
        puVar20 = (ulong *)((long)puVar20 + lVar5);
      }
LAB_0011745c:
      uVar3 = (uint)puVar20 & 0x1fffff;
      if ((ulong *)(ulong)uVar3 == puVar20) {
        uVar3 = *(uint *)(param_1 + 4) & 0x7ff | uVar3 << 0xb;
      }
      else {
        uVar3 = *(uint *)(param_1 + 4) & 0x7ff;
      }
      *(uint *)(param_1 + 4) = uVar3;
      if (puVar20 != (ulong *)0x0) goto LAB_00117484;
    }
  }
  else {
LAB_00117484:
    __size = ((long)puVar20 + 2U) * 8;
    local_10 = (ulong **)malloc(__size);
    if (local_10 != (ulong **)0x0) {
      local_10[1] = (ulong *)0x0;
      local_8 = malloc(__size);
      if (local_8 != (void *)0x0) {
        *(undefined8 *)((long)local_8 + 8) = 0;
      }
      if ((*(byte *)(param_1 + 4) >> 1 & 1) == 0) {
        FUN_00117284((long)param_1,(long *)&local_10,(uint *)param_1[3]);
      }
      else {
        for (ppuVar13 = (uint **)param_1[3]; *ppuVar13 != (uint *)0x0; ppuVar13 = ppuVar13 + 1) {
          FUN_00117284((long)param_1,(long *)&local_10,*ppuVar13);
        }
      }
      pvVar1 = local_8;
      ppuVar6 = local_10;
      if ((local_10 != (ulong **)0x0) && (local_10[1] != puVar20)) {
LAB_001177dc:
                    // WARNING: Subroutine does not return
        abort();
      }
      if ((*(byte *)(param_1 + 4) >> 2 & 1) == 0) {
        if ((*(ushort *)(param_1 + 4) & 0x7f8) == 0) {
          pcVar17 = FUN_001165cc;
        }
        else {
          pcVar17 = FUN_0011696c;
        }
      }
      else {
        pcVar17 = FUN_00117088;
      }
      if (local_8 == (void *)0x0) {
        FUN_001166a8(param_1,pcVar17,(long)local_10);
      }
      else {
        ppuVar7 = local_10 + 2;
        puVar11 = local_10[1];
        ppuVar15 = (ulong **)&DAT_0013fea0;
        ppuVar22 = ppuVar7;
        for (puVar21 = (ulong *)0x0; puVar21 != puVar11; puVar21 = (ulong *)((long)puVar21 + 1)) {
          while ((ppuVar15 != (ulong **)&DAT_0013fea0 &&
                 (iVar4 = (*pcVar17)(param_1,*ppuVar22,*ppuVar15), iVar4 < 0))) {
            ppuVar16 = *(ulong ***)((long)pvVar1 + (long)ppuVar15 + (0x10 - (long)ppuVar7));
            *(undefined8 *)((long)pvVar1 + (long)ppuVar15 + (0x10 - (long)ppuVar7)) = 0;
            ppuVar15 = ppuVar16;
          }
          *(ulong ***)((long)pvVar1 + (long)puVar21 * 8 + 0x10) = ppuVar15;
          ppuVar15 = ppuVar22;
          ppuVar22 = ppuVar22 + 1;
        }
        lVar5 = 0;
        puVar21 = (ulong *)0x0;
        for (puVar10 = (ulong *)0x0; puVar10 != puVar11; puVar10 = (ulong *)((long)puVar10 + 1)) {
          if (*(long *)((long)pvVar1 + (long)puVar10 * 8 + 0x10) == 0) {
            lVar19 = lVar5 + 2;
            lVar5 = lVar5 + 1;
            *(ulong **)((long)pvVar1 + lVar19 * 8) = *ppuVar7;
          }
          else {
            lVar19 = (long)puVar21 + 2;
            puVar21 = (ulong *)((long)puVar21 + 1);
            ppuVar6[lVar19] = *ppuVar7;
          }
          ppuVar7 = ppuVar7 + 1;
        }
        ppuVar6[1] = puVar21;
        *(long *)((long)pvVar1 + 8) = lVar5;
        if ((ulong *)(*(long *)((long)local_8 + 8) + (long)local_10[1]) != puVar20)
        goto LAB_001177dc;
        FUN_001166a8(param_1,pcVar17,(long)local_8);
        pvVar1 = local_8;
        ppuVar6 = local_10;
        lVar5 = *(long *)((long)local_8 + 8);
        if (lVar5 != 0) {
          puVar20 = local_10[1];
          lVar19 = lVar5 << 3;
          do {
            lVar12 = lVar5 + -1;
            puVar21 = *(ulong **)((long)pvVar1 + lVar19 + 8);
            ppuVar7 = ppuVar6 + (long)puVar20;
            while (puVar20 != (ulong *)0x0) {
              iVar4 = (*pcVar17)(param_1,ppuVar7[1],puVar21);
              if (iVar4 < 1) break;
              *(ulong **)((long)(ppuVar7 + -1) + lVar19 + 0x10) = ppuVar7[1];
              puVar20 = (ulong *)((long)puVar20 + -1);
              ppuVar7 = ppuVar7 + -1;
            }
            lVar19 = lVar19 + -8;
            ppuVar6[(long)puVar20 + lVar5 + 1] = puVar21;
            lVar5 = lVar12;
          } while (lVar12 != 0);
          ppuVar6[1] = (ulong *)((long)ppuVar6[1] + *(long *)((long)pvVar1 + 8));
        }
        free(local_8);
      }
      *local_10 = param_1[3];
      param_1[3] = (ulong *)local_10;
      *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 1;
    }
  }
  if (param_2 < *param_1) {
    return (uint *)0x0;
  }
LAB_001173e4:
  bVar2 = *(byte *)(param_1 + 4);
  if ((bVar2 & 1) == 0) {
    if ((bVar2 >> 1 & 1) == 0) {
      puVar8 = FUN_00116af8((long)param_1,(uint *)param_1[3],(long)param_2);
      return puVar8;
    }
    for (ppuVar13 = (uint **)param_1[3]; *ppuVar13 != (uint *)0x0; ppuVar13 = ppuVar13 + 1) {
      puVar8 = FUN_00116af8((long)param_1,*ppuVar13,(long)param_2);
      if (puVar8 != (uint *)0x0) {
        return puVar8;
      }
    }
  }
  else if ((bVar2 >> 2 & 1) == 0) {
    if ((*(ushort *)(param_1 + 4) & 0x7f8) == 0) {
      uVar18 = 0;
      uVar14 = param_1[3][1];
      while (uVar9 = uVar14, uVar18 < uVar9) {
        uVar14 = uVar9 + uVar18 >> 1;
        puVar8 = (uint *)param_1[3][uVar14 + 2];
        if (*(ulong **)(puVar8 + 2) <= param_2) {
          if (param_2 < (ulong *)((long)*(ulong **)(puVar8 + 2) + *(long *)(puVar8 + 4))) {
            return puVar8;
          }
          uVar18 = uVar14 + 1;
          uVar14 = uVar9;
        }
      }
    }
    else {
      bVar2 = (byte)(*(ushort *)(param_1 + 4) >> 3);
      puVar20 = param_1[3];
      uVar18 = 0;
      ppuVar6 = (ulong **)FUN_001167bc(bVar2,(long)param_1);
      uVar14 = puVar20[1];
      while (uVar9 = uVar14, uVar18 < uVar9) {
        uVar14 = uVar9 + uVar18 >> 1;
        puVar8 = (uint *)puVar20[uVar14 + 2];
        ppuVar7 = FUN_0011687c(bVar2,ppuVar6,(ulong **)(puVar8 + 2),&local_18);
        FUN_0011687c(bVar2 & 0xf,(ulong **)0x0,ppuVar7,(ulong **)&local_10);
        if (local_18 <= param_2) {
          if (param_2 < (ulong *)((long)local_18 + (long)local_10)) {
            return puVar8;
          }
          uVar18 = uVar14 + 1;
          uVar14 = uVar9;
        }
      }
    }
  }
  else {
    puVar20 = param_1[3];
    uVar18 = 0;
    uVar14 = puVar20[1];
    while (uVar9 = uVar14, uVar18 < uVar9) {
      uVar14 = uVar9 + uVar18 >> 1;
      puVar8 = (uint *)puVar20[uVar14 + 2];
      bVar2 = FUN_00116c58((long)puVar8);
      ppuVar6 = (ulong **)FUN_001167bc(bVar2,(long)param_1);
      ppuVar6 = FUN_0011687c(bVar2,ppuVar6,(ulong **)(puVar8 + 2),&local_18);
      FUN_0011687c(bVar2 & 0xf,(ulong **)0x0,ppuVar6,(ulong **)&local_10);
      if (local_18 <= param_2) {
        if (param_2 < (ulong *)((long)local_18 + (long)local_10)) {
          return puVar8;
        }
        uVar18 = uVar14 + 1;
        uVar14 = uVar9;
      }
    }
  }
  return (uint *)0x0;
}



undefined8 *
__register_frame_info_bases
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  
  if ((param_1 != (undefined8 *)0x0) && (*(int *)param_1 != 0)) {
    *param_2 = 0xffffffffffffffff;
    param_2[4] = 0;
    param_2[3] = param_1;
    param_2[1] = param_3;
    param_2[2] = param_4;
    *(undefined2 *)(param_2 + 4) = 0x7f8;
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0013feb0);
    param_2[5] = DAT_0013fed8;
    DAT_0013fed8 = param_2;
    uVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013feb0);
    return (undefined8 *)(ulong)uVar1;
  }
  return param_1;
}



void __register_frame_info(undefined8 *param_1,undefined8 *param_2)

{
  __register_frame_info_bases(param_1,param_2,0,0);
  return;
}



void __register_frame(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)param_1 != 0) {
    puVar1 = (undefined8 *)malloc(0x30);
    __register_frame_info(param_1,puVar1);
    return;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00117a98)

int __register_frame_info_table_bases
              (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  param_2[4] = 0;
  param_2[3] = param_1;
  *(undefined *)(param_2 + 4) = 2;
  param_2[1] = param_3;
  *param_2 = 0xffffffffffffffff;
  param_2[2] = param_4;
  *(ushort *)(param_2 + 4) = *(ushort *)(param_2 + 4) | 0x7f8;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0013feb0);
  param_2[5] = DAT_0013fed8;
  DAT_0013fed8 = param_2;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013feb0);
  return iVar1;
}



int __register_frame_info_table(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = __register_frame_info_table_bases(param_1,param_2,0,0);
  return iVar1;
}



int __register_frame_table(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)malloc(0x30);
  iVar1 = __register_frame_info_table(param_1,puVar2);
  return iVar1;
}



long __deregister_frame_info_bases(int *param_1)

{
  long *plVar1;
  long lVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0013feb0);
  plVar1 = &DAT_0013fed8;
  for (lVar2 = DAT_0013fed8; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x28)) {
    if (*(int **)(lVar2 + 0x18) == param_1) goto LAB_00117b6c;
    plVar1 = (long *)(lVar2 + 0x28);
  }
  plVar1 = &DAT_0013fee0;
  while (lVar2 = *plVar1, lVar2 != 0) {
    if ((*(byte *)(lVar2 + 0x20) & 1) == 0) {
      if (*(int **)(lVar2 + 0x18) == param_1) goto LAB_00117b6c;
    }
    else if (**(int ***)(lVar2 + 0x18) == param_1) {
      *plVar1 = *(long *)(lVar2 + 0x28);
      free(*(void **)(lVar2 + 0x18));
      break;
    }
    plVar1 = (long *)(lVar2 + 0x28);
  }
LAB_00117bac:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013feb0);
  if (lVar2 != 0) {
    return lVar2;
  }
                    // WARNING: Subroutine does not return
  abort();
LAB_00117b6c:
  *plVar1 = *(long *)(lVar2 + 0x28);
  goto LAB_00117bac;
}



long __deregister_frame_info(int *param_1)

{
  long *plVar1;
  long lVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0013feb0);
  plVar1 = &DAT_0013fed8;
  for (lVar2 = DAT_0013fed8; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x28)) {
    if (*(int **)(lVar2 + 0x18) == param_1) goto LAB_00117b6c;
    plVar1 = (long *)(lVar2 + 0x28);
  }
  plVar1 = &DAT_0013fee0;
  while (lVar2 = *plVar1, lVar2 != 0) {
    if ((*(byte *)(lVar2 + 0x20) & 1) == 0) {
      if (*(int **)(lVar2 + 0x18) == param_1) goto LAB_00117b6c;
    }
    else if (**(int ***)(lVar2 + 0x18) == param_1) {
      *plVar1 = *(long *)(lVar2 + 0x28);
      free(*(void **)(lVar2 + 0x18));
      break;
    }
    plVar1 = (long *)(lVar2 + 0x28);
  }
LAB_00117bac:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013feb0);
  if (lVar2 != 0) {
    return lVar2;
  }
                    // WARNING: Subroutine does not return
  abort();
LAB_00117b6c:
  *plVar1 = *(long *)(lVar2 + 0x28);
  goto LAB_00117bac;
}



void __deregister_frame(int *param_1)

{
  void *__ptr;
  
  if (*param_1 != 0) {
    __ptr = (void *)__deregister_frame_info(param_1);
    free(__ptr);
    return;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00117da8)

uint * _Unwind_Find_FDE(ulong *param_1,ulong **param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ulong **ppuVar4;
  ulong **ppuVar5;
  ulong **ppuVar6;
  ulong *local_30;
  ulong *local_28;
  ulong *local_20;
  ulong *local_18;
  uint *local_10;
  undefined4 local_8;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0013feb0);
  for (ppuVar5 = DAT_0013fee0; ppuVar5 != (ulong **)0x0; ppuVar5 = (ulong **)ppuVar5[5]) {
    if (*ppuVar5 <= param_1) {
      local_10 = FUN_001173b8(ppuVar5,param_1);
      if (local_10 != (uint *)0x0) goto LAB_00117ce0;
      break;
    }
  }
  do {
    ppuVar5 = DAT_0013fed8;
    if (DAT_0013fed8 == (ulong **)0x0) {
      local_10 = (uint *)0x0;
      break;
    }
    DAT_0013fed8 = (ulong **)DAT_0013fed8[5];
    local_10 = FUN_001173b8(ppuVar5,param_1);
    ppuVar4 = (ulong **)&DAT_0013fee0;
    for (ppuVar6 = DAT_0013fee0; (ppuVar6 != (ulong **)0x0 && (*ppuVar5 <= *ppuVar6));
        ppuVar6 = (ulong **)ppuVar6[5]) {
      ppuVar4 = ppuVar6 + 5;
    }
    ppuVar5[5] = (ulong *)ppuVar6;
    *ppuVar4 = (ulong *)ppuVar5;
  } while (local_10 == (uint *)0x0);
LAB_00117ce0:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013feb0);
  if (local_10 == (uint *)0x0) {
    local_8 = 1;
    local_28 = (ulong *)0x0;
    local_20 = (ulong *)0x0;
    local_18 = (ulong *)0x0;
    local_10 = (uint *)0x0;
    local_30 = param_1;
    iVar3 = dl_iterate_phdr(FUN_00116c68,&local_30);
    if (iVar3 < 0) {
      return (uint *)0x0;
    }
    if (local_10 == (uint *)0x0) {
      return (uint *)0x0;
    }
    *param_2 = local_28;
    param_2[1] = local_20;
    local_30 = local_18;
  }
  else {
    *param_2 = ppuVar5[1];
    bVar1 = *(byte *)(ppuVar5 + 4);
    param_2[1] = ppuVar5[2];
    bVar2 = (byte)(*(ushort *)(ppuVar5 + 4) >> 3);
    if ((bVar1 >> 2 & 1) != 0) {
      bVar2 = FUN_00116c58((long)local_10);
    }
    ppuVar5 = (ulong **)FUN_001167bc(bVar2,(long)ppuVar5);
    FUN_0011687c(bVar2,ppuVar5,(ulong **)(local_10 + 2),&local_30);
  }
  param_2[2] = local_30;
  return local_10;
}


