//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSDKRequestModel.h"

@class TBALLHomePageContentItem;

__attribute__((visibility("hidden")))
@interface TBHomePageContentModel : TBSDKRequestModel
{
    TBALLHomePageContentItem *_allHomePageContentItem;
}

@property(retain, nonatomic) TBALLHomePageContentItem *allHomePageContentItem; // @synthesize allHomePageContentItem=_allHomePageContentItem;
- (void).cxx_destruct;
- (void)requestDidLoadFailed:(id)arg1;
- (void)requestDidFinishLoad:(id)arg1;
- (void)loadHomePageContentWithIsFirstUse:(BOOL)arg1 nick:(id)arg2 longitude:(id)arg3 latitude:(id)arg4 ua:(id)arg5 ttid:(id)arg6 actionType:(int)arg7 serviceId:(id)arg8;
- (void)loadHomePageContentWithIsFirstUse:(BOOL)arg1 nick:(id)arg2 longitude:(id)arg3 latitude:(id)arg4 ua:(id)arg5 ttid:(id)arg6;

@end

