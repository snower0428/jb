//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBIViewController.h"

@class MTOPGetItemDetailDynamicResult, MTOPGetItemDetailOtherResult, MTOPGetItemDetailStaticResult, MTOPItemDescxModel, TBSkuView;

@interface TBSKUPOPViewController : TBIViewController
{
    MTOPGetItemDetailStaticResult *_staticResult;
    MTOPGetItemDetailDynamicResult *_dynamicResult;
    MTOPGetItemDetailOtherResult *_otherResult;
    MTOPItemDescxModel *_itemDescxResult;
    TBSkuView *_skuview;
}

@property(retain, nonatomic) TBSkuView *skuview; // @synthesize skuview=_skuview;
@property(retain, nonatomic) MTOPItemDescxModel *itemDescxResult; // @synthesize itemDescxResult=_itemDescxResult;
@property(retain, nonatomic) MTOPGetItemDetailOtherResult *otherResult; // @synthesize otherResult=_otherResult;
@property(retain, nonatomic) MTOPGetItemDetailDynamicResult *dynamicResult; // @synthesize dynamicResult=_dynamicResult;
@property(retain, nonatomic) MTOPGetItemDetailStaticResult *staticResult; // @synthesize staticResult=_staticResult;
- (void).cxx_destruct;
- (void)dismissSemiModalViewWithCompletion:(CDUnknownBlockType)arg1;

@end

