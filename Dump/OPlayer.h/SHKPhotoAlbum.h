//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SHKSharer.h"

@interface SHKPhotoAlbum : SHKSharer
{
}

+ (BOOL)requiresAuthentication;
+ (BOOL)shareRequiresInternetConnection;
+ (BOOL)canShareImage;
+ (id)sharerTitle;
- (void)writeImageToAlbum;
- (BOOL)send;
- (BOOL)shouldAutoShare;

@end

