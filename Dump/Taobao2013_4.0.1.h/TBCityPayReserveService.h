//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCityService.h"

@class TBCityPayReserveModel;

@interface TBCityPayReserveService : TBCityService
{
    TBCityPayReserveModel *_storeListModel;
}

@property(retain, nonatomic) TBCityPayReserveModel *storeListModel; // @synthesize storeListModel=_storeListModel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)requestOrder:(id)arg1 loadType:(int)arg2 context:(id)arg3;

@end

