//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NdCPServerOperation.h"

@class NSString, NdBasePageList, NdPagination;

@interface NdCPServerOperationVGGetCommodity : NdCPServerOperation
{
    int nAppId;
    int vgFeeType;
    NSString *strCateId;
    NSString *strPackageId;
    NdPagination *pagination;
    NdBasePageList *pageList;
}

+ (id)feeInfoWithFeeType:(int)arg1 dicFeeInfo:(id)arg2;
@property(retain, nonatomic) NdBasePageList *pageList; // @synthesize pageList;
@property(retain, nonatomic) NdPagination *pagination; // @synthesize pagination;
@property(retain, nonatomic) NSString *strPackageId; // @synthesize strPackageId;
@property(retain, nonatomic) NSString *strCateId; // @synthesize strCateId;
@property(nonatomic) int vgFeeType; // @synthesize vgFeeType;
@property(nonatomic) int nAppId; // @synthesize nAppId;
- (void)generateResponse:(id)arg1;
- (int)operation;
- (void)dealloc;
- (id)init;

@end

