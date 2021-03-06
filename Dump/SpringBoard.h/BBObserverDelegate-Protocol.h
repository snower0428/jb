//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BBBulletin, BBObserver, BBSectionInfo, BBThumbnailSizeConstraints, NSArray, NSData, NSDictionary, NSString, UIImage;

@protocol BBObserverDelegate <NSObject>

@optional
- (struct CGSize)observer:(BBObserver *)arg1 composedAttachmentSizeForType:(int)arg2 thumbnailWidth:(float)arg3 height:(float)arg4 key:(NSString *)arg5;
- (UIImage *)observer:(BBObserver *)arg1 composedAttachmentImageForType:(int)arg2 thumbnailData:(NSData *)arg3 key:(NSString *)arg4;
- (NSDictionary *)observer:(BBObserver *)arg1 multipleThumbnailSizeConstraintsForAttachmentType:(int)arg2;
- (BBThumbnailSizeConstraints *)observer:(BBObserver *)arg1 thumbnailSizeConstraintsForAttachmentType:(int)arg2;
- (BOOL)observerShouldFetchAttachmentSizeBeforeBulletinDelivery:(BBObserver *)arg1;
- (BOOL)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(BBObserver *)arg1;
- (void)observer:(BBObserver *)arg1 noteAlertBehaviorOverridesChanged:(unsigned int)arg2;
- (void)observer:(BBObserver *)arg1 purgeReferencesToBulletinID:(NSString *)arg2;
- (void)observer:(BBObserver *)arg1 noteSectionParametersChanged:(NSString *)arg2;
- (void)observer:(BBObserver *)arg1 updateSectionInfo:(BBSectionInfo *)arg2;
- (void)observer:(BBObserver *)arg1 updateSectionOrder:(NSArray *)arg2;
- (void)observer:(BBObserver *)arg1 updateSectionOrderRule:(unsigned int)arg2;
- (void)observer:(BBObserver *)arg1 removeBulletin:(BBBulletin *)arg2;
- (void)observer:(BBObserver *)arg1 modifyBulletin:(BBBulletin *)arg2;
- (void)observer:(BBObserver *)arg1 addBulletin:(BBBulletin *)arg2 forFeed:(unsigned int)arg3;
@end

