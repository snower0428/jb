/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString;

@interface PLCrashReportExceptionInfo : XXUnknownSuperclass {
@private
	NSString* _name;
	NSString* _reason;
	NSArray* _stackFrames;
}
@property(readonly, assign, nonatomic) NSArray* stackFrames;
@property(readonly, assign, nonatomic) NSString* exceptionReason;
@property(readonly, assign, nonatomic) NSString* exceptionName;
-(void)dealloc;
-(id)initWithExceptionName:(id)exceptionName reason:(id)reason stackFrames:(id)frames;
-(id)initWithExceptionName:(id)exceptionName reason:(id)reason;
@end
