//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTDomainObject.h"

#import "MTLotteryOrder.h"

@class NSDate, NSString;

@interface MTLotteryOrder : MTDomainObject <MTLotteryOrder>
{
    NSDate *_creationTime;
    NSString *_imageURLString;
    int _lotteryCode;
    int _lotteryID;
    NSString *_operationName;
    NSString *_operationURLString;
    NSString *_source;
    NSString *_title;
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *operationURLString; // @synthesize operationURLString=_operationURLString;
@property(retain, nonatomic) NSString *operationName; // @synthesize operationName=_operationName;
@property(nonatomic) int lotteryID; // @synthesize lotteryID=_lotteryID;
@property(nonatomic) int lotteryCode; // @synthesize lotteryCode=_lotteryCode;
@property(retain, nonatomic) NSString *imageURLString; // @synthesize imageURLString=_imageURLString;
@property(retain, nonatomic) NSDate *creationTime; // @synthesize creationTime=_creationTime;
- (void).cxx_destruct;
- (void)setWithPersistentObject:(id)arg1;
- (void)setWithDictionary:(id)arg1;

@end

