//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NdGameCenterOperation.h"

@class NSString, NdAppDetailInfo;

@interface NdGetSoftDetailOperation : NdGameCenterOperation
{
    int appId;
    NSString *lastModified;
    NdAppDetailInfo *detail;
}

- (id)init;
- (int)operation;
- (id)callbackInvocationOnObject:(id)arg1;
- (void)generateResponse:(id)arg1;
@property(retain, nonatomic) NdAppDetailInfo *detail; // @synthesize detail;
@property(retain, nonatomic) NSString *lastModified; // @synthesize lastModified;
@property(nonatomic) int appId; // @synthesize appId;

@end

