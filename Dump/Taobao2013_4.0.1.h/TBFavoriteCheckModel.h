//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSDKRequestModel.h"

__attribute__((visibility("hidden")))
@interface TBFavoriteCheckModel : TBSDKRequestModel
{
    BOOL _isCollected;
}

@property(readonly, nonatomic) BOOL isCollected; // @synthesize isCollected=_isCollected;
- (void)requestDidLoadFailed:(id)arg1;
- (void)requestDidFinishLoad:(id)arg1;
- (void)checkoutItemOrShopIsCollectedWithTargetId:(id)arg1 type:(id)arg2;
- (void)checkoutShopIsCollected:(id)arg1;
- (void)checkoutItemIsCollected:(id)arg1;

@end

