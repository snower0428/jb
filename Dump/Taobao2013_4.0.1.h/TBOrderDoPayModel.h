//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSDKRequestModel.h"

@class TBOrderDoPayItem;

@interface TBOrderDoPayModel : TBSDKRequestModel
{
    TBOrderDoPayItem *_orderDoPayItem;
}

@property(readonly, nonatomic) TBOrderDoPayItem *orderDoPayItem; // @synthesize orderDoPayItem=_orderDoPayItem;
- (void).cxx_destruct;
- (void)requestDidLoadFailed:(id)arg1;
- (void)requestDidFinishLoad:(id)arg1;
- (void)doPayWithOrderId:(id)arg1 type:(int)arg2;
- (void)helpPayWithOrderId:(id)arg1;
- (void)confirmGoodWithOrderId:(id)arg1;
- (void)payWithOrderId:(id)arg1;

@end

