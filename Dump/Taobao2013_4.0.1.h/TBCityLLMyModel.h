//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCitySDKRequestModel.h"

@class TBCityUserInfoItem;

@interface TBCityLLMyModel : TBCitySDKRequestModel
{
    TBCityUserInfoItem *_userInfoItem;
}

@property(readonly, nonatomic) TBCityUserInfoItem *userInfoItem; // @synthesize userInfoItem=_userInfoItem;
- (void).cxx_destruct;
- (void)requestDidLoadFailed:(id)arg1;
- (void)requestDidFinishLoad:(id)arg1;
- (void)getUserInfoItem;

@end
