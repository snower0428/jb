//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCityService.h"

@class TBCityMyTakeoutOrderListModel;

@interface TBCityTakeoutOrderService : TBCityService
{
    TBCityMyTakeoutOrderListModel *_takeoutOrderListModel;
}

@property(retain, nonatomic) TBCityMyTakeoutOrderListModel *takeoutOrderListModel; // @synthesize takeoutOrderListModel=_takeoutOrderListModel;
- (void).cxx_destruct;
- (void)getTakeoutOrderListWithContext:(int)arg1 context:(id)arg2;
- (void)dealloc;

@end
