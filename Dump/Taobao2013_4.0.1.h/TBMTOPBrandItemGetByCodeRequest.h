//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBMTOPRequest.h"

@class NSString, TBMTOPBrandGetResultDataModel;

@interface TBMTOPBrandItemGetByCodeRequest : TBMTOPRequest
{
    NSString *_brandCode;
    int _page;
    int _n;
    TBMTOPBrandGetResultDataModel *_brand;
}

@property(retain, nonatomic) TBMTOPBrandGetResultDataModel *brand; // @synthesize brand=_brand;
@property int n; // @synthesize n=_n;
@property int page; // @synthesize page=_page;
@property(retain, nonatomic) NSString *brandCode; // @synthesize brandCode=_brandCode;
- (void).cxx_destruct;
- (id)getItems;
- (id)mappingResponseJson:(id)arg1;
- (void)sendRequest;
- (id)init;
- (void)dealloc;

@end
