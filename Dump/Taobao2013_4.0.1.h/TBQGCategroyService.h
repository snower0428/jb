//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBService.h"

@class TBQGCategroyRequestModel;

__attribute__((visibility("hidden")))
@interface TBQGCategroyService : TBService
{
    TBQGCategroyRequestModel *_categroyRequestModel;
}

@property(retain, nonatomic) TBQGCategroyRequestModel *categroyRequestModel; // @synthesize categroyRequestModel=_categroyRequestModel;
- (void).cxx_destruct;
- (void)loadCategroyInfoWithServiceContext:(id)arg1;
- (void)dealloc;

@end
