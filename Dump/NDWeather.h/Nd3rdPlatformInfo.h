//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface Nd3rdPlatformInfo : NSObject
{
    int platformId;
    NSString *platformName;
    NSString *checkSum;
}

@property(retain, nonatomic) NSString *checkSum; // @synthesize checkSum;
@property(retain, nonatomic) NSString *platformName; // @synthesize platformName;
@property(nonatomic) int platformId; // @synthesize platformId;
- (id)description;
- (void)dealloc;
- (id)init;

@end

