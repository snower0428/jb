//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCitySDKRequestModel.h"

@class NSDictionary;

@interface TBCityDDOrderDeleteModel : TBCitySDKRequestModel
{
    NSDictionary *_deleteResult;
}

@property(retain, nonatomic) NSDictionary *deleteResult; // @synthesize deleteResult=_deleteResult;
- (void).cxx_destruct;
- (void)requestDidLoadFailed:(id)arg1;
- (void)requestDidFinishLoad:(id)arg1;
- (void)deleteOrder:(id)arg1;

@end

