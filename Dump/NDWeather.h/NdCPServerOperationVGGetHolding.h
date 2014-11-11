//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NdCPServerOperation.h"

@class NdBasePageList, NdPagination;

@interface NdCPServerOperationVGGetHolding : NdCPServerOperation
{
    int nAppId;
    NdPagination *pagination;
    NdBasePageList *pageList;
}

+ (id)authInfoWithFeeType:(int)arg1 dicAuthInfo:(id)arg2;
@property(retain, nonatomic) NdBasePageList *pageList; // @synthesize pageList;
@property(retain, nonatomic) NdPagination *pagination; // @synthesize pagination;
@property(nonatomic) int nAppId; // @synthesize nAppId;
- (void)generateResponse:(id)arg1;
- (id)authInfoWithFeeType:(int)arg1 dicAuthInfo:(id)arg2;
- (int)operation;
- (id)stringFromInt:(int)arg1;
- (void)dealloc;
- (id)init;

@end

