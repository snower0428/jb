//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BaiduMobAdRichMediaObjDelegate.h"

@interface BaiduMobAdRichMediaObjManager : NSObject <BaiduMobAdRichMediaObjDelegate>
{
}

+ (id)sharedManager;
- (void)dealloc;
- (void)richMediaDownloadFailed:(id)arg1;
- (void)richMediaDownloaded:(id)arg1;
- (id)isRichMediaExistForWeb:(id)arg1;
- (id)setRichMediaForWeb:(id)arg1;
- (id)init;

@end
