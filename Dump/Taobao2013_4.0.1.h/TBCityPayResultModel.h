//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCitySDKRequestModel.h"

@class TBCityScanResultItem;

@interface TBCityPayResultModel : TBCitySDKRequestModel
{
    TBCityScanResultItem *_scanResultItem;
}

@property(retain, nonatomic) TBCityScanResultItem *scanResultItem; // @synthesize scanResultItem=_scanResultItem;
- (void).cxx_destruct;
- (void)requestDidLoadFailed:(id)arg1;
- (void)requestDidFinishLoad:(id)arg1;
- (void)getScanResult:(id)arg1;

@end

