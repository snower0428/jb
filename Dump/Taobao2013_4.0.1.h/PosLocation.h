//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PosLocation : NSObject
{
    NSString *name;
    double latitude;
    double longitude;
}

@property(copy, nonatomic) NSString *name; // @synthesize name;
@property(nonatomic) double longitude; // @synthesize longitude;
@property(nonatomic) double latitude; // @synthesize latitude;
- (void)dealloc;

@end
