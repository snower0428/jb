//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ApplicationLifeCycle.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface AWSystemUpdateOperation : NSObject <ApplicationLifeCycle>
{
    NSString *newVersionDownloadURL;
}

+ (id)sharedInstance;
- (void)dealloc;
- (id)init;
- (void)showSystemNewVersionActionMethod:(id)arg1;
- (void)receiveApplicationEnterForeground:(id)arg1;
- (void)checkUserAdviceNewFeedBack;
- (void)checkNewSystemVerion;

@end
