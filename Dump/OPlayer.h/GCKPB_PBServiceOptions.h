//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GCKPB_PBGeneratedMessage.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface GCKPB_PBServiceOptions : GCKPB_PBGeneratedMessage
{
}

+ (id)descriptor;
+ (id)defaultInstance;

// Remaining properties
@property(readonly, nonatomic) BOOL deprecated; // @dynamic deprecated;
@property(readonly, nonatomic) double failureDetectionDelay; // @dynamic failureDetectionDelay;
@property(readonly, nonatomic) BOOL hasDeprecated; // @dynamic hasDeprecated;
@property(readonly, nonatomic) BOOL hasFailureDetectionDelay; // @dynamic hasFailureDetectionDelay;
@property(readonly, nonatomic) BOOL hasMulticastStub; // @dynamic hasMulticastStub;
@property(readonly, nonatomic) BOOL multicastStub; // @dynamic multicastStub;
@property(readonly, nonatomic) NSArray *uninterpretedOptionList; // @dynamic uninterpretedOptionList;

@end

