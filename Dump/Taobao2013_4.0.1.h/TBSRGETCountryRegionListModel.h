//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSimplestRegisterModel.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface TBSRGETCountryRegionListModel : TBSimplestRegisterModel
{
    NSMutableDictionary *_countryRegionDic;
}

@property(retain, nonatomic) NSMutableDictionary *countryRegionDic; // @synthesize countryRegionDic=_countryRegionDic;
- (void).cxx_destruct;
- (void)requestDidLoadFailed:(id)arg1;
- (void)requestDidFinishLoad:(id)arg1;
- (void)requestDidCancelLoad:(id)arg1;
- (void)getCountryRegionList;

@end
