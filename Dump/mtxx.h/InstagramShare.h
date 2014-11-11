//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIDocumentInteractionController;

__attribute__((visibility("hidden")))
@interface InstagramShare : NSObject
{
    UIDocumentInteractionController *_interactionController;
}

+ (id)shareAppDownUrl;
+ (void)openAppDownUrl:(id)arg1;
+ (BOOL)isSupportSKStoreProductViewController;
+ (BOOL)isInstagramInstalled;
+ (id)shareInstagram;
@property(retain, nonatomic) UIDocumentInteractionController *interactionController; // @synthesize interactionController=_interactionController;
- (void).cxx_destruct;
- (void)shareImageAgain:(id)arg1 showInView:(id)arg2 delegate:(id)arg3;
- (void)shareImage:(id)arg1 showInView:(id)arg2 delegate:(id)arg3 errorActionBlock:(CDUnknownBlockType)arg4;

@end

