//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBService.h"

@class TBSRAliAccountActivateRequestModel;

__attribute__((visibility("hidden")))
@interface TBSRAliAccountActivateService : TBService
{
    TBSRAliAccountActivateRequestModel *_model;
}

@property(retain, nonatomic) TBSRAliAccountActivateRequestModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)activateAliAccount:(id)arg1 withNick:(id)arg2 activateToken:(id)arg3 serviceContext:(id)arg4;

@end
