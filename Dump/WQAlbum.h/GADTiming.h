//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface GADTiming : NSObject <NSCopying>
{
    NSMutableDictionary *userData_;
    NSString *category_;
    double startSeconds_;
    double endSeconds_;
    BOOL explicitEnd_;
}

+ (double)counter;
@property(nonatomic) BOOL explicitEnd; // @synthesize explicitEnd=explicitEnd_;
@property(readonly, nonatomic) double endSeconds; // @synthesize endSeconds=endSeconds_;
@property(readonly, nonatomic) double startSeconds; // @synthesize startSeconds=startSeconds_;
@property(readonly, nonatomic) NSString *category; // @synthesize category=category_;
- (void)removeValueForKey:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)reset;
- (void)end;
- (void)start;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithCategory:(id)arg1;
@property(readonly, nonatomic) BOOL isActive;
@property(readonly, nonatomic) NSDictionary *keysAndValues;
@property(readonly, nonatomic) NSString *elapsedMillisecondsString;
@property(readonly, nonatomic) unsigned int elapsedMilliseconds;
- (void)setEndSeconds:(double)arg1;

@end
