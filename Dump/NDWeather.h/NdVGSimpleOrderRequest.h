//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NdVGSimpleOrderRequest : NSObject
{
    NSString *strProductId;
    int productCount;
    NSString *strPayDescription;
    NSString *strExtParam;
}

@property(retain, nonatomic) NSString *strExtParam; // @synthesize strExtParam;
@property(retain, nonatomic) NSString *strPayDescription; // @synthesize strPayDescription;
@property(nonatomic) int productCount; // @synthesize productCount;
@property(retain, nonatomic) NSString *strProductId; // @synthesize strProductId;
- (void)dealloc;

@end

