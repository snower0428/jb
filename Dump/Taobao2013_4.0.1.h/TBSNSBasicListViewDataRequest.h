//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBSNSBasicServiceDelegate.h"

@class TBSNSBasicListViewDataContainer, TBSNSBasicListViewDataRequestConfigure, TBSNSBasicService;

@interface TBSNSBasicListViewDataRequest : NSObject <TBSNSBasicServiceDelegate>
{
    int currentLoadType;
    BOOL isLoading;
    id <TBSNSBasicListViewDataRequest> x_delegate;
    TBSNSBasicListViewDataContainer *dataContainer;
    TBSNSBasicService *service;
    TBSNSBasicListViewDataRequestConfigure *_serviceConfigure;
}

+ (id)dataRequest;
@property(retain, nonatomic) TBSNSBasicListViewDataRequestConfigure *serviceConfigure; // @synthesize serviceConfigure=_serviceConfigure;
@property(nonatomic) BOOL isLoading; // @synthesize isLoading;
@property(retain, nonatomic) TBSNSBasicService *service; // @synthesize service;
@property(retain, nonatomic) TBSNSBasicListViewDataContainer *dataContainer; // @synthesize dataContainer;
@property(nonatomic) id <TBSNSBasicListViewDataRequest> delegate; // @synthesize delegate=x_delegate;
- (void).cxx_destruct;
- (void)showErrorMessage:(id)arg1;
- (void)showAlert:(id)arg1;
- (void)serviceDidFinishLoad:(id)arg1;
- (void)serviceDidCancelLoad:(id)arg1;
- (void)service:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)serviceDidStartLoad:(id)arg1;
- (BOOL)isReloading;
- (BOOL)isNextPageLoading;
- (BOOL)isRefreshLoading;
- (id)getConfigure;
- (id)getDataAtIndex:(int)arg1;
- (int)getDataCount;
- (void)nextPage;
- (void)update;
- (void)reloadData;
- (void)setConfgiure:(id)arg1;
- (void)dealloc;
- (id)init;

@end

