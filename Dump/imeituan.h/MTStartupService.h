//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseService.h"

@class MTStartupModel, NSMutableDictionary, SDWebImageManager;

@interface MTStartupService : MTBaseService
{
    MTStartupModel *_model;
    NSMutableDictionary *_startupImageInfoDictionary;
    SDWebImageManager *_webImageManager;
}

- (void).cxx_destruct;
- (void)updateAllImages:(id)arg1;
- (void)updateStartupImagesByCityID:(int)arg1;
- (id)loadStartupImageByCityID:(int)arg1;
- (id)init;

@end

