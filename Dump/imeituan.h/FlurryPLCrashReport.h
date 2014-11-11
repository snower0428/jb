//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FlurryPLCrashReportApplicationInfo, FlurryPLCrashReportExceptionInfo, FlurryPLCrashReportMachineInfo, FlurryPLCrashReportProcessInfo, FlurryPLCrashReportSignalInfo, FlurryPLCrashReportSystemInfo, NSArray;

@interface FlurryPLCrashReport : NSObject
{
    struct _PLCrashReportDecoder *_decoder;
    FlurryPLCrashReportSystemInfo *_systemInfo;
    FlurryPLCrashReportMachineInfo *_machineInfo;
    FlurryPLCrashReportApplicationInfo *_applicationInfo;
    FlurryPLCrashReportProcessInfo *_processInfo;
    FlurryPLCrashReportSignalInfo *_signalInfo;
    NSArray *_threads;
    NSArray *_images;
    FlurryPLCrashReportExceptionInfo *_exceptionInfo;
}

@property(readonly, nonatomic) FlurryPLCrashReportExceptionInfo *exceptionInfo; // @synthesize exceptionInfo=_exceptionInfo;
@property(readonly, nonatomic) NSArray *images; // @synthesize images=_images;
@property(readonly, nonatomic) NSArray *threads; // @synthesize threads=_threads;
@property(readonly, nonatomic) FlurryPLCrashReportSignalInfo *signalInfo; // @synthesize signalInfo=_signalInfo;
@property(readonly, nonatomic) FlurryPLCrashReportProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
@property(readonly, nonatomic) FlurryPLCrashReportApplicationInfo *applicationInfo; // @synthesize applicationInfo=_applicationInfo;
@property(readonly, nonatomic) FlurryPLCrashReportMachineInfo *machineInfo; // @synthesize machineInfo=_machineInfo;
@property(readonly, nonatomic) FlurryPLCrashReportSystemInfo *systemInfo; // @synthesize systemInfo=_systemInfo;
@property(readonly, nonatomic) BOOL hasExceptionInfo;
@property(readonly, nonatomic) BOOL hasProcessInfo;
@property(readonly, nonatomic) BOOL hasMachineInfo;
- (id)imageForAddress:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)extractSignalInfo:(struct _Plcrash__CrashReport__Signal *)arg1 error:(id *)arg2;
- (id)extractExceptionInfo:(struct _Plcrash__CrashReport__Exception *)arg1 error:(id *)arg2;
- (id)extractImageInfo:(struct _Plcrash__CrashReport *)arg1 error:(id *)arg2;
- (id)extractThreadInfo:(struct _Plcrash__CrashReport *)arg1 error:(id *)arg2;
- (id)extractStackFrameInfo:(struct _Plcrash__CrashReport__Thread__StackFrame *)arg1 error:(id *)arg2;
- (id)extractSymbolInfo:(struct _Plcrash__CrashReport__Symbol *)arg1 error:(id *)arg2;
- (id)extractProcessInfo:(struct _Plcrash__CrashReport__ProcessInfo *)arg1 error:(id *)arg2;
- (id)extractApplicationInfo:(struct _Plcrash__CrashReport__ApplicationInfo *)arg1 error:(id *)arg2;
- (id)extractMachineInfo:(struct _Plcrash__CrashReport__MachineInfo *)arg1 error:(id *)arg2;
- (id)extractProcessorInfo:(struct _Plcrash__CrashReport__Processor *)arg1 error:(id *)arg2;
- (id)extractSystemInfo:(struct _Plcrash__CrashReport__SystemInfo *)arg1 error:(id *)arg2;
- (struct _Plcrash__CrashReport *)decodeCrashData:(id)arg1 error:(id *)arg2;

@end

