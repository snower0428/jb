//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBService.h"

@class TBSRGetIfNeedSetPasswordRequestModel;

__attribute__((visibility("hidden")))
@interface TBSRGetIfNeedSetPasswordService : TBService
{
    TBSRGetIfNeedSetPasswordRequestModel *_model;
}

@property(retain, nonatomic) TBSRGetIfNeedSetPasswordRequestModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)getIfNeedSetPasswordWithServiceContext:(id)arg1;

@end
