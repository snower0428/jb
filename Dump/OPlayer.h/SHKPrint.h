//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SHKSharer.h"

@interface SHKPrint : SHKSharer
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
- (BOOL)print;
- (BOOL)send;
- (BOOL)shouldAutoShare;

@end
