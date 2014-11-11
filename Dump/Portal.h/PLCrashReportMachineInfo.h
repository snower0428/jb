/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class PLCrashReportProcessorInfo, NSString;

@interface PLCrashReportMachineInfo : XXUnknownSuperclass {
@private
	NSString* _modelName;
	PLCrashReportProcessorInfo* _processorInfo;
	unsigned _processorCount;
	unsigned _logicalProcessorCount;
}
@property(readonly, assign, nonatomic) unsigned logicalProcessorCount;
@property(readonly, assign, nonatomic) unsigned processorCount;
@property(readonly, assign, nonatomic) PLCrashReportProcessorInfo* processorInfo;
@property(readonly, assign, nonatomic) NSString* modelName;
-(void)dealloc;
-(id)initWithModelName:(id)modelName processorInfo:(id)info processorCount:(unsigned)count logicalProcessorCount:(unsigned)count4;
@end

