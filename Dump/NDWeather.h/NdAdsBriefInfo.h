//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NdAdsBriefInfo : NSObject
{
    NSString *imageUrl;
    int actionType;
    NSString *actionParam;
    struct CGSize areaSize;
    int areaGroup;
}

+ (id)objectFromDictionary:(id)arg1;
- (id)init;
- (void)dealloc;
@property(nonatomic) int areaGroup; // @synthesize areaGroup;
@property(nonatomic) struct CGSize areaSize; // @synthesize areaSize;
@property(retain, nonatomic) NSString *actionParam; // @synthesize actionParam;
@property(nonatomic) int actionType; // @synthesize actionType;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl;

@end
