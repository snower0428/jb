//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SHKSharer.h"

#import "MFMessageComposeViewControllerDelegate.h"

@class NSString;

@interface SHKTextMessage : SHKSharer <MFMessageComposeViewControllerDelegate>
{
}

+ (BOOL)canShare;
+ (BOOL)requiresAuthentication;
+ (BOOL)shareRequiresInternetConnection;
+ (BOOL)canShareFile;
+ (BOOL)canShareImage;
+ (BOOL)canShareURL;
+ (BOOL)canShareText;
+ (id)sharerTitle;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (BOOL)sendText;
- (BOOL)send;
- (BOOL)shouldAutoShare;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

