//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCityService.h"

@class TBCityLLMyModel, TBCityUserInfoItem;

@interface TBCityMyService : TBCityService
{
    TBCityLLMyModel *_llmyModel;
}

@property(retain, nonatomic) TBCityLLMyModel *llmyModel; // @synthesize llmyModel=_llmyModel;
- (void).cxx_destruct;
@property(readonly, nonatomic) TBCityUserInfoItem *llMyItem;
- (void)getLLUserInfoWithContext:(id)arg1 isFromIndex:(BOOL)arg2;
- (void)getLLUserInfoWithContext:(id)arg1;
- (void)dealloc;

@end

