//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBService.h"

@class MtopShopGetShopAndSellerIdResponseData, TBServiceRequestModel;

__attribute__((visibility("hidden")))
@interface TmallDomainCheckService : TBService
{
    TBServiceRequestModel *_tmallDomainCheckModel;
}

@property(retain, nonatomic) TBServiceRequestModel *tmallDomainCheckModel; // @synthesize tmallDomainCheckModel=_tmallDomainCheckModel;
- (void).cxx_destruct;
- (void)checkTmallDomain:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) MtopShopGetShopAndSellerIdResponseData *getShopAndSellerIdResponseData;

@end

