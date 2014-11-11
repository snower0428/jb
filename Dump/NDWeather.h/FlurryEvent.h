//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDate, NSDictionary, NSNumber, NSString;

@interface FlurryEvent : NSObject <NSCoding>
{
    NSString *_name;
    NSDate *_started;
    NSDate *_ended;
    BOOL _timed;
    BOOL _automaticallyEnded;
    NSDictionary *_parameters;
    NSNumber *_eventLogId;
}

@property(retain, nonatomic) NSNumber *eventLogId; // @synthesize eventLogId=_eventLogId;
@property(nonatomic) BOOL automaticallyEnded; // @synthesize automaticallyEnded=_automaticallyEnded;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(nonatomic) BOOL timed; // @synthesize timed=_timed;
@property(retain, nonatomic) NSDate *ended; // @synthesize ended=_ended;
@property(retain, nonatomic) NSDate *started; // @synthesize started=_started;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dealloc;
- (id)dataRelativeToSessionStart:(id)arg1;
- (long)duration;
- (long)startOffsetFromSessionStart:(id)arg1;
- (BOOL)isUnterminated;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 timed:(BOOL)arg2 parameters:(id)arg3;
- (id)initWithName:(id)arg1 timed:(BOOL)arg2;
- (id)initWithName:(id)arg1;

@end

