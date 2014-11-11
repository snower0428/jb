//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    float x;
    float y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    float width;
    float height;
};

struct GAIReachabilityApi {
    CDUnknownFunctionPointerType _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
};

struct JKConstBuffer {
    struct JKConstPtrRange _field1;
};

struct JKConstPtrRange {
    char *_field1;
    unsigned int _field2;
};

struct JKEncodeCache {
    id _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct JKEncodeState {
    struct JKManagedBuffer _field1;
    struct JKManagedBuffer _field2;
    unsigned int _field3;
    struct JKFastClassLookup _field4;
    struct JKEncodeCache _field5[1024];
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    id _field9;
    id _field10;
    SEL _field11;
    CDUnknownFunctionPointerType _field12;
    CDUnknownBlockType _field13;
};

struct JKFastClassLookup {
    void *_field1;
    void *_field2;
    void *_field3;
    void *_field4;
    void *_field5;
};

struct JKHashTableEntry {
    unsigned int _field1;
    id _field2;
    id _field3;
};

struct JKManagedBuffer {
    struct JKPtrRange _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct JKObjCImpCache {
    Class _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
};

struct JKObjectStack {
    void **_field1;
    void **_field2;
    unsigned int *_field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
};

struct JKParseState {
    unsigned int _field1;
    struct JKConstBuffer _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    struct JKParseToken _field9;
    struct JKObjectStack _field10;
    struct JKTokenCache _field11;
    struct JKObjCImpCache _field12;
    id _field13;
    int _field14;
    char _field15;
};

struct JKParseToken {
    struct JKConstPtrRange _field1;
    unsigned int _field2;
    struct JKTokenValue _field3;
    struct JKManagedBuffer _field4;
};

struct JKPtrRange {
    char *_field1;
    unsigned int _field2;
};

struct JKTokenCache {
    struct JKTokenCacheItem *_field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned char _field4[1024];
};

struct JKTokenCacheItem;

struct JKTokenValue {
    struct JKConstPtrRange _field1;
    unsigned int _field2;
    unsigned int _field3;
    union {
        long long _field1;
        unsigned long long _field2;
        double _field3;
    } _field4;
    struct JKTokenCacheItem *_field5;
};

struct PLCrashReporterCallbacks {
    unsigned short _field1;
    void *_field2;
    CDUnknownFunctionPointerType _field3;
};

struct UIEdgeInsets {
    float top;
    float left;
    float bottom;
    float right;
};

struct UPPasswordTool {
    struct UPXCryptUtil *_field1;
};

struct UPXCryptUtil;

struct _NSRange {
    unsigned int location;
    unsigned int length;
};

struct _PLCrashReportDecoder {
    struct _Plcrash__CrashReport *_field1;
};

struct _Plcrash__CrashReport {
    struct _ProtobufCMessage _field1;
    struct _Plcrash__CrashReport__SystemInfo *_field2;
    struct _Plcrash__CrashReport__ApplicationInfo *_field3;
    unsigned int _field4;
    struct _Plcrash__CrashReport__Thread **_field5;
    unsigned int _field6;
    struct _Plcrash__CrashReport__BinaryImage **_field7;
    struct _Plcrash__CrashReport__Exception *_field8;
    struct _Plcrash__CrashReport__Signal *_field9;
    struct _Plcrash__CrashReport__ProcessInfo *_field10;
    struct _Plcrash__CrashReport__MachineInfo *_field11;
    struct _Plcrash__CrashReport__ReportInfo *_field12;
};

struct _Plcrash__CrashReport__BinaryImage;

struct _Plcrash__CrashReport__Exception {
    struct _ProtobufCMessage _field1;
    char *_field2;
    char *_field3;
    unsigned int _field4;
    struct _Plcrash__CrashReport__Thread__StackFrame **_field5;
};

struct _Plcrash__CrashReport__MachineInfo {
    struct _ProtobufCMessage _field1;
    char *_field2;
    struct _Plcrash__CrashReport__Processor *_field3;
    unsigned int _field4;
    unsigned int _field5;
};

struct _Plcrash__CrashReport__ProcessInfo {
    struct _ProtobufCMessage _field1;
    char *_field2;
    unsigned int _field3;
    char *_field4;
    char *_field5;
    unsigned int _field6;
    int _field7;
};

struct _Plcrash__CrashReport__Processor {
    struct _ProtobufCMessage _field1;
    int _field2;
    int _field3;
    unsigned long long _field4;
    unsigned long long _field5;
};

struct _Plcrash__CrashReport__ReportInfo;

struct _Plcrash__CrashReport__Signal {
    struct _ProtobufCMessage _field1;
    char *_field2;
    char *_field3;
    unsigned long long _field4;
};

struct _Plcrash__CrashReport__Symbol {
    struct _ProtobufCMessage _field1;
    char *_field2;
    unsigned long long _field3;
    int _field4;
    unsigned long long _field5;
};

struct _Plcrash__CrashReport__SystemInfo {
    struct _ProtobufCMessage _field1;
    int _field2;
    int _field3;
    char *_field4;
    int _field5;
    long long _field6;
    char *_field7;
};

struct _Plcrash__CrashReport__Thread;

struct _ProtobufCMessage {
    struct _ProtobufCMessageDescriptor *_field1;
    unsigned int _field2;
    struct _ProtobufCMessageUnknownField *_field3;
};

struct _ProtobufCMessageDescriptor;

struct _ProtobufCMessageUnknownField;

struct __darwin_sigaltstack {
    void *ss_sp;
    unsigned int ss_size;
    int ss_flags;
};

struct _opaque_pthread_mutex_t {
    long __sig;
    char __opaque[40];
};

struct in_addr {
    unsigned int _field1;
};

struct plcrash_exception_handler_state {
    unsigned int _field1;
    unsigned int _field2[13];
    unsigned int _field3[13];
    int _field4[13];
    int _field5[13];
};

struct plcrash_exception_server_context {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    CDUnknownFunctionPointerType _field5;
    void *_field6;
    struct _opaque_pthread_mutex_t _field7;
    struct _opaque_pthread_cond_t {
        long _field1;
        char _field2[24];
    } _field8;
    _Bool _field9;
    int _field10;
    unsigned int _field11;
    _Bool _field12;
    int _field13;
    struct plcrash_exception_handler_state _field14;
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long _field1;
    id *_field2;
    unsigned long *_field3;
    unsigned long _field4[5];
} CDStruct_11f37819;

typedef struct {
    int lastContentOffsetX;
    int scrollDirection;
} CDStruct_3b4d9876;

typedef struct {
    CDStruct_2c43369c center;
    CDStruct_951efa70 span;
} CDStruct_feeb6407;

// Ambiguous groups
typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    double latitude;
    double longitude;
} CDStruct_2c43369c;

typedef struct {
    double latitudeDelta;
    double longitudeDelta;
} CDStruct_951efa70;
